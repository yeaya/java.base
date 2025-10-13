#ifndef _TestSynchronization_h_
#define _TestSynchronization_h_
//$ class TestSynchronization
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BOOLEAN_VAL")
#undef BOOLEAN_VAL
#pragma push_macro("CHAR_ARRAY_VAL")
#undef CHAR_ARRAY_VAL
#pragma push_macro("CHAR_SEQUENCE_VAL")
#undef CHAR_SEQUENCE_VAL
#pragma push_macro("CHAR_VAL")
#undef CHAR_VAL
#pragma push_macro("DOUBLE_VAL")
#undef DOUBLE_VAL
#pragma push_macro("FLOAT_VAL")
#undef FLOAT_VAL
#pragma push_macro("INT_VAL")
#undef INT_VAL
#pragma push_macro("LONG_VAL")
#undef LONG_VAL
#pragma push_macro("OBJECT_VAL")
#undef OBJECT_VAL
#pragma push_macro("STRING_BUFFER_VAL")
#undef STRING_BUFFER_VAL
#pragma push_macro("STRING_BUILDER_VAL")
#undef STRING_BUILDER_VAL
#pragma push_macro("STRING_VAL")
#undef STRING_VAL

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuffer;
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class $export TestSynchronization : public ::java::lang::Object {
	$class(TestSynchronization, 0, ::java::lang::Object)
public:
	TestSynchronization();
	void init$();
	static void invokeMethod($Class* aClass, ::java::lang::reflect::Method* m, $ObjectArray* args);
	static bool isSynchronized(::java::lang::reflect::Method* m, Object$* target, $ObjectArray* args);
	static void main($StringArray* args);
	static void testClass($Class* aClass, bool isSelfTest);
	static void testMethod($Class* aClass, ::java::lang::reflect::Method* m);
	static const bool BOOLEAN_VAL = true;
	static const char16_t CHAR_VAL = ((char16_t)120);
	static $chars* CHAR_ARRAY_VAL;
	static const int32_t INT_VAL = 1;
	static double DOUBLE_VAL;
	static float FLOAT_VAL;
	static const int64_t LONG_VAL = (int64_t)1;
	static $Object* OBJECT_VAL;
	static $String* STRING_VAL;
	static ::java::lang::StringBuilder* STRING_BUILDER_VAL;
	static ::java::lang::StringBuffer* STRING_BUFFER_VAL;
	static $Array<::java::lang::CharSequence>* CHAR_SEQUENCE_VAL;
};

#pragma pop_macro("BOOLEAN_VAL")
#pragma pop_macro("CHAR_ARRAY_VAL")
#pragma pop_macro("CHAR_SEQUENCE_VAL")
#pragma pop_macro("CHAR_VAL")
#pragma pop_macro("DOUBLE_VAL")
#pragma pop_macro("FLOAT_VAL")
#pragma pop_macro("INT_VAL")
#pragma pop_macro("LONG_VAL")
#pragma pop_macro("OBJECT_VAL")
#pragma pop_macro("STRING_BUFFER_VAL")
#pragma pop_macro("STRING_BUILDER_VAL")
#pragma pop_macro("STRING_VAL")

#endif // _TestSynchronization_h_