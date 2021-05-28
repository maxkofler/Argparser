#include <argparser.h>

void Argparser::parse(int argc, char** argv){
    LogFunction logfun(___FUNCTIONNAME___, this->log);

    std::string curBlock;
    std::string argName;

    for (int i = 0; i < argc; i++){
        curBlock = argv[i];

        //Check if the current begins with a '-' - it is an argument
        if (curBlock.at(0) == '-'){
            argName = curBlock;

            //Go to the next block
            i++;
            //If the next index is out of bounds, the end is reached
            if (!(i < argc)){
                log->log("Adding flag \"" + argName + "\"", Log::D);
                this->_flags.push_back(argName);
                break;
            }
                

            //Check if it is an argument, if so, continue to this block from begin
            curBlock = argv[i];
            if (curBlock.at(0) == '-'){
                log->log("Adding flag \"" + argName + "\"", Log::D);
                this->_flags.push_back(argName);
                i--;
                continue;
            }

            //curBlock is the argument, add it to the map
            log->log("Adding option \"" + argName + "\" -> [" + curBlock + "]", Log::D);
            this->_options[argName] = curBlock;
        }else{
            log->log("Adding argument \"" + curBlock + "\"", Log::D);
            this->_arguments.push_back(curBlock);
        }
    }

    log->log("Parsed " + std::to_string(argc) + " arguments", Log::D);
}