#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main()
{
 system("cls");
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
const int n=10;
int i, k1,k2;
int a[n];
int tmp, j , k;
srand(time(NULL));
cout<<"Масив а["<<n<<"] =\n";
for(i=0; i<n; i++)
{
	a[i]=rand()%100-50;
	cout<<a[i]<<" ";
	
}
	cout<<endl;
	cout<<" Діапазон для сортування [ k1... k2 ] = ";
    cin>>k1;
    cin>>k2;
    k1=k1+1;
   
cout<<" Відсортований масив a["<<n<<"] = \n";
for (i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
system("pause");

return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


