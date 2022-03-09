#include <iostream>
using namespace std;

int main()
{
    int max, min, n, imax, imin, index, pos = 0, neg = 0, totalMax = 0, totalMin = 0, totalAvg = 1;
    int nilai[20] = {};
    float avg, total = 0;
    cout << "Berapa data yang tersedia ? ";
    cin >> n;
    for (index = 0; index < n; index++)
    {
        cout << "Masukkan data ke- " << index + 1 << " : ";
        cin >> nilai[index];
    }
    for (index = 0; index < n; index++) 
    {
        total += nilai[index];
    }
    avg = total / index;

    max = min = nilai[0];
    imax = imin = 1;

    for (index = 0; index < n; index++)
    {
        if (nilai[index] >= max)
        {
            max = nilai[index];
            imax = index + 1;
        }
       if (nilai[index] <= min)
        {
            min = nilai[index];
            imin = index + 1;
        }
    }
    for (index = 0; index < n; index++)
    {
        if (nilai[index] <= min)
        {
            totalMin++;
        }
    }
    for (index = 0; index < n; index++)
    {
        if (nilai[index] >= max)
        {
            totalMax++;
        }
    }
    cout << "===============================================\n";

    cout << "Data terkecil adalah " << min;
    cout << " merupakan data ke- ";
    for (index = 0; index < n; index++)
    {
        if (nilai[index] <= min)
        {
            min = nilai[index];
            imin = index + 1;
            cout << imin << ", ";
        }
    } 
    cout << endl;

    cout << "Data terbesar adalah " << max;
    cout << " merupakan data ke- ";
    for (index = 0; index < n; index++)
    {
        if (nilai[index] >= max)
        {
            max = nilai[index];
            imax = index + 1;
            cout << imax << ", ";
        }
    }   
    cout << endl;
    
    cout << "\nBanyaknya data yang merupakan nilai terkecil " << totalMin << endl;
    cout << "Banyaknya data yang merupakan nilai terbesar " << totalMax << endl;
    cout << endl;
    cout << "Nilai rerata " << avg << endl;
    cout << "Banyaknya data yang merupakan nilai rerata " << totalAvg << endl;
    cout << endl;
    cout << "Nilai positif : ";
    for (index = 0; index < n; index++)
    {
        if (nilai[index] > 0)
        {
            cout << nilai[index] << ", ";
            pos++;
        }
    }
    cout << "\nBanyaknya data yang merupakan nilai positif : " << pos << endl;
    cout << endl;
    cout << "Nilai negatif : ";
    for (index = 0; index < n; index++)
    {
        if (nilai[index] < 0)
        {
            neg++;
            cout << nilai[index] << ", ";
        }
    }
    cout << "\nBanyaknya data yang merupakan nilai negatif : " << neg << endl;

    system("pause");

    return 0;
}
