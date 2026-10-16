#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={45, 12, 89, 32, 7, 64};

    int min=vec[0];
   int max=vec[0];

   for(auto it=vec.begin();it!=vec.end();it++){
    if(*(it)>=max){
      max= *(it);
    }
    if(*(it)<=min){
        min=*(it);
    }
   };
   cout<<max<<" "<<min;

};