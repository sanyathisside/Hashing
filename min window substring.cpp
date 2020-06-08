#include<bits/stdc++.h>
using namespace std;
string minWindow(string str , string pat)
{
	int len1 = str.size();
	int len2 = pat.size();
	if(len1 < len2)
	{
		cout<<"No string";   //length of string is less than that of pattern
		return "";
		
	}
	int hash_str[256] = {0};   //these are for making frequency hash for string and pattern 
	int hash_pat[256] = {0};
    
    for(int i = 0; i<len2; i++)
    {
    	hash_pat[pat[i]]+=1;
	}
	 int start =0;   //to start from the 0th index of string
	 int start_index = -1; int min_len = INT_MAX;
	 int count=0;
	 for(int j=0;j<len1;j++)
	 {
	 	hash_str[str[j]]+=1;
	 	if(hash_pat[str[j]] !=0 && hash_str[str[j]] <= hash_pat[str[j]])
	 	{
	 		count+=1;                                                              //growing the window
		 }
		if(count == len2)
		{
			while(hash_str[str[start]] > hash_pat[str[start]] || hash_pat[str[start]] == 0)
			{
				if(hash_str[str[start]] > hash_pat[str[start]])
				{                                                     //shrinking the window
					hash_str[str[start]]-=1;
				}
				start+=1;
			}
			int len_window = j-start+1;
			if(min_len > len_window)
			{
				min_len = len_window;
				start_index = start;
			}
		}
	  } 
    if(start_index == -1)
    {
    	cout<<"No string"<<endl;
    	return "";
	}
	return str.substr(start_index,min_len);
}
int main()
{   string s1,s2;
cin>>s1>>s2;
cout<<minWindow(s1,s2);
	
    
	return 0;
}
