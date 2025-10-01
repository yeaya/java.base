#ifndef _SBConstructor_h_
#define _SBConstructor_h_
//$ class SBConstructor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export SBConstructor : public ::java::lang::Object {
	$class(SBConstructor, 0, ::java::lang::Object)
public:
	SBConstructor();
	void init$();
	static void main($StringArray* argvs);
	static ::java::util::Random* rnd;
};

#endif // _SBConstructor_h_