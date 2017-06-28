//
//  main.c
//  目录中所有文件名1-3P4
//
//  Created by Mr.PYY on 17/6/28.
//  Copyright © 2017年 Mr.PYY. All rights reserved.
//

#include <stdio.h>
#include <dirent.h>
#include "apue.h"

int main(int argc, const char * argv[]) {
    DIR           *dp;
    struct dirent *dirp;
    if (argc != 2) {
        err_quit("usage: ls directory_name");
    }
    
    if ((dp = opendir(argv[1])) == NULL) {
        err_sys("can't open %s", argv[1]);
    }
    
    while ((dirp = readdir(dp)) != NULL) {
        printf("%s\n", dirp->d_name);
    }
    
    closedir(dp);
    
    return 0;
}
