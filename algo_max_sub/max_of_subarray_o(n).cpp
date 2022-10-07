#include<bits/stdc++.h>
using namespace std;

/*
In this algorithm of max of subarray it can perform o(n) time;
*/
int main(){
	int sum = 0, best=0;

	int array []= {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = sizeof(array)/sizeof(int);

	for(int i=0; i<n; i++){
		sum=max(array[i],sum+array[i]);
		best=max(best, sum);
	}
	cout<<"max of subarray:"<<best<<"\n";
	return 0;
}