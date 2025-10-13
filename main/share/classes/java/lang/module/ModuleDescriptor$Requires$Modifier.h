#ifndef _java_lang_module_ModuleDescriptor$Requires$Modifier_h_
#define _java_lang_module_ModuleDescriptor$Requires$Modifier_h_
//$ class java.lang.module.ModuleDescriptor$Requires$Modifier
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC
#pragma push_macro("TRANSITIVE")
#undef TRANSITIVE

namespace java {
	namespace lang {
		namespace module {

class $export ModuleDescriptor$Requires$Modifier : public ::java::lang::Enum {
	$class(ModuleDescriptor$Requires$Modifier, 0, ::java::lang::Enum)
public:
	ModuleDescriptor$Requires$Modifier();
	static $Array<::java::lang::module::ModuleDescriptor$Requires$Modifier>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::module::ModuleDescriptor$Requires$Modifier* valueOf($String* name);
	static $Array<::java::lang::module::ModuleDescriptor$Requires$Modifier>* values();
	static ::java::lang::module::ModuleDescriptor$Requires$Modifier* TRANSITIVE;
	static ::java::lang::module::ModuleDescriptor$Requires$Modifier* STATIC;
	static ::java::lang::module::ModuleDescriptor$Requires$Modifier* SYNTHETIC;
	static ::java::lang::module::ModuleDescriptor$Requires$Modifier* MANDATED;
	static $Array<::java::lang::module::ModuleDescriptor$Requires$Modifier>* $VALUES;
};

		} // module
	} // lang
} // java

#pragma pop_macro("MANDATED")
#pragma pop_macro("STATIC")
#pragma pop_macro("SYNTHETIC")
#pragma pop_macro("TRANSITIVE")

#endif // _java_lang_module_ModuleDescriptor$Requires$Modifier_h_