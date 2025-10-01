#ifndef _ToString_h_
#define _ToString_h_
//$ class ToString
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export ToString : public ::java::lang::Object {
	$class(ToString, 0, ::java::lang::Object)
public:
	ToString();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _ToString_h_