#ifndef _java_lang_runtime_ObjectMethods_h_
#define _java_lang_runtime_ObjectMethods_h_
//$ class java.lang.runtime.ObjectMethods
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OBJECTS_TOSTRING")
#undef OBJECTS_TOSTRING
#pragma push_macro("OBJECT_TO_STRING")
#undef OBJECT_TO_STRING
#pragma push_macro("ZERO")
#undef ZERO
#pragma push_macro("OBJECT_EQ")
#undef OBJECT_EQ
#pragma push_macro("OBJECT_EQUALS")
#undef OBJECT_EQUALS
#pragma push_macro("OBJECTS_HASHCODE")
#undef OBJECTS_HASHCODE
#pragma push_macro("HASH_COMBINER")
#undef HASH_COMBINER
#pragma push_macro("TRUE")
#undef TRUE
#pragma push_macro("STRING_FORMAT")
#undef STRING_FORMAT
#pragma push_macro("DESCRIPTOR_MT")
#undef DESCRIPTOR_MT
#pragma push_macro("CLASS_IS_INSTANCE")
#undef CLASS_IS_INSTANCE
#pragma push_macro("NAMES_MT")
#undef NAMES_MT
#pragma push_macro("FALSE")
#undef FALSE
#pragma push_macro("OBJECTS_EQUALS")
#undef OBJECTS_EQUALS
#pragma push_macro("OBJECT_HASHCODE")
#undef OBJECT_HASHCODE

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
			class TypeDescriptor;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
		class List;
	}
}

namespace java {
	namespace lang {
		namespace runtime {

class $import ObjectMethods : public ::java::lang::Object {
	$class(ObjectMethods, 0, ::java::lang::Object)
public:
	ObjectMethods();
	void init$();
	static $Object* bootstrap(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::TypeDescriptor* type, $Class* recordClass, $String* names, $Array<::java::lang::invoke::MethodHandle>* getters);
	static bool eq(Object$* a, Object$* b);
	static bool eq(int8_t a, int8_t b);
	static bool eq(int16_t a, int16_t b);
	static bool eq(char16_t a, char16_t b);
	static bool eq(int32_t a, int32_t b);
	static bool eq(int64_t a, int64_t b);
	static bool eq(float a, float b);
	static bool eq(double a, double b);
	static bool eq(bool a, bool b);
	static ::java::lang::invoke::MethodHandle* equalator($Class* clazz);
	static int32_t hashCombiner(int32_t x, int32_t y);
	static ::java::lang::invoke::MethodHandle* hasher($Class* clazz);
	static ::java::lang::invoke::MethodHandle* makeEquals($Class* receiverClass, ::java::util::List* getters);
	static ::java::lang::invoke::MethodHandle* makeHashCode($Class* receiverClass, ::java::util::List* getters);
	static ::java::lang::invoke::MethodHandle* makeToString($Class* receiverClass, ::java::util::List* getters, ::java::util::List* names);
	static ::java::lang::invoke::MethodHandle* stringifier($Class* clazz);
	static bool $assertionsDisabled;
	static ::java::lang::invoke::MethodType* DESCRIPTOR_MT;
	static ::java::lang::invoke::MethodType* NAMES_MT;
	static ::java::lang::invoke::MethodHandle* FALSE;
	static ::java::lang::invoke::MethodHandle* TRUE;
	static ::java::lang::invoke::MethodHandle* ZERO;
	static ::java::lang::invoke::MethodHandle* CLASS_IS_INSTANCE;
	static ::java::lang::invoke::MethodHandle* OBJECT_EQUALS;
	static ::java::lang::invoke::MethodHandle* OBJECTS_EQUALS;
	static ::java::lang::invoke::MethodHandle* OBJECTS_HASHCODE;
	static ::java::lang::invoke::MethodHandle* OBJECTS_TOSTRING;
	static ::java::lang::invoke::MethodHandle* OBJECT_EQ;
	static ::java::lang::invoke::MethodHandle* OBJECT_HASHCODE;
	static ::java::lang::invoke::MethodHandle* OBJECT_TO_STRING;
	static ::java::lang::invoke::MethodHandle* STRING_FORMAT;
	static ::java::lang::invoke::MethodHandle* HASH_COMBINER;
	static ::java::util::HashMap* primitiveEquals;
	static ::java::util::HashMap* primitiveHashers;
	static ::java::util::HashMap* primitiveToString;
};

		} // runtime
	} // lang
} // java

#pragma pop_macro("OBJECTS_TOSTRING")
#pragma pop_macro("OBJECT_TO_STRING")
#pragma pop_macro("ZERO")
#pragma pop_macro("OBJECT_EQ")
#pragma pop_macro("OBJECT_EQUALS")
#pragma pop_macro("OBJECTS_HASHCODE")
#pragma pop_macro("HASH_COMBINER")
#pragma pop_macro("TRUE")
#pragma pop_macro("STRING_FORMAT")
#pragma pop_macro("DESCRIPTOR_MT")
#pragma pop_macro("CLASS_IS_INSTANCE")
#pragma pop_macro("NAMES_MT")
#pragma pop_macro("FALSE")
#pragma pop_macro("OBJECTS_EQUALS")
#pragma pop_macro("OBJECT_HASHCODE")

#endif // _java_lang_runtime_ObjectMethods_h_