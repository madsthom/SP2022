//
// Created by Mads Smed on 08/02/2022.
//

#ifndef SP2022_MAX_FUNCTIONS_H
#define SP2022_MAX_FUNCTIONS_H

double max(double a, double b);
double max(double *a, double *b);
double max(double &a, double &b);
double max(const double &a, const double &b);
double* max(double* &a, double* &b);
const double* max(const double* &a, const double* &b);
#endif //SP2022_MAX_FUNCTIONS_H
