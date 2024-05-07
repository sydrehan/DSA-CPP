/*minimum value*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int ar[]={1,2,34,-43,56,4,-900,3,2,22,2};
    int size=sizeof(ar)/sizeof(ar[0]);
    int minval=ar[0];
    for(int i=0;i<size;i++){
        if(ar[i]<minval){
            minval=ar[i];
        }
    }
    cout<<minval;
 return 0;
}