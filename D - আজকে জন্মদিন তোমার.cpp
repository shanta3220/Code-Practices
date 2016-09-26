#include <iostream>
#include<string>
using namespace std;

int main() {
	char a[105][105],b[16][16]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	int t,c=0;
	while(cin>>t){
	for(int i=0; i<t; i++)
	    cin>>a[i];
	    c=t/16;
     if(t%16!=false)​//statement is true.
        c++;
     for(int i=0; i<c*16; i++)
	 cout<<a[i%t]<<": "<<b[i%16]<<"\n";
    } 
	
	return 0;
}
