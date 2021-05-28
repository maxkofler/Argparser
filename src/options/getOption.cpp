#include "../tests.h"

void t_getOption(Argparser& p){
    FUN();

    if (
        p.getOption("-i") == "infile.txt" && 
        p.getOption("--output") == "outputfile.txt" &&
        p.getOption("-gaiomg") == ""
    ){
        LOGI("getOption() works");
    }else{
        LOGE("getOption() has errors");
    }
}