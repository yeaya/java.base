#include <jdk/internal/module/Modules.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/module/ResolvedModule.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/JavaLangModuleAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/module/ModuleBootstrap.h>
#include <jdk/internal/module/ModuleLoaderMap.h>
#include <jdk/internal/module/ServicesCatalog.h>
#include <jcpp.h>

#undef JLA
#undef JLMA

using $PathArray = $Array<::java::nio::file::Path>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $ResolvedModule = ::java::lang::module::ResolvedModule;
using $URI = ::java::net::URI;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $JavaLangModuleAccess = ::jdk::internal::access::JavaLangModuleAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $ClassLoaders = ::jdk::internal::loader::ClassLoaders;
using $ModuleBootstrap = ::jdk::internal::module::ModuleBootstrap;
using $ModuleLoaderMap = ::jdk::internal::module::ModuleLoaderMap;
using $ServicesCatalog = ::jdk::internal::module::ServicesCatalog;

namespace jdk {
	namespace internal {
		namespace module {

class Modules$$Lambda$getClassLoader : public $PrivilegedAction {
	$class(Modules$$Lambda$getClassLoader, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Module* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->getClassLoader();
	}
	$Module* inst$ = nullptr;
};
$Class* Modules$$Lambda$getClassLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$getClassLoader, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(Modules$$Lambda$getClassLoader, init$, void, $Module*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$getClassLoader, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$getClassLoader",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$getClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$getClassLoader);
	});
	return class$;
}
$Class* Modules$$Lambda$getClassLoader::class$ = nullptr;

class Modules$$Lambda$getName$1 : public $Function {
	$class(Modules$$Lambda$getName$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Module, inst$)->getName());
	}
};
$Class* Modules$$Lambda$getName$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Modules$$Lambda$getName$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$getName$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$getName$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$getName$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$getName$1);
	});
	return class$;
}
$Class* Modules$$Lambda$getName$1::class$ = nullptr;

class Modules$$Lambda$isQualified$2 : public $Predicate {
	$class(Modules$$Lambda$isQualified$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($ModuleDescriptor$Exports, inst$)->isQualified();
	}
};
$Class* Modules$$Lambda$isQualified$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Modules$$Lambda$isQualified$2, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$isQualified$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$isQualified$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$isQualified$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$isQualified$2);
	});
	return class$;
}
$Class* Modules$$Lambda$isQualified$2::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$1$3 : public $Consumer {
	$class(Modules$$Lambda$lambda$loadModule$1$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map, $Module* m) {
		$set(this, map, map);
		$set(this, m, m);
	}
	virtual void accept(Object$* e) override {
		Modules::lambda$loadModule$1(map, m, $cast($ModuleDescriptor$Exports, e));
	}
	$Map* map = nullptr;
	$Module* m = nullptr;
};
$Class* Modules$$Lambda$lambda$loadModule$1$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$1$3, map)},
		{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$1$3, m)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(Modules$$Lambda$lambda$loadModule$1$3, init$, void, $Map*, $Module*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$lambda$loadModule$1$3, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$lambda$loadModule$1$3",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$lambda$loadModule$1$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$lambda$loadModule$1$3);
	});
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$1$3::class$ = nullptr;

