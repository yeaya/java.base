#include <java/util/ServiceLoader$ModuleServicesLookupIterator.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/module/ServicesCatalog$ServiceProvider.h>
#include <jdk/internal/module/ServicesCatalog.h>
#include <jcpp.h>

#undef LANG_ACCESS

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $ClassLoaders = ::jdk::internal::loader::ClassLoaders;
using $ServicesCatalog = ::jdk::internal::module::ServicesCatalog;
using $ServicesCatalog$ServiceProvider = ::jdk::internal::module::ServicesCatalog$ServiceProvider;

namespace java {
	namespace util {

class ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader : public $PrivilegedAction {
	$class(ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Module* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->getClassLoader();
	}
	$Module* inst$ = nullptr;
};
$Class* ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader, init$, void, $Module*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader);
	});
	return class$;
}
$Class* ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader::class$ = nullptr;

bool ServiceLoader$ModuleServicesLookupIterator::$assertionsDisabled = false;

void ServiceLoader$ModuleServicesLookupIterator::init$($ServiceLoader* this$0) {
	$set(this, this$0, this$0);
	$set(this, currentLoader, this$0->loader);
	$set(this, iterator, iteratorFor(this$0->loader));
}

$List* ServiceLoader$ModuleServicesLookupIterator::providers($ModuleLayer* layer) {
	$init($ServiceLoader);
	$var($ServicesCatalog, catalog, $nc($ServiceLoader::LANG_ACCESS)->getServicesCatalog(layer));
	return $nc(catalog)->findServices(this->this$0->serviceName);
}

$ClassLoader* ServiceLoader$ModuleServicesLookupIterator::loaderFor($Module* module) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		return $nc(module)->getClassLoader();
	} else {
		$var($PrivilegedAction, pa, $new(ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader, $nc(module)));
		return $cast($ClassLoader, $AccessController::doPrivileged(pa));
	}
}

$Iterator* ServiceLoader$ModuleServicesLookupIterator::iteratorFor($ClassLoader* loader) {
	$useLocalObjectStack();
	$var($ServicesCatalog, catalog, nullptr);
	if (loader == nullptr) {
		$assign(catalog, $BootLoader::getServicesCatalog());
	} else {
		$assign(catalog, $ServicesCatalog::getServicesCatalogOrNull(loader));
	}
	$var($List, providers, nullptr);
	if (catalog == nullptr) {
		$assign(providers, $List::of());
	} else {
		$assign(providers, catalog->findServices(this->this$0->serviceName));
	}
	$var($ClassLoader, platformClassLoader, $ClassLoaders::platformClassLoader());
	if (loader == nullptr || loader == platformClassLoader) {
		return $nc(providers)->iterator();
	} else {
		$var($List, allProviders, $new($ArrayList, providers));
		$init($ServiceLoader);
		$var($Iterator, iterator, $$nc($nc($ServiceLoader::LANG_ACCESS)->layers(loader))->iterator());
		while ($nc(iterator)->hasNext()) {
			$var($ModuleLayer, layer, $cast($ModuleLayer, iterator->next()));
			{
				$var($Iterator, i$, $$nc(this->providers(layer))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ServicesCatalog$ServiceProvider, sp, $cast($ServicesCatalog$ServiceProvider, i$->next()));
					{
						$var($ClassLoader, l, loaderFor($($nc(sp)->module())));
						if (l != nullptr && l != platformClassLoader) {
							allProviders->add(sp);
						}
					}
				}
			}
		}
		return allProviders->iterator();
	}
}

bool ServiceLoader$ModuleServicesLookupIterator::hasNext() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	while (this->nextProvider == nullptr && this->nextError == nullptr) {
		while (!$nc(this->iterator)->hasNext()) {
			if (this->currentLoader == nullptr) {
				return false;
			} else {
				$set(this, currentLoader, this->currentLoader->getParent());
				$set(this, iterator, iteratorFor(this->currentLoader));
			}
		}
		$var($ServicesCatalog$ServiceProvider, provider, $cast($ServicesCatalog$ServiceProvider, $nc(this->iterator)->next()));
		try {
			$var($ServiceLoader$Provider, next, this->this$0->loadProvider(provider));
			$set(this, nextProvider, next);
		} catch ($ServiceConfigurationError& e) {
			$set(this, nextError, e);
		}
	}
	return true;
}

