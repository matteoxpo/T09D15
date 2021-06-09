void main()
{
    double *data;
    int n;

    printf("LOAD DATA..."); 
    input(data, n);

    printf("RAW DATA:");
    output(data, n);

    printf("NORMALIZED DATA:");
    normalisation(data, n);
    output(data, n);
    
    printf("SORTED NORMALIZED DATA:");
    sort(data, n);
    output(data, n);
    
    printf("FINAL DECISION:");
    //make_decision(data, n);
    //...
    
}
