#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        long long x=0;
        long long y=0;
        if(a%2!=0||a<4){
            cout<<-1<<endl;
        }
      else  if(a%4==0&&a%6==0){
            x=a/6;
            y=a/4;

            cout<<x<<" "<<y<<endl;
        }
        else if(a%4==0&&a%6!=0){
           y=a/4;
           x=a/6 +1;

           cout<<x<<" "<<y<<endl;
        }
       else  if(a%4!=0&&a%6==0){
           x=a/6;
        y=a/4;
          cout<<x<<" "<<y<<endl;
        }

       else  if(a%6!=0&&a%4!=0&&a%2==0){
              x=a/6+1;
              y=a/4;

               cout<<x<<" "<<y<<endl;
        }

    }
    return 0;
}