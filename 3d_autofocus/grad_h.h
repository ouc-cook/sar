#pragma once

#include <vector>

const double delta = 1e-3;

// TODO: Nice doc comments
void gradH(double *phi_offsets, const double *Br, const double *Bi,
        double *grad, size_t K, size_t B_len);

double H(const std::vector<double> P, const double *Br, const double *Bi,
        size_t K, size_t B_len);

void populate_grad_k(double *grad_i, double H_not, const std::vector<double> P,
        const double *Br, const double *Bi, size_t K,
        size_t B_len);
