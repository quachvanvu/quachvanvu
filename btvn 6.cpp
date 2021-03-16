#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=i; j<i+n; j++){
            if(j>n && j%n <= 10){
                cout << "   " << j%n ;
            }
            else if(j>=10){
            	cout<<"  "<<j;
			}
            else
                cout << "   "<< j ;
        }
        cout << endl;
    }
    return 0;
}
