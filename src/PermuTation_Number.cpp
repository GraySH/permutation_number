//============================================================================
// Name        : PermuTation_Number.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(vector<int> vec, vector<int> number)
{
	if(vec.size() == 3)
	{
		for_each(vec.begin(), vec.end(), [](int x){ cout << x << " ";  } );
		cout << endl;
		return;
	}

	for(int i = 0; i < number.size(); i++)
	{
		vector<int> record(vec);
		vector<int> temp(number);

		record.push_back(number[i]);
		//remove erase idiom for vector number

		temp.erase(remove(temp.begin(), temp.end(), temp[i]) ,temp.end() );
		permutation(record,temp);
	}
}



int main()
{
	vector<int> vec = { 1,2,3, 4};

	vector<int> temp;

	permutation(temp, vec);


	return 0;
}
