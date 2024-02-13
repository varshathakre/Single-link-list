#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;
int main()
{
    forward_list<int> f1;
    forward_list<int> f2 {150,250,450,550,650};
    f1.push_front(15);
    f1.push_front(15);  /*duplicate value sath m ho to unique kam krta h vrna nhi  */
    f1.push_front(3);
    f1.push_front(35);

//     f1.pop_front();
//      cout<<"list f1 \n";
//    for(auto p:f1)
//    {
//     cout<<p<<"\t";
//    }

//    cout<<"\n insert after \n";
//    f1.insert_after(f1.begin(),102);
//     for(auto p:f1)
//    {
//     cout<<p<<"\t";
//    }

//    f1.reverse();
//    for(auto p:f1)
//    {
//     cout<<p<<"\t";
//    }

//    f1.remove(35);
//    for(auto p:f1)
//    {
//     cout<<p<<"\t";
//    }

//    f1.unique();
//    cout<<"list f1 \n";
//    for(auto p:f1)
//    {
//     cout<<p<<"\t";
//    }
    
    // f1.insert_after(f1.begin(),100);
    // cout<<"insert after \n";
    //  for(auto p:f1)
    //     {
    //     cout<<p<<"\t";
    //     }



      f1.assign({100,300,200,600,500});
     f2.clear();
    cout<<"after assingn \n";
    for(auto p:f2)
    {
        cout<<p<<"\n";
    }

    // f1.splice_after(f1.begin(),f2);
    // cout<<"after spliceing \n ";
    //  for(auto p:f2)
    //  {
    //      cout<<p<<"\t";
    //  }








}