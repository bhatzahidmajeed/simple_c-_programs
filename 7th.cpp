// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     // int i;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     while(n>0){
//         cout<<n<<endl;
//         cin>>n;
//     }
//     return 0;

// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;
    }
    while(n>10);
    return 0;
}