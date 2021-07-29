/*                          
              Technical Amanjeet ( youtube channel )

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


 // ****************** Function for taking input and output from file **********

void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 

}

// ****** INitialistion of solution funtion ***********
void solution();   

int distinct(int* arr, int len)
{
    set<int> S; // declaring a set container using STL
    for (int i = 0; i < len; i++) {
        S.insert(arr[i]); // inserting all elements of the
                          // array into set
    }
    int ans = S.size(); // calculating the size of the set
    return ans;
}

// *********** Program execution starts from here ************

int main()
{
    // CP();
    int t; 
    cin>>t;
    while(t--)
        solution();
    
    return 0;
}

// *********** Main section for writing code starts here ***************

void solution(){
    // ******** start writing code from here ***********
  int a;
  cin>>a;
  int arr[a];
  int len=sizeof(arr)/sizeof(arr[0]);
  cout<<distinct(arr,len)<<endl;
}   



