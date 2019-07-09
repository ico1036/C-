#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>::iterator it;
	int sum=0;
	
	for(it=v.begin(); it!=v.end(); it++){
		sum += *it;
		cout << *it << endl;
	}
	
	cout << sum << endl;





}

