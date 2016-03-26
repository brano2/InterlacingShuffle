# InterlacingShuffle
Simple program for representing the interlacing shuffle on a deck of `2n` cards as a permutation in the [disjoint cycle notation](https://en.wikipedia.org/wiki/Permutation#Cycle_notation).

## Example

For a deck of 10 cards, the initial order is 1,2,3,4,5,6,7,8,9,10. After one shuffle the order becomes 1,6,2,7,3,8,4,9,5,10. In the disjoint cycle notation, the corresponding permutation is `(1)(2 6 8 9 5 3)(4 7)(10)`. This shows that the cards return to the original order after 6 shuffles.

## Installation

1. Compile and run `Source.cpp`
2. Enter the number of cards in the deck (positive **even** integer).
