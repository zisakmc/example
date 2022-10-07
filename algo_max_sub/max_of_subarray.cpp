#include <bits/stdc++.h>


/*
	This is sum of max subarray, time complexity of o(n3);
*/
using namespace std;

int main(){
	int best=0;
	int array [10]= {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = sizeof(array)/sizeof(int);
	for(int a=0; a<n;a++){               
		for(int b=a;b<n;b++){
			int sum =0;
			for(int k=a;k<=b;k++){      // the algorithm is to add max of sub array, start from 0..n 
										//	and add 0+1,0+2; b is the end condition to add sub array
										//   and k=a, where a=0,1,2...n which is the starting
										//    array[k] adding sum and return max 
				sum+=array[k];   
			}
			best=max(best, sum);
		}
		
	}
	cout<<"max of subarray :"<<best<<"\n";
	return 0;
}