#include <argparser.h>

bool Argparser::checkOption(std::string name){
    LogFunction logfun(___FUNCTIONNAME___, this->log);

    if(this->_options.count(name) > 0){
        log->log("Found option \"" + name + "\"", Log::D);
        return true;
    }

    log->log("Could not find option \"" + name + "\"", Log::D);

    return false;
}

std::string Argparser::getOption(std::string name){
    LogFunction logfun(___FUNCTIONNAME___, this->log);

    if (!this->checkOption(name))
        return "";

    return this->_options[name];
}