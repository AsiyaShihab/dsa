#include<iostream>
using namespace std;
class array{
    private:
    int *A;
    int size;
    int length;
    public:
    array(int size);
    void display();
   void getarray();
   void insert();
   void append();
   void delet();
   int getval(int index);
   int search(int key);
   void swap(int i);
   void setval(int index,int x);
   int maximum();
   int minimum();
   int sum();
   void reverse();
   void reverse1();
   float avg();
   void insertsort(int x);
   bool issorted();
   void negonleft();
   ~array(){
       delete []A;
      
   }
 
};
void array::negonleft(){
    int i=0;int j=length-1,temp;
    while(i<j){
        while(A[j]>=0){
            j--;
        }
        while(A[i]<0){
            i++;
        }
       if(i<j){ 
      temp=A[j];
      A[j]=A[i];
      A[i]=temp;
    }}
}
void array::insertsort(int x){
    if(length==size)
    return ;
     int i=length-1;
    while(A[i]>x){
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;
    length++;
}
bool array::issorted(){
    for(int i=0;i<length-1;i++)
    {
        if(A[i]>A[i+1])
        return false;
    }
    return true;
}

void array::reverse1(){
    int j=0,temp;
    for(int i=length-1;i>j;i--,j++)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
for(;j<length;j++)
    cout<<A[j]<<" ";
    cout<<endl;
}
void array::reverse(){
    int *B;
    B=new int[size];
   
   for(int i=length-1,j=0;i>=0;i--,j++)
   B[j]=A[i];

    for(int i=0;i<length;i++)
    A[i]=B[i];
    delete []B;
    for(int i=0;i<length;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    
}
float array::avg(){
    int total=sum();
    return (float)total/length;
}
int array::sum(){
    int sum=0;
    for(int i=0;i<length;i++){
        sum+=A[i];
    }
    return sum;
}
int array::maximum(){
    int max=A[0];
    for(int i=0;i<length;i++)
    {if(max<A[i])
    max=A[i];}
    return max;
}
int array::minimum(){
    int min=A[0];
    for(int i=0;i<length;i++)
    {if(min>A[i])
    min=A[i];}
    return min;
}
void array::setval(int index,int x){
    if(index>=0 && index<length)
A[index]=x;

}
int array::getval(int index){
    if(index>=0 && index<length)
    return A[index];
}
void array::swap(int i){
    if(i!=0){
    int temp;
 temp=A[i];
 A[i]=A[i-1];
 A[i-1]=temp;}
    
}

array:: array(int size){
        this->size=size;
        A=new int[size];
        length=0;
    }
    void array::append(){
    int x;
    if(length<size){
    cout<<"enter the element to append ";
    cin>>x;
    A[length]=x;
    length++;}
    else
    cout<<"overflow ";
}
 
  void array::insert(){
      int index, x;
      cout<<"enter the index to insert ";
      cin>>index;
      if(index<size){
      cout<<"enter the element ";
      cin>>x;
    
      
      
      for(int i=length;i>index;i--){
          A[i]=A[i-1];
          
      }
      A[index]=x;
      length++;}
      else
      cout<<"cant insert overflow ";
      
  } 
  int array:: search(int key){
         
      for(int i=0;i<length;i++){
          if(key==A[i])
          {swap(i);//transposition
          return i;
          }
      }
      return -1;
      
  }
 void array::getarray(){
     cout<<"enter number of elements in array ";
     cin>>length;
     cout<<"enter the elements ";
     for(int i=0;i<length;i++)
     cin>>A[i];
 }  
void array::display(){
    cout<<"elements are ";
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
void array::delet(){
    int x;
    cout<<"enter the index to delete ";
    cin>>x;
    if(x<length){
        for(int i=x;i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
    }
    else
    cout<<"index exceeds the length of the array \n";
}
int main(){
    int size;
    int key;
    int ind,x,insert;
     cout<<"enter size of array ";
     cin>>size;
    
     array arr(size);
    arr.getarray();
    arr.display();
    cout<<endl;
 /*   arr.insert();
    arr.display();
    cout<<endl;
arr.append();
    arr.display();
    arr.delet();
    arr.display();
    
      cout<<"enter element to search ";
      cin>>key;
  int p=  arr.search(key);
    if(p==-1)
    cout<<"not found ";
    else 
    cout<<p<<endl;
      arr.display();
    int index;
    cout<<"enter the index to get ";
    cin>>index;
    cout<<"value at " <<index<<" is "<<arr.getval(index)<<endl;
    cout<<"enter index and value to set  ";
    cin>>ind>>x;
   arr.setval(ind,x);
   cout<<"max element is "<<arr.maximum()<<endl;
   cout<<"min element is "<<arr.minimum()<<endl;
  cout<<"sum of elements is "<<arr.sum()<<endl;
  cout<<"average of elements is "<<arr.avg()<<endl;
  arr.reverse();
 arr.reverse1();
 cout<<arr.issorted();
 cout<<"enter the element to insert ";
 cin>>insert;
 arr.insertsort(insert);
 arr.display();
 arr.negonleft();*/
 arr.display();
}
