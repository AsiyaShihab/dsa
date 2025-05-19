#include <iostream>
using namespace std;
void mergesort() {
	int *A,*B,*C;
	int m,n;

	cout<<"enter the size of first array "<<endl;
	cin>>m;
	A=new int[m];
	cout<<"enter the elements of first array "<<endl;


	for(int i=0; i<m; i++)
		cin>>A[i];
	cout<<"enter the size of second array "<<endl;
	cin>>n;
	B=new int[n];
	cout<<"enter the elements of second array "<<endl;
	for(int i=0; i<n; i++)
		cin>>B[i];
	C=new int[m+n];
	int i=0,j=0,k=0;
	while(i<m &&j<n) {
		if(A[i]<B[j]) {
			C[k++]=A[i++];
		}
		else
			C[k++]=B[j++];
	}
	for(; i<m; i++) {
		C[k++]=A[i];
	}
	for(; j<n; j++) {
		C[k++]=B[j];
	}
	for(int i=0; i<m+n; i++) {
		cout<<C[i]<<' ';

	}
	delete[]A;
  delete[]B;  delete[]C;

}

int main()
{	mergesort();

	return 0;
}
