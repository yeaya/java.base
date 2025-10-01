#ifndef _java_lang_invoke_LambdaMetafactory_h_
#define _java_lang_invoke_LambdaMetafactory_h_
//$ class java.lang.invoke.LambdaMetafactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FLAG_BRIDGES")
#undef FLAG_BRIDGES
#pragma push_macro("FLAG_SERIALIZABLE")
#undef FLAG_SERIALIZABLE
#pragma push_macro("EMPTY_MT_ARRAY")
#undef EMPTY_MT_ARRAY
#pragma push_macro("FLAG_MARKERS")
#undef FLAG_MARKERS
#pragma push_macro("EMPTY_CLASS_ARRAY")
#undef EMPTY_CLASS_ARRAY

namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import LambdaMetafactory : public ::java::lang::Object {
	$class(LambdaMetafactory, 0, ::java::lang::Object)
public:
	LambdaMetafactory();
	void init$();
	static ::java::lang::invoke::CallSite* altMetafactory(::java::lang::invoke::MethodHandles$Lookup* caller, $String* interfaceMethodName, ::java::lang::invoke::MethodType* factoryType, $ObjectArray* args);
	static $Object* extractArg($ObjectArray* args, int32_t index, $Class* type);
	static $ObjectArray* extractArgs($ObjectArray* args, int32_t index, $Class* type, int32_t count);
	static ::java::lang::invoke::CallSite* metafactory(::java::lang::invoke::MethodHandles$Lookup* caller, $String* interfaceMethodName, ::java::lang::invoke::MethodType* factoryType, ::java::lang::invoke::MethodType* interfaceMethodType, ::java::lang::invoke::MethodHandle* implementation, ::java::lang::invoke::MethodType* dynamicMethodType);
	static const int32_t FLAG_SERIALIZABLE = 1; // 1 << 0
	static const int32_t FLAG_MARKERS = 2; // 1 << 1
	static const int32_t FLAG_BRIDGES = 4; // 1 << 2
	static $ClassArray* EMPTY_CLASS_ARRAY;
	static $Array<::java::lang::invoke::MethodType>* EMPTY_MT_ARRAY;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FLAG_BRIDGES")
#pragma pop_macro("FLAG_SERIALIZABLE")
#pragma pop_macro("EMPTY_MT_ARRAY")
#pragma pop_macro("FLAG_MARKERS")
#pragma pop_macro("EMPTY_CLASS_ARRAY")

#endif // _java_lang_invoke_LambdaMetafactory_h_