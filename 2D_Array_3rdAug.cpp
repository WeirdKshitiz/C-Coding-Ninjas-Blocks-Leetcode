#include <iostream>
using namespace std;
int main(){
// int arr[3][3];
int arr[3][3]={{0,1,2},{3,4,5},};


// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
// cout<<arr[i][j]<<endl;
// }

// }


// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){.
// cin>>arr[i][j];
// }

// }

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
// cout<<arr[i]<<" ";
cout<<*(*(arr+i)+j)<<" ";
}
cout<<endl;
}

return 0;
}