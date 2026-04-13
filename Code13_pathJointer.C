#define MAX_FILENAME_LEN 256

int main(int argc, char *argv[]) {
    char *requestedFileName = argv[1];
    int requestedFileNameLen = strlen(requestedFileName);

    char *restrictedSafeDirectory = "/safe/";

    char fileNameBuffer[MAX_FILENAME_LEN];
    if (requestedFileNameLen + strlen(restrictedSafeDirectory) > MAX_FILENAME_LEN) {
        fprintf(stderr, "Requested filename is too long\n");
        exit(1);
    }

    strcpy(fileNameBuffer, restrictedSafeDirectory);
    strcat(fileNameBuffer, requestedFileName);

    FILE *fp = fopen(fileNameBuffer, "r");
    fclose(fp);
}
