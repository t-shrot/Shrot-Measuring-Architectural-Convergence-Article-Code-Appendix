class Solution {
    public int maximum69Number(int num) {
        int[] arr = String.valueOf(num).chars().map(c -> c - '0').toArray();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 6) {
                arr[i] = 9;
                break;
            }
        }
        int res = 0;
        for (int i = 0; i < arr.length; i++) {
            res = res * 10 + arr[i];
        }
        return res;
    }
}
