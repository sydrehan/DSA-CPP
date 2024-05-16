// selection sort (apna college very easy)
#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    cout<<"Enter the numbers: ";
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[i]){
                int temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

 return 0;
}