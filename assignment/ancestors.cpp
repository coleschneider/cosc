#include <iostream>
#include <string>
using namespace std;

const string people[] = { "Al", "Beth", "Bob", "Carol", "Chuck", "Candy", "Cain", "Debbie", "Doug",
							"Diane", "Dwayne", "Delores", "Dwight"};
const string mother[] = { "Beth", "Carol", "Charity", "Debbie", "Diane", " ", "Delores"};
const string father[] = { "Bob", "Charley", "Cain", "Douglas", "Dwayne", " ", "Dwight"};
const int mom[] = { 1, 3, 5, 7, 9, -1, 11, -1, -1, -1, -1, -1, -1 };
const int pop[] = { 2, 4, 6, 8, 10, -1, 12, -1, -1, -1, -1, -1, -1 };

void ancestors(int index)
{
	if (index != -1)
	{
		cout << people[index]<<endl << "Mom: " << mother[index]<<endl<<"Dad: "<<father[index]<< endl;
		ancestors(mom[index]);
		ancestors(pop[index]);
	} 
}

int main()
{

    ancestors(0);
	return 0;
}