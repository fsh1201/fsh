#define pi 3.1415926535897932	//Բ����
/*����ʽ*/
double hhlx(double** arr, int na);
/*��������*/
double** inv(double** a, int n);
/*�������*/
double** AB(double** a, int ma, int na, double** b, int mb, int nb);
/*����ת��*/
double** TA(double** a, int ma, int na);
/*ȡ��*/
double mod(double a, double b);
/*����ƽ��ֵ*/
double mean(double* xulx, int na);
/*�������ֵ*/
double amax(double* xulx, int na);
/*������Сֵ*/
double amin(double* xulx, int na);
/*�����׼��*/
double stdd(double* xulx, int na);
/*���*/
double dotpro(double* xulx1, double* xulx2, int na);
/*���*/
double* crosspro(double* xulx1, double* xulx2);
/*������һ��*/
double* nor(double* xulx, int na);
/*����ת�Ƕ�*/
double r2d(double rad);