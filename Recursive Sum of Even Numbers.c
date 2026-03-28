int isEven(int x){
    return (x % 2 == 0);
}

int sum(int x) { 
    if (x == 0) return 0;
    if (isEven(x))
        return x + sum(x - 1);
    else 
        return sum(x - 1);
}