$Object* ServiceLoader$ModuleServicesLookupIterator::next() {
	$useLocalObjectStack();
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($ServiceLoader$Provider, provider, this->nextProvider);
	if (provider != nullptr) {
		$set(this, nextProvider, nullptr);
		return provider;
	} else {
		$var($ServiceConfigurationError, e, this->nextError);
		if (!ServiceLoader$ModuleServicesLookupIterator::$assertionsDisabled && !(e != nullptr)) {
			$throwNew($AssertionError);
		}
		$set(this, nextError, nullptr);
		$throw(e);
	}
}

void ServiceLoader$ModuleServicesLookupIterator::clinit$($Class* clazz) {
	$load($ServiceLoader);
	ServiceLoader$ModuleServicesLookupIterator::$assertionsDisabled = !$ServiceLoader::class$->desiredAssertionStatus();
}

ServiceLoader$ModuleServicesLookupIterator::ServiceLoader$ModuleServicesLookupIterator() {
}

$Class* ServiceLoader$ModuleServicesLookupIterator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader")) {
			return ServiceLoader$ModuleServicesLookupIterator$$Lambda$getClassLoader::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceLoader$ModuleServicesLookupIterator, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ServiceLoader$ModuleServicesLookupIterator, $assertionsDisabled)},
		{"currentLoader", "Ljava/lang/ClassLoader;", nullptr, 0, $field(ServiceLoader$ModuleServicesLookupIterator, currentLoader)},
		{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljdk/internal/module/ServicesCatalog$ServiceProvider;>;", 0, $field(ServiceLoader$ModuleServicesLookupIterator, iterator)},
		{"nextProvider", "Ljava/util/ServiceLoader$Provider;", "Ljava/util/ServiceLoader$Provider<TT;>;", 0, $field(ServiceLoader$ModuleServicesLookupIterator, nextProvider)},
		{"nextError", "Ljava/util/ServiceConfigurationError;", nullptr, 0, $field(ServiceLoader$ModuleServicesLookupIterator, nextError)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader;)V", nullptr, 0, $method(ServiceLoader$ModuleServicesLookupIterator, init$, void, $ServiceLoader*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ServiceLoader$ModuleServicesLookupIterator, hasNext, bool)},
		{"iteratorFor", "(Ljava/lang/ClassLoader;)Ljava/util/Iterator;", "(Ljava/lang/ClassLoader;)Ljava/util/Iterator<Ljdk/internal/module/ServicesCatalog$ServiceProvider;>;", $PRIVATE, $method(ServiceLoader$ModuleServicesLookupIterator, iteratorFor, $Iterator*, $ClassLoader*)},
		{"loaderFor", "(Ljava/lang/Module;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $method(ServiceLoader$ModuleServicesLookupIterator, loaderFor, $ClassLoader*, $Module*)},
		{"next", "()Ljava/util/ServiceLoader$Provider;", "()Ljava/util/ServiceLoader$Provider<TT;>;", $PUBLIC, $virtualMethod(ServiceLoader$ModuleServicesLookupIterator, next, $Object*)},
		{"providers", "(Ljava/lang/ModuleLayer;)Ljava/util/List;", "(Ljava/lang/ModuleLayer;)Ljava/util/List<Ljdk/internal/module/ServicesCatalog$ServiceProvider;>;", $PRIVATE, $method(ServiceLoader$ModuleServicesLookupIterator, providers, $List*, $ModuleLayer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ServiceLoader$ModuleServicesLookupIterator", "java.util.ServiceLoader", "ModuleServicesLookupIterator", $PRIVATE | $FINAL},
		{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.ServiceLoader$ModuleServicesLookupIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/ServiceLoader$Provider<TT;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ServiceLoader"
	};
	$loadClass(ServiceLoader$ModuleServicesLookupIterator, name, initialize, &classInfo$$, ServiceLoader$ModuleServicesLookupIterator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$ModuleServicesLookupIterator);
	});
	return class$;
}

$Class* ServiceLoader$ModuleServicesLookupIterator::class$ = nullptr;

	} // util
} // java