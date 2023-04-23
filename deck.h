#ifndef DECK_H
#define DECK_H

#include <stlib.h>

/**
 * enum kind_e - Enumerates of card suits.
 * @SPADE: Spade suits.
 * @HEART: Heart suits
 * @CLUB: Club suits.
 * @DIAMOND: Diamond suits.
 */
typedef enum kind_e
{
        SPADE = 0,
        HEART,
        CLUB,
        DIAMOND
} kind_t;

/**
 * struct card_s - Playing cards.
 *
 * @value: Card values.
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
        const char *value;
        const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of the card.
 *
 * @card: pointer that points to the card of the node.
 * @prev: Pointer that points to the previous node of the list.
 * @next: Pointer that points to the next node of the list.
 */
typedef struct deck_node_s
{
        const card_t *card;
        struct deck_node_s *prev;
        struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
