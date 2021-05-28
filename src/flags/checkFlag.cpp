#include "../tests.h"

void t_checkFlag(Argparser& p){
    FUN();

    if (
        p.checkFlag("-v") &&
        p.checkFlag("-r") &&
        !p.checkFlag("-g")
    ){
        LOGI("checkFlag() works");
    }else{
        LOGE("checkFlag() has errors");
    }
}