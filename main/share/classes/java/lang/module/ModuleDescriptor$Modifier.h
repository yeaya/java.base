#ifndef _java_lang_module_ModuleDescriptor$Modifier_h_
#define _java_lang_module_ModuleDescriptor$Modifier_h_
//$ class java.lang.module.ModuleDescriptor$Modifier
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AUTOMATIC")
#undef AUTOMATIC
#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("OPEN")
#undef OPEN
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC

namespace java {
	namespace lang {
		namespace module {

class $export ModuleDescriptor$Modifier : public ::java::lang::Enum {
	$class(ModuleDescriptor$Modifier, $PRELOAD, ::java::lang::Enum)
public:
	ModuleDescriptor$Modifier();
	static $Array<::java::lang::module::ModuleDescriptor$Modifier>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::module::ModuleDescriptor$Modifier* valueOf($String* name);
	static $Array<::java::lang::module::ModuleDescriptor$Modifier>* values();
	static ::java::lang::module::ModuleDescriptor$Modifier* OPEN;
	static ::java::lang::module::ModuleDescriptor$Modifier* AUTOMATIC;
	static ::java::lang::module::ModuleDescriptor$Modifier* SYNTHETIC;
	static ::java::lang::module::ModuleDescriptor$Modifier* MANDATED;
	static $Array<::java::lang::module::ModuleDescriptor$Modifier>* $VALUES;
};

		} // module
	} // lang
} // java

#pragma pop_macro("AUTOMATIC")
#pragma pop_macro("MANDATED")
#pragma pop_macro("OPEN")
#pragma pop_macro("SYNTHETIC")

#endif // _java_lang_module_ModuleDescriptor$Modifier_h_