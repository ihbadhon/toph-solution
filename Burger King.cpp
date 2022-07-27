#include <iostream>

using namespace std;

//Driver code
int main()
{
    int t, n, k, b;
    int arr[101], test=1;
    cin >> t;

    while(t--){
        cin >> n >> k >> b;
        int ans=0;
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }

        for(int i=1; i<=n; i++){
            int now = arr[i];
            if(now == b && k==1){
                ans++;
            }
            for(int j=i+1; j<=n && k>=2; j++){
                now = arr[i] + arr[j];
                if(now == b && k==2){
                    ans++;
                }
                for(int l= j+1; l<=n && k==3; l++){
                    now = arr[i] + arr[j] +arr[l];
                    if(now == b && k==3){
                        ans++;
                    }
                }
            }
        }
        cout << "Case " << test++ << ": " << ans << endl;
    }

    return 0;
}
