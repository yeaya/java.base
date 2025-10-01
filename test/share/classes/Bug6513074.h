#ifndef _Bug6513074_h_
#define _Bug6513074_h_
//$ class Bug6513074
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class BreakIterator;
	}
}

class $export Bug6513074 : public ::java::lang::Object {
	$class(Bug6513074, 0, ::java::lang::Object)
public:
	Bug6513074();
	void init$();
	static void main($StringArray* args);
	static void test6513074();
	static void testBreakIterator(::java::text::BreakIterator* bi, $String* type, $String* source, $String* expected, $String* description);
	using ::java::lang::Object::toString;
	static $String* toString($String* s);
	static $Array<::java::lang::String, 2>* source;
	static $StringArray* expected_line;
	static $StringArray* expected_word;
	static $StringArray* expected_char;
	static bool err;
};

#endif // _Bug6513074_h_