#ifndef _Basic4Version_h_
#define _Basic4Version_h_
//$ class Basic4Version
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IAE")
#undef IAE
#pragma push_macro("NFE")
#undef NFE
#pragma push_macro("NPE")
#undef NPE
#pragma push_macro("TOO_BIG")
#undef TOO_BIG
#pragma push_macro("TOO_BIG_STR")
#undef TOO_BIG_STR

namespace java {
	namespace lang {
		class Integer;
		class Runtime$Version;
		class Throwable;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export Basic4Version : public ::java::lang::Object {
	$class(Basic4Version, 0, ::java::lang::Object)
public:
	Basic4Version();
	void init$();
	static void checkCompare(::java::lang::Runtime$Version* v0, ::java::lang::Runtime$Version* v1, int32_t expected, int32_t actual);
	static void fail($String* fs, $Class* ex);
	static void fail($String* t, $String* exp, $String* got);
	static void main($StringArray* args);
	static void pass();
	static void setFirst($String* s);
	static void test($String* s, ::java::lang::Integer* feature, ::java::lang::Integer* interim, ::java::lang::Integer* update, ::java::lang::Integer* patch, $String* pre, ::java::lang::Integer* build, $String* opt);
	static void testCompare(::java::lang::Runtime$Version* v0, ::java::lang::Runtime$Version* v1, int32_t compare);
	static void testCompareNO(::java::lang::Runtime$Version* v0, ::java::lang::Runtime$Version* v1, int32_t compare);
	static void testEHC($String* s0, $String* s1, bool eq, bool eqNO, int32_t cmp, int32_t cmpNO);
	static void testEquals(::java::lang::Runtime$Version* v0, ::java::lang::Runtime$Version* v1, bool eq);
	static void testEqualsNO(::java::lang::Runtime$Version* v0, ::java::lang::Runtime$Version* v1, bool eq);
	static void testHashCode(::java::lang::Runtime$Version* v0, ::java::lang::Runtime$Version* v1, bool eq);
	static void testInt(int32_t got, int32_t exp);
	static ::java::lang::Runtime$Version* testParse($String* s);
	static void testStr($String* got, $String* exp);
	static void testVersion();
	static void testVersion(::java::util::List* vnum, $String* s);
	static void tryCatch($String* s, $Class* ex);
	static $Class* IAE;
	static $Class* NPE;
	static $Class* NFE;
	static ::java::math::BigInteger* TOO_BIG;
	static $String* TOO_BIG_STR;
	static int32_t fail$;
	static int32_t pass$;
	static $Throwable* first;
};

#pragma pop_macro("IAE")
#pragma pop_macro("NFE")
#pragma pop_macro("NPE")
#pragma pop_macro("TOO_BIG")
#pragma pop_macro("TOO_BIG_STR")

#endif // _Basic4Version_h_