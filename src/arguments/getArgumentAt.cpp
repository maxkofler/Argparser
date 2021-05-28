#include "../tests.h"

void t_getArgumentAt(Argparser& p){
    FUN();

    if (
        p.getArgumentAt(100).empty() &&
        p.getArgumentAt(1) == "gamingfile.txt"
    ){
        LOGI("getArgumentAt() works");
    }else{
        LOGE("getArgumentAt() has errors");
    }
}