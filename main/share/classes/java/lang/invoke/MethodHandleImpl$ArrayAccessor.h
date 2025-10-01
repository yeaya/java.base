#ifndef _java_lang_invoke_MethodHandleImpl$ArrayAccessor_h_
#define _java_lang_invoke_MethodHandleImpl$ArrayAccessor_h_
//$ class java.lang.invoke.MethodHandleImpl$ArrayAccessor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GETTER_INDEX")
#undef GETTER_INDEX
#pragma push_macro("TYPED_ACCESSORS")
#undef TYPED_ACCESSORS
#pragma push_macro("OBJECT_ARRAY_GETTER")
#undef OBJECT_ARRAY_GETTER
#pragma push_macro("INDEX_LIMIT")
#undef INDEX_LIMIT
#pragma push_macro("OBJECT_ARRAY_LENGTH")
#undef OBJECT_ARRAY_LENGTH
#pragma push_macro("OBJECT_ARRAY_SETTER")
#undef OBJECT_ARRAY_SETTER
#pragma push_macro("LENGTH_INDEX")
#undef LENGTH_INDEX
#pragma push_macro("SETTER_INDEX")
#undef SETTER_INDEX

namespace java {
	namespace lang {
		class ClassValue;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandleImpl$ArrayAccess;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$ArrayAccessor : public ::java::lang::Object {
	$class(MethodHandleImpl$ArrayAccessor, 0, ::java::lang::Object)
public:
	MethodHandleImpl$ArrayAccessor();
	void init$();
	static ::java::lang::invoke::MethodType* correctType($Class* arrayClass, ::java::lang::invoke::MethodHandleImpl$ArrayAccess* access);
	static ::java::lang::invoke::MethodHandle* getAccessor($Class* arrayClass, ::java::lang::invoke::MethodHandleImpl$ArrayAccess* access);
	static int8_t getElementB($bytes* a, int32_t i);
	static char16_t getElementC($chars* a, int32_t i);
	static double getElementD($doubles* a, int32_t i);
	static float getElementF($floats* a, int32_t i);
	static int32_t getElementI($ints* a, int32_t i);
	static int64_t getElementJ($longs* a, int32_t i);
	static $Object* getElementL($ObjectArray* a, int32_t i);
	static int16_t getElementS($shorts* a, int32_t i);
	static bool getElementZ($booleans* a, int32_t i);
	static int32_t lengthB($bytes* a);
	static int32_t lengthC($chars* a);
	static int32_t lengthD($doubles* a);
	static int32_t lengthF($floats* a);
	static int32_t lengthI($ints* a);
	static int32_t lengthJ($longs* a);
	static int32_t lengthL($ObjectArray* a);
	static int32_t lengthS($shorts* a);
	static int32_t lengthZ($booleans* a);
	static $String* name($Class* arrayClass, ::java::lang::invoke::MethodHandleImpl$ArrayAccess* access);
	static void setElementB($bytes* a, int32_t i, int8_t x);
	static void setElementC($chars* a, int32_t i, char16_t x);
	static void setElementD($doubles* a, int32_t i, double x);
	static void setElementF($floats* a, int32_t i, float x);
	static void setElementI($ints* a, int32_t i, int32_t x);
	static void setElementJ($longs* a, int32_t i, int64_t x);
	static void setElementL($ObjectArray* a, int32_t i, Object$* x);
	static void setElementS($shorts* a, int32_t i, int16_t x);
	static void setElementZ($booleans* a, int32_t i, bool x);
	static ::java::lang::invoke::MethodType* type($Class* arrayClass, ::java::lang::invoke::MethodHandleImpl$ArrayAccess* access);
	static bool $assertionsDisabled;
	static const int32_t GETTER_INDEX = 0;
	static const int32_t SETTER_INDEX = 1;
	static const int32_t LENGTH_INDEX = 2;
	static const int32_t INDEX_LIMIT = 3;
	static ::java::lang::ClassValue* TYPED_ACCESSORS;
	static ::java::lang::invoke::MethodHandle* OBJECT_ARRAY_GETTER;
	static ::java::lang::invoke::MethodHandle* OBJECT_ARRAY_SETTER;
	static ::java::lang::invoke::MethodHandle* OBJECT_ARRAY_LENGTH;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("GETTER_INDEX")
#pragma pop_macro("TYPED_ACCESSORS")
#pragma pop_macro("OBJECT_ARRAY_GETTER")
#pragma pop_macro("INDEX_LIMIT")
#pragma pop_macro("OBJECT_ARRAY_LENGTH")
#pragma pop_macro("OBJECT_ARRAY_SETTER")
#pragma pop_macro("LENGTH_INDEX")
#pragma pop_macro("SETTER_INDEX")

#endif // _java_lang_invoke_MethodHandleImpl$ArrayAccessor_h_