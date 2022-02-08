//
// Created by Mads Smed on 08/02/2022.
//
namespace lec2 {
    /**
     * Normal Copy-By-Value max function
     * @param a
     * @param b
     * @return max value
     */
        double max(double a, double b) {
            return a < b ? b : a;
        }

    /**
     * C-style Copy-By-Reference of a and b
     * @param a
     * @param b
     * @return max value
     */
        double max(double *a, double *b) {
            return *a < *b ? *b : *a;
        }
    /**
     * Call by C++ references
     * @param a
     * @param b
     * @return max value
     */
        double max(double &a, double &b) {
            return a < b ? b : a;
        }

    /**
     * Call by C++ const references instead of call-by-value parameters.
     * @param a
     * @param b
     * @return max value
     */
        double max(const double &a, const double &b) {
            return a < b ? b : a;
        }

    /**
     * Demonstrate that pointers to references do not exist (does not compile).
     * @param a
     * @param b
     * @return Does not compile
     */
    //double* max(double& *a, double& *b) {
    //    return a < b ? b : a;
    //}

    /**
     * references to pointers.
     * @param a
     * @param b
     * @return
     */
        double* max(double* &a, double* &b) {
            return a < b ? b : a;
        }

    /**
     * const references to pointers.
     * @param a
     * @param b
     * @return
     */
    const double* max(const double* &a, const double* &b) {
        return a < b ? b : a;
    }
}
