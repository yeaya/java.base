#ifndef _TestUtils_h_
#define _TestUtils_h_
//$ class TestUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
	}
}

class $export TestUtils : public ::java::lang::Object {
	$class(TestUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestUtils();
	void init$();
	static bool hasSpecialVariant(::java::util::Locale* locale);
	static bool usesAsciiDigits(::java::util::Locale* locale);
	static bool usesGregorianCalendar(::java::util::Locale* locale);
};

#endif // _TestUtils_h_