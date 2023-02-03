#include <iostream>
using namespace std;
int main(){

int arr[] = {5,10,15,20,11,25,22};
int size = sizeof(arr)/sizeof(arr[0]);
int i, j, temp;

for(i=0; i<=size/2; i++){
	temp = arr[i];
	arr[i] = arr[size-1-i];
	arr[size-1-i] = temp;

}

for(i=0; i<size; i++){
	cout<<arr[i]<<" ";
}

}
