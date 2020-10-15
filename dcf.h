#include "juvf.h"

/*��ɢ��غ���*/
double DCF(double** arr1, double** arr2, int na1, int na2, double dt, double dtau);

/*DCF��ʱ���ӳ�*/
double timedelay_DCF(double** arr1, double** arr2, int n1, int n2, double tsyn);

/*��ɢ��غ���_Jurkevich*/
double DCF_jur(double** arr1, double** arr2, int na1, int na2, double dt, double dtau);

/*�ṹ����*/
double strf(double** arr1, double** arr2, int na1, int na2, double tau, double dt);

/*�ṹ������ʱ���ӳ�*/
double timedelay_strf(double** arr1, double** arr2, int n1, int n2, double tsyn);