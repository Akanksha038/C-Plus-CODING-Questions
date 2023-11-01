#include <vector>
#include <stack>
class Solution {
public:
    int calPoints(vector<string>& operations)
{
    vector<int> Scores;

    for (int i = 0; i < operations.size(); i++) {
        if (operations[i] == "C") {
            Scores.pop_back();
        } else if (operations[i] == "D") {

            // Scores.back()==>for retrieving last element
            Scores.push_back(2 * Scores.back());
        } else if (operations[i] == "+") {
            Scores.push_back(Scores[Scores.size() - 1] + Scores[Scores.size() - 2]);
        } else {
            Scores.push_back(stoi(operations[i]));
        }
    }

    int sum = 0;
    for (int Scores : Scores) {
        sum += Scores;
    }

    return sum;
}
    
};