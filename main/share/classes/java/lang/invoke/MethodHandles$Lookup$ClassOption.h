#ifndef _java_lang_invoke_MethodHandles$Lookup$ClassOption_h_
#define _java_lang_invoke_MethodHandles$Lookup$ClassOption_h_
//$ class java.lang.invoke.MethodHandles$Lookup$ClassOption
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NESTMATE")
#undef NESTMATE
#pragma push_macro("STRONG")
#undef STRONG

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export MethodHandles$Lookup$ClassOption : public ::java::lang::Enum {
	$class(MethodHandles$Lookup$ClassOption, 0, ::java::lang::Enum)
public:
	MethodHandles$Lookup$ClassOption();
	static $Array<::java::lang::invoke::MethodHandles$Lookup$ClassOption>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t flag);
	static int32_t optionsToFlag(::java::util::Set* options);
	static ::java::lang::invoke::MethodHandles$Lookup$ClassOption* valueOf($String* name);
	static $Array<::java::lang::invoke::MethodHandles$Lookup$ClassOption>* values();
	static ::java::lang::invoke::MethodHandles$Lookup$ClassOption* NESTMATE;
	static ::java::lang::invoke::MethodHandles$Lookup$ClassOption* STRONG;
	static $Array<::java::lang::invoke::MethodHandles$Lookup$ClassOption>* $VALUES;
	int32_t flag = 0;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("NESTMATE")
#pragma pop_macro("STRONG")

#endif // _java_lang_invoke_MethodHandles$Lookup$ClassOption_h_