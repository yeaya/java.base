#ifndef _jdk_internal_module_ExplodedSystemModules_h_
#define _jdk_internal_module_ExplodedSystemModules_h_
//$ class jdk.internal.module.ExplodedSystemModules
//$ extends jdk.internal.module.SystemModules

#include <java/lang/Array.h>
#include <jdk/internal/module/SystemModules.h>

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

class ExplodedSystemModules : public ::jdk::internal::module::SystemModules {
	$class(ExplodedSystemModules, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::module::SystemModules)
public:
	ExplodedSystemModules();
	void init$();
	virtual bool hasIncubatorModules() override;
	virtual bool hasSplitPackages() override;
	virtual $Array<::java::lang::module::ModuleDescriptor>* moduleDescriptors() override;
	virtual $Array<::jdk::internal::module::ModuleHashes>* moduleHashes() override;
	virtual ::java::util::Map* moduleReads() override;
	virtual $Array<::jdk::internal::module::ModuleResolution>* moduleResolutions() override;
	virtual $Array<::jdk::internal::module::ModuleTarget>* moduleTargets() override;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ExplodedSystemModules_h_