#include <stdio.h>

int main() {
    int n;
    int i, j;
    int p[100], d[100], c[100], l[100];
    int order[100];
    int swap, time = 0, max = 0;

    printf("Input total number of jobs: ");
    scanf("%d", &n);

    i = 0;
    while (i < n) {
        order[i] = i + 1;
        printf("Job %d - input processing time and deadline: ", order[i]);
        scanf("%d %d", &p[i], &d[i]);
        i++;
    }

    i = 0;
    while (i < n - 1) {
        j = i + 1;
        while (j < n) {
            if (d[j] < d[i]) {
                swap = d[i];
                d[i] = d[j];
                d[j] = swap;

                swap = p[i];
                p[i] = p[j];
                p[j] = swap;

                swap = order[i];
                order[i] = order[j];
                order[j] = swap;
            }
            j++;
        }
        i++;
    }

    i = 0;
    while (i < n) {
        time = time + p[i];
        c[i] = time;
        l[i] = c[i] - d[i];
        if (l[i] > max)
            max = l[i];
        i++;
    }

    if (max < 0)
        max = 0;

    printf("\nResult using Earliest Deadline First\n");
    printf("Job\tTime\tDeadline\tComplete\tLateness\n");

    i = 0;
    while (i < n) {
        printf("%d\t%d\t\t%d\t\t\t%d\t\t\t%d\n", order[i], p[i], d[i], c[i], l[i]);
        i++;
    }
    printf("\nMinimum possible maximum lateness = %d\n", max);
    return 0;
}