#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  int n = argc-1;
  pa = new int[n];
  cout<<"Original: ";
  for (i=0; i<n; i++){
    pa[i]=atoi(argv[i+1]);
    cout<<setw(3)<<pa[i];
  }
  cout<<endl;
  pb = pa + n - 1;
  for (i=0; i<n/2; i++)
  {
    temp = *pa;  
    *pa = *pb;  
    *pb = temp;
    pa++;  pb--;
  }
  pa-=n/2;
  pb-=n/2;
  cout<<"Reversed: ";
  for (i=0; i<n-1; i++ ,pa++){
    cout<<setw(3)<<*pa ;//<<endl;
    //cout<<pa<<endl;
  }
  cout<<setw(3)<<*pa<<endl;
  return 0;
}
