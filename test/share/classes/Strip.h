#ifndef _Strip_h_
#define _Strip_h_
//$ class Strip
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Integer;
		class StringBuilder;
	}
}

class $export Strip : public ::java::lang::Object {
	$class(Strip, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Strip();
	void init$();
	static void equal($String* input, $String* expected);
	static ::java::lang::Integer* lambda$report$2(int32_t c);
	static bool lambda$testWhitespace$0(int32_t c);
	static void lambda$testWhitespace$1(::java::lang::StringBuilder* sb, int32_t c);
	static void main($StringArray* arg);
	static void report($String* message, $String* inputTag, $String* input, $String* outputTag, $String* output);
	static void testStrip();
	static void testWhitespace();
};

#endif // _Strip_h_