#include <iostream>

using namespace std;

int main()
{
    int t;
	cin >> t;
	while(t--){
	    int a,b;
	    int al,bl;
	    cin >> a >> b;
	    string str1 = to_string(a);
	    string str2 = to_string(b);
	    al = str1.size() ;
	    bl = str2.size() ;
	    string str ;
	    int temp;
	    if(al == bl && al == 2)
	    {
	        if(str1 < str2)
	        {
	        if(str2[1]>str1[0]){
	        temp = str1[0];
	        str1[0]=str2[1];
	        str2[1]=temp;
	        }
	        }
	        else 
	        {
	        if(str1[1]>str2[0])
	        {temp = str2[0];
	        str2[0]=str1[1];
	        str1[1]=temp;
	        }
	        }
	    }
	    else 
	    {
	        if(al == 1)
	        {
	            if(str1[0] > str2[0])
	            temp = str2[0];
	            str2[0]=str1[0];
	            str1[0]=temp;
	        }
	        else if(bl == 1)
	        {
	            if(str1[0] < str2[0])
	            temp = str2[0];
	            str2[0]=str1[0];
	            str1[0]=temp;
	        }
	    }
	    int sum;
	    int c,d;
	    c= stoi(str1);
	    d= stoi(str2);
	    sum = c+d;
	    cout << sum << endl;
	    
	}
    return 0;
}