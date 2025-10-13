#ifndef _java_lang_runtime_SwitchBootstraps_h_
#define _java_lang_runtime_SwitchBootstraps_h_
//$ class java.lang.runtime.SwitchBootstraps
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DO_ENUM_SWITCH")
#undef DO_ENUM_SWITCH
#pragma push_macro("DO_TYPE_SWITCH")
#undef DO_TYPE_SWITCH
#pragma push_macro("LOOKUP")
#undef LOOKUP

namespace java {
	namespace lang {
		class Enum;
	}
}
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
		namespace runtime {

class $export SwitchBootstraps : public ::java::lang::Object {
	$class(SwitchBootstraps, 0, ::java::lang::Object)
public:
	SwitchBootstraps();
	void init$();
	static $Object* convertEnumConstants(::java::lang::invoke::MethodHandles$Lookup* lookup, $Class* enumClassTemplate, Object$* label);
	static int32_t doEnumSwitch(::java::lang::Enum* target, int32_t startIndex, $ObjectArray* labels);
	static int32_t doTypeSwitch(Object$* target, int32_t startIndex, $ObjectArray* labels);
	static ::java::lang::invoke::CallSite* enumSwitch(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* invocationName, ::java::lang::invoke::MethodType* invocationType, $ObjectArray* labels);
	static $Object* lambda$enumSwitch$0(::java::lang::invoke::MethodHandles$Lookup* lookup, $Class* enumClass, Object$* l);
	static ::java::lang::invoke::CallSite* typeSwitch(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* invocationName, ::java::lang::invoke::MethodType* invocationType, $ObjectArray* labels);
	static void verifyLabel(Object$* label);
	static ::java::lang::invoke::MethodHandles$Lookup* LOOKUP;
	static ::java::lang::invoke::MethodHandle* DO_TYPE_SWITCH;
	static ::java::lang::invoke::MethodHandle* DO_ENUM_SWITCH;
};

		} // runtime
	} // lang
} // java

#pragma pop_macro("DO_ENUM_SWITCH")
#pragma pop_macro("DO_TYPE_SWITCH")
#pragma pop_macro("LOOKUP")

#endif // _java_lang_runtime_SwitchBootstraps_h_