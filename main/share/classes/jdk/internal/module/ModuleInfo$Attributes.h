#ifndef _jdk_internal_module_ModuleInfo$Attributes_h_
#define _jdk_internal_module_ModuleInfo$Attributes_h_
//$ class jdk.internal.module.ModuleInfo$Attributes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes;
			class ModuleResolution;
			class ModuleTarget;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export ModuleInfo$Attributes : public ::java::lang::Object {
	$class(ModuleInfo$Attributes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleInfo$Attributes();
	void init$(::java::lang::module::ModuleDescriptor* descriptor, ::jdk::internal::module::ModuleTarget* target, ::jdk::internal::module::ModuleHashes* recordedHashes, ::jdk::internal::module::ModuleResolution* moduleResolution);
	::java::lang::module::ModuleDescriptor* descriptor();
	::jdk::internal::module::ModuleResolution* moduleResolution();
	::jdk::internal::module::ModuleHashes* recordedHashes();
	::jdk::internal::module::ModuleTarget* target();
	::java::lang::module::ModuleDescriptor* descriptor$ = nullptr;
	::jdk::internal::module::ModuleTarget* target$ = nullptr;
	::jdk::internal::module::ModuleHashes* recordedHashes$ = nullptr;
	::jdk::internal::module::ModuleResolution* moduleResolution$ = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfo$Attributes_h_