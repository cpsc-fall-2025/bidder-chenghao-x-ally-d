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
  std::ofstream output_file(output_filename);
  int bid_amount = budget / (rounds / 2);
  for (int i = 0; i < rounds; i++) {
    if (i % 2 == 0) {
      output_file << 0 << '\n';
    } else {
      output_file << bid_amount << '\n';
    }
  }
}

// ============================================================================
// MAIN FUNCTION
// Use this to test your code.
// This function will be ignored by the "make test" command.
// ============================================================================
int main() {
  int rounds = 20;
  int budget = 1500;
  /*
  std::vector<int> opponent_bids(rounds, (budget / rounds));
  
  std::vector<int> our_bids;
  int bid_amount = budget / (rounds / 2);
  for (int i = 0; i < rounds; i++) {
    if (i % 2 == 0) {
      our_bids.push_back(0);
    } else {
      our_bids.push_back(bid_amount);
    }
  }
  std::ofstream strategy_file("we vs. opponent.txt");
  for (int i = 0; i < rounds; i++) {
    strategy_file << "Round " << (i + 1) << ": ";
    strategy_file << "Our bid: " << our_bids[i] << ", ";
    strategy_file << "Opponent bid: " << opponent_bids[i] << " - ";
    
    if (our_bids[i] > opponent_bids[i]) {
      strategy_file << "WE WIN" << '\n';
    } else if (our_bids[i] < opponent_bids[i]) {
      strategy_file << "OPPONENT WINS" << '\n';
    } else {
      strategy_file << "TIE" << '\n';
    }
  }
  */
  GenerateBids(rounds, budget, "test_output.txt");
  
  return 0;
}
