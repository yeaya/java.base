#ifndef _CommandRunner_h_
#define _CommandRunner_h_
//$ class CommandRunner
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class CommandRunner : public ::java::lang::Object {
	$class(CommandRunner, 0, ::java::lang::Object)
public:
	CommandRunner();
	void init$($StringArray* args);
	static ::java::util::Random* generator;
	int32_t exitValue = 0;
	$String* out = nullptr;
	$String* err = nullptr;
};

#endif // _CommandRunner_h_