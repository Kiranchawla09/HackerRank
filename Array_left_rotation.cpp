Method 1:

vector<int> rotatebyone(vector<int>a, int n)
{
    long long int temp= a[0];
    for (long long int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    return a;
}
// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    long long int n = a.size(); 
    for (long long int i=0;i<d;i++)
        a= rotatebyone(a,n);
    return a;
}

Method 2:

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
  
    else
        return gcd(b, a % b); 
} 
// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> arr, int d) {
    int n= arr.size();
    d = d % n; 
    int g_c_d = gcd(d, n); 
    for (int i = 0; i < g_c_d; i++) { 
        /* move i-th values of blocks */
        int temp = arr[i]; 
        int j = i; 
  
        while (1) { 
            int k = j + d; 
            if (k >= n) 
                k = k - n; 
  
            if (k == i) 
                break; 
  
            arr[j] = arr[k]; 
            j = k; 
        } 
        arr[j] = temp; 
    } 
    return arr;
}