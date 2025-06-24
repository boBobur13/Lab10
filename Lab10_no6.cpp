#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cin>>n;
  vector<int> vec(n);
 for(int i=0;i<n;i++){
 cin>>vec[i];
    }
 int min=vec[0],max=vec[0];
 double sum=0;
 for(int i=0;i<vec.size();i++){
 if(min>vec[i])min=vec[i];
 if(max<vec[i])max=vec[i];
 sum+=vec[i];
    }
  double avg=sum/vec.size();
  cout<<"Minimum="<<min<<" Maximum="<<max<<" Average="<<avg<<endl;
    return 0;
}
