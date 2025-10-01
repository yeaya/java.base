#ifndef _IntGenerator_h_
#define _IntGenerator_h_
//$ class IntGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export IntGenerator : public ::java::lang::Object {
	$class(IntGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntGenerator();
	void init$();
	virtual int32_t next(int32_t max);
	::java::util::Random* r = nullptr;
};

#endif // _IntGenerator_h_