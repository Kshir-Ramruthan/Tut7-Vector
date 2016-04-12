//Kshir Ramruthan (214502398)
//Tut 7 - Vector

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
	vector<int> vect;
	for (int i = 0; i < 20; i++)
	{
		vect.push_back((rand() % 20) + 1);
	}
	sort(vect.begin(), vect.end(), std::greater<int>());

	vector<int>::iterator iter = vect.begin();

	while (iter!=vect.end())
	{
		cout << *iter << " "<< endl;
		iter++;
	}
	return 1;
}