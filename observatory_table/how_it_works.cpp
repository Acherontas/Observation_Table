#include "how_it_works.h"

how_it_works::how_it_works(){}//ctor
how_it_works::~how_it_works(){}//dtor
how_it_works::how_it_works(const how_it_works& other){}//copy ctor
// handle self assignment//assignment operator
how_it_works& how_it_works::operator=(const how_it_works& rhs){if (this == &rhs) return *this; return *this;}

int how_it_works::how_to(){
cout<<"Καλως ήρθατε στον βοηθό κατανόησης\n";
cout<<"for a weird reason the X/7 create a wonderfull non-rainbow scheme of almost all numbers \n";
cout<<"για εναν περιεργο λογο η πραξη χ/7 δημιουργει μια ωραια μη χρωματιστη σεμασιολογια σχεδον όλων των αριθμών\n";
cout<<"\n";
long double x;
string smi;
for(int i=1;i<=9;i++){
    smi.clear();
    x=(long double)i/(long double)7;
    cout<<std::setprecision(7) << x << "\n";
    stringstream ss ;
    ss<<std::setprecision(7) << x;
    smi+=ss.str();
        cout<<"             ";
        for(int i=2;i<=smi.size()-1;i++)
          {
             if(smi.at(i)!='.'){
             cout<< smi.at(i) << " | " ;
             }
          }
    cout<<"\n";
}
cout<<"so we get the table \n";
cout<<"ετσι έχουμε την δημιουργια του πινακα\n";
cout<<"the other point is the range of 4 numbers and the equal of them \n";
cout<<"το άλλο μισο είναι το εύρος των 4 αριθμών και το αποτέλεσμα της πρόσθεσης των ακραίων που ειναι ίδιο με των μεσσαίων\n";
cout<<"τέλος με την εμφάνιση όλων αφήνεται να εννοηθεί το αποτέλεσμα *2 /2 \n";
cout<<"\n";
return 0;
}
