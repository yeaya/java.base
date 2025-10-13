#ifndef _Indent_h_
#define _Indent_h_
//$ class Indent
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ENDS")
#undef ENDS
#pragma push_macro("MIDDLES")
#undef MIDDLES

namespace java {
	namespace util {
		class List;
	}
}

class $export Indent : public ::java::lang::Object {
	$class(Indent, 0, ::java::lang::Object)
public:
	Indent();
	void init$();
	static $StringArray* getBody($StringArray* inLines);
	static int32_t indexOfNonWhitespace($String* s);
	static $String* lambda$test1$0($String* spaces, $String* s);
	static $String* lambda$test1$1(int32_t adjust, $String* s);
	static void main($StringArray* args);
	static void report($String* test, $String* message, $String* input, $String* output);
	static void test1();
	static ::java::util::List* ENDS;
	static ::java::util::List* MIDDLES;
};

#pragma pop_macro("ENDS")
#pragma pop_macro("MIDDLES")

#endif // _Indent_h_