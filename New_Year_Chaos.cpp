// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int n= q.size();
    int count=0;
for (int i=0;i<n;i++)
{
    if (q[i]-i-1>2)
    {
        cout<< "Too chaotic"<< endl;
        return;
    }
    for (int j = max(0,q[i]-2) ; j < i; j++)  
    //max is for counting the digits that moved backward
            if (q[j] > q[i]) count++;
}
cout<< count<<endl;
}