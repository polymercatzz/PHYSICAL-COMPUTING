#include<stdio.h>
#include<string.h>
int main(){
    char lot_ni[7],lot_pus[7],p_las[3],p_f_3_1[4],p_f_3_2[4],p_b_3_1[4],p_b_3_2[4];
    char m_3_f[4],m_2[3],m_first[7],m_3_b[4],first[7];
    int lot,pus_lot,ni_lot,p_first,piz=0;
    scanf("%d %s %s %s %s %s ",&p_first,&p_las,&p_f_3_1,&p_f_3_2,&p_b_3_1,&p_b_3_2);
    scanf(" %d",&lot);
    ni_lot = p_first-1;
    pus_lot = p_first+1;
    if (pus_lot>=1000000){
        pus_lot = 0;
    }
    if (ni_lot < 0){
        ni_lot = 999999;
    }
    sprintf(lot_ni, "%06d",ni_lot);
    sprintf(lot_pus, "%06d",pus_lot);
    sprintf(m_first, "%06d",lot);
    sprintf(first, "%06d",p_first);
    sprintf(m_3_f, "%c%c%c",m_first[0],m_first[1],m_first[2]);
    sprintf(m_3_b, "%c%c%c",m_first[3],m_first[4],m_first[5]);
    sprintf(m_2, "%c%c",m_first[4],m_first[5]);
    if(!strcmp(m_first,first)){
        piz += 6000000;
    }
    if(!strcmp(lot_ni,m_first) || !strcmp(lot_pus,m_first)){
        piz += 100000;
    }
    if(!strcmp(m_3_f,p_f_3_1)){
        piz += 4000;
    }
    if(!strcmp(m_3_f,p_f_3_2)){
        piz += 4000;
    }
    if(!strcmp(m_3_b,p_b_3_1)){
        piz += 4000;
    }
    if(!strcmp(m_3_b,p_b_3_2)){
        piz += 4000;
    }
    if(!strcmp(m_2,p_las)){
        piz += 2000;
    }
    printf("%d", piz);
}