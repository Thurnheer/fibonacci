// Copyright by Leica Geosystems AG, Heerbrugg

extern "C" int fibonacci(int n) {
    if(n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
