#include <log.h>

#include <argparser.h>

#include <cstring>

#include "tests.h"

Log* hlog;

int main(int argc, char** argv){
    hlog = new Log(Log::D, false);

    char* args[] = {
        argv[0], 
        "-v", "-r",
        "-i", "infile.txt",
        "-o", "outfile.txt",
        "--input", "inputfile.txt",
        "--output", "outputfile.txt",
        "gamingfile.txt", "justinput"
    };

    int len = 13;

    Argparser p(Log::I);
    p.parse(len, args);

    t_checkFlag(p);
    
    t_checkArgument(p);
    t_getArgumentAt(p);
    t_getArgumentsCount(p);

    t_checkOption(p);
    t_getOption(p);
}