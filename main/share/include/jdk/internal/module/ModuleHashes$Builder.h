#ifndef _jdk_internal_module_ModuleHashes$Builder_h_
#define _jdk_internal_module_ModuleHashes$Builder_h_
//$ class jdk.internal.module.ModuleHashes$Builder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleHashes$Builder : public ::java::lang::Object {
	$class(ModuleHashes$Builder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleHashes$Builder();
	void init$($String* algorithm, int32_t initialCapacity);
	virtual ::jdk::internal::module::ModuleHashes* build();
	virtual ::jdk::internal::module::ModuleHashes$Builder* hashForModule($String* mn, $bytes* hash);
	$String* algorithm = nullptr;
	::java::util::Map* nameToHash = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleHashes$Builder_h_