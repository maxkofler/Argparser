#include "../tests.h"

void t_checkOption(Argparser& p){
    FUN();

    if (
        p.checkOption("-o") &&
        p.checkOption("--input") &&
        !p.checkOption("-gaming")
    ){
        LOGI("checkOption() works");
    }else{
        LOGE("checkOption() has errors");
    }
}