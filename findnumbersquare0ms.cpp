#include<iostream>
#include<math.h>
using namespace std;
bool judgeSquareSum(int c) {
        if(c<3) return true;
        int s=0;
        int e =sqrt(c);

        while(s<= e){
            int x = c- s*s;

            if(x == e*e) return true;
            if(x<e*e){
                e--;
            }else{
                s++;
            }
        }

        return false;
    }
int main()
{

    int n;
    cin>>n;
    cout<<judgeSquareSum(n);
}
