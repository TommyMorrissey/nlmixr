#include <math.h>
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
extern long dadt_counter;
extern double InfusionRate[99];
extern double *par_ptr;
extern double podo;
extern double tlast;

// prj-specific differential eqns
void RxODE_mod_file4b7846bb7960_dydt(unsigned int neq, double t, double *__zzStateVar__, double *__DDtStateVar__)
{
double
	abs,
	KA,
	centr,
	K21,
	periph,
	K12,
	K10;

	KA = par_ptr[0];
	K21 = par_ptr[1];
	K12 = par_ptr[2];
	K10 = par_ptr[3];

	abs = __zzStateVar__[0];
	centr = __zzStateVar__[1];
	periph = __zzStateVar__[2];

	__DDtStateVar__[0] = InfusionRate[0] + - KA * abs;
	__DDtStateVar__[1] = InfusionRate[1] + KA * abs + K21 * periph - K12 * centr - K10 * centr;
	__DDtStateVar__[2] = InfusionRate[2] + - K21 * periph + K12 * centr;
    dadt_counter++;
}

// prj-specific derived vars
void RxODE_mod_file4b7846bb7960_calc_lhs(double t, double *__zzStateVar__, double *lhs) {
double
	abs,
	KA,
	centr,
	K21,
	periph,
	K12,
	K10;

	KA = par_ptr[0];
	K21 = par_ptr[1];
	K12 = par_ptr[2];
	K10 = par_ptr[3];

	abs = __zzStateVar__[0];
	centr = __zzStateVar__[1];
	periph = __zzStateVar__[2];


}
