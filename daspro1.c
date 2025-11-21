#include <stdio.h>
enum bln {jan=1,feb,mar,apr,mei,jun,jul,agt,sep,okt,nop,des};

int main()
{
    enum bln bln_sekarang, bln_kemarin;
    bln_sekarang=okt;
    bln_kemarin=bln_sekarang-1;
    printf("sebelum bulan ke-%d adalah bulan ke-%d.\n", bln_sekarang, bln_kemarin);

    return 0;
}
