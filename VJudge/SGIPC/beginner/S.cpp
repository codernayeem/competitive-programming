#include<iostream>
using namespace std;
 
int main(){
    int t, n, m, i, j;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        
        char arr[n][m];
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
                cin >> arr[i][j];

        for(j=0; j<m; j++){
            int star_c = 0;
            for(i=0; i<n; i++){
                
                if(arr[i][j] == 'o') star_c = 0;
                else if(arr[i][j] == '*') star_c++;
                else if(star_c){
                    arr[i-star_c][j] = '.';
                    arr[i][j] = '*';
                }

            }
        }

        for(i=0; i<n; i++){
            for(j=0; j<m; j++)
                cout << arr[i][j];
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}