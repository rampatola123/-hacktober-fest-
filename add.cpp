#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int T; int i;
    cout<<"enter test case";
    cin>>T;
    for(i=0;i<T;i++){
      int n;int arr[n];
      cin>>n;
      for(i=0;i<n;i++){
        cin>>arr[i];
      }
      if(arr[0]==0){
        cout<<"0"<<endl;
      }
      else{
        int sum=0,count=0;
        for(i=0;i<n;i++){
          sum+=arr[i];
          count++;
          sum--;
          if(sum==0)
            break;
        }
        cout<<sum+count<<endl;
      }
    }
    return 0;
} 