#include<iostream>
using namespace std;
int findElement(int arr[], int n, int key){
 for(int i = 0; i < n; i++){
    if(arr[i] == key){
    return i + 1;
 }
}
return -1;
}
int main()
{
    int arr[] = {12, 11, 17, 20, 24, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
int key = 11;

int function = findElement(arr, n, key);

if(function == -1){
    cout<<"Element is not found: ";   
}
else{
    cout<<"Element found at position: "<<function;
}
 return 0;
}