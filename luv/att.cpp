class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0;
        for(i=0;i<s.size();i++)
        {
          if(a[i]=='L' && a[i+1]=='L' && a[i+2]=='L'){return 0;}
          if(a[i]=='A'){a+=1;}
        }
        if(b<2){return 0;}
        else { return 1;}
    }
};