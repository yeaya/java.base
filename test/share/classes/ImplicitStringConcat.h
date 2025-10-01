#ifndef _ImplicitStringConcat_h_
#define _ImplicitStringConcat_h_
//$ class ImplicitStringConcat
//$ extends java.lang.Object

#include <java/lang/Array.h>

class ImplicitStringConcat$MyClass;
class ImplicitStringConcat$MyClassNull;
namespace java {
	namespace lang {
		class CharSequence;
		class StringBuffer;
	}
}

class $export ImplicitStringConcat : public ::java::lang::Object {
	$class(ImplicitStringConcat, 0, ::java::lang::Object)
public:
	ImplicitStringConcat();
	void init$();
	static void main($StringArray* args);
	static void test($String* expected, $String* actual);
	static bool b;
	static int8_t by;
	static int16_t sh;
	static char16_t ch;
	static int32_t i;
	static float fl;
	static int64_t l;
	static double d;
	static $String* s;
	static $String* sNull;
	static $Object* o;
	static $Object* oNull;
	static ::java::lang::CharSequence* cs;
	static $chars* chars;
	static ::ImplicitStringConcat$MyClass* myCl;
	static ::ImplicitStringConcat$MyClassNull* myClNull;
	static $Object* myCl2;
	static $ObjectArray* myArr;
	static $ObjectArray* s_myArr;
	static ::java::lang::StringBuffer* sb;
};

#endif // _ImplicitStringConcat_h_