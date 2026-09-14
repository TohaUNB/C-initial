

    // int *scores = malloc(number * sizeof(int)); // will give garbage values
    int *scores = calloc(number,  sizeof(int)); //sets to zero

    if(scores == NULL){
        printf("no memory allocated\n");
        return 1;
    }