class Modules$$Lambda$isQualified$4 : public $Predicate {
	$class(Modules$$Lambda$isQualified$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($ModuleDescriptor$Opens, inst$)->isQualified();
	}
};
$Class* Modules$$Lambda$isQualified$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Modules$$Lambda$isQualified$4, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$isQualified$4, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$isQualified$4",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$isQualified$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$isQualified$4);
	});
	return class$;
}
$Class* Modules$$Lambda$isQualified$4::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$3$5 : public $Consumer {
	$class(Modules$$Lambda$lambda$loadModule$3$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map, $Module* m) {
		$set(this, map, map);
		$set(this, m, m);
	}
	virtual void accept(Object$* o) override {
		Modules::lambda$loadModule$3(map, m, $cast($ModuleDescriptor$Opens, o));
	}
	$Map* map = nullptr;
	$Module* m = nullptr;
};
$Class* Modules$$Lambda$lambda$loadModule$3$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$3$5, map)},
		{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$3$5, m)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(Modules$$Lambda$lambda$loadModule$3$5, init$, void, $Map*, $Module*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$lambda$loadModule$3$5, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$lambda$loadModule$3$5",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$lambda$loadModule$3$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$lambda$loadModule$3$5);
	});
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$3$5::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$4$6 : public $Supplier {
	$class(Modules$$Lambda$lambda$loadModule$4$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return Modules::lambda$loadModule$4();
	}
};
$Class* Modules$$Lambda$lambda$loadModule$4$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Modules$$Lambda$lambda$loadModule$4$6, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$lambda$loadModule$4$6, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$lambda$loadModule$4$6",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$lambda$loadModule$4$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$lambda$loadModule$4$6);
	});
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$4$6::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$2$7 : public $Consumer {
	$class(Modules$$Lambda$lambda$loadModule$2$7, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map, $Module* m, $ModuleDescriptor$Opens* o) {
		$set(this, map, map);
		$set(this, m, m);
		$set(this, o, o);
	}
	virtual void accept(Object$* target) override {
		Modules::lambda$loadModule$2(map, m, o, $cast($String, target));
	}
	$Map* map = nullptr;
	$Module* m = nullptr;
	$ModuleDescriptor$Opens* o = nullptr;
};
$Class* Modules$$Lambda$lambda$loadModule$2$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$2$7, map)},
		{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$2$7, m)},
		{"o", "Ljava/lang/module/ModuleDescriptor$Opens;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$2$7, o)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Opens;)V", nullptr, $PUBLIC, $method(Modules$$Lambda$lambda$loadModule$2$7, init$, void, $Map*, $Module*, $ModuleDescriptor$Opens*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$lambda$loadModule$2$7, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$lambda$loadModule$2$7",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$lambda$loadModule$2$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$lambda$loadModule$2$7);
	});
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$2$7::class$ = nullptr;

class Modules$$Lambda$lambda$loadModule$0$8 : public $Consumer {
	$class(Modules$$Lambda$lambda$loadModule$0$8, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map, $Module* m, $ModuleDescriptor$Exports* e) {
		$set(this, map, map);
		$set(this, m, m);
		$set(this, e, e);
	}
	virtual void accept(Object$* target) override {
		Modules::lambda$loadModule$0(map, m, e, $cast($String, target));
	}
	$Map* map = nullptr;
	$Module* m = nullptr;
	$ModuleDescriptor$Exports* e = nullptr;
};
$Class* Modules$$Lambda$lambda$loadModule$0$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$0$8, map)},
		{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$0$8, m)},
		{"e", "Ljava/lang/module/ModuleDescriptor$Exports;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$loadModule$0$8, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Exports;)V", nullptr, $PUBLIC, $method(Modules$$Lambda$lambda$loadModule$0$8, init$, void, $Map*, $Module*, $ModuleDescriptor$Exports*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Modules$$Lambda$lambda$loadModule$0$8, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.Modules$$Lambda$lambda$loadModule$0$8",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Modules$$Lambda$lambda$loadModule$0$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$$Lambda$lambda$loadModule$0$8);
	});
	return class$;
}
$Class* Modules$$Lambda$lambda$loadModule$0$8::class$ = nullptr;

bool Modules::$assertionsDisabled = false;
$JavaLangAccess* Modules::JLA = nullptr;
$JavaLangModuleAccess* Modules::JLMA = nullptr;
$volatile($ModuleLayer*) Modules::topLayer = nullptr;

void Modules::init$() {
}

$Module* Modules::defineModule($ClassLoader* loader, $ModuleDescriptor* descriptor, $URI* uri) {
	$init(Modules);
	return $nc(Modules::JLA)->defineModule(loader, descriptor, uri);
}

void Modules::addReads($Module* m1, $Module* m2) {
	$init(Modules);
	$nc(Modules::JLA)->addReads(m1, m2);
}

void Modules::addReadsAllUnnamed($Module* m) {
	$init(Modules);
	$nc(Modules::JLA)->addReadsAllUnnamed(m);
}

