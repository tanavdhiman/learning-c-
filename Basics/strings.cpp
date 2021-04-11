
#include<iostream>
using namespace std;


/*
memory
    |  'd'|  p   |s    |
    |char | char | char|
    |-----string------|
    "                  "
    [0]   [1]    [2]
*/

int main()
{
cout<<"dps"<<endl;
string phrase="dps is my ool school";
//             012345678910
cout<<phrase.length()<<endl;
cout<<phrase[1]<<endl;
phrase[0]='D';
cout<<phrase<<endl;
cout<<phrase.find("o",19)<<endl;
cout<<phrase.substr(8,10);//pos....pos+len-1 (8....17) ==>(y ool scho)



}
