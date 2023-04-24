#include "deck.h"
#include <stdlib.h>
#include <string.h>

static int card_compare(const void *a, const void *b)
{
    const card_t *ca = (*(const deck_node_t **)a)->card;
    const card_t *cb = (*(const deck_node_t **)b)->card;
    int cmp;

    cmp = strcmp(ca->value, cb->value);
    if (cmp != 0)
        return cmp;

    return ca->kind - cb->kind;
}

void sort_deck(deck_node_t **deck)
{
    size_t i, n = 0;
    deck_node_t *node;
    deck_node_t **nodes;

    /* Count the number of nodes in the list */
    for (node = *deck; node; node = node->next)
        n++;

    /* Allocate an array of pointers to nodes */
    nodes = malloc(n * sizeof(*nodes));
    if (!nodes)
        return;

    /* Fill the array with pointers to the nodes */
    i = 0;
    for (node = *deck; node; node = node->next)
        nodes[i++] = node;

    /* Sort the array using the card_compare function */
    qsort(nodes, n, sizeof(*nodes), card_compare);

    /* Relink the nodes according to the sorted array */
    for (i = 0; i < n - 1; i++) {
        nodes[i]->next = nodes[i + 1];
        nodes[i + 1]->prev = nodes[i];
    }
    nodes[0]->prev = NULL;
    nodes[n - 1]->next = NULL;

    /* Update the deck pointer to point to the new head of the list */
    *deck = nodes[0];

    /* Free the array of pointers to nodes */
    free(nodes);
}

