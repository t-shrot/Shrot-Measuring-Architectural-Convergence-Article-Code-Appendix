int* findArray(int* pref, int prefSize, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * prefSize);
    if (!arr) return NULL;

    arr[0] = pref[0];

    for (int i = 1; i < prefSize; i++) {
        arr[i] = arr[i - 1] ^ pref[i];
    }

    *returnSize = prefSize;
    return arr;
}
