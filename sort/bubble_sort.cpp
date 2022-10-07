#include<bits/stdc++.h>
using namespace std;
/*
bubble sort that perform o(n2)
*/

int main(){
	int array[]={9,8,7,6,5,3,4,2,1};
	int n = sizeof(array)/sizeof(int);
	cout<<"before sort"<<"\n";
	for(int i=0;i<n;i++){
		cout<<" "<<array[i];
	}

	for(int i=0;i<n; i++){
		for(int j=0;j<n-1; j++){
			if(array[j] > array[j+1]){
				swap(array[j], array[j+1]);
			}
		}
	}
	cout<<"\nafter sort"<<"\n";
	for(int i=0;i<n;i++){
		cout<<" "<<array[i];
	}

}