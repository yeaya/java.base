#include <jdk/internal/module/SystemModulesMap.h>

#include <jdk/internal/module/SystemModules.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SystemModules = ::jdk::internal::module::SystemModules;

namespace jdk {
	namespace internal {
		namespace module {

$MethodInfo _SystemModulesMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SystemModulesMap, init$, void)},
	{"allSystemModules", "()Ljdk/internal/module/SystemModules;", nullptr, $STATIC, $staticMethod(SystemModulesMap, allSystemModules, $SystemModules*)},
	{"classNames", "()[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(SystemModulesMap, classNames, $StringArray*)},
	{"defaultSystemModules", "()Ljdk/internal/module/SystemModules;", nullptr, $STATIC, $staticMethod(SystemModulesMap, defaultSystemModules, $SystemModules*)},
	{"moduleNames", "()[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(SystemModulesMap, moduleNames, $StringArray*)},
	{}
};

$ClassInfo _SystemModulesMap_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.SystemModulesMap",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SystemModulesMap_MethodInfo_
};

$Object* allocate$SystemModulesMap($Class* clazz) {
	return $of($alloc(SystemModulesMap));
}

void SystemModulesMap::init$() {
}

$SystemModules* SystemModulesMap::allSystemModules() {
	return nullptr;
}

$SystemModules* SystemModulesMap::defaultSystemModules() {
	return nullptr;
}

$StringArray* SystemModulesMap::moduleNames() {
	return $new($StringArray, 0);
}

$StringArray* SystemModulesMap::classNames() {
	return $new($StringArray, 0);
}

SystemModulesMap::SystemModulesMap() {
}

$Class* SystemModulesMap::load$($String* name, bool initialize) {
	$loadClass(SystemModulesMap, name, initialize, &_SystemModulesMap_ClassInfo_, allocate$SystemModulesMap);
	return class$;
}

$Class* SystemModulesMap::class$ = nullptr;

		} // module
	} // internal
} // jdk