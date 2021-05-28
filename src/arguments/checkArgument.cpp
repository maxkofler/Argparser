#include "../tests.h"

void t_checkArgument(Argparser& p){
    FUN();

    if (
        p.checkArgument("gamingfile.txt") &&
        !p.checkArgument("skfdlgb")
    ){
        LOGI("checkArgument() works");
    }else{
        LOGE("checkArgument() has errors");
    }
}