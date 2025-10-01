#ifndef _IsBlank_h_
#define _IsBlank_h_
//$ class IsBlank
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}

class $export IsBlank : public ::java::lang::Object {
	$class(IsBlank, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IsBlank();
	void init$();
	static bool lambda$testWhitespace$0(int32_t c);
	static void lambda$testWhitespace$1(::java::lang::StringBuilder* sb, int32_t c);
	static void main($StringArray* arg);
	static void test($String* input, bool expected);
	static void testIsBlank();
	static void testWhitespace();
};

#endif // _IsBlank_h_