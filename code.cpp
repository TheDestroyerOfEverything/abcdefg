#include <iostream>
using namespace std;
int main(){
   int arr[100][100];
   int arr2[100][100];
   int n, g, k;
  
 
cin>>n;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>arr[i][j];
       }
       
}
 for(int b=0;b<n;b++){
       for(int c=0;c<n;c++){
           cin>>arr2[b][c];
       }
       
}

g = 0;
k = 0;

for(int e = 0; e<n; e++){
    for(int f = 0; f<n; f++){
       g = arr[e][f] + arr2[e][f];
       k++;
       if (k%n == 0){
           cout << g << endl;}
           else {
       cout << g << " ";
        }
        }
    }
  
  
return 0; }
