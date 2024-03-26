#include<bits/stdc++.h>
using namespace std;

int main()
{
    //PAIR IN CPP STL

    // pair<string,int>p;
    //INSERT ELEMENT TO PAIR
    // p=make_pair("Subrat",50);//METHOD 1
  
    //METHOD-2
    // p.first="Subrat";
    // p.second=50;

    // cout<<p.first<<" "<<p.second<<endl;

    //INSERT MULTIPLE VALLUES INTO PAIR E.G name,age,weight
    // pair<string,pair<int,int> >p;
    //Methd 1 for inserting
    // p.first="Subrat";
    // p.second.first=20;
    // p.second.second=60;

    //Methd 2 for inserting
    // p=make_pair("Subrat",make_pair(20,50));
    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;



    //LIST(DOUBLE LL) IN CPP STL
    // list<int>l;
    // l.push_back(10);
    // l.push_back(20);
    // l.push_back(30);
    // l.push_back(40);
    // l.push_back(50);
    // // l.pop_back();
    // cout<<l.front()<<" "<<l.back()<<endl;
    // //PRINT ALL THE LIST ELEMENT THROUGH ITERATOR
    // for(auto it=l.begin();it!=l.end();it++)//Here we have used auto keyword because we don't know which type of data type "it" is..
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<"\n";
    // //Print list in reverse order
    // for(auto it=l.rbegin();it!=l.rend();it++)
    // {
    //     cout<<*it<<" ";
    // }

    //SET IN CPP STL
    // -It store only unique elements
    // -It stores values in sorted order(By default in ascending order)
    // -For the operation like search,insert, delete it takes O(log(N)) time complexity..
    // -Implementaion of set can be done from AVL tree..or also in most of the cases it is implemented by Red-Black Tree
    //Creation of Set
    // set<int> s;
    // s.insert(20);  //Insertio of elements 
    // s.insert(120);  //Insertio of elements 
    // s.insert(20);  //Insertio of elements 
    // s.insert(30);  //Insertio of elements 
    // s.insert(50);  //Insertio of elements 

    // for(auto it: s)
    // {
    //     cout<<it<<" ";//Dislay all elements of the set..
    // }
    //Method 2 for display elements
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<*it<<" ";
    // } 

    //print elements into descending order
    // set<int,greater<int>>s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(30);
    // s.insert(20);

    // for(auto it: s)
    // {
    //     cout<<it<<" ";
    // }
    //Serach the element in the set..
    //Find()->Return the iterator of that number
    // if(s.find(35)!=s.end())
    // cout<<"Present";
    // else
    // cout<<"Absent";

    //Method 2 for searching
    // if(s.count(50))cout<<"Present";
    // else
    // cout<<"Absent";

    //Delete the element
    // s.erase(20);
    // cout<<s.count(20); 

    //Insert classes into set
    // class Person{
    //     public:
    //     int age;
    //     string name;

    //     // bool operator<(const Person &other) const{
    //     //     return age<other.age;//It will print the age and name values in increasing order of age..like first 17 come and then 20.
    //     // }
    //     //For decreasing order pf age 
    //     bool operator<(const Person &other) const{
    //         return age>other.age;
    //     }
    // };
    // set<Person> s;
    // Person p1,p2;
    // p1.age=20,p1.name="Subrat";
    // p2.age=17,p2.name="Sambit";
    // s.insert(p1);
    // s.insert(p2);
    // for(auto it:s)
    // {
    //     cout<<it.age<<" "<<it.name<<endl;
    // }

    //MULTI SET IN CPP STL
    //-Duplicate element will be present
    //-Elements are in the sorted order
    //-Implimentation:- AVL Tree or Red-Black Tree
    // multiset<int> ms;
    // ms.insert(10);
    // ms.insert(20);
    // ms.insert(10);
    // ms.insert(20);
    // ms.insert(30);
    // ms.insert(40);
    // ms.insert(30);
    // ms.erase(10);//It will earse the element from the set either it is present once or more than once..
    // for(auto it : ms)
    // cout<<it<<" ";

    //Unordered Set
    //-It store unique elements
    //-It store data in unordered way..
    //-Insert,search,delete can be performed in O(1) T.C
    //-This set is implemented by the help of hashing..
    // unordered_set<int> s;
    // s.insert(20);
    // s.insert(10);
    // s.insert(30);
    // s.insert(50);
    // s.insert(50);
    // s.insert(60);
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    //Unordered MultiSet
    // unordered_multiset<int> s;
    // s.insert(20);
    // s.insert(10);
    // s.insert(30);
    // s.insert(50);
    // s.insert(50);
    // s.insert(60);
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<" ";
    // }


    //MAP IN CPP STL
    //-It stores data in key-value pair
    //Key should be unique..
    //-Search,insert,deleet operations takes only O(log(N)) times..
    //-Implemented by  AVL Tree..or Red Black tree..
    // map<int,int> m;
    // m.insert(make_pair(20,30));
    // m.insert(make_pair(30,20));
    // m.insert(make_pair(40,50));
    // m.insert(make_pair(50,60));
    // //Values can also be inserted like this
    // m[60]=70;
    // //Values can be updated like this..
    // m[20]=35;
    // //Remove an element in map
    // m.erase(30);
    // for(auto it=m.begin();it!=m.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    //MULTIMAP IN CPP STL
    // multimap<int,int>m;
    // m.insert(make_pair(20,30));
    // m.insert(make_pair(30,10));
    // m.insert(make_pair(40,40));
    // m.insert(make_pair(20,50));
    // //Values can also be inserted like this
    // // m[60]=70;//This thing is not allowed in multimap cause there is multiple key will be present and it will be confused to insert the value as there is multiple keys..
    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }


    //UNORDERED MAP
    //-Unique keys are present..
    //But order is not valid..
    //-Duplicate keys are not allowed..
    //-It is not necessary that elements will be in sorted form..
    //Implemented by hashing..
    //-Insert,delete,search takes constant time for execution..
    // unordered_map<int,int>m;
    // m.insert(make_pair(20,30));
    // m.insert(make_pair(30,10));
    // m.insert(make_pair(40,40));
    // m.insert(make_pair(20,50));
    // m[60]=70;//This operation is allowed in unordered map
    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    

    //UNORDERED MULTIMAP IN CPP STL
    // unordered_multimap<int,int>m;
    // m.insert(make_pair(20,30));
    // m.insert(make_pair(30,10));
    // m.insert(make_pair(40,40));
    // m.insert(make_pair(20,50));
    // //m[60]=70;//This operation is not allowed in unordered multimap
    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    


}