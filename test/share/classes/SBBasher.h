#ifndef _SBBasher_h_
#define _SBBasher_h_
//$ class SBBasher
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export SBBasher : public ::java::lang::Object {
	$class(SBBasher, 0, ::java::lang::Object)
public:
	SBBasher();
	void init$();
	bool Test1($String* before);
	bool Test2($String* before);
	bool Test3($String* before);
	$String* generateTestString();
	int32_t getRandomIndex(int32_t constraint1, int32_t constraint2);
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _SBBasher_h_