#include <jdk/internal/module/ServicesCatalog.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/lang/Module.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <jdk/internal/loader/ClassLoaderValue.h>
#include <jdk/internal/module/ServicesCatalog$ServiceProvider.h>
#include <jcpp.h>

#undef CLV

using $ServicesCatalog$ServiceProviderArray = $Array<::jdk::internal::module::ServicesCatalog$ServiceProvider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Provides = ::java::lang::module::ModuleDescriptor$Provides;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $ClassLoaderValue = ::jdk::internal::loader::ClassLoaderValue;
using $ServicesCatalog$ServiceProvider = ::jdk::internal::module::ServicesCatalog$ServiceProvider;

namespace jdk {
	namespace internal {
		namespace module {

$ClassLoaderValue* ServicesCatalog::CLV = nullptr;

void ServicesCatalog::init$() {
	$set(this, map, $cast($AbstractMap, $new($ConcurrentHashMap, 32)));
}

ServicesCatalog* ServicesCatalog::create() {
	$init(ServicesCatalog);
	return $new(ServicesCatalog);
}

void ServicesCatalog::addProviders($String* service, $ServicesCatalog$ServiceProviderArray* providers) {
	$useLocalObjectStack();
	$var($List, list, $cast($List, this->map->get(service)));
	if (list == nullptr) {
		$assign(list, $new($CopyOnWriteArrayList, providers));
		$var($List, prev, $cast($List, this->map->putIfAbsent(service, list)));
		if (prev != nullptr) {
			prev->addAll(list);
		}
	} else if ($nc(providers)->length == 1) {
		list->add(providers->get(0));
	} else {
		list->addAll($($Arrays::asList(providers)));
	}
}

void ServicesCatalog::register$($Module* module) {
	$useLocalObjectStack();
	$var($ModuleDescriptor, descriptor, $nc(module)->getDescriptor());
	{
		$var($Iterator, i$, $$nc($nc(descriptor)->provides())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Provides, provides, $cast($ModuleDescriptor$Provides, i$->next()));
			{
				$var($String, service, $nc(provides)->service());
				$var($List, providerNames, provides->providers());
				int32_t count = $nc(providerNames)->size();
				$var($ServicesCatalog$ServiceProviderArray, providers, $new($ServicesCatalog$ServiceProviderArray, count));
				for (int32_t i = 0; i < count; ++i) {
					providers->set(i, $$new($ServicesCatalog$ServiceProvider, module, $$cast($String, providerNames->get(i))));
				}
				addProviders(service, providers);
			}
		}
	}
}

void ServicesCatalog::addProvider($Module* module, $Class* service, $Class* impl) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(service)->getName());
	addProviders(var$0, $$new($ServicesCatalog$ServiceProviderArray, {$$new($ServicesCatalog$ServiceProvider, module, $($nc(impl)->getName()))}));
}

$List* ServicesCatalog::findServices($String* service) {
	return $cast($List, this->map->getOrDefault(service, $($List::of())));
}

ServicesCatalog* ServicesCatalog::getServicesCatalogOrNull($ClassLoader* loader) {
	$init(ServicesCatalog);
	return $cast(ServicesCatalog, ServicesCatalog::CLV->get(loader));
}

ServicesCatalog* ServicesCatalog::getServicesCatalog($ClassLoader* loader) {
	$init(ServicesCatalog);
	$useLocalObjectStack();
	$var(ServicesCatalog, catalog, $cast(ServicesCatalog, ServicesCatalog::CLV->get(loader)));
	if (catalog == nullptr) {
		$assign(catalog, create());
		$var(ServicesCatalog, previous, $cast(ServicesCatalog, ServicesCatalog::CLV->putIfAbsent(loader, catalog)));
		if (previous != nullptr) {
			$assign(catalog, previous);
		}
	}
	return catalog;
}

void ServicesCatalog::putServicesCatalog($ClassLoader* loader, ServicesCatalog* catalog) {
	$init(ServicesCatalog);
	$var(ServicesCatalog, previous, $cast(ServicesCatalog, ServicesCatalog::CLV->putIfAbsent(loader, catalog)));
	if (previous != nullptr) {
		$throwNew($InternalError);
	}
}

void ServicesCatalog::clinit$($Class* clazz) {
	$assignStatic(ServicesCatalog::CLV, $new($ClassLoaderValue));
}

ServicesCatalog::ServicesCatalog() {
}

$Class* ServicesCatalog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljdk/internal/module/ServicesCatalog$ServiceProvider;>;>;", $PRIVATE | $FINAL, $field(ServicesCatalog, map)},
		{"CLV", "Ljdk/internal/loader/ClassLoaderValue;", "Ljdk/internal/loader/ClassLoaderValue<Ljdk/internal/module/ServicesCatalog;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ServicesCatalog, CLV)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServicesCatalog, init$, void)},
		{"addProvider", "(Ljava/lang/Module;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC, $method(ServicesCatalog, addProvider, void, $Module*, $Class*, $Class*)},
		{"addProviders", "(Ljava/lang/String;[Ljdk/internal/module/ServicesCatalog$ServiceProvider;)V", nullptr, $PRIVATE | $TRANSIENT, $method(ServicesCatalog, addProviders, void, $String*, $ServicesCatalog$ServiceProviderArray*)},
		{"create", "()Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC | $STATIC, $staticMethod(ServicesCatalog, create, ServicesCatalog*)},
		{"findServices", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljdk/internal/module/ServicesCatalog$ServiceProvider;>;", $PUBLIC, $method(ServicesCatalog, findServices, $List*, $String*)},
		{"getServicesCatalog", "(Ljava/lang/ClassLoader;)Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC | $STATIC, $staticMethod(ServicesCatalog, getServicesCatalog, ServicesCatalog*, $ClassLoader*)},
		{"getServicesCatalogOrNull", "(Ljava/lang/ClassLoader;)Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC | $STATIC, $staticMethod(ServicesCatalog, getServicesCatalogOrNull, ServicesCatalog*, $ClassLoader*)},
		{"putServicesCatalog", "(Ljava/lang/ClassLoader;Ljdk/internal/module/ServicesCatalog;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ServicesCatalog, putServicesCatalog, void, $ClassLoader*, ServicesCatalog*)},
		{"register", "(Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(ServicesCatalog, register$, void, $Module*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ServicesCatalog$ServiceProvider", "jdk.internal.module.ServicesCatalog", "ServiceProvider", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.ServicesCatalog",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.module.ServicesCatalog$ServiceProvider"
	};
	$loadClass(ServicesCatalog, name, initialize, &classInfo$$, ServicesCatalog::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ServicesCatalog);
	});
	return class$;
}

$Class* ServicesCatalog::class$ = nullptr;

		} // module
	} // internal
} // jdk