#include<iostream>
#include<string>
using namespace std;
int main()
{
    int ar[]={1,2,22,34,54,222,1,91,23,24,1,4,12};
    int size=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<ar[i]<<endl;
    }
 return 0;
}