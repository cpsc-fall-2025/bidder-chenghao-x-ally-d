#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// ============================================================================
// INSTRUCTIONS
// ============================================================================
// 1. Implement the three functions below.
// 2. You may use the main() function at the bottom to test your code locally.
// 3. Do not change the function signatures.
// ============================================================================

// TODO: Implement this function to return a vector of strings
// containing the names of everyone on your team.
std::vector<std::string> GetTeamMembers() {
  std::string members[] = {"Ally Dahlke", "Chenghao Xue"};
  return {};
}

std::string GetStrategy() {
  std::string strategy = "Bid strategically with higher bids in the middle rounds (rounds 4-8) where competition is likely highest.";
  return "";
}

// TODO: Implement the bidding logic.
// parameters:
//   rounds: The total number of rounds in the game.
//   budget: The total points available to spend across all rounds.
//   output_filename: The name of the file where the bids should be written.
//
// Logic:
//   1. Calculate how much to bid in each round.
//   2. Open 'output_filename' for writing.
//   3. Write the bid for each round on a new line in the file.
//
// Constraints:
//   - You must write exactly 'rounds' number of lines.
//   - The sum of all bids must not exceed 'budget'.
//   - Bids must be non-negative integers.
void GenerateBids(int rounds, int budget, std::string output_filename) {
  std::vector<int> bids = {5, 0, 5, 25, 15, 15, 15, 15, 5, 0};
  std::ofstream output_file(output_filename);
  int total_bid = 0;
  for (int i = 0; i < rounds; i++) {
    output_file << bids[i] << '\n';
    if (total_bid += bids[i]; total_bid > budget) {
      break;
    }
  }

}

// ============================================================================
// MAIN FUNCTION
// Use this to test your code.
// This function will be ignored by the "make test" command.
// ============================================================================
int main() {
  GenerateBids(10, 100, "test_output.txt");
  
  return 0;
}
