#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>

off_t calculate_directory_size(const char *path) {
    off_t total_size = 0;

    struct stat st;
    if (stat(path, &st) == -1) {
        perror("stat");
        return 0;
    }

    if (S_ISDIR(st.st_mode)) {
        DIR *dir = opendir(path);
        if (dir == NULL) {
            perror("opendir");
            return 0;
        }

        struct dirent *entry;
        while ((entry = readdir(dir)) != NULL) {
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
                continue;

            char new_path[PATH_MAX];
            snprintf(new_path, sizeof(new_path), "%s/%s", path, entry->d_name);
            total_size += calculate_directory_size(new_path);
        }

        closedir(dir);
    } else if (S_ISREG(st.st_mode)) {
        total_size = st.st_size;
    }

    return total_size;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
        return 1;
    }

    off_t size = calculate_directory_size(argv[1]);
    printf("Total size of %s and its subdirectories: %lld bytes\n", argv[1], (long long)size);

    return 0;
}

