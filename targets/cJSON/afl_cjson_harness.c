#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h"

int main(int argc, char **argv) {
    FILE *fp;
    long size;
    char *data;
    cJSON *json;

    if (argc < 2) return 1;

    fp = fopen(argv[1], "rb");
    if (!fp) return 1;

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    rewind(fp);

    if (size <= 0 || size > 1024 * 1024) {
        fclose(fp);
        return 0;
    }

    data = malloc(size + 1);
    if (!data) {
        fclose(fp);
        return 1;
    }

    fread(data, 1, size, fp);
    data[size] = '\0';
    fclose(fp);

    json = cJSON_Parse(data);
    if (json) cJSON_Delete(json);

    free(data);
    return 0;
}
