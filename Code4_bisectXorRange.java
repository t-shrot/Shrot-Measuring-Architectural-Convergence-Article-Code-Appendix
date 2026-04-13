if (prefix[mid] ^ (left == 0 ? 0 : prefix[left - 1]) > queries[i][1]) {
    r = mid - 1;
} else {
    l = mid;
}
