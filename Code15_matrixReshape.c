int** matrixReshape(int** mat, int matSize, int* matColSize,
                    int r, int c, int* returnSize,
                    int** returnColumnSizes)
{
    int totalElements = matSize * matColSize[0];

    if (r * c != totalElements) {
        *returnSize = matSize;
        *returnColumnSizes = (int *)malloc(sizeof(int));
        (*returnColumnSizes)[0] = matColSize[0];
        return mat;
    }

    int **newMat = (int **)malloc(sizeof(int *) * r);
    for (int i = 0; i < r; i++) {
        newMat[i] = (int *)malloc(sizeof(int) * c);
    }

    int row = 0, col = 0;
    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < matColSize[0]; j++) {
            newMat[row][col] = mat[i][j];
            col++;
            if (col == c) {
                col = 0;
                row++;
            }
        }
    }

    *returnSize = r;
    *returnColumnSizes = (int *)malloc(sizeof(int));
    (*returnColumnSizes)[0] = c;

    return newMat;
}
