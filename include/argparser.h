#ifndef __ARGPARSER_H__
#define __ARGPARSER_H__

class Argparser;

#ifdef WIN32
    #define ___FUNCTIONNAME___ __FUNCTION__
#else
    #define ___FUNCTIONNAME___ __PRETTY_FUNCTION__
#endif

#include <map>
#include <string>
#include <vector>

#include <log.h>

class Argparser{

public:
    Argparser(int loglevel = Log::I);
    ~Argparser();

    /**
     *  Parses the arguments from the command line
     *  @arg    argc                    The ammount of arguments
     *  @arg    argv                    The argument list
     *  Note:   This brings its own Log environment, so this function can be calles before the hlog has been defined
     **/
    void                                parse(int argc, char** argv);

    //
    //  FLAGS
    //

    //Checks if the flag is given
    bool                                checkFlag(std::string name);

    //
    //  ARGUMENTS
    //

    //Checks if the argument was given
    bool                                checkArgument(std::string name);

    //Returns the argument at the given position, empty string on out of bounds
    std::string                         getArgumentAt(size_t pos);

    //Returns the ammount of arguments given
    size_t                              getArgumentsCount();

    //
    //  OPTIONS
    //
    
    //Checks if the option was given
    bool                                checkOption(std::string name);

    //Returns the option provided with the name, empty string when not given
    std::string                         getOption(std::string name);

private:
    Log                                 *log;

    std::vector<std::string>            _flags;
    std::vector<std::string>            _arguments;
    std::map<std::string, std::string>  _options;
};

#endif