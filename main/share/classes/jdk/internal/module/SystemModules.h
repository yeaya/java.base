#ifndef _jdk_internal_module_SystemModules_h_
#define _jdk_internal_module_SystemModules_h_
//$ interface jdk.internal.module.SystemModules
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class SystemModules : public ::java::lang::Object {
	$interface(SystemModules, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool hasIncubatorModules() {return false;}
	virtual bool hasSplitPackages() {return false;}
	virtual $Array<::java::lang::module::ModuleDescriptor>* moduleDescriptors() {return nullptr;}
	virtual $Array<::jdk::internal::module::ModuleHashes>* moduleHashes() {return nullptr;}
	virtual ::java::util::Map* moduleReads() {return nullptr;}
	virtual $Array<::jdk::internal::module::ModuleResolution>* moduleResolutions() {return nullptr;}
	virtual $Array<::jdk::internal::module::ModuleTarget>* moduleTargets() {return nullptr;}
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_SystemModules_h_