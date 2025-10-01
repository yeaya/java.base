#ifndef _jdk_internal_module_ModuleInfo$ConstantPool$Index2Entry_h_
#define _jdk_internal_module_ModuleInfo$ConstantPool$Index2Entry_h_
//$ class jdk.internal.module.ModuleInfo$ConstantPool$Index2Entry
//$ extends jdk.internal.module.ModuleInfo$ConstantPool$Entry

#include <jdk/internal/module/ModuleInfo$ConstantPool$Entry.h>

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfo$ConstantPool$Index2Entry : public ::jdk::internal::module::ModuleInfo$ConstantPool$Entry {
	$class(ModuleInfo$ConstantPool$Index2Entry, $NO_CLASS_INIT, ::jdk::internal::module::ModuleInfo$ConstantPool$Entry)
public:
	ModuleInfo$ConstantPool$Index2Entry();
	void init$(int32_t tag, int32_t index1, int32_t index2);
	int32_t index1 = 0;
	int32_t index2 = 0;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfo$ConstantPool$Index2Entry_h_