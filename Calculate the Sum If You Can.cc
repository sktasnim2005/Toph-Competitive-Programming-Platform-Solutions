#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long result;
        if (n % 2 == 0) {
            result = -(n / 2);
        } else {
            result = -(n / 2) + 1;
        }
        cout << result << endl;
    }
    return 0;
}


// there is another way but there may be time limit 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int countO=0,countE=0;
      for(int i=1;i<=n;i+=2){
        countO++;
      }
      for(int i=2;i<=n;i+=2){
        countE++;
      }
      int x= countO - 2*countE;
      cout<<x<<endl;
    }

    return 0;
}
