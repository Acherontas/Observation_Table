#ifndef OF_CDIS_H
#define OF_CDIS_H
#include <iostream>
using namespace std;

class of_cdis
{
    public:
        of_cdis();
        virtual ~of_cdis();
        of_cdis(const of_cdis& other);
        of_cdis& operator=(const of_cdis& other);
        int lir=2;
        int one=1;
        int find_it(int rdx[100],int siz,int dis_val);

    protected:

    private:
};

#endif // OF_CDIS_H
