#ifndef _Trim_h_
#define _Trim_h_
//$ class Trim
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

class $export Trim : public ::java::lang::Object {
	$class(Trim, 0, ::java::lang::Object)
public:
	Trim();
	void init$();
	static void bash();
	static void capacityCheck();
	static ::java::lang::StringBuffer* generateTestBuffer(int32_t min, int32_t max);
	static int32_t getRandomIndex(int32_t constraint1, int32_t constraint2);
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _Trim_h_