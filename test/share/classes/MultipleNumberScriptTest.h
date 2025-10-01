#ifndef _MultipleNumberScriptTest_h_
#define _MultipleNumberScriptTest_h_
//$ class MultipleNumberScriptTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
	}
}

class $export MultipleNumberScriptTest : public ::java::lang::Object {
	$class(MultipleNumberScriptTest, 0, ::java::lang::Object)
public:
	MultipleNumberScriptTest();
	void init$();
	static bool checkResult($String* formatted, $String* numSystem);
	static void main($StringArray* args);
	static $Array<::java::util::Locale>* locales;
	static $StringArray* expectedNumSystem;
};

#endif // _MultipleNumberScriptTest_h_