#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
using namespace std;
bool isSorted(int arr[],int n){
	int size = n;
	for(int i = 0 ; i < size -1 ; i++){
		if(arr[i]>arr[i+1]){
			return false;
		}
	}
	return true;
}
/*void swap(int x , int y){
	int z = x;
	x = y;
	y = z;
}*/
void sort(int arr[],int n){
	int size = n;
	if(!isSorted(arr,n)){
		int i,j;
		i = rand()%size;
		j = rand()%size;
		if(j>i and arr[j]<arr[i]){
			swap(arr[i],arr[j]);
		}
		if(!isSorted(arr,n)){
			isSorted(arr,n);
		}
	}
}
int main(){
	srand(time(0));
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0 ;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,n);
	for(auto x : arr){
		cout<<x<<" ";
	}
}