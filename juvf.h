#define pi 3.1415926535897932	//Բ����
double hhlx(double** arr, int na);	//����ʽ
double** inv(double** a, int n);	//�����
double** AB(double** a, int ma, int na, double** b, int mb, int nb);	//����˷�
double** TA(double** a, int ma, int na);	//����ת��
double mod(double a, double b);	//ȡ��
double mean(double* xulx, int na);	//����ƽ��ֵ
double amax(double* xulx, int na);	//�������ֵ
double amin(double* xulx, int na);	//������Сֵ
double stdd(double* xulx, int na);	//�����׼��
double dotpro(double* xulx1, double* xulx2, int na);	//���
double* crosspro(double* xulx1, double* xulx2);	//���
double* nor(double* xulx, int na);	//������һ��
double r2d(double rad);