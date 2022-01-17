#include<iostream>
using namespace std;
int maxsumarray(int a[],int n){
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
         maxsum=max(maxsum,sum);
         if(sum<0){
             sum=0;
         }
        
    }
    return maxsum;
}
int main(){
    int a[]={1,2,3,-2,5};
    int n=5;
    cout<<"the max sum is: "<<maxsumarray(a,n)<<endl;
    return 0;
}