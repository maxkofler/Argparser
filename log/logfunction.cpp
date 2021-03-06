#include "logfunction.h"

#include <iostream>

LogFunction::LogFunction(const char* name, Log* parent){
    this->_name = name;
    this->_parent = parent;
    parent->push(this);
    _parent->log("Entering function " + std::string(this->_name), Log::FUNCALLS);
}


LogFunction::~LogFunction(){
    _parent->log("Leaving function " + std::string(this->_name), Log::FUNCALLS);
    _parent->pop();
}
