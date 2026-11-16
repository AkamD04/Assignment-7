#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int start = 0, end = n - 1;

    while (start < end) {
        int min = start, max = start;

        for (int i = start; i <= end; i++) {
            if (a[i] < a[min])
                min = i;

            if (a[i] > a[max])
                max = i;
        }

        swap(a[start], a[min]);

        if (max == start)
            max = min;

        swap(a[end], a[max]);

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}