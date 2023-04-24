#include "deck.h"
#include <stdlib.h>
#include <string.h>

/**
 * cmp_card - compares two cards
 * @p1: first card
 * @p2: second card
 *
 * Return: negative if p1 is less than p2, positive if p1 is greater than p2,
 *         zero if p1 and p2 are equal.
 */
int cmp_card(const void *p1, const void *p2)
{
    const card_t *card1 = ((const deck_node_t *)p1)->card;
    const card_t *card2 = ((const deck_node_t *)p2)->card;
    int cmp_value, cmp_kind;

    cmp_value = strcmp(card1->value, card2->value);
    cmp_kind = card1->kind - card2->kind;

    return cmp_kind ? cmp_kind : cmp_value;
}

/**
 * sort_deck - sorts a deck of cards
 * @deck: deck of cards
 */
void sort_deck(deck_node_t **deck)
{
    size_t i, n = 0;
    deck_node_t *node;

    if (!deck || !*deck || !(*deck)->next)
        return;

    for (node = *deck; node; node = node->next)
        n++;

    qsort(*deck, n, sizeof(*node), cmp_card);

    (*deck)->prev = NULL;
    for (node = *deck, i = 0; i < n - 1; node = node->next, i++)
    {
        node->next->prev = node;
        node->prev = node->next;
    }
    node->next = NULL;
}

