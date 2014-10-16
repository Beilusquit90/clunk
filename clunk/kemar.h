#ifndef CLUNK_KEMAR_H
#define CLUNK_KEMAR_H

/*
This data is Copyright 1994 by the MIT Media Laboratory. 
It is provided free with no restrictions on use, 
provided the authors are cited when the data is used in any research or commercial application.

Bill Gardner billg@media.mit.edu and Keith Martin kdm@media.mit.edu
*/

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DO NOT EDIT THIS HEADER, IT'S AUTOGENERATED */
static const int KemarMinElevation = -40;
static const int KemarMaxElevation = 90;
static const int KemarElevationCount = 14;
static const int KemarElevationStep = 10;
static const unsigned KemarPoints = 513;

struct kemar_elevation_data {
	int elevation;
	unsigned samples;
	const float (*data)[2][513][2];
};

extern struct kemar_elevation_data kemar_data[14];

#ifdef __cplusplus
}
#endif

#endif
