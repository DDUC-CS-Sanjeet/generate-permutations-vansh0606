/*
# Permutations

Write a program to print all the permutations of a set of characters. You will be provided with number of characters and have to assume the set by yourself.

User must enter number of characters (num) in first line and then program must print all permutations of num characters.

Sample Input: 3
Output: abc
acb
bac
bca
cab
cba

**Order in which your permutations are printed may differ from the sample output.**
*/
#include<iostream>
#include<math.h>
using namespace std;
long pro(long n)
{
    int i,j=1;
    for(i=n;i>0;i=i/10)
    {
        j=j*(i%10);
    }
    return j;
}
long proarr(char a[],long n)
{
   int i,p=1;
   for(i=0;i<n;i++)
   {
       p=p*((long)a[i]-96);
   }return p;
}
long add(long n)
{
      int i,j=0;
    for(i=n;i>0;i=i/10)
    {
        j=j+(i%10);
    }
    return j;
}
long addarr(char a[],long n)
{
    int i,p=0;
   for(i=0;i<n;i++)
   {
       p=p+((int)a[i]-96);
   }return p;
}
void print(long n)
{
	int i;
	for(i=n;i>0;i=i/10)
	{
		cout<<(char)((i%10)+96);
	}cout<<endl;
}
int main()
{ 
    long n;
    cout<<"ENTER NUM OF CHARACTERS"<<endl;
    cin>>n;
	char c[n];
    long i;char ch='a';
    for(i=0;i<n;i++)
    {
      c[i]=ch++;      
    }	cout<<"POSSIBLE COMBINATIONS ARE "<<endl;
    for(i=pow(10,n-1);i<pow(10,n);i++)
    {    
        if(proarr(c,n)==pro(i)&&addarr(c,n)==add(i))
        {
     //  cout<<v++<<".) ";
		print(i);}
    }
   
}
