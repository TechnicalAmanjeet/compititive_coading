/*                          Technical Amanjeet ( youtube channel )

                         !!*******!                                             
                      !**************                                           
                    !*******$@%******%*                                         
                  !%%%%%%%&#S*#********$%*!!         !!                         
      &#@*!    !**%****$%#SSSSS%********%%%**%%************                     
      &*S$**  *%*******$%SSSSSS$**********%%**%************%*             @&*   
      !@##@$%%%%%%%%%%%$%SSSS#@******************************%!         *&#*S$  
          %%*************$$@%*********************************%%        !SSSSS! 
  !!      *%****************************************************%       %SSSS#  
  **!   ! *%********************************%***********%*********      #SSS*@  
  * *!  %*$%%%**********%$***%**************%%*******$***$*******%*    *SS**&   
  *  !* %!!!*$*********%$&%**$%**************$*******%%**$********%*!*%###@%    
  !!  !!%$**%%***********%***$**%************$*******%%**%*********$%**!        
   *!  !!!%$****************%%**$*************$******%%**$*********%            
   %*!!!!! *%**************%%**$**************$******$**%%*********%            
  *%%**!!!*%**************%%*%%%%%**%%%%%***%$%**************%%****%            
  %*******%*************%@$$$$%%%**%%*******%%*************%%%******            
  @********************%@%*%%**%%**$*********%**********%%%*******%!            
  @%***********$@*%***$$$@$$%$*%%**$*********$%%%%%%$%! !%********$!            
   **%%%*****$&S&***%$%%%%%$$*! !! !%********@%%%%%%$    *%*******%*            
       !******%****!*$%%%%%%%       %********%$%$%%%$*    *%******%*            
                    *$%%%%%$!       **********!$$%%%$*     %%%%%%*%*            
                    $$$$%%%$        !%**%%%%%%%%%%%$*       %*******            
                   %$$$$%%$*         %%%%***%%@%%%%$        *%*****%            
                  !$$$$$%%$*         *%%%%%%%%@$%%%$        %******%*           
                !%$%%%%%%%$*         !%*%%%%%*$@$%%%       %$%**%***%           
               %@$$%$@%%%%%%         !%*****%*%$!!!       !@$**$$*%%$           
              *@%*%@@$%$$$$$         $*$%***%$%**          !*!!**!!*!           
               !**!*******!!        !**%!!!!!*%!*                               
                                        !!!!!!          
        
        Quote1: Practice like you've never won, Play like you've never lost.  
        Quote2: I will win no immediately , bt definetly.
*/  
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

typedef pair <int, int> pii;
typedef pair <ll,ll> pll;
typedef vector <int> vint;
typedef vector <ll> vll;
typedef vector <pii> vpii;
typedef vector <pll> vpll;
typedef vector <string> vs;
typedef priority_queue <int> pqi;

#define FOR(i, a, b) for(int i = a; i < (b); ++i)
#define F0R(i, a) for(int i = 0; i < (a); ++i)
#define FORd(i, a, b) for(int i = (b) - 1; i >= a; --i)
#define F0Rd(i, a) for(int i = (a) - 1; i >= 0; --i)
#define FORk(i,a,b,k) for(int i = a; i < (b); i=i+k)
#define trav(x, a) for(auto& x : a)

#define pb push_back
#define mkp make_pair
#define vbb vector <bool>
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

#define F first
#define S second
#define rz resize
#define sz(a) (int)(a.size())
#define cls(a) a.clear()

const int mod = 1e9+7;
const long long inf = 1e18;
const char nl = '\n';

void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 

}

// void solution();                 

// int main()
// {
//     // CP();
//     int t=1; cin>>t;
//     while(t--)
//         solution();
    
//     return 0;
// }

// void solution(){
//    ll num,a,b,sum=0,p;
//    cin>>num>>a>>b;
//    sum=a+b;
//    sum+=(sum%10);
//    if(sum<=3){
//        (sum%3==0)?(cout<<"YES"<<endl) : cout<<"NO"<<endl;
//    }
//    else{
//       if(sum % 5 != 0){
                    
//                     // sum += sum % 10;
//                     for(long i=(num-3)%4; i>0; i--){
//                            sum += sum % 10;
//                     }
//        int cont4 = (num-3)/4;
//        sum+=(20*cont4);
//       (sum%3==0)?(cout<<"YES"<<endl) : cout<<"NO"<<endl;

//    }
// }
// } 
// #include <bits/stdc++.h>
// using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int t;
    cin>>t;
    while(t--){
          long k;
          long d0,d1;
          cin >> k >> d0 >> d1;
          long sum = d0 + d1;
          if(k >= 3){
              if(sum % 5 != 0){
                    
                    sum += sum % 10;
                    for(long i=(k-3)%4; i>0; i--){
                           sum += sum % 10;
                    }
          sum += ((k-3)/4)*20;
           }
           else{
          	    
          cout << "NO" << "\n";
          
          continue;
          	        
          }
          
          }
          
          if(sum % 3 == 0) 
          cout << "YES" << "\n";
          
          else 
          cout << "NO" << "\n";
          
     }
          
    
    
    
    return 0;
}



