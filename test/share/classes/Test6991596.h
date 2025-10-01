#ifndef _Test6991596_h_
#define _Test6991596_h_
//$ class Test6991596
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

class $export Test6991596 : public ::java::lang::Object {
	$class(Test6991596, 0, ::java::lang::Object)
public:
	Test6991596();
	void init$();
	static void check(bool x, bool e, bool a);
	static void check(bool x, int8_t e, int8_t a);
	static void check(bool x, int32_t e, int32_t a);
	static void check(int32_t x, bool e, bool a);
	static void check(int32_t x, int8_t e, int8_t a);
	static void check(int32_t x, int32_t e, int32_t a);
	static void check(int64_t x, bool e, bool a);
	static void check(int64_t x, int8_t e, int8_t a);
	static void check(int64_t x, int32_t e, int32_t a);
	static void doboolean(bool x);
	static void dobyte(int8_t x);
	static void dochar(char16_t x);
	static void doint(int32_t x);
	static void dolong(int64_t x);
	static void doshort(int16_t x);
	static bool foo(bool i);
	static int8_t foo(int8_t i);
	static char16_t foo(char16_t i);
	static int16_t foo(int16_t i);
	static int32_t foo(int32_t i);
	static ::java::lang::invoke::MethodHandle* getmh1($Class* ret, $Class* arg);
	static ::java::lang::invoke::MethodHandle* getmh2(::java::lang::invoke::MethodHandle* mh1, $Class* ret, $Class* arg);
	static ::java::lang::invoke::MethodHandle* getmh3(::java::lang::invoke::MethodHandle* mh1, $Class* ret, $Class* arg);
	static $String* i2h(int32_t x);
	static $String* l2h(int64_t x);
	static void main($StringArray* args);
	static void p($String* x, $String* e, $String* a);
	static void testboolean();
	static void testbyte();
	static void testchar();
	static void testint();
	static void testlong();
	static void testshort();
	static $String* z2h(bool x);
	static bool $assertionsDisabled;
	static $Class* CLASS;
	static $String* NAME;
	static bool DEBUG;
};

#pragma pop_macro("CLASS")
#pragma pop_macro("DEBUG")
#pragma pop_macro("NAME")

#endif // _Test6991596_h_