#include <iostream>

using namespace std;

int main() {
	int a=0,b=0,n=0;
	
	cin >> a>>b;
    int	maxm=min(a,b);
	
	for(int i=1 ;i<=maxm;i++)
	{
	    if (a%i==0 && b%i==0)
	    {
	        n++;
	    }
	
	
			
}
    cout << n << endl;
}
