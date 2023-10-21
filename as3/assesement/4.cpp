#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RockPaperScissorsGame {
public:
    void start() {
        string playerName;
        int rounds;

        cout << "Welcome to Rock, Paper, Scissors Game!" << endl;
        cout << "Enter your name: ";
        cin >> playerName;

        cout << "Enter the number of rounds to play: ";
        cin >> rounds;

        srand(time(0));

        for (int round = 1; round <= rounds; round++) {
            cout << "Round " << round << endl;
            playRound(playerName);
        }

        cout << "Game Over. Thanks for playing!" << endl;
    }

private:
    void playRound(const string& playerName) {
        int computerChoice = (rand() % 3) + 1;
        int playerChoice;

        cout << "Select your choice:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;

        cin >> playerChoice;

        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice. Please choose a number from 1 to 3." << endl;
            return;
        }

        cout << "Computer chose: " << getChoiceName(computerChoice) << endl;
        cout << playerName << " chose: " << getChoiceName(playerChoice) << endl;

        int result = determineWinner(playerChoice, computerChoice);
        if (result == 0) {
            cout << "It's a tie!" << endl;
        } else if (result == 1) {
            cout << playerName << " wins this round!" << endl;
        } else {
            cout << "Computer wins this round!" << endl;
        }
    }

    string getChoiceName(int choice) {
        switch (choice) {
            case 1:
                return "Rock";
            case 2:
                return "Paper";
            case 3:
                return "Scissors";
            default:
                return "Invalid";
        }
    }

    int determineWinner(int player, int computer) {
        if (player == computer) {
            return 0; // Tie
        } else if ((player == 1 && computer == 3) ||
                   (player == 2 && computer == 1) ||
                   (player == 3 && computer == 2)) {
            return 1; // Player wins
        } else {
            return -1; // Computer wins
        }
    }
};

int main() {
    RockPaperScissorsGame game;
    game.start();
    return 0;
}

