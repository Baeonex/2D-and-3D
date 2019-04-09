#include <iostream>
#include <functional>
#include <unordered_map>
#include <string>

using namespace std;


int main()
{	
// Declaring umap to be of <string, int> type 
// key will be of string type and mapped value will 
// be of double type 
	std::unordered_map<string, int> umap;

	// inserting values by using [] operator 
	umap["Mars"] = 10;
	umap["Earth"] = 20;
	umap["Titan"] = 30;

	// Traversing an unordered map 
	//for (auto x : umap)
		//cout << x.first << " -> " << x.second << endl;

	std::cout << "-----\n";





	std::vector<string> str;

	str.push_back("Hello");
	str.push_back("World");
	str.push_back("Count");
	str.push_back("Word");
	str.push_back("Word");
	str.push_back("Word");
	str.push_back("Hello");
	str.push_back("Word");

	int frequency = 0;
	vector<int> frequencyVector;
	unordered_map<string, int> umapStr;

	for (string word : str)
	{
		umapStr[word]++;
	}

	for (auto b : umapStr)
		cout << b.first << " -> " << b.second << endl;
	// make an unordred map
	// key: string (word from array)
	// value: how many times the word occured in str


	return 0;
}