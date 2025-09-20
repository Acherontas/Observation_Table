#include <iostream>
#include <math.h>
#include <iomanip>
#include "pando_tra.h"
#include "patter.h"
#include "range_gen.h"
#include "how_it_works.h"
#include "of_cdis.h"
using namespace std;

int cdi=0;
int fl=0;
int mnu=0;
int m;
int cto=1;
string mn;
long long int cd(long long int n){
    m=n%10;
    cdi+=m;
    fl=-1;
    cto+=1;
    if(n/10==0){
        fl=1;
               if(fl==1){}
               return cdi;   //return 1;
    }
    else
    {
        cd(n/10);
    }
    B:
    return cdi;
}
int cld=0;
int isdc[100];
int isdcx=0;
int cdis(long long int nn,int dkp)
{
    cdi=0;
         int cdl=cd(nn);
         if(dkp==1){
         cout<<"\n";
         cout<<"Initial sum = " << cdl <<"\n";
         isdc[isdcx]=cdl; isdcx+=1;
         cout<<"\n";}
         cld=cdl;
         if(cdl>9){
             if(dkp==1){
             cout<<"---------Internal Sum -----------\n";}
             cdi=0;
             while(cdl>9){
                cdi=0;cdl=cd(cdl);
                    if(dkp==1){
                        cout<<"|---> " << cdl <<"\n";
                        isdc[isdcx]=cdl; isdcx+=1;
                    }
             if(cdl<=9){
                 if(dkp==1){
                    cout<<"|---> Exiting with " << cdl <<"\n";
                    //isdc[isdcx]=cdl; isdcx+=1;
                    cout<<"--------End of Sum------------\n";}
               break;
               }
             }
         }
         if(dkp==1){
         cout<<"\n";}
         return cdl;
}


