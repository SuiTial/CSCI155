#include <iostream>
#include <cmath>

using namespace std;
float standardDeviation(float data[], int n);

int main()
{
    int num, i;
    float data[100], mean=0.0;
    cout << "How many data are you entering?: ";
    cin >> num;
    while (num>100 || num<=0)
    {
        cout << "Enter a number between 1 and 100." << endl;
        cout << "How many data are you entering?: ";
        cin >> num;
    }
    cout << "Enter the numbers:  " << endl;
    for(i=0; i<num; ++i)
    {
        cin >> data[i];
        mean += data[i];
    }
    mean /= num;
    cout << "Mean: " << mean;
    cout << endl;
    cout << "Standard Deviation: " << standardDeviation(data,num);
    return 0;
}
float standardDeviation(float data[], int n)
{
    float mean=0.0, sum=0.0;
    int i;
    for(i=0; i<n;++i)
    {
        mean += data[i];
    }
    mean /= n;
    for(i=0; i<n;++i)
    sum+=(data[i]-mean)*(data[i]-mean);
    return sqrt(sum/n);
}