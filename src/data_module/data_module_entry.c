void main()
{
    double *data;
    int n;
    
    //Don`t forget to allocate memory !

    input(data, n);

    if (normalisation(data, n))
        output(data, n);
    else
        printf("ERROR");  
}
