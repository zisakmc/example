#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {9, 8, 6, 5, 4, 1,7,2};
	int n = sizeof(arr)/sizeof(int);
	//vector<int> v = {9, 8, 6, 5, 4, 1,7,2};
	//sort(v.rbegin(), v.rend());
	//sort(arr,arr+n);
	//string s = "monkey";
	//sort(s.begin(), s.end());
	vector<pair<int,int>>v;
	v.push_back({1,5});
	v.push_back({1,3});
	v.push_back({2,1});
	sort(v.begin(), v.end());
	for(int i=0;i<3;i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
	cout<<"\n";

	return 0;
}