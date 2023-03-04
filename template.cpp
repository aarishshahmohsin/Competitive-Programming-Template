#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
    #include </home/aarish/.config/debug.h>
    #define debug(args...)            {dbg,args; cerr<<endl;}
#else
    #define debug(args...)              // Just strip off all debug tokens
#endif

#ifdef file_inp
    void from_file() {
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        freopen("error.txt", "w", stderr);
    }
#else
    void from_file() { }
#endif

struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {    
        cerr<<v<<" ";    
        return *this;    
    }
} dbg;

void run_case() {
}

int main() {
    from_file();
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        run_case();
    }


    return 0;
}
