#ifndef _jdk_internal_module_ModuleInfo$ConstantPool$Entry_h_
#define _jdk_internal_module_ModuleInfo$ConstantPool$Entry_h_
//$ class jdk.internal.module.ModuleInfo$ConstantPool$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfo$ConstantPool$Entry : public ::java::lang::Object {
	$class(ModuleInfo$ConstantPool$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleInfo$ConstantPool$Entry();
	void init$(int32_t tag);
	int32_t tag = 0;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfo$ConstantPool$Entry_h_