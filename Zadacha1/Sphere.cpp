#include <cmath>
#include "Sphere.h"

double sq_okr_sf(int r) {
	double sq_okr = 0;
	sq_okr = 4 * 3.14 * (pow(r, 2));
	return sq_okr;
}

double ob_shara(int r) {
	double ob_shar = 0;
	ob_shar = 4 / 3 * 3.14 * (pow(r, 3));
	return ob_shar;
}

double len_okr(int r) {
	double len = 0;
	len = r * 2 * 3.14;
	return len;
}

double sq_okr(int r) {
	double sq = 0;
	sq = pow(r, 2) * 3.14;
	return sq;
}