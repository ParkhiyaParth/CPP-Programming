#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        size = 0;
    }

    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                break;
            }
        }
    }

    void deletion()
    {
        if (size == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left < size && arr[i] < arr[left])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right < size && arr[i] < arr[right])
            {
                swap(arr[i], arr[right]);
                i = right;
            }
            else
            {
                print();
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int r[], int n, int i)
{
    int parent = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left < n && r[left] > r[parent])
    {
        parent = left;
    }
    if (right < n && r[right] > r[parent])
    {
        parent = right;
    }

    if (parent != i)
    {
        swap(r[i], r[parent]);
        heapify(r, n, parent);
    }
}
int main()
{
    // heap h;
    // h.insert(10);
    // h.insert(55);
    // h.insert(5);
    // h.insert(45);
    // h.insert(85);
    // h.insert(35);
    // h.insert(40);
    // h.print();
    // h.deletion();
    int nwarr[] = {-1, 54, 53, 55, 52, 50};
    int n = sizeof(nwarr) / sizeof(nwarr[0]);
    for (int i = n / 2; i > 0; i--)
    {
        heapify(nwarr, n, i);
    }
    for (int i = 1; i < n; i++)
    {
        cout << nwarr[i] << " ";
    }
    return 0;
}