#include <argparser.h>

bool Argparser::checkArgument(std::string name){
    LogFunction logfun(___FUNCTIONNAME___, this->log);

    for (auto i : this->_arguments){
        if (i == name){
            log->log("Found argument \"" + name + "\"", Log::D);
            return true;
        }
    }

    log->log("Could not find argument \"" + name + "\"", Log::D);

    return false;
}

std::string Argparser::getArgumentAt(size_t pos){
    LogFunction logfun(___FUNCTIONNAME___, this->log);

    if (pos >= this->_arguments.size()){
        log->log(   "Accessing out-of-bounds argument: " + std::to_string(pos) + "/" + 
                    std::to_string(this->_arguments.size()), Log::E);
        return "";
    }else{
        return this->_arguments.at(pos);
    }
}

size_t Argparser::getArgumentsCount(){
    return this->_arguments.size();
}