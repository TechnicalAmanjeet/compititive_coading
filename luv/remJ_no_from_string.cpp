class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
         string s;
        int i,j;
        for(i=0;i<string1.size();i++)
        {  int t=0;
        	for(j=0;j<string2.size();j++)
        	{
        		if(string2[j]==string1[i]){t=1;break;}
        	}
        	if(j==string2.size() && t==0){s.push_back(string1[i]);}
           
        
    }
           return s;
        
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}
  // } Driver Code Ends