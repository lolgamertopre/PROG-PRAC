// Addition
double add(double a, double b) {
    return a + b;
}

// Subtraction
double  subtract(double a, double b) {
    return a - b;
}

// Multiplication
double multiply(double a, double b) {
 return a * b;
}

// Division
double divide(double a, double b) {
    if ( b == 0) return -1;
return a / b;
}

// Main calculate function
double calculate(double ( *op) (double, double),double a, double b) {
return op (a,b);
}