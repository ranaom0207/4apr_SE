#include<iostream>
#include<fstream>
using namespace std;

main()
{
ofstream file1;


  string data;
file1.open("TEXT.txt");


cout<<"enter data";
cin>>data;
file1<<data;

file1.close(); 
ifstream file2;
file2.open("TEXT.txt");
file2>>data;
cout<<data;


}
