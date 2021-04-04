#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100050
const int INF = 0x3f3f3f3f;
char s[MAX_N], t[MAX_N], p[MAX_N];

void solve()
{

    cin >> s >> t;
    int len = strlen(s);

    int cnt = 0;
    int flag = 0;
    for(int i = 0 ; i < len ; i++)
    {
        if(s[i] != t[i])
        {
            cnt++;
            if(flag)
            {
                p[i] = s[i];
                flag = 0;
            }
            else
            {
                p[i] = t[i];
                flag = 1;
            }
        }
        else
            p[i] = s[i];
    }

    if(cnt % 2)
        cout<<"impossible"<<endl;
    else
        printf("%s\n", p);

}

int main(){
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	
	solve();   


	return 0;
}