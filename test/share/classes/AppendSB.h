#ifndef _AppendSB_h_
#define _AppendSB_h_
//$ class AppendSB
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export AppendSB : public ::java::lang::Object {
	$class(AppendSB, 0, ::java::lang::Object)
public:
	AppendSB();
	void init$();
	static ::java::lang::StringBuffer* generateTestBuffer(int32_t min, int32_t max);
	static int32_t getRandomIndex(int32_t constraint1, int32_t constraint2);
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _AppendSB_h_