void Modules::addExports($Module* m1, $String* pn, $Module* m2) {
	$init(Modules);
	$nc(Modules::JLA)->addExports(m1, pn, m2);
}

void Modules::addExports($Module* m, $String* pn) {
	$init(Modules);
	$nc(Modules::JLA)->addExports(m, pn);
}

void Modules::addExportsToAllUnnamed($Module* m, $String* pn) {
	$init(Modules);
	$nc(Modules::JLA)->addExportsToAllUnnamed(m, pn);
}

void Modules::addOpens($Module* m1, $String* pn, $Module* m2) {
	$init(Modules);
	$nc(Modules::JLA)->addOpens(m1, pn, m2);
}

void Modules::addOpensToAllUnnamed($Module* m, $String* pn) {
	$init(Modules);
	$nc(Modules::JLA)->addOpensToAllUnnamed(m, pn);
}

void Modules::addUses($Module* m, $Class* service) {
	$init(Modules);
	$nc(Modules::JLA)->addUses(m, service);
}

void Modules::addProvides($Module* m, $Class* service, $Class* impl) {
	$init(Modules);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ModuleLayer, layer, $nc(m)->getLayer());
	$var($PrivilegedAction, pa, $new(Modules$$Lambda$getClassLoader, m));
	$var($ClassLoader, loader, $cast($ClassLoader, $AccessController::doPrivileged(pa)));
	$var($ClassLoader, platformClassLoader, $ClassLoaders::platformClassLoader());
	if (layer == nullptr || loader == nullptr || loader == platformClassLoader) {
		$var($ServicesCatalog, catalog, nullptr);
		if (loader == nullptr) {
			$assign(catalog, $BootLoader::getServicesCatalog());
		} else {
			$assign(catalog, $ServicesCatalog::getServicesCatalog(loader));
		}
		$nc(catalog)->addProvider(m, service, impl);
	}
	if (layer != nullptr) {
		$$nc($nc(Modules::JLA)->getServicesCatalog(layer))->addProvider(m, service, impl);
	}
}

$Configuration* Modules::newBootLayerConfiguration($ModuleFinder* finder, $Collection* roots, $PrintStream* traceOutput) {
	$init(Modules);
	return $nc(Modules::JLMA)->resolveAndBind(finder, roots, traceOutput);
}

void Modules::transformedByAgent($Module* m) {
	$init(Modules);
	$useLocalObjectStack();
	addReads(m, $($BootLoader::getUnnamedModule()));
	addReads(m, $($$nc($ClassLoaders::appClassLoader())->getUnnamedModule()));
}

