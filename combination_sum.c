#include <stdlib.h>

int **ans;
int *colSizes;
int ansSize;

void backtrack(int* candidates, int candidatesSize,
               int target, int start,
               int* path, int pathSize) {

    if (target == 0) {
        ans[ansSize] = (int*)malloc(pathSize * sizeof(int));
        for (int i = 0; i < pathSize; i++)
            ans[ansSize][i] = path[i];

        colSizes[ansSize] = pathSize;
        ansSize++;
        return;
    }

    for (int i = start; i < candidatesSize; i++) {
        if (candidates[i] > target)
            continue;

        path[pathSize] = candidates[i];
        backtrack(candidates, candidatesSize,
                  target - candidates[i],
                  i, path, pathSize + 1);
    }
}

int** combinationSum(int* candidates, int candidatesSize,
                     int target, int* returnSize,
                     int** returnColumnSizes) {

    ans = (int**)malloc(150 * sizeof(int*));
    colSizes = (int*)malloc(150 * sizeof(int));
    ansSize = 0;

    int path[40];

    backtrack(candidates, candidatesSize, target, 0, path, 0);

    *returnSize = ansSize;
    *returnColumnSizes = colSizes;

    return ans;
}
