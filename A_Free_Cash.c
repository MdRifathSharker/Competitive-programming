#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int h[n], m[n];
    for(int i = 0; i < n; i++) {
        scanf("%d%d", &h[i], &m[i]);
    }
    int freq[24][60] = {0};

    int max = 0;

    for(int i = 0; i < n; i++) {
        int currentFreq = ++freq[h[i]][m[i]];
        if (currentFreq > max) {
            max = currentFreq;
        }
    }

    printf("%d", max);

    return 0;
}
