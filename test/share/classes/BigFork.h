#ifndef _BigFork_h_
#define _BigFork_h_
//$ class BigFork
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export BigFork : public ::java::lang::Object {
	$class(BigFork, 0, ::java::lang::Object)
public:
	BigFork();
	void init$();
	static void main($StringArray* args);
	static void showCommittedMemory();
	static void touchPages($bytes* chunk);
	static ::java::util::Random* rnd;
};

#endif // _BigFork_h_