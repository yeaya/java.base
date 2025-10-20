#include <jdk/internal/module/ServicesCatalog.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/String.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
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
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $AbstractClassLoaderValue = ::jdk::internal::loader::AbstractClassLoaderValue;
using $ClassLoaderValue = ::jdk::internal::loader::ClassLoaderValue;
using $ServicesCatalog$ServiceProvider = ::jdk::internal::module::ServicesCatalog$ServiceProvider;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ServicesCatalog_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljdk/internal/module/ServicesCatalog$ServiceProvider;>;>;", $PRIVATE | $FINAL, $field(ServicesCatalog, map)},
	{"CLV", "Ljdk/internal/loader/ClassLoaderValue;", "Ljdk/internal/loader/ClassLoaderValue<Ljdk/internal/module/ServicesCatalog;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ServicesCatalog, CLV)},
	{}
};

$MethodInfo _ServicesCatalog_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServicesCatalog::*)()>(&ServicesCatalog::init$))},
	{"addProvider", "(Ljava/lang/Module;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(ServicesCatalog::*)($Module*,$Class*,$Class*)>(&ServicesCatalog::addProvider))},
	{"addProviders", "(Ljava/lang/String;[Ljdk/internal/module/ServicesCatalog$ServiceProvider;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(ServicesCatalog::*)($String*,$ServicesCatalog$ServiceProviderArray*)>(&ServicesCatalog::addProviders))},
	{"create", "()Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ServicesCatalog*(*)()>(&ServicesCatalog::create))},
	{"findServices", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljdk/internal/module/ServicesCatalog$ServiceProvider;>;", $PUBLIC, $method(static_cast<$List*(ServicesCatalog::*)($String*)>(&ServicesCatalog::findServices))},
	{"getServicesCatalog", "(Ljava/lang/ClassLoader;)Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ServicesCatalog*(*)($ClassLoader*)>(&ServicesCatalog::getServicesCatalog))},
	{"getServicesCatalogOrNull", "(Ljava/lang/ClassLoader;)Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ServicesCatalog*(*)($ClassLoader*)>(&ServicesCatalog::getServicesCatalogOrNull))},
	{"putServicesCatalog", "(Ljava/lang/ClassLoader;Ljdk/internal/module/ServicesCatalog;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ClassLoader*,ServicesCatalog*)>(&ServicesCatalog::putServicesCatalog))},
	{"register", "(Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(static_cast<void(ServicesCatalog::*)($Module*)>(&ServicesCatalog::register$))},
	{}
};

$InnerClassInfo _ServicesCatalog_InnerClassesInfo_[] = {
	{"jdk.internal.module.ServicesCatalog$ServiceProvider", "jdk.internal.module.ServicesCatalog", "ServiceProvider", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServicesCatalog_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.ServicesCatalog",
	"java.lang.Object",
	nullptr,
	_ServicesCatalog_FieldInfo_,
	_ServicesCatalog_MethodInfo_,
	nullptr,
	nullptr,
	_ServicesCatalog_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.module.ServicesCatalog$ServiceProvider"
};

$Object* allocate$ServicesCatalog($Class* clazz) {
	return $of($alloc(ServicesCatalog));
}

$ClassLoaderValue* ServicesCatalog::CLV = nullptr;

void ServicesCatalog::init$() {
	$set(this, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap, 32))));
}

ServicesCatalog* ServicesCatalog::create() {
	$init(ServicesCatalog);
	return $new(ServicesCatalog);
}

void ServicesCatalog::addProviders($String* service, $ServicesCatalog$ServiceProviderArray* providers) {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $cast($List, $nc(this->map)->get(service)));
	if (list == nullptr) {
		$assign(list, $new($CopyOnWriteArrayList, providers));
		$var($List, prev, $cast($List, $nc(this->map)->putIfAbsent(service, list)));
		if (prev != nullptr) {
			prev->addAll(list);
		}
	} else if ($nc(providers)->length == 1) {
		$nc(list)->add(providers->get(0));
	} else {
		$nc(list)->addAll($($Arrays::asList(providers)));
	}
}

void ServicesCatalog::register$($Module* module) {
	$useLocalCurrentObjectStackCache();
	$var($ModuleDescriptor, descriptor, $nc(module)->getDescriptor());
	{
		$var($Iterator, i$, $nc($($nc(descriptor)->provides()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Provides, provides, $cast($ModuleDescriptor$Provides, i$->next()));
			{
				$var($String, service, $nc(provides)->service());
				$var($List, providerNames, provides->providers());
				int32_t count = $nc(providerNames)->size();
				$var($ServicesCatalog$ServiceProviderArray, providers, $new($ServicesCatalog$ServiceProviderArray, count));
				for (int32_t i = 0; i < count; ++i) {
					providers->set(i, $$new($ServicesCatalog$ServiceProvider, module, $cast($String, $(providerNames->get(i)))));
				}
				addProviders(service, providers);
			}
		}
	}
}

void ServicesCatalog::addProvider($Module* module, $Class* service, $Class* impl) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(service)->getName());
	addProviders(var$0, $$new($ServicesCatalog$ServiceProviderArray, {$$new($ServicesCatalog$ServiceProvider, module, $($nc(impl)->getName()))}));
}

$List* ServicesCatalog::findServices($String* service) {
	return $cast($List, $nc(this->map)->getOrDefault(service, $($List::of())));
}

ServicesCatalog* ServicesCatalog::getServicesCatalogOrNull($ClassLoader* loader) {
	$init(ServicesCatalog);
	return $cast(ServicesCatalog, $nc(ServicesCatalog::CLV)->get(loader));
}

ServicesCatalog* ServicesCatalog::getServicesCatalog($ClassLoader* loader) {
	$init(ServicesCatalog);
	$useLocalCurrentObjectStackCache();
	$var(ServicesCatalog, catalog, $cast(ServicesCatalog, $nc(ServicesCatalog::CLV)->get(loader)));
	if (catalog == nullptr) {
		$assign(catalog, create());
		$var(ServicesCatalog, previous, $cast(ServicesCatalog, $nc(ServicesCatalog::CLV)->putIfAbsent(loader, catalog)));
		if (previous != nullptr) {
			$assign(catalog, previous);
		}
	}
	return catalog;
}

void ServicesCatalog::putServicesCatalog($ClassLoader* loader, ServicesCatalog* catalog) {
	$init(ServicesCatalog);
	$var(ServicesCatalog, previous, $cast(ServicesCatalog, $nc(ServicesCatalog::CLV)->putIfAbsent(loader, catalog)));
	if (previous != nullptr) {
		$throwNew($InternalError);
	}
}

void clinit$ServicesCatalog($Class* class$) {
	$assignStatic(ServicesCatalog::CLV, $new($ClassLoaderValue));
}

ServicesCatalog::ServicesCatalog() {
}

$Class* ServicesCatalog::load$($String* name, bool initialize) {
	$loadClass(ServicesCatalog, name, initialize, &_ServicesCatalog_ClassInfo_, clinit$ServicesCatalog, allocate$ServicesCatalog);
	return class$;
}

$Class* ServicesCatalog::class$ = nullptr;

		} // module
	} // internal
} // jdk