$Module* Modules::loadModule($String* name) {
	$init(Modules);
	$synchronized(class$) {
		$useLocalObjectStack();
		$var($ModuleLayer, top, Modules::topLayer);
		if (top == nullptr) {
			$assign(top, $ModuleLayer::boot());
		}
		$var($Module, module, $cast($Module, $$nc($nc(top)->findModule(name))->orElse(nullptr)));
		if (module != nullptr) {
			return module;
		}
		$var($ModuleFinder, empty, $ModuleFinder::of($$new($PathArray, 0)));
		$var($ModuleFinder, finder, $ModuleBootstrap::unlimitedFinder());
		$var($Set, roots, $Set::of(name));
		$var($Configuration, cf, $$nc(top->configuration())->resolveAndBind(empty, finder, roots));
		$var($Function, clf, $ModuleLoaderMap::mappingFunction(cf));
		$var($ModuleLayer, newLayer, top->defineModules(cf, clf));
		$var($Function, var$0, $new(Modules$$Lambda$getName$1));
		$var($Map, map, $cast($Map, $$nc($$nc($nc(newLayer)->modules())->stream())->collect($($Collectors::toMap(var$0, $($Function::identity()))))));
		$var($ModuleLayer, layer, top);
		while (layer != nullptr) {
			{
				$var($Iterator, i$, $$nc(layer->modules())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Module, m, $cast($Module, i$->next()));
					{
						$$nc($$nc($$nc($$nc($nc(m)->getDescriptor())->exports())->stream())->filter($$new(Modules$$Lambda$isQualified$2)))->forEach($$new(Modules$$Lambda$lambda$loadModule$1$3, map, m));
						$$nc($$nc($$nc($$nc(m->getDescriptor())->opens())->stream())->filter($$new(Modules$$Lambda$isQualified$4)))->forEach($$new(Modules$$Lambda$lambda$loadModule$3$5, map, m));
					}
				}
			}
			$var($List, parents, layer->parents());
			if (!Modules::$assertionsDisabled && !($nc(parents)->size() <= 1)) {
				$throwNew($AssertionError);
			}
			$assign(layer, $nc(parents)->isEmpty() ? ($ModuleLayer*)nullptr : $cast($ModuleLayer, parents->get(0)));
		}
		$nc(Modules::JLA)->addNonExportedPackages(newLayer);
		{
			$var($Iterator, i$, $$nc($nc(cf)->modules())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ResolvedModule, resolvedModule, $cast($ResolvedModule, i$->next()));
				{
					$var($ModuleReference, mref, $nc(resolvedModule)->reference());
					$var($String, mn, $$nc($nc(mref)->descriptor())->name());
					$var($ClassLoader, cl, $cast($ClassLoader, $nc(clf)->apply(mn)));
					if (cl == nullptr) {
						$BootLoader::loadModule(mref);
					} else {
						$cast($BuiltinClassLoader, cl)->loadModule(mref);
					}
				}
			}
		}
		$assignStatic(Modules::topLayer, newLayer);
		return $cast($Module, $$nc($nc(newLayer)->findModule(name))->orElseThrow($$new(Modules$$Lambda$lambda$loadModule$4$6)));
	}
}

$Optional* Modules::findLoadedModule($String* name) {
	$init(Modules);
	$var($ModuleLayer, top, Modules::topLayer);
	if (top == nullptr) {
		$assign(top, $ModuleLayer::boot());
	}
	return $nc(top)->findModule(name);
}

$InternalError* Modules::lambda$loadModule$4() {
	$init(Modules);
	return $new($InternalError, "module not loaded"_s);
}

void Modules::lambda$loadModule$3($Map* map, $Module* m, $ModuleDescriptor$Opens* o) {
	$init(Modules);
	$useLocalObjectStack();
	$$nc($nc(o)->targets())->forEach($$new(Modules$$Lambda$lambda$loadModule$2$7, map, m, o));
}

void Modules::lambda$loadModule$2($Map* map, $Module* m, $ModuleDescriptor$Opens* o, $String* target) {
	$init(Modules);
	$useLocalObjectStack();
	$var($Module, other, $cast($Module, $nc(map)->get(target)));
	if (other != nullptr) {
		addOpens(m, $($nc(o)->source()), other);
	}
}

void Modules::lambda$loadModule$1($Map* map, $Module* m, $ModuleDescriptor$Exports* e) {
	$init(Modules);
	$useLocalObjectStack();
	$$nc($nc(e)->targets())->forEach($$new(Modules$$Lambda$lambda$loadModule$0$8, map, m, e));
}

void Modules::lambda$loadModule$0($Map* map, $Module* m, $ModuleDescriptor$Exports* e, $String* target) {
	$init(Modules);
	$useLocalObjectStack();
	$var($Module, other, $cast($Module, $nc(map)->get(target)));
	if (other != nullptr) {
		addExports(m, $($nc(e)->source()), other);
	}
}

void Modules::clinit$($Class* clazz) {
	Modules::$assertionsDisabled = !Modules::class$->desiredAssertionStatus();
	$assignStatic(Modules::JLA, $SharedSecrets::getJavaLangAccess());
	$assignStatic(Modules::JLMA, $SharedSecrets::getJavaLangModuleAccess());
}

Modules::Modules() {
}

