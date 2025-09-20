#include "patter.h"

Patter::Patter(){}//ctor
Patter::~Patter(){}//dtor
Patter::Patter(const Patter& other){}//copy ctor
// handle self assignment//assignment operator
Patter& Patter::operator=(const Patter& rhs){if (this == &rhs) return *this; return *this;}

int Patter::ret_num(int a,int b ,int c,int d){

        if(pat_one[0]==a && pat_one[1]==b && pat_one[2]==c && pat_one[3]==d){return pat_one[4];}
        if(pat_two[0]==a && pat_two[1]==b && pat_two[2]==c && pat_two[3]==d){return pat_two[4];}
        if(pat_thre[0]==a && pat_thre[1]==b && pat_thre[2]==c && pat_thre[3]==d){return pat_thre[4];}
        if(pat_tes[0]==a && pat_tes[1]==b && pat_tes[2]==c && pat_tes[3]==d){return pat_tes[4];}
        if(pat_pente[0]==a && pat_pente[1]==b && pat_pente[2]==c && pat_pente[3]==d){return pat_pente[4];}
        if(pat_exi[0]==a && pat_exi[1]==b && pat_exi[2]==c && pat_exi[3]==d){return pat_exi[4];}
        if(pat_efta[0]==a && pat_efta[1]==b && pat_efta[2]==c && pat_efta[3]==d){return pat_efta[4];}
        if(pat_okto[0]==a && pat_okto[1]==b && pat_okto[2]==c && pat_okto[3]==d){return pat_okto[4];}
        if(pat_ennia[0]==a && pat_ennia[1]==b && pat_ennia[2]==c && pat_ennia[3]==d){return pat_ennia[4];}
        if(pat_ofdigitsum[0]==a && pat_ofdigitsum[1]==b && pat_ofdigitsum[2]==c && pat_ofdigitsum[3]==d){return pat_ofdigitsum[4];}

}
