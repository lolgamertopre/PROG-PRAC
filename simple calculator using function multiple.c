// Addition
double add(double a, double b) {
    return a + b;
}

// Subtraction
double subtract(double a, double b) {
 return a - b;
}

// Multiplication
double multiply(double a, double b) {
 return a * b;
}
// Division
double divide(double a, double b) {
    if (b == 0) return -1;
    
return a / b;
}

// Main calculate function
double calculate(double a, double b, char op) {
 if (op == '+') {
     return add(a,b);
 }
  else if (op == '-') {
     return subtract (a,b);
}
  else if (op == '*') {
     return multiply (a,b);
 }
 else if (op == '/') {
     return divide (a,b);
  } else {
     return -2;
  }
}