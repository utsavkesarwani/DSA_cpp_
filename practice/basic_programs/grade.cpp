//Take input marks of a student and print the grade according to marks 

#include <iostream>
using namespace std;
int main (){
    int m;
    cout<<"Enter the marks";
    cin>>m;
//     if(m>=91 && m<=100){
//         cout<<"Excellent";
//     }
//     else{
//         if(m>=81){
//             cout<<"Verygood";
//         }
//         else{
//             if(m>=71){
//                 cout<<"Good";
//             }
//             else{
//                 if(m>=61){
//                     cout<<"Can do better";
//                 }
//                 else{
//                     if(m>=51){
//                         cout<<"Average";
//                     }
//                     else{
//                         if(m>=40){
//                             cout<<"Below Average";
//                         }
//                         else{
//                             if(m<40){
//                                 cout<<"Fail";
//                             }
//                             else{
//                                 cout<<"Wrong input";
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }

    if(m>=91 && m<=100){
    cout<<"Excellent";
    }
    else if(m>=81){
    cout<<"Very Good";
    }

    else if(m>=71){
    cout<<"Good";
    }

    else if(m>=61){
    cout<<"Can do better";
    }

    else if(m>=51){
    cout<<"Average";
    }

    else if(m>=40){
    cout<<"Below Average";
    }

    else if(m<40){
    cout<<"Fail";
    }
    else{
    cout<<"Invalid input";
    }

}
