#include<iostream>
using namespace std;
int maxsumarray(int a[],int n){
    int sum=a[0];
    int max_sum=a[0];
    for(int i=1;i<n;i++){
   
        if(sum+a[i]>=a[i]){
            sum+=a[i];
        }
        if(sum+a[i]<a[i]){
            sum=a[i];
        }
        max_sum=max(max_sum,sum);
    }
    return max_sum;
}
int main(){
    int a[]={1,2,3,-2,5};
    int n=5;
    cout<<"the max sum is: "<<maxsumarray(a,n)<<endl;
    return 0;
}