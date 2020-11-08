int start = 0;
    int end = l - 1;

    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
    // int A[6] = {8,6,3,2,1,0};

    cout << "The " << n << "th largest element is " << A[n - 1];