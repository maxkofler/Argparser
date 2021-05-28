#include "../tests.h"

void t_getArgumentsCount(Argparser& p){
    FUN();

    if (
        p.getArgumentsCount() == 3
    ){
        LOGI("getArgumentsCount() works");
    }else{
        LOGE("getArgumentsCount() has errors")
    }
}