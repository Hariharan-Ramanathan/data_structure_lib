int char_comparator(char a, char b, char* var) {
    if(var == "max")    {
        return (a > b)? 1 : 0; 
    }
    else    {
        return (a < b)? 1 : 0; 
    }
}

int int_comparator(int a, int b, char* var) {
    if(var == "max")    {
        return (a > b)? 1 : 0; 
    }
    else    {
        return (a < b)? 1 : 0; 
    }
}

int double_comparator(double a, double b, char* var) {
    if(var == "max")    {
        return (a > b)? 1 : 0; 
    }
    else    {
        return (a < b)? 1 : 0; 
    }
}

int float_comparator(float a, float b, char* var) {
    if(var == "max")    {
        return (a > b)? 1 : 0; 
    }
    else    {
        return (a < b)? 1 : 0; 
    }
}