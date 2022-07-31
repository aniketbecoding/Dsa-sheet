#include<iostream>
using namespace std;
int main(){
    string t="328141867";
    string p="18";
    string temp="";
    int n=t.size();
    int m=p.size();
    int p_hash=stoi(p)%n;
    int t_hash;
    int index;
  
    int flag;

    for(int i=0;i<n;i++){
       flag=1;   //to indicate that there is no match yet
       int count=0;
       int j=i;      // in temp elements from text will start adding from ith index and go on until temp's size is same as that of pattern
        while(j<n && count<m){  //since count is satrting from 0 the while loop will terminate when count reaches the size of pattern i.e. m here
            temp+=t[j];
            j++;
            count++;
        }
       index=j-m;  //index to know where the index of required text is
        

        t_hash=stoi(temp)%n;
       
        if(t_hash==p_hash){      //if the has value matches with that of temp and pattern then we check if the characters match as well
          cout<<"text having same hash value are: "<<endl;
            for(int i=0;i<temp.size();i++){  //this is just to show what is in the temp
                cout<<temp[i];
            }
            cout<<endl;

            int k=0;
            while(k<m){
                if(p[k]==temp[k]){
                    k++;
                }
                else{
                    break;
                }
            }
               if(k==m){  //if k reached the size of pattern it means all the characters matched and so we set the flag to 0 
                flag=0;
               break;
            }
        }
    
        temp="";  //make the temp empty if the hash value of pattern and temp is not matching. after this the outer for loop will be executed till the end of the text
    }
    if(flag==1){
        cout<<"pattern not found"<<endl;
    }
    else{
        cout<<"pattern found at index: "<<index<<endl;
       
    }
     
    return 0;
}
