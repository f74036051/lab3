#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;

 void sort(std::vector<int>&weight)
{
 int insert,moveltem;
  for(int next=1;next<=weight.size();++next){
    insert=weight.at(next);
    moveltem=next;
    
      while((moveltem>0)&&(weight.at(moveltem-1)>insert))
    {
      weight.at(moveltem)=weight.at(moveltem-1);
      --moveltem;
    }
     weight.at(moveltem)=insert;
  }
  
}//end function
int main(){
 
 
 int num;
 int i=0;
 int j;
 int sum=0;
 
 ifstream inFile("file.in",ios::in);
 if(!inFile){
  cerr<<"file can't be opened"<<endl;
   exit(1);
 }
  inFile>>num;
  const int size=num;
  vector<int>weight(size);
  int wt;
  while(inFile>>wt){
     weight.at(i)=wt;
     i++;
   }
  sort(weight.begin(),weight.end());
 for(j=size-1;j>(size-6);j--){
  sum=sum+weight.at(j);
 }
 
 cout<<sum<<endl;
return 0;
}

