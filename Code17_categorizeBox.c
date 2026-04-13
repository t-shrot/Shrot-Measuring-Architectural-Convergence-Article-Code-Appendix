char *categorizeBox(int length, int width, int height, int mass) {
    char *category;

    if (length >= 10000 || width >= 10000 || height >= 10000 ||
        (long long)length * width * height >= 1000000000) {
        category = "Bulky";
    }
    else if (mass >= 100) {
        category = "Heavy";
    }
    else {
        category = "Neither";
    }

    if (strcmp(category, "Bulky") == 0 && strcmp(category, "Heavy") == 0) {
        category = "Both";
    }
    else if (strcmp(category, "Bulky") == 0 && strcmp(category, "Heavy") != 0) {
        category = "Bulky";
    }
    else if (strcmp(category, "Heavy") == 0 && strcmp(category, "Bulky") != 0) {
        category = "Heavy";
    }

    return category;
}
