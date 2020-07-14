// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
int count=0;
int i=0;
vector <int>::iterator index;
for (int i=0;i<arr.size();i++)
{
    if (arr[i]!=i+1)
    {
        index= find(arr.begin()+i, arr.end(),i+1);
        swap (arr[i], *index);
        count++;
    }
}
return count;
}
