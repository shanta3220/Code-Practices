#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int max, t, n, j =1;
	char q;
	long int pid,rid;
	cin >> t;
	while(t--){
	    cin >> n;
	    map<long int,long int> qq;
	     cin>>q;
	        if(q=='1'){
	            cin>>pid>>rid;
	            qq[pid]=rid;
	            cout <<"Y\n";
    	}
    	if(q=='2'){
	            cin>>rid;
	            cout<<"F \n";
	            qq[0]=rid;
    	} 
	    char c= 'Y';
	    int k=1;
	    for(int i = 2; i<=n; i++){
	        cin>>q;
	        if(q=='1'){
	            cin>>pid>>rid;
	             map<long int, long int>:: const_iterator i;
	            for(i = qq.begin(); i != qq.end(); i++){
    	            if(rid==(*i).second){
    	                 if(c=='N'){
	                        c = 'Y';
	                        break;
	                     }
	                     if(c=='Y'){
	                        c = 'N';
	                        break;
	                     }
	                    
    	          }
                  
    	     } 
	        cout<<c<<"\n";
	        qq[pid]=rid;
	        }
	        if(q=='2'){
	            cin>>rid;
	            map<long int, long int> :: const_iterator i;
    	        for(i = qq.begin(); i != qq.end(); i++){
    	            if(rid==(*i).second){
    	                 cout<<(*i).first<<"\n";
    	                 break;
    	            }
                   else cout<<"F \n";
    	        } 
	            
	        }
	    }
	}
	return 0;
}
