#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int i, j, k; 
   	for (i = 1; i < N; i++) 
   	{ 
       j = d[i]; 
       k = i-1; 
       for(int t = 0; t < i; t++) cout << d[t] << " ";
       cout<<"["<<d[i]<<"]" << " ";
       for(int t = i+1; t < N; t++) cout << d[t] << " ";
       cout<<"=>";
       while (k >= 0 && d[k] < j) 
       { 
       	   swap(d,k+1,k);
		   k = k-1; 
       }
       d[k+1] =j; 
	    for(int t = 0; t <= k; t++) cout << d[t] << " ";
       cout<<"["<<d[k+1]<<"]" << " ";
       for(int u = k+2; u < N; u++) cout << d[u] << " ";
	    cout<<"\n";
   	} 
}
//Write your code here.



int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
