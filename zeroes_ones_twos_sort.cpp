#include<iostream>
using namespace std;
int main(){
    int a[]={2,0,2,1,2,0,1,1,0};
    int n=9;
    int z=0;
    int s=0;
    int t=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            z++;
        }
        else if(a[i]==1){
            s++;
        }
        else{
            t++;
        }
    }
    cout<<"the number of zeroes,ones and twos are respectively: ";
    cout<<z<<" "<<s<<" "<<t;
    cout<<endl;
    for(int j=0;j<z;j++){
        a[j]=0;
    }
    for(int l=z;l<n-z;l++){
        a[l]=1;
    }
    for(int p=s+z;p<n;p++){
        a[p]=2;
    }
    for(int x=0;x<n;x++){
        cout<<a[x]<<" ";
    }
    cout<<endl;
    return 0;
}
