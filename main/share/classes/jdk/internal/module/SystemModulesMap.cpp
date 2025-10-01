#include <jdk/internal/module/SystemModulesMap.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/module/SystemModules.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SystemModules = ::jdk::internal::module::SystemModules;

namespace jdk {
	namespace internal {
		namespace module {

$MethodInfo _SystemModulesMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SystemModulesMap::*)()>(&SystemModulesMap::init$))},
	{"allSystemModules", "()Ljdk/internal/module/SystemModules;", nullptr, $STATIC, $method(static_cast<$SystemModules*(*)()>(&SystemModulesMap::allSystemModules))},
	{"classNames", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&SystemModulesMap::classNames))},
	{"defaultSystemModules", "()Ljdk/internal/module/SystemModules;", nullptr, $STATIC, $method(static_cast<$SystemModules*(*)()>(&SystemModulesMap::defaultSystemModules))},
	{"moduleNames", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&SystemModulesMap::moduleNames))},
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