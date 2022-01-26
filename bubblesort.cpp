void bubbleSort(vector<int>& v)
{
    int n = sz(v);
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = 0; j < n - 1 - i; ++j) // Why j < n - 1 - i? Because last i elements will be sorted
        {
            if(v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
        // Last (i + 1) elements are sorted till now
    }
    // Time Complexity ->
    // First "for" loop is running `n - 1` times.
// Everytime "outer for loop" runs, the `inner for loop` runs "n - 1 - i" times
    // So we can have some kind of relation i.e.
    // 1st Time it takes (n - 1) iterations/operations
    // 2nd time it takes (n - 2) iterations/operations
    // .
    // .
    // .
    // (n - 1)th Time it takes (1) iterations/operations
    // therefore total time complexity ->
    // (n - 1) + (n - 2) + (n - 3) + ... + (1)
    // => n * (n - 1) / 2;
    // For larger values of n 
    // O(n) = n * n
}