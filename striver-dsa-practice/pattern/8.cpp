/*

 *********
  *******
   *****
    ***
     *
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i = 0; i<N;i++){
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        cout<<endl;
    }
}