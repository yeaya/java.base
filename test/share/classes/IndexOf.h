#ifndef _IndexOf_h_
#define _IndexOf_h_
//$ class IndexOf
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
	}
}

class $export IndexOf : public ::java::lang::Object {
	$class(IndexOf, 0, ::java::lang::Object)
public:
	IndexOf();
	void init$();
	static void compareIndexOfLastIndexOf();
	static void compareStringStringBuffer();
	static $String* generateTestString(int32_t min, int32_t max);
	static int32_t getRandomIndex(int32_t constraint1, int32_t constraint2);
	static void main($StringArray* args);
	static void report($String* testName, int32_t failCount);
	static void simpleTest();
	static ::java::util::Random* generator;
	static bool failure;
};

#endif // _IndexOf_h_