// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5]={10,20,30,40,50};
//     int length=sizeof(marks)/sizeof(marks[0]);
//     cout<<"Length of array = "<<length<<endl;
//     // for(int i=0;i<5;i++){
//     //     cout<<marks[i]<<endl;
//     // }
//     // cout<<marks[0]<<endl;
//     // cout<<marks[1]<<endl;

//     return 0;
// }
#include <iostream>
using namespace std;
int main(){

int marks[]={10,20,30,40,50};
cout<<"Total size of arr = "<<sizeof(marks)<<endl;

cout<<"Size of element = "<<sizeof(marks[0]);

int length=sizeof(marks)/sizeof(marks[0]);
cout<<"Length of array = "<<length<<endl;
return 0;

}
