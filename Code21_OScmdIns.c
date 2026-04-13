char *username = argv[1];
char command[100] = {0};
sprintf(command, "getent passwd %s", username);
system(command);
