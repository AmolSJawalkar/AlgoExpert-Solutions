// Tournament Winner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
	vector<int> results) {
	// Write your code here.
	std::map<std::string, int> teamPoints;

	auto updateTeamScore = [&teamPoints](const std::string& teamName)
	{
		if (teamPoints.find(teamName) == teamPoints.end())
			teamPoints[teamName] = 3;
		else
			teamPoints[teamName] = teamPoints[teamName] + 3;
	};

	for (size_t i = 0; i < competitions.size(); i++)
	{
		const auto& competition = competitions[i];
		updateTeamScore(results[i] == 1 ? competition[0] : competition[1]);
	}

	auto maxElement = std::max_element(teamPoints.begin(), teamPoints.end(), [](const std::pair< std::string, int>& pair1, const std::pair< std::string, int>& pair2) {
		return pair1.second < pair2.second;
		});

	return (*maxElement).first;
}

int main()
{
	std::cout << "Hello World!\n";
}
