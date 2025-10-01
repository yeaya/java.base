#ifndef _jdk_internal_module_ModuleInfo$ConstantPool$ValueEntry_h_
#define _jdk_internal_module_ModuleInfo$ConstantPool$ValueEntry_h_
//$ class jdk.internal.module.ModuleInfo$ConstantPool$ValueEntry
//$ extends jdk.internal.module.ModuleInfo$ConstantPool$Entry

#include <jdk/internal/module/ModuleInfo$ConstantPool$Entry.h>

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfo$ConstantPool$ValueEntry : public ::jdk::internal::module::ModuleInfo$ConstantPool$Entry {
	$class(ModuleInfo$ConstantPool$ValueEntry, $NO_CLASS_INIT, ::jdk::internal::module::ModuleInfo$ConstantPool$Entry)
public:
	ModuleInfo$ConstantPool$ValueEntry();
	void init$(int32_t tag, Object$* value);
	$Object* value = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfo$ConstantPool$ValueEntry_h_