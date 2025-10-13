#ifndef _ImplicitStringConcatBoundaries_h_
#define _ImplicitStringConcatBoundaries_h_
//$ class ImplicitStringConcatBoundaries
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Short.h>

#pragma push_macro("BOOL_FALSE_1")
#undef BOOL_FALSE_1
#pragma push_macro("BOOL_FALSE_2")
#undef BOOL_FALSE_2
#pragma push_macro("BOOL_TRUE_1")
#undef BOOL_TRUE_1
#pragma push_macro("BOOL_TRUE_2")
#undef BOOL_TRUE_2
#pragma push_macro("BYTE_MAX_1")
#undef BYTE_MAX_1
#pragma push_macro("BYTE_MAX_2")
#undef BYTE_MAX_2
#pragma push_macro("BYTE_MIN_1")
#undef BYTE_MIN_1
#pragma push_macro("BYTE_MIN_2")
#undef BYTE_MIN_2
#pragma push_macro("CHAR_MAX_1")
#undef CHAR_MAX_1
#pragma push_macro("CHAR_MAX_2")
#undef CHAR_MAX_2
#pragma push_macro("CHAR_MIN_1")
#undef CHAR_MIN_1
#pragma push_macro("CHAR_MIN_2")
#undef CHAR_MIN_2
#pragma push_macro("DOUBLE_MAX_1")
#undef DOUBLE_MAX_1
#pragma push_macro("DOUBLE_MAX_2")
#undef DOUBLE_MAX_2
#pragma push_macro("DOUBLE_MIN_1")
#undef DOUBLE_MIN_1
#pragma push_macro("DOUBLE_MIN_2")
#undef DOUBLE_MIN_2
#pragma push_macro("DOUBLE_MIN_EXP_1")
#undef DOUBLE_MIN_EXP_1
#pragma push_macro("DOUBLE_MIN_EXP_2")
#undef DOUBLE_MIN_EXP_2
#pragma push_macro("DOUBLE_MIN_NORM_1")
#undef DOUBLE_MIN_NORM_1
#pragma push_macro("DOUBLE_MIN_NORM_2")
#undef DOUBLE_MIN_NORM_2
#pragma push_macro("FLOAT_MAX_1")
#undef FLOAT_MAX_1
#pragma push_macro("FLOAT_MAX_2")
#undef FLOAT_MAX_2
#pragma push_macro("FLOAT_MIN_1")
#undef FLOAT_MIN_1
#pragma push_macro("FLOAT_MIN_2")
#undef FLOAT_MIN_2
#pragma push_macro("FLOAT_MIN_EXP_1")
#undef FLOAT_MIN_EXP_1
#pragma push_macro("FLOAT_MIN_EXP_2")
#undef FLOAT_MIN_EXP_2
#pragma push_macro("FLOAT_MIN_NORM_1")
#undef FLOAT_MIN_NORM_1
#pragma push_macro("FLOAT_MIN_NORM_2")
#undef FLOAT_MIN_NORM_2
#pragma push_macro("INT_MAX_1")
#undef INT_MAX_1
#pragma push_macro("INT_MAX_2")
#undef INT_MAX_2
#pragma push_macro("INT_MIN_1")
#undef INT_MIN_1
#pragma push_macro("INT_MIN_2")
#undef INT_MIN_2
#pragma push_macro("LONG_MAX_1")
#undef LONG_MAX_1
#pragma push_macro("LONG_MAX_2")
#undef LONG_MAX_2
#pragma push_macro("LONG_MIN_1")
#undef LONG_MIN_1
#pragma push_macro("LONG_MIN_2")
#undef LONG_MIN_2
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("SHORT_MAX_1")
#undef SHORT_MAX_1
#pragma push_macro("SHORT_MAX_2")
#undef SHORT_MAX_2
#pragma push_macro("SHORT_MIN_1")
#undef SHORT_MIN_1
#pragma push_macro("SHORT_MIN_2")
#undef SHORT_MIN_2

