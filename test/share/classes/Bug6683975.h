#ifndef _Bug6683975_h_
#define _Bug6683975_h_
//$ class Bug6683975
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
	}
}

class $export Bug6683975 : public ::java::lang::Object {
	$class(Bug6683975, 0, ::java::lang::Object)
public:
	Bug6683975();
	void init$();
	static void main($StringArray* args);
	static void test(int32_t style);
	static bool err;
	static ::java::util::Locale* th;
	static ::java::util::Locale* th_TH;
	static $StringArray* expected_th;
	static $StringArray* expected_th_TH;
	static $StringArray* stylePattern;
};

#endif // _Bug6683975_h_