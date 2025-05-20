#include <iostream>
#include<vector>
using namespace std;
int main()
{
int size;
int large;
cout<<"enter the size of the array "<<endl;
cin>>size;
vector<int>A(size);
 cout<<"enter the elements of the array "<<endl;
for(int i=0;i<size;i++){
    cin>>A[i];
}
cout<<"enter the larger element ";

cin>>large;
vector <int> H(large+1,0);

for(int i=0;i<size;i++){
   
    H[A[i]]++;
    
    
}
for(int i=0;i<large+1;i++){
    if(H[i]!=0&&H[i]!=1)
    cout<<"the element "<<i<<" repeats "<<H[i]<<" times ";
}
   



    return 0;
}
