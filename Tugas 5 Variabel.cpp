// JUDUL
    // Perangkingan 5 Varibel Secara Manual
    // Oleh Masayoshi Suryavanditya
    // A11.2022.14005
    // 3-10-2022
    // Bismillah Jalan

#include <iostream>
using namespace std;
// KAMUS
int A;
int B;
int C;
int D;
int E;

// DESKRIPSI
main()
{
    cout << "---------------------| B A T A S |---------------------" << endl;
    cout << endl;
    cout << "Perangkingan lima nilai." << endl;
    cout << "Masukan angka pertama (A) : ";
    cin >> A;
    cout << "Masukan angka kedua (B) : ";
    cin >> B;
    cout << "Masukan angka ketiga (C) : ";
    cin >> C;
    cout << "Masukan angka keempat (D) : ";
    cin >> D;
    cout << "Masukan angka kelima (E) : ";
    cin >> E;
    cout << endl;
    cout << "---------------------| B A T A S |---------------------" << endl;
    cout << endl;

    if (A > B && B > C && C > D && D > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "E" << endl;
    }
    else

        if (A > B && B > C && C > E && E > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "D" << endl;
    }
    else

        if (A > B && B > D && D > C && C > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "E" << endl;
    }
    else

        if (A > B && B > D && D > E && E > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "C" << endl;
    }
    else

        if (A > B && B > E && E > C && C > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "D" << endl;
    }
    else

        if (A > B && B > E && E > D && D > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "C" << endl;
    }
    else

        if (A > C && C > B && B > D && D > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "E" << endl;
    }
    else

        if (A > C && C > B && B > E && E > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "D" << endl;
    }
    else

        if (A > C && C > D && D > B && B > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "E" << endl;
    }
    else

        if (A > C && C > D && D > E && E > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "B" << endl;
    }
    else

        if (A > C && C > E && E > B && B > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "D" << endl;
    }
    else

        if (A > C && C > E && E > D && D > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "B" << endl;
    }
    else

        if (A > D && D > B && B > C && C > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "E" << endl;
    }
    else

        if (A > D && D > B && B > E && E > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "C" << endl;
    }
    else

        if (A > D && D > C && C > B && B > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "E" << endl;
    }
    else

        if (A > D && D > C && C > E && E > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "B" << endl;
    }
    else

        if (A > D && D > E && E > B && B > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "C" << endl;
    }
    else

        if (A > D && D > E && E > C && C > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "B" << endl;
    }
    else

        if (A > E && E > B && B > C && C > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "D" << endl;
    }
    else

        if (A > E && E > B && B > D && D > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "C" << endl;
    }
    else

        if (A > E && E > C && C > B && B > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "D" << endl;
    }
    else

        if (A > E && E > C && C > D && D > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "B" << endl;
    }
    else

        if (A > E && E > D && D > B && B > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "C" << endl;
    }
    else

        if (A > E && E > D && D > C && C > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "A"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "B" << endl;
    }
    else

        if (B > A && A > D && D > C && C > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "E" << endl;
    }
    else

        if (B > A && A > D && D > E && E > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "C" << endl;
    }
    else

        if (B > A && A > C && C > D && D > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "E" << endl;
    }
    else

        if (B > A && A > C && C > E && E > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "D" << endl;
    }
    else

        if (B > A && A > E && E > C && C > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "D" << endl;
    }
    else

        if (B > A && A > E && E > D && D > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "C" << endl;
    }
    else

        if (B > C && C > A && A > D && D > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "E" << endl;
    }
    else

        if (B > C && C > A && A > E && E > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "D" << endl;
    }
    else

        if (B > C && C > D && D > A && A > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "E" << endl;
    }
    else

        if (B > C && C > D && D > E && E > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "A" << endl;
    }
    else

        if (B > C && C > E && E > A && A > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "D" << endl;
    }
    else

        if (B > C && C > E && E > D && D > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "A" << endl;
    }
    else

        if (B > D && D > A && A > C && C > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "E" << endl;
    }
    else

        if (B > D && D > A && A > E && E > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "C" << endl;
    }
    else

        if (B > D && D > C && C > A && A > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "E" << endl;
    }
    else

        if (B > D && D > C && C > E && E > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "A" << endl;
    }
    else

        if (B > D && D > E && E > A && A > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "C" << endl;
    }
    else

        if (B > D && D > E && E > C && C > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "A" << endl;
    }
    else

        if (B > E && E > A && A > C && C > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "D" << endl;
    }
    else

        if (B > E && E > A && A > D && D > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "C" << endl;
    }
    else

        if (B > E && E > C && C > A && A > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "D" << endl;
    }
    else

        if (B > E && E > C && C > D && D > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "A" << endl;
    }
    else

        if (B > E && E > D && D > A && A > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "C" << endl;
    }
    else

        if (B > E && E > D && D > C && C > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "B"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "A" << endl;
    }
    else

        if (C > A && A > B && B > D && D > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "E" << endl;
    }
    else

        if (C > A && A > B && B > E && E > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "D" << endl;
    }
    else

        if (C > A && A > D && D > B && B > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "E" << endl;
    }
    else

        if (C > A && A > D && D > E && E > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "B" << endl;
    }
    else

        if (C > A && A > E && E > B && B > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "D" << endl;
    }
    else

        if (C > A && A > E && E > D && D > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "B" << endl;
    }
    else

        if (C > B && B > A && A > D && D > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "E" << endl;
    }
    else

        if (C > B && B > A && A > E && E > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "D" << endl;
    }
    else

        if (C > B && B > D && D > A && A > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "E" << endl;
    }
    else

        if (C > B && B > D && D > E && E > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "A" << endl;
    }
    else

        if (C > B && B > E && E > A && A > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "D" << endl;
    }
    else

        if (C > B && B > E && E > D && D > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "A" << endl;
    }
    else

        if (C > D && D > A && A > B && B > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "E" << endl;
    }
    else

        if (C > D && D > A && A > E && E > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "B" << endl;
    }
    else

        if (C > D && D > B && B > A && A > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "E" << endl;
    }
    else

        if (C > D && D > B && B > E && E > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "A" << endl;
    }
    else

        if (C > D && D > E && E > A && A > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "B" << endl;
    }
    else

        if (C > D && D > E && E > B && B > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "D"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "A" << endl;
    }
    else

        if (C > E && E > A && A > B && B > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "D" << endl;
    }
    else

        if (C > E && E > A && A > D && D > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "B" << endl;
    }
    else

        if (C > E && E > B && B > A && A > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "D" << endl;
    }
    else

        if (C > E && E > B && B > D && D > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "A" << endl;
    }
    else

        if (C > E && E > D && D > A && A > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "B" << endl;
    }
    else

        if (C > E && E > D && D > B && B > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "C"
             << ", "
             << "E"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "A" << endl;
    }
    else

        if (D > A && A > C && C > B && B > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "E" << endl;
    }
    else

        if (D > A && A > C && C > E && E > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "B" << endl;
    }
    else

        if (D > A && A > E && E > C && C > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "B" << endl;
    }
    else

        if (D > A && A > E && E > B && B > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "C" << endl;
    }
    else

        if (D > A && A > B && B > E && E > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "C" << endl;
    }
    else

        if (D > A && A > B && B > C && C > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "E" << endl;
    }
    else

        if (D > B && B > A && A > E && E > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "C" << endl;
    }
    else

        if (D > B && B > A && A > C && C > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "E" << endl;
    }
    else

        if (D > B && B > C && C > A && A > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "E" << endl;
    }
    else

        if (D > B && B > C && C > E && E > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "A" << endl;
    }
    else

        if (D > B && B > E && E > A && A > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "C" << endl;
    }
    else

        if (D > B && B > E && E > C && C > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "A" << endl;
    }
    else

        if (D > C && C > A && A > B && B > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "E" << endl;
    }
    else

        if (D > C && C > A && A > E && E > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "E"
             << ", "
             << "B" << endl;
    }
    else

        if (D > C && C > B && B > A && A > E)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "E" << endl;
    }
    else

        if (D > C && C > B && B > E && E > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "E"
             << ", "
             << "A" << endl;
    }
    else

        if (D > C && C > E && E > A && A > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "B" << endl;
    }
    else

        if (D > C && C > E && E > B && B > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "C"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "A" << endl;
    }
    else

        if (D > E && E > A && A > C && C > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "B" << endl;
    }
    else

        if (D > E && E > A && A > B && B > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "E"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "C" << endl;
    }
    else

        if (D > E && E > B && B > A && A > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "C" << endl;
    }
    else

        if (D > E && E > B && B > C && C > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "E"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "A" << endl;
    }
    else

        if (D > E && E > C && C > A && A > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "B" << endl;
    }
    else

        if (D > E && E > C && C > B && B > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "D"
             << ", "
             << "E"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "A" << endl;
    }
    else

        if (E > A && A > B && B > C && C > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "D" << endl;
    }
    else

        if (E > A && A > B && B > D && D > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "C" << endl;
    }
    else

        if (E > A && A > C && C > D && D > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "B" << endl;
    }
    else

        if (E > A && A > C && C > B && B > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "D" << endl;
    }
    else

        if (E > A && A > D && D > B && B > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "C" << endl;
    }
    else

        if (E > A && A > D && D > C && C > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "B" << endl;
    }
    else

        if (E > B && B > A && A > C && C > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "C"
             << ", "
             << "D" << endl;
    }
    else

        if (E > B && B > A && A > D && D > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "C" << endl;
    }
    else

        if (E > B && B > C && C > A && A > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "D" << endl;
    }
    else

        if (E > B && B > C && C > D && D > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "A" << endl;
    }
    else

        if (E > B && B > D && D > A && A > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "C" << endl;
    }
    else

        if (E > B && B > D && D > C && C > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "A" << endl;
    }
    else

        if (E > C && C > A && A > B && B > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "D" << endl;
    }
    else

        if (E > C && C > A && A > D && D > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "D"
             << ", "
             << "B" << endl;
    }
    else

        if (E > C && C > B && B > A && A > D)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "D" << endl;
    }
    else

        if (E > C && C > B && B > D && D > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "D"
             << ", "
             << "A" << endl;
    }
    else

        if (E > C && C > D && D > A && A > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "B" << endl;
    }
    else

        if (E > C && C > D && D > B && B > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "C"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "A" << endl;
    }
    else

        if (E > D && D > A && A > C && C > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "D"
             << ", "
             << " A "
             << ", "
             << "C"
             << ", "
             << "B" << endl;
    }
    else

        if (E > D && D > A && A > B && B > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "D"
             << ", "
             << "A"
             << ", "
             << "B"
             << ", "
             << "C" << endl;
    }
    else

        if (E > D && D > B && B > A && A > C)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "A"
             << ", "
             << "C" << endl;
    }
    else

        if (E > D && D > B && B > C && C > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "D"
             << ", "
             << "B"
             << ", "
             << "C"
             << ", "
             << "A" << endl;
    }
    else

        if (E > D && D > C && C > A && A > B)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "A"
             << ", "
             << "B" << endl;
    }
    else

        if (E > D && D > C && C > B && B > A)
    {
        cout << "Jadi, urutan dari yang terbesar adalah : "
             << "E"
             << ", "
             << "D"
             << ", "
             << "C"
             << ", "
             << "B"
             << ", "
             << "A" << endl;
    }

    cout << endl;
    cout << "---------------------| B A T A S |---------------------" << endl;
    cout << endl;


    return 0;
}
