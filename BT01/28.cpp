#include <iostream>
using namespace std;
int main()
{
	string s;
	int hour;
    for (int i=0;i<24;i++) 
    {
    	if (i==0) 
		{
			s="midnight" ;
			hour=i+12 ;
		}
    	else if (i<12) 
		{
			s="am";
			hour=i;
		}
    	else if (i==12)
		{
		    s="noon";
			hour=i;	
		} 
    	else
    	{
    		s="pm";
    		hour=i-12;
		}
    	cout << hour << s << endl; 
    }
}