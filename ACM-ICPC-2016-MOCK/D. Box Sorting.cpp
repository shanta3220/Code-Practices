#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int max, t, n, j =1;
	string s;
	cin >> t;
	while(t--){
	  cin >> n;
      	  int boxes[n];
   	  map<int, int> box;
	  max = 0;
	  for (int i = 0; i < n; ++i){
            cin >> boxes[i];
    	    box[boxes[i]]+=1;
    	    if(max < box[boxes[i]])
    	      max = box[boxes[i]];

	   }
	    cout <<"Case "<< j++ <<": ";
	   
	          cout << max << "\n";
	}
	return 0;
}
