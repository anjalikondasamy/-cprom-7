#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	char str[100];
	int i;
  clrscr();
  
	cin.getline(str,100);
	for(i=0;str[i]!=0;i++)
	{
	    cout<<str[i]<<" ";
	}
	return 0;
}
