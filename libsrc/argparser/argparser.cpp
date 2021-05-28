#include <argparser.h>

Argparser::Argparser(int loglevel){
    this->log = new Log(loglevel, false);
}

Argparser::~Argparser(){
    delete this->log;
}