$Class* Modules::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.Modules$$Lambda$getClassLoader")) {
			return Modules$$Lambda$getClassLoader::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.Modules$$Lambda$getName$1")) {
			return Modules$$Lambda$getName$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.Modules$$Lambda$isQualified$2")) {
			return Modules$$Lambda$isQualified$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.Modules$$Lambda$lambda$loadModule$1$3")) {
			return Modules$$Lambda$lambda$loadModule$1$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.Modules$$Lambda$isQualified$4")) {
			return Modules$$Lambda$isQualified$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.Modules$$Lambda$lambda$loadModule$3$5")) {
			return Modules$$Lambda$lambda$loadModule$3$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.Modules$$Lambda$lambda$loadModule$4$6")) {
			return Modules$$Lambda$lambda$loadModule$4$6::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.Modules$$Lambda$lambda$loadModule$2$7")) {
			return Modules$$Lambda$lambda$loadModule$2$7::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.Modules$$Lambda$lambda$loadModule$0$8")) {
			return Modules$$Lambda$lambda$loadModule$0$8::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Modules, $assertionsDisabled)},
		{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Modules, JLA)},
		{"JLMA", "Ljdk/internal/access/JavaLangModuleAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Modules, JLMA)},
		{"topLayer", "Ljava/lang/ModuleLayer;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Modules, topLayer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Modules, init$, void)},
		{"addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, addExports, void, $Module*, $String*, $Module*)},
		{"addExports", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, addExports, void, $Module*, $String*)},
		{"addExportsToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, addExportsToAllUnnamed, void, $Module*, $String*)},
		{"addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, addOpens, void, $Module*, $String*, $Module*)},
		{"addOpensToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, addOpensToAllUnnamed, void, $Module*, $String*)},
		{"addProvides", "(Ljava/lang/Module;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $staticMethod(Modules, addProvides, void, $Module*, $Class*, $Class*)},
		{"addReads", "(Ljava/lang/Module;Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, addReads, void, $Module*, $Module*)},
		{"addReadsAllUnnamed", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, addReadsAllUnnamed, void, $Module*)},
		{"addUses", "(Ljava/lang/Module;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $staticMethod(Modules, addUses, void, $Module*, $Class*)},
		{"defineModule", "(Ljava/lang/ClassLoader;Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;)Ljava/lang/Module;", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, defineModule, $Module*, $ClassLoader*, $ModuleDescriptor*, $URI*)},
		{"findLoadedModule", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/Module;>;", $PUBLIC | $STATIC, $staticMethod(Modules, findLoadedModule, $Optional*, $String*)},
		{"lambda$loadModule$0", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Exports;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Modules, lambda$loadModule$0, void, $Map*, $Module*, $ModuleDescriptor$Exports*, $String*)},
		{"lambda$loadModule$1", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Exports;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Modules, lambda$loadModule$1, void, $Map*, $Module*, $ModuleDescriptor$Exports*)},
		{"lambda$loadModule$2", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Opens;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Modules, lambda$loadModule$2, void, $Map*, $Module*, $ModuleDescriptor$Opens*, $String*)},
		{"lambda$loadModule$3", "(Ljava/util/Map;Ljava/lang/Module;Ljava/lang/module/ModuleDescriptor$Opens;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Modules, lambda$loadModule$3, void, $Map*, $Module*, $ModuleDescriptor$Opens*)},
		{"lambda$loadModule$4", "()Ljava/lang/InternalError;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Modules, lambda$loadModule$4, $InternalError*)},
		{"loadModule", "(Ljava/lang/String;)Ljava/lang/Module;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(Modules, loadModule, $Module*, $String*)},
		{"newBootLayerConfiguration", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", "(Ljava/lang/module/ModuleFinder;Ljava/util/Collection<Ljava/lang/String;>;Ljava/io/PrintStream;)Ljava/lang/module/Configuration;", $PUBLIC | $STATIC, $staticMethod(Modules, newBootLayerConfiguration, $Configuration*, $ModuleFinder*, $Collection*, $PrintStream*)},
		{"transformedByAgent", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Modules, transformedByAgent, void, $Module*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.module.Modules",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Modules, name, initialize, &classInfo$$, Modules::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Modules);
	});
	return class$;
}

$Class* Modules::class$ = nullptr;

		} // module
	} // internal
} // jdk