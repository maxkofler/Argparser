#include <argparser.h>

bool Argparser::checkFlag(std::string f){
    LogFunction logfun(___FUNCTIONNAME___, this->log);

    for (auto i : this->_flags){
        if (i == f){
            log->log("Found flag \"" + f + "\"", Log::D);
            return true;
        }
    }

    log->log("Could not find flag \"" + f + "\"", Log::D);

    return false;
}