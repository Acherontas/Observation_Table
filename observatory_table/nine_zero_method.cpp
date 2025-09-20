#include "nine_zero_method.h"
#include "sum_cdi.h"
nine_zero_method::nine_zero_method(){} //ctor
nine_zero_method::~nine_zero_method(){}//dtor
nine_zero_method::nine_zero_method(const nine_zero_method& other){}//copy ctor
// handle self assignment//assignment operator
nine_zero_method& nine_zero_method::operator=(const nine_zero_method& rhs){if (this == &rhs) return *this; return *this;}

int nine_zero_method::ni_ze(long long int nmb){
     sum_cdi *smcd = new sum_cdi();
     string mki;
     mki.clear();
     mki+=to_string(nmb);
     cout<<"\n";
     cout<<"\n";
     //cout<<"converting to string " << mki << " with length of " << mki.size() <<"\n";
     int ofar_th[mki.size()]; int xstart=0;
     int ofnine[mki.size()];int ofn=0;
     int ofone[mki.size()];int ofne=0;
     int ar_int[mki.size()]; int ar_i=0;
     char ck;
     int lk=0;
     for(int i=mki.size()-1;i>=0;i--){
            ck=mki.at(ar_i);
            lk=stoi(&ck);
            ar_int[ar_i]=lk;
            ofar_th[xstart]=pow(10,i);
            ofnine[xstart]=ofar_th[xstart]-1;
            if(ofone!=mki.size()-1){ofone[xstart]=1;}
            if(ofone==0){ofone[xstart]=0;}
           // cout<<ofnine[xstart] << " + " << ofone[xstart] << " ::== " << ofar_th[xstart] <<" and int " << ar_int[ar_i] <<"\n";
            xstart+=1;
            ar_i+=1;
     }
     xstart=0;
     ar_i=0;
     long long int apraxi=0;
     long long int bpraxi=0;
     long long int ar_nine[mki.size()-1];
     long long int ar_of_nmb[mki.size()-1];
     int xst=0;
     for(int i=0;i<=mki.size()-1;i++){
         apraxi=ofnine[xstart]*ar_int[ar_i];
         bpraxi=ofone[xstart]*ar_int[ar_i];
         ar_nine[xst]=apraxi;
         ar_of_nmb[xst]=bpraxi;
         cout<<"( " << ofnine[xstart] << " + "  << ofone[xstart] <<" ) * " << ar_int[ar_i] <<" ::== \n";
         cout<< " ------> " << ofnine[xstart] << " * " << ar_int[ar_i] <<" ::== " << apraxi <<" + \n";
         cout<< " ------> " << ofone[xstart]  << " * " << ar_int[ar_i] <<" ::== " << bpraxi <<"\n";
         cout<<"\n";
         if(i<mki.size()-1){cout<< "       + " <<"\n";}
         if(i==mki.size()-1){cout<< "       = " <<"\n";}
         cout<<"\n";
         xstart+=1;
         ar_i+=1;
         xst+=1;
     }
    cout<<"\n";
    long long int nines=0;
    long long int non_nines=0;
    cout<<"Athroisma ton 9\n";
    for(int i=0;i<=mki.size()-1;i++){
       nines+=ar_nine[i];
       cout<<ar_nine[i] <<" + " ;
    }
       long long int rst=0;
       smcd->cdi=0;
       rst=smcd->cdis(nines,0);
       cout<<" ::== " << nines <<" with sum of digits " << rst <<"\n";
    cout<<"\n";
    cout<<"Athroisma ton mi 9\n";
    for(int i=0;i<=mki.size()-1;i++){
       non_nines+=ar_of_nmb[i];
       cout<<ar_of_nmb[i] <<" + " ;
    }
       rst=0;
       smcd->cdi=0;
       rst=smcd->cdis(non_nines,0);
       cout<<" ::== " << non_nines <<" with sum of digits " << rst <<"\n";
       long long int rech=0;
       rech=nines+non_nines;
       cout<<"\n";
       cout<<"with recheck of " << nines  << " + " << non_nines <<" ::== " << rech <<"\n";
       cout<<"\n";
return 0;
}
