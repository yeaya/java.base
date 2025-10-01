#ifndef _Basic2_h_
#define _Basic2_h_
//$ class Basic2
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export Basic2 : public ::java::lang::Object {
	$class(Basic2, 0, ::java::lang::Object)
public:
	Basic2();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Random* rand;
};

#endif // _Basic2_h_