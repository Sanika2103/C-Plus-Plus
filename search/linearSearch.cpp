#include <iostream>

using namespace std;

//Linear search function

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
         if(arr[i]==key)   
          return i;
       }
       return -1;   //key not found
}

int main() {
   int n,arr[n],key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
     cout<<"Enter an element :";
     cin>>key;
     cout<<linearSearch(arr,n,key);

    return 0;
}