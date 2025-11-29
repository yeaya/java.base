#include <jdk/internal/module/SystemModules.h>

#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/Map.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/module/ModuleTarget.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace module {

$MethodInfo _SystemModules_MethodInfo_[] = {
	{"hasIncubatorModules", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hasSplitPackages", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"moduleDescriptors", "()[Ljava/lang/module/ModuleDescriptor;", nullptr, $PUBLIC | $ABSTRACT},
	{"moduleHashes", "()[Ljdk/internal/module/ModuleHashes;", nullptr, $PUBLIC | $ABSTRACT},
	{"moduleReads", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PUBLIC | $ABSTRACT},
	{"moduleResolutions", "()[Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC | $ABSTRACT},
	{"moduleTargets", "()[Ljdk/internal/module/ModuleTarget;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SystemModules_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.module.SystemModules",
	nullptr,
	nullptr,
	nullptr,
	_SystemModules_MethodInfo_
};

$Object* allocate$SystemModules($Class* clazz) {
	return $of($alloc(SystemModules));
}

$Class* SystemModules::load$($String* name, bool initialize) {
	$loadClass(SystemModules, name, initialize, &_SystemModules_ClassInfo_, allocate$SystemModules);
	return class$;
}

$Class* SystemModules::class$ = nullptr;

		} // module
	} // internal
} // jdk