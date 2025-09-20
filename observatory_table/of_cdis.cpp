#include "of_cdis.h"

of_cdis::of_cdis(){}//ctor
of_cdis::~of_cdis(){}//dtor
of_cdis::of_cdis(const of_cdis& other){}//copy ctor
// handle self assignment//assignment operator
of_cdis& of_cdis::operator=(const of_cdis& rhs){if (this == &rhs) return *this; return *this;}

int of_cdis::find_it(int rdx[100],int siz,int dis_val){
      int lk=0,mk=0,kk=0,found=0,found_o=0,found_t=0,found_s=0,found_se=0;
      int fs=0;int fse=0;
      cout<<"\n";
      cout<<"using value of ::== " << dis_val <<"\n";
      for(int i=0;i<=siz-1;i++){
         found=0;
         found_o=0;
         found_t=0;
         found_s=0;
         found_se=0;
         lk=rdx[i]/2;
         mk=rdx[i]*2;
         kk=rdx[i]*1;
         fs=rdx[i]+1;
         fse=rdx[i]-1;
         if(lk==dis_val){found=1;}
         if(mk==dis_val){found_o=1;}
         if(kk==dis_val){found_t=1;}
         if(fs==dis_val){found_s=1;}
         if(fse==dis_val){found_se=1;}
         cout<<"@i "<< i <<" of number " << rdx[i] <<" ::== of result " << " | FOUND \n" ;
         cout<<" -------> /2 ::== " << lk <<" | " << found <<"\n";
         cout<<" -------> *2 ::== " << mk <<" | " << found_o <<"\n";
         cout<<" -------> *1 ::== " << kk <<" | " << found_t <<"\n";
         cout<<" -------> +1 ::== " << fs <<" | " << found_s <<"\n";
         cout<<" -------> -1 ::== " << fse <<" | " << found_se <<"\n";
         cout<<"-------------------------\n";
      }
   return 0;
}