class $export ImplicitStringConcatBoundaries : public ::java::lang::Object {
	$class(ImplicitStringConcatBoundaries, 0, ::java::lang::Object)
public:
	ImplicitStringConcatBoundaries();
	void init$();
	static void main($StringArray* args);
	static void test($String* expected, $String* actual);
	static const bool BOOL_TRUE_1 = true;
	static bool BOOL_TRUE_2;
	static const bool BOOL_FALSE_1 = false;
	static bool BOOL_FALSE_2;
	static const int8_t BYTE_MIN_1 = ::java::lang::Byte::MIN_VALUE;
	static int8_t BYTE_MIN_2;
	static const int8_t BYTE_MAX_1 = ::java::lang::Byte::MAX_VALUE;
	static int8_t BYTE_MAX_2;
	static const int16_t SHORT_MIN_1 = ::java::lang::Short::MIN_VALUE;
	static int16_t SHORT_MIN_2;
	static const int16_t SHORT_MAX_1 = ::java::lang::Short::MAX_VALUE;
	static int16_t SHORT_MAX_2;
	static const char16_t CHAR_MIN_1 = ::java::lang::Character::MIN_VALUE;
	static char16_t CHAR_MIN_2;
	static const char16_t CHAR_MAX_1 = ::java::lang::Character::MAX_VALUE;
	static char16_t CHAR_MAX_2;
	static const int32_t INT_MIN_1 = ::java::lang::Integer::MIN_VALUE;
	static int32_t INT_MIN_2;
	static const int32_t INT_MAX_1 = ::java::lang::Integer::MAX_VALUE;
	static int32_t INT_MAX_2;
	static float FLOAT_MIN_EXP_1;
	static float FLOAT_MIN_EXP_2;
	static float FLOAT_MIN_NORM_1;
	static float FLOAT_MIN_NORM_2;
	static float FLOAT_MIN_1;
	static float FLOAT_MIN_2;
	static float FLOAT_MAX_1;
	static float FLOAT_MAX_2;
	static const int64_t LONG_MIN_1 = ::java::lang::Long::MIN_VALUE;
	static int64_t LONG_MIN_2;
	static const int64_t LONG_MAX_1 = ::java::lang::Long::MAX_VALUE;
	static int64_t LONG_MAX_2;
	static double DOUBLE_MIN_EXP_1;
	static double DOUBLE_MIN_EXP_2;
	static double DOUBLE_MIN_NORM_1;
	static double DOUBLE_MIN_NORM_2;
	static double DOUBLE_MIN_1;
	static double DOUBLE_MIN_2;
	static double DOUBLE_MAX_1;
	static double DOUBLE_MAX_2;
};

#pragma pop_macro("BOOL_FALSE_1")
#pragma pop_macro("BOOL_FALSE_2")
#pragma pop_macro("BOOL_TRUE_1")
#pragma pop_macro("BOOL_TRUE_2")
#pragma pop_macro("BYTE_MAX_1")
#pragma pop_macro("BYTE_MAX_2")
#pragma pop_macro("BYTE_MIN_1")
#pragma pop_macro("BYTE_MIN_2")
#pragma pop_macro("CHAR_MAX_1")
#pragma pop_macro("CHAR_MAX_2")
#pragma pop_macro("CHAR_MIN_1")
#pragma pop_macro("CHAR_MIN_2")
#pragma pop_macro("DOUBLE_MAX_1")
#pragma pop_macro("DOUBLE_MAX_2")
#pragma pop_macro("DOUBLE_MIN_1")
#pragma pop_macro("DOUBLE_MIN_2")
#pragma pop_macro("DOUBLE_MIN_EXP_1")
#pragma pop_macro("DOUBLE_MIN_EXP_2")
#pragma pop_macro("DOUBLE_MIN_NORM_1")
#pragma pop_macro("DOUBLE_MIN_NORM_2")
#pragma pop_macro("FLOAT_MAX_1")
#pragma pop_macro("FLOAT_MAX_2")
#pragma pop_macro("FLOAT_MIN_1")
#pragma pop_macro("FLOAT_MIN_2")
#pragma pop_macro("FLOAT_MIN_EXP_1")
#pragma pop_macro("FLOAT_MIN_EXP_2")
#pragma pop_macro("FLOAT_MIN_NORM_1")
#pragma pop_macro("FLOAT_MIN_NORM_2")
#pragma pop_macro("INT_MAX_1")
#pragma pop_macro("INT_MAX_2")
#pragma pop_macro("INT_MIN_1")
#pragma pop_macro("INT_MIN_2")
#pragma pop_macro("LONG_MAX_1")
#pragma pop_macro("LONG_MAX_2")
#pragma pop_macro("LONG_MIN_1")
#pragma pop_macro("LONG_MIN_2")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("SHORT_MAX_1")
#pragma pop_macro("SHORT_MAX_2")
#pragma pop_macro("SHORT_MIN_1")
#pragma pop_macro("SHORT_MIN_2")

#endif // _ImplicitStringConcatBoundaries_h_