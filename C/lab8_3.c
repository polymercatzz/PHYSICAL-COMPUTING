#include<stdio.h>
#include<string.h>
int main(){
    char lot_ni[7],lot_pus[7],p_las[3],p_f_3_1[4],p_f_3_2[4],p_b_3_1[4],p_b_3_2[4];
    int lot,pus_lot,ni_lot,p_first;
    scanf("%d %s %s %s %s %s ",&p_first,&p_las,&p_f_3_1,&p_f_3_2,&p_b_3_1,&p_b_3_2);
    scanf(" %d",&lot);
    ni_lot = p_first-1;
    pus_lot = p_first+1;
    if (pus_lot>=1000000){
        pus_lot = 0;
    }
    if (ni_lot < 0){
        ni_lot = 0;
    }
    sprintf(lot_ni, "%06d",ni_lot);
    sprintf(lot_pus, "%06d",pus_lot);
    printf("%d %s %s %s %s %s",p_first,p_las,p_f_3_1,p_f_3_2,p_b_3_1,p_b_3_2);
}