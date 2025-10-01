#ifndef _ToLowerCase_h_
#define _ToLowerCase_h_
//$ class ToLowerCase
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
	}
}

class $export ToLowerCase : public ::java::lang::Object {
	$class(ToLowerCase, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToLowerCase();
	void init$();
	static void main($StringArray* args);
	static void test($String* in, ::java::util::Locale* locale, $String* expected);
	static void test0($String* in, ::java::util::Locale* locale, $String* expected);
};

#endif // _ToLowerCase_h_