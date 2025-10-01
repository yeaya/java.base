#ifndef _java_lang_module_ModuleDescriptor$Opens$Modifier_h_
#define _java_lang_module_ModuleDescriptor$Opens$Modifier_h_
//$ class java.lang.module.ModuleDescriptor$Opens$Modifier
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC
#pragma push_macro("MANDATED")
#undef MANDATED

namespace java {
	namespace lang {
		namespace module {

class $import ModuleDescriptor$Opens$Modifier : public ::java::lang::Enum {
	$class(ModuleDescriptor$Opens$Modifier, 0, ::java::lang::Enum)
public:
	ModuleDescriptor$Opens$Modifier();
	static $Array<::java::lang::module::ModuleDescriptor$Opens$Modifier>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::module::ModuleDescriptor$Opens$Modifier* valueOf($String* name);
	static $Array<::java::lang::module::ModuleDescriptor$Opens$Modifier>* values();
	static ::java::lang::module::ModuleDescriptor$Opens$Modifier* SYNTHETIC;
	static ::java::lang::module::ModuleDescriptor$Opens$Modifier* MANDATED;
	static $Array<::java::lang::module::ModuleDescriptor$Opens$Modifier>* $VALUES;
};

		} // module
	} // lang
} // java

#pragma pop_macro("SYNTHETIC")
#pragma pop_macro("MANDATED")

#endif // _java_lang_module_ModuleDescriptor$Opens$Modifier_h_