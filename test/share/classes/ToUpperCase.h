#ifndef _ToUpperCase_h_
#define _ToUpperCase_h_
//$ class ToUpperCase
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
	}
}

class $export ToUpperCase : public ::java::lang::Object {
	$class(ToUpperCase, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToUpperCase();
	void init$();
	static void main($StringArray* args);
	static void test($String* in, ::java::util::Locale* locale, $String* expected);
	static void test0($String* in, ::java::util::Locale* locale, $String* expected);
};

#endif // _ToUpperCase_h_