int main(int argc,char** argv)
{
    how_it_works *hiw=new how_it_works();
    pando_tra *pdt=new pando_tra();
    Patter *pttr=new Patter();
    cout<<"for every voyeristic behaviour out there its an observation table where the result get extracted from \n";
    cout<<"reading the last two number if the sum is not 3 6 9 with the result almost the cell nearby with \n";
    cout<<"a possible +-1 value its a good beginning \n";
    cout<<"τιποτα δεν ειναι παρατηρησιμο μεχρι να το παρατηρησεις \n";
    cout<<"u enter the number to start , ";
    cout<<"u can set custom values press -5  default values is 1 and 3 or -4 to continue something like that \n";
    cout<<"Πατα 1 για να εμφανίσεις το πως δουλεύει\n";
    int voitheia=0;
    int yp=-2;
    long long int x=0;
    x=stoll(argv[1]);
    long long int xx=x;
    cout<<"u enter x ::== "; cout<<x <<"\n";
    long long int tmp;
    int tms=0;
    cout<<"\n";
    tmp=x;
    long long int ct_res=0;
    long long int lt_res=0;
    long long int l_res=0;
    long long int xli=0;
    yp=-1;
    int xiy;
    xiy=stoi(argv[2]);
    cout<<"u want custom values with value of change " << xiy <<" with ";
    int start_custom=1;
    int end_custom=3;
    if(xiy==-5){
        cout<<"enter value for start " ;
        cin>>start_custom;
        cout<<"\n";
        cout<<"enter value for end ";
        cin>>end_custom;
        cout<<"\n";
    }
    voitheia=stoi(argv[3]);
    if(voitheia==1){cout<<"\n";hiw->how_to(); cout<<"\n";}
    if(xiy==-4){start_custom=1;end_custom=3;}
    cout<<"using start_custom="<<start_custom << " end_custom="<<end_custom<<"\n";
    long long int remove_one=xx-start_custom;
    long long int add_one=xx+start_custom;
    long long int remove_thr=xx-end_custom;
    long long int add_thr=xx+end_custom;
    range_gen *rgn=new range_gen();
    rgn->gen_them(xx,start_custom,end_custom);
    //cout<<"ur x " << xx << " with " << remove_one << " " << add_one <<" " << remove_thr << " "<< add_thr <<"\n";
    cout<<"\n";
    cdi=0;
    ct_res=cdis(xx,0);
    cout<<xx << " and " << ct_res<<" as sum of digits \n";
    long long int ao;
    long long int ado;
    long long int rthr;
    long long int athr;
    ao=xx+remove_one;
    ado=xx+add_one;
    rthr=xx+remove_thr;
    athr=xx+add_thr;
    cout<<"\n";
    cout<<"@1 :: "<<1 << "|" <<4 << "|" << 2 << "|"<< 8 << "|" << 5 << "|" <<7 <<" \n";
    cout<<"@2 :: "<<2 << "|" <<8 << "|" << 5 << "|"<< 7 << "|" << 1 << "|" <<4 <<" \n";
    cout<<"@3 :: "<<4 << "|" <<2 << "|" << 8 << "|"<< 5 << "|" << 7 << "|" <<1 <<" \n";
    cout<<"@4 :: "<<5 << "|" <<7 << "|" << 1 << "|"<< 4 << "|" << 2 << "|" <<8 <<" \n";
    cout<<"@5 :: "<<7 << "|" <<1 << "|" << 4 << "|"<< 2 << "|" << 8 << "|" <<5 <<" \n";
    cout<<"@6 :: "<<8 << "|" <<5 << "|" << 7 << "|"<< 1 << "|" << 4 << "|" <<2 <<" \n";
    cout<<"@7 :: "<<1 << "|" <<4 << "|" << 2 << "|"<< 8 << "|" << 5 << "|" <<7 <<" \n";
    cout<<"@8 :: "<<2 << "|" <<8 << "|" << 5 << "|"<< 7 << "|" << 1 << "|" <<4 <<" \n";
    cout<<"\n";
    int ab[3];
    int pab[3];
    cdi=0;
    ct_res=cdis(ado,0); pab[0]=ct_res;
    rgn->show_two();
    cout <<" ---> "<< rgn->range_two[0] << " + " << rgn->range_two[1] << " " ;
    cout<<" ::== ";
    cout<< ado <<" of "  <<  " / " << ct_res << "  || ";
    cout<<"\n";
    cdi=0;
    ct_res=cdis(ao,0);pab[1]=ct_res;
    rgn->show_one();
    cout <<" ---> "<< rgn->range_one[0] << " + " << rgn->range_one[1] << " " ;
    cout<<" ::== ";
    cout<< ao << " / " << ct_res << "  || ";
    cout<<"\n";
    cdi=0;
    ct_res=cdis(athr,0);pab[2]=ct_res;
    rgn->show_three();
    cout <<" ---> "<< rgn->range_three[0] << " + " << rgn->range_three[3] << " " ;
    cout<<" ::== ";
    cout<< athr << " / " << ct_res << " || ";
    cout<<"\n";
    ab[0]=ct_res;
    cdi=0;
    ct_res=cdis(rthr,0);pab[3]=ct_res;
    ab[1]=ct_res;
    rgn->show_four();
    cout <<" ---> "<< rgn->range_four[0] << " + " << rgn->range_four[3] << " " ;
    cout<<" ::== ";
    cout<< rthr << " / " << ct_res <<" || ";
    cout<<"\n";
    long long int ofi=rgn->range_five[0];
    long long int ofiend=rgn->range_five[6];
    long long int oficalc=ofi+ofiend;
    cdi=0;
    ct_res=cdis(oficalc,0);
    rgn->show_five();
    cout <<" ---> "<< rgn->range_five[0] << " + " << rgn->range_five[6] << " " ;
    cout<<" ::== ";
    cout<<oficalc << " / "<<ct_res <<"\n";
    long long int rgf_t;
    rgf_t=rgn->range_five[3] + rgn->range_five[3];
    cout<<"or " << rgn->range_five[3] << " + " << rgn->range_five[3] << " ::== " << rgf_t <<"\n";
    cdi=0;
    ct_res=cdis(oficalc,1);
    cout<<"\n";
    int rspab=0;
    rspab=pttr->ret_num(pab[0],pab[1],pab[2],pab[3]);
    cout<<"according to pattern the possible sum will be " << rspab <<"\n";
    cout<<"\n";
    cout<<"according to cdis of main number \n";
    of_cdis *ofcd=new of_cdis();
    ofcd->find_it(isdc,isdcx,rspab);
    cout<<"\n";
    cout<<"will pass values " << ab[1] << " and " << ab[0] <<"\n";
    cout<<"\n";
    cout<<"using orizontia unreverse method \n";
    int voupdt=0;
    voupdt=pdt->orizontia_unreverse(ab[1],ab[0],rspab);
    cout<<"exiting with value of " << voupdt <<"\n";
    cout<<"\n";
    cout<<"using orizontia reverse method \n";
    int vroupdt=0;
    vroupdt=pdt->orizontia_reverse(ab[1],ab[0],rspab);
    cout<<"exiting with value of " << vroupdt <<"\n";
    cout<<"\n";
    cout<<"using katheta unreverse method \n";
    int koupdt=0;
    koupdt=pdt->katheta_unreverse(ab[1],ab[0],rspab);
    cout<<"exiting with value of " << koupdt <<"\n";
    cout<<"\n";
    int kroupdt=0;
    cout<<"using orizonta reverse method \n";
    kroupdt=pdt->katheta_reverse(ab[1],ab[0],rspab);
    cout<<"exiting with value of " << kroupdt <<"\n";
    cout<<"\n";
    return 0;
}
