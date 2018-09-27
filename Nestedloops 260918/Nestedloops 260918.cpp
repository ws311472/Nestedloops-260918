#include "pch.h"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	// 2D Array for players and their scores
	int scores[3][9];

	// Read input for all 3 players (i)
	for (int i = 0; i < 3; ++i) {
		std::cout << "Input scores for Player " << i + 1 << ":" << std::endl;

		// Three scores each (j)
		for (int j = 0; j < 9; ++j) {

			// Get the score
			std::cout << "Score " << j + 1 << ": ";
			std::cin >> scores[i][j];
		}
	}

	// For each player (i)
	for (int i = 0; i < 3; i++) {

		// Calcaulate total for player
		int total = 0;

		// For each score (j)
		for (int j = 0; j < 9; ++j) {

			// Add up total
			total += scores[i][j];
		}

		// Display total
		std::cout << "Total for Player " << i + 1 << ": " << total << std::endl;
	}
}
