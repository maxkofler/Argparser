#ifndef __TESTS_H__
#define __TESTS_H__

#include <log.h>

#include <argparser.h>

void t_checkFlag(Argparser& p);

void t_checkArgument(Argparser& p);
void t_getArgumentAt(Argparser& p);
void t_getArgumentsCount(Argparser& p);

void t_checkOption(Argparser& p);
void t_getOption(Argparser& p);

#endif