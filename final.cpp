#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
using namespace std;
int cnt = 0;
// partition function is used
int partitioning(int A[], int starting, int ending)
{

    int i = starting + 1;
    int pivot1 = A[starting];
    for (int j = starting + 1; j <= ending; j++)
    {

        if (A[j] < pivot1)
        {
            swap(A[i], A[j]);
            i += 1;
            cnt++;
        }
    }
    swap(A[starting], A[i - 1]);
    return i - 1;
}
// RANDOM FUNCTION IS USED
int randompartitioning(int A[], int starting, int ending)
{

    int random = starting + rand() % (ending - starting + 1);

    swap(A[random], A[starting]);
    return partitioning(A, starting, ending);
}
void QUICKSORTING(int A[], int starting, int ending)
{
    if (starting < ending)
    {

        int pivot1_pos = randompartitioning(A, starting, ending);
        QUICKSORTING(A, starting, pivot1_pos - 1);
        QUICKSORTING(A, pivot1_pos + 1, ending);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endingif
    cout << "\n"
         << endl;
    ll tc;
    cout << "ENTER NUMBER OF TEST CASES:" << endl;
    cin >> tc;
    cout << "\n"
         << endl;
    while (tc--)
    {
        int n;
        cout << "ENTER SIZE OF ARRAY:" << endl;
        cin >> n;
        int A[n];
        cout << "\n"
             << endl;
        cout << "**********************************INPUT ARRAY**********************************" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        QUICKSORTING(A, 0, n - 1);
        cout << "\n"
             << endl;
        cout << "**********************************OUTPUT ARRAY**********************************" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << "\n"
             << endl;

        cout << " \n**********************************NUMBER OF COMPARISIONS ARE:**********************************" << endl;
        cout << cnt << endl;
        cout << "\n"
             << endl;
    }

    return 0;
}