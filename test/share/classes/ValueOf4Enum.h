#ifndef _ValueOf4Enum_h_
#define _ValueOf4Enum_h_
//$ class ValueOf4Enum
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Random;
		class Set;
	}
}

class $export ValueOf4Enum : public ::java::lang::Object {
	$class(ValueOf4Enum, 0, ::java::lang::Object)
public:
	ValueOf4Enum();
	void init$();
	static void main($StringArray* args);
	static void test($Class* enumClass);
	static void test($Class* enumClass, ::java::util::Set* s);
	static void testMissingException();
	static ::java::util::Random* rnd;
};

#endif // _ValueOf4Enum_h_