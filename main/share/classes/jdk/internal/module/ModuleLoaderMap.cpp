#include <jdk/internal/module/ModuleLoaderMap.h>

#include <java/lang/module/Configuration.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <jdk/internal/module/ModuleLoaderMap$Mapper.h>
#include <jdk/internal/module/ModuleLoaderMap$Modules.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::java::lang::module::Configuration;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $ModuleLoaderMap$Mapper = ::jdk::internal::module::ModuleLoaderMap$Mapper;
using $ModuleLoaderMap$Modules = ::jdk::internal::module::ModuleLoaderMap$Modules;

namespace jdk {
	namespace internal {
		namespace module {

$MethodInfo _ModuleLoaderMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleLoaderMap::*)()>(&ModuleLoaderMap::init$))},
	{"bootModules", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&ModuleLoaderMap::bootModules))},
	{"isBuiltinMapper", "(Ljava/util/function/Function;)Z", "(Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ClassLoader;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Function*)>(&ModuleLoaderMap::isBuiltinMapper))},
	{"mappingFunction", "(Ljava/lang/module/Configuration;)Ljava/util/function/Function;", "(Ljava/lang/module/Configuration;)Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ClassLoader;>;", $STATIC, $method(static_cast<$Function*(*)($Configuration*)>(&ModuleLoaderMap::mappingFunction))},
	{"platformModules", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&ModuleLoaderMap::platformModules))},
	{}
};

$InnerClassInfo _ModuleLoaderMap_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleLoaderMap$Modules", "jdk.internal.module.ModuleLoaderMap", "Modules", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModuleLoaderMap$Mapper", "jdk.internal.module.ModuleLoaderMap", "Mapper", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ModuleLoaderMap_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.ModuleLoaderMap",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ModuleLoaderMap_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleLoaderMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleLoaderMap$Modules,jdk.internal.module.ModuleLoaderMap$Mapper"
};

$Object* allocate$ModuleLoaderMap($Class* clazz) {
	return $of($alloc(ModuleLoaderMap));
}

void ModuleLoaderMap::init$() {
}

$Set* ModuleLoaderMap::bootModules() {
	$init($ModuleLoaderMap$Modules);
	return $ModuleLoaderMap$Modules::bootModules;
}

$Set* ModuleLoaderMap::platformModules() {
	$init($ModuleLoaderMap$Modules);
	return $ModuleLoaderMap$Modules::platformModules;
}

$Function* ModuleLoaderMap::mappingFunction($Configuration* cf) {
	return $new($ModuleLoaderMap$Mapper, cf);
}

bool ModuleLoaderMap::isBuiltinMapper($Function* clf) {
	return $instanceOf($ModuleLoaderMap$Mapper, clf);
}

ModuleLoaderMap::ModuleLoaderMap() {
}

$Class* ModuleLoaderMap::load$($String* name, bool initialize) {
	$loadClass(ModuleLoaderMap, name, initialize, &_ModuleLoaderMap_ClassInfo_, allocate$ModuleLoaderMap);
	return class$;
}

$Class* ModuleLoaderMap::class$ = nullptr;

		} // module
	} // internal
} // jdk