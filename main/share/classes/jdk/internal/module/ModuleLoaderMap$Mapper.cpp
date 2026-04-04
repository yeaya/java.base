#include <jdk/internal/module/ModuleLoaderMap$Mapper.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ResolvedModule.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/module/ModuleLoaderMap$Modules.h>
#include <jdk/internal/module/ModuleLoaderMap.h>
#include <jcpp.h>

#undef APP_CLASSLOADER
#undef APP_LOADER_INDEX
#undef PLATFORM_CLASSLOADER
#undef PLATFORM_LOADER_INDEX

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::java::lang::module::Configuration;
using $ResolvedModule = ::java::lang::module::ResolvedModule;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $ClassLoaders = ::jdk::internal::loader::ClassLoaders;
using $ModuleLoaderMap$Modules = ::jdk::internal::module::ModuleLoaderMap$Modules;

namespace jdk {
	namespace internal {
		namespace module {

$ClassLoader* ModuleLoaderMap$Mapper::PLATFORM_CLASSLOADER = nullptr;
$ClassLoader* ModuleLoaderMap$Mapper::APP_CLASSLOADER = nullptr;
$Integer* ModuleLoaderMap$Mapper::PLATFORM_LOADER_INDEX = nullptr;
$Integer* ModuleLoaderMap$Mapper::APP_LOADER_INDEX = nullptr;

void ModuleLoaderMap$Mapper::init$($Configuration* cf) {
	$useLocalObjectStack();
	$var($HashMap, map, $new($HashMap));
	{
		$var($Iterator, i$, $$nc($nc(cf)->modules())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ResolvedModule, resolvedModule, $cast($ResolvedModule, i$->next()));
			{
				$var($String, mn, $nc(resolvedModule)->name());
				$init($ModuleLoaderMap$Modules);
				if (!$nc($ModuleLoaderMap$Modules::bootModules)->contains(mn)) {
					if ($nc($ModuleLoaderMap$Modules::platformModules)->contains(mn)) {
						map->put(mn, ModuleLoaderMap$Mapper::PLATFORM_LOADER_INDEX);
					} else {
						map->put(mn, ModuleLoaderMap$Mapper::APP_LOADER_INDEX);
					}
				}
			}
		}
	}
	$set(this, map, map);
}

$ClassLoader* ModuleLoaderMap$Mapper::apply($String* name) {
	$var($Integer, loader, $cast($Integer, $nc(this->map)->get(name)));
	if (loader == ModuleLoaderMap$Mapper::APP_LOADER_INDEX) {
		return ModuleLoaderMap$Mapper::APP_CLASSLOADER;
	} else if (loader == ModuleLoaderMap$Mapper::PLATFORM_LOADER_INDEX) {
		return ModuleLoaderMap$Mapper::PLATFORM_CLASSLOADER;
	} else {
		return nullptr;
	}
}

$Object* ModuleLoaderMap$Mapper::apply(Object$* name) {
	return this->apply($cast($String, name));
}

void ModuleLoaderMap$Mapper::clinit$($Class* clazz) {
	$assignStatic(ModuleLoaderMap$Mapper::PLATFORM_CLASSLOADER, $ClassLoaders::platformClassLoader());
	$assignStatic(ModuleLoaderMap$Mapper::APP_CLASSLOADER, $ClassLoaders::appClassLoader());
	$assignStatic(ModuleLoaderMap$Mapper::PLATFORM_LOADER_INDEX, $Integer::valueOf(1));
	$assignStatic(ModuleLoaderMap$Mapper::APP_LOADER_INDEX, $Integer::valueOf(2));
}

ModuleLoaderMap$Mapper::ModuleLoaderMap$Mapper() {
}

$Class* ModuleLoaderMap$Mapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PLATFORM_CLASSLOADER", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleLoaderMap$Mapper, PLATFORM_CLASSLOADER)},
		{"APP_CLASSLOADER", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleLoaderMap$Mapper, APP_CLASSLOADER)},
		{"PLATFORM_LOADER_INDEX", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleLoaderMap$Mapper, PLATFORM_LOADER_INDEX)},
		{"APP_LOADER_INDEX", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleLoaderMap$Mapper, APP_LOADER_INDEX)},
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(ModuleLoaderMap$Mapper, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/Configuration;)V", nullptr, 0, $method(ModuleLoaderMap$Mapper, init$, void, $Configuration*)},
		{"apply", "(Ljava/lang/String;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $method(ModuleLoaderMap$Mapper, apply, $ClassLoader*, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ModuleLoaderMap$Mapper, apply, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleLoaderMap$Mapper", "jdk.internal.module.ModuleLoaderMap", "Mapper", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.module.ModuleLoaderMap$Mapper",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ClassLoader;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ModuleLoaderMap"
	};
	$loadClass(ModuleLoaderMap$Mapper, name, initialize, &classInfo$$, ModuleLoaderMap$Mapper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleLoaderMap$Mapper);
	});
	return class$;
}

$Class* ModuleLoaderMap$Mapper::class$ = nullptr;

		} // module
	} // internal
} // jdk