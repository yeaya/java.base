#ifndef _java_lang_module_ModuleDescriptor$Exports$Modifier_h_
#define _java_lang_module_ModuleDescriptor$Exports$Modifier_h_
//$ class java.lang.module.ModuleDescriptor$Exports$Modifier
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC

namespace java {
	namespace lang {
		namespace module {

class $export ModuleDescriptor$Exports$Modifier : public ::java::lang::Enum {
	$class(ModuleDescriptor$Exports$Modifier, 0, ::java::lang::Enum)
public:
	ModuleDescriptor$Exports$Modifier();
	static $Array<::java::lang::module::ModuleDescriptor$Exports$Modifier>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::module::ModuleDescriptor$Exports$Modifier* valueOf($String* name);
	static $Array<::java::lang::module::ModuleDescriptor$Exports$Modifier>* values();
	static ::java::lang::module::ModuleDescriptor$Exports$Modifier* SYNTHETIC;
	static ::java::lang::module::ModuleDescriptor$Exports$Modifier* MANDATED;
	static $Array<::java::lang::module::ModuleDescriptor$Exports$Modifier>* $VALUES;
};

		} // module
	} // lang
} // java

#pragma pop_macro("MANDATED")
#pragma pop_macro("SYNTHETIC")

#endif // _java_lang_module_ModuleDescriptor$Exports$Modifier_h_