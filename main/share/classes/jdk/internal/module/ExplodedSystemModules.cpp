#include <jdk/internal/module/ExplodedSystemModules.h>

#include <java/lang/InternalError.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/Map.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/module/ModuleTarget.h>
#include <jcpp.h>

using $ModuleDescriptorArray = $Array<::java::lang::module::ModuleDescriptor>;
using $ModuleHashesArray = $Array<::jdk::internal::module::ModuleHashes>;
using $ModuleResolutionArray = $Array<::jdk::internal::module::ModuleResolution>;
using $ModuleTargetArray = $Array<::jdk::internal::module::ModuleTarget>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $SystemModules = ::jdk::internal::module::SystemModules;

namespace jdk {
	namespace internal {
		namespace module {

$MethodInfo _ExplodedSystemModules_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ExplodedSystemModules::*)()>(&ExplodedSystemModules::init$))},
	{"hasIncubatorModules", "()Z", nullptr, $PUBLIC},
	{"hasSplitPackages", "()Z", nullptr, $PUBLIC},
	{"moduleDescriptors", "()[Ljava/lang/module/ModuleDescriptor;", nullptr, $PUBLIC},
	{"moduleHashes", "()[Ljdk/internal/module/ModuleHashes;", nullptr, $PUBLIC},
	{"moduleReads", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PUBLIC},
	{"moduleResolutions", "()[Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC},
	{"moduleTargets", "()[Ljdk/internal/module/ModuleTarget;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ExplodedSystemModules_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ExplodedSystemModules",
	"java.lang.Object",
	"jdk.internal.module.SystemModules",
	nullptr,
	_ExplodedSystemModules_MethodInfo_
};

$Object* allocate$ExplodedSystemModules($Class* clazz) {
	return $of($alloc(ExplodedSystemModules));
}

void ExplodedSystemModules::init$() {
}

bool ExplodedSystemModules::hasSplitPackages() {
	return true;
}

bool ExplodedSystemModules::hasIncubatorModules() {
	return true;
}

$ModuleDescriptorArray* ExplodedSystemModules::moduleDescriptors() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$ModuleTargetArray* ExplodedSystemModules::moduleTargets() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$ModuleHashesArray* ExplodedSystemModules::moduleHashes() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$ModuleResolutionArray* ExplodedSystemModules::moduleResolutions() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$Map* ExplodedSystemModules::moduleReads() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

ExplodedSystemModules::ExplodedSystemModules() {
}

$Class* ExplodedSystemModules::load$($String* name, bool initialize) {
	$loadClass(ExplodedSystemModules, name, initialize, &_ExplodedSystemModules_ClassInfo_, allocate$ExplodedSystemModules);
	return class$;
}

$Class* ExplodedSystemModules::class$ = nullptr;

		} // module
	} // internal
} // jdk