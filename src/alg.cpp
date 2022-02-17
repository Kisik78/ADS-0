// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    
    if (a % b == 0)
        return a;
    
    if (b % a == 0)
        return b;
    
    if (a > b)
        return (a, b % a);
        return (a % b, b);
    
}
