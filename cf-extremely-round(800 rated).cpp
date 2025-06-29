#include <bits/stdc++.h>
using namespace std;

bool check(long long x){
    
    long long int no_of_zeroes=0;
    long long int no_of_digits=0;
    
    
    while(x){
        if(x%10 == 0){
            no_of_zeroes++;
        } 
        no_of_digits++;
        x/=10;
    }
    
    return no_of_zeroes == no_of_digits-1;
}





int main() {
	// your code goes here
	vector<long long> Round_Numbers ;
	for(long long i=1;i<=999999;i++){
	    if(check(i) == true){
	        Round_Numbers.push_back(i);
	    }
	}
	
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	long long c=0;
	    for(int i=0;i<Round_Numbers.size();i++){
	        if(Round_Numbers[i]<=n){
	            c++;
	        }else{
	            break;
	        }
	    }
	    cout<<c<<endl;
	    
	    
	    
	    
	}
	return 0;

}
