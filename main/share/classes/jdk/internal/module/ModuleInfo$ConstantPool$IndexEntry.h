#ifndef _jdk_internal_module_ModuleInfo$ConstantPool$IndexEntry_h_
#define _jdk_internal_module_ModuleInfo$ConstantPool$IndexEntry_h_
//$ class jdk.internal.module.ModuleInfo$ConstantPool$IndexEntry
//$ extends jdk.internal.module.ModuleInfo$ConstantPool$Entry

#include <jdk/internal/module/ModuleInfo$ConstantPool$Entry.h>

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfo$ConstantPool$IndexEntry : public ::jdk::internal::module::ModuleInfo$ConstantPool$Entry {
	$class(ModuleInfo$ConstantPool$IndexEntry, $NO_CLASS_INIT, ::jdk::internal::module::ModuleInfo$ConstantPool$Entry)
public:
	ModuleInfo$ConstantPool$IndexEntry();
	void init$(int32_t tag, int32_t index);
	int32_t index = 0;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfo$ConstantPool$IndexEntry_h_