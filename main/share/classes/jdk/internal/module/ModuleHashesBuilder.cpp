#include <jdk/internal/module/ModuleHashesBuilder.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/module/ResolvedModule.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Deque.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleHashesBuilder$Graph$Builder.h>
#include <jdk/internal/module/ModuleHashesBuilder$Graph.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Configuration = ::java::lang::module::Configuration;
using $ResolvedModule = ::java::lang::module::ResolvedModule;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Deque = ::java::util::Deque;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleHashesBuilder$Graph = ::jdk::internal::module::ModuleHashesBuilder$Graph;
using $ModuleHashesBuilder$Graph$Builder = ::jdk::internal::module::ModuleHashesBuilder$Graph$Builder;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleHashesBuilder$$Lambda$lambda$computeHashes$0 : public $Predicate {
	$class(ModuleHashesBuilder$$Lambda$lambda$computeHashes$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Set* roots, $Set* mods) {
		$set(this, roots, roots);
		$set(this, mods, mods);
	}
	virtual bool test(Object$* mn) override {
		 return ModuleHashesBuilder::lambda$computeHashes$0(roots, mods, $cast($String, mn));
	}
	$Set* roots = nullptr;
	$Set* mods = nullptr;
};
$Class* ModuleHashesBuilder$$Lambda$lambda$computeHashes$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"roots", "Ljava/util/Set;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$0, roots)},
		{"mods", "Ljava/util/Set;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$0, mods)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(ModuleHashesBuilder$$Lambda$lambda$computeHashes$0, init$, void, $Set*, $Set*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModuleHashesBuilder$$Lambda$lambda$computeHashes$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleHashesBuilder$$Lambda$lambda$computeHashes$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleHashesBuilder$$Lambda$lambda$computeHashes$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$$Lambda$lambda$computeHashes$0);
	});
	return class$;
}
$Class* ModuleHashesBuilder$$Lambda$lambda$computeHashes$0::class$ = nullptr;

class ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1 : public $Consumer {
	$class(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ModuleHashesBuilder* inst, $ModuleHashesBuilder$Graph* transposedGraph, $Set* mods, $Map* hashes) {
		$set(this, inst$, inst);
		$set(this, transposedGraph, transposedGraph);
		$set(this, mods, mods);
		$set(this, hashes, hashes);
	}
	virtual void accept(Object$* mn) override {
		$nc(inst$)->lambda$computeHashes$3(transposedGraph, mods, hashes, $cast($String, mn));
	}
	ModuleHashesBuilder* inst$ = nullptr;
	$ModuleHashesBuilder$Graph* transposedGraph = nullptr;
	$Set* mods = nullptr;
	$Map* hashes = nullptr;
};
$Class* ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, inst$)},
		{"transposedGraph", "Ljdk/internal/module/ModuleHashesBuilder$Graph;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, transposedGraph)},
		{"mods", "Ljava/util/Set;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, mods)},
		{"hashes", "Ljava/util/Map;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, hashes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder;Ljdk/internal/module/ModuleHashesBuilder$Graph;Ljava/util/Set;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, init$, void, ModuleHashesBuilder*, $ModuleHashesBuilder$Graph*, $Set*, $Map*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1);
	});
	return class$;
}
$Class* ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1::class$ = nullptr;

class ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2 : public $Predicate {
	$class(ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$(ModuleHashesBuilder* inst, $String* mn) {
		$set(this, inst$, inst);
		$set(this, mn, mn);
	}
	virtual bool test(Object$* n) override {
		 return $nc(inst$)->lambda$computeHashes$1(mn, $cast($String, n));
	}
	ModuleHashesBuilder* inst$ = nullptr;
	$String* mn = nullptr;
};
$Class* ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2, inst$)},
		{"mn", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2, mn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2, init$, void, ModuleHashesBuilder*, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2);
	});
	return class$;
}
$Class* ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2::class$ = nullptr;

class ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3 : public $Function {
	$class(ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3, $NO_CLASS_INIT, $Function)
public:
	void init$(ModuleHashesBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* name) override {
		 return $nc(inst$)->lambda$computeHashes$2($cast($String, name));
	}
	ModuleHashesBuilder* inst$ = nullptr;
};
$Class* ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder;)V", nullptr, $PUBLIC, $method(ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3, init$, void, ModuleHashesBuilder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3);
	});
	return class$;
}
$Class* ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3::class$ = nullptr;

class ModuleHashesBuilder$$Lambda$reference$4 : public $Function {
	$class(ModuleHashesBuilder$$Lambda$reference$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($ResolvedModule, inst$)->reference();
	}
};
$Class* ModuleHashesBuilder$$Lambda$reference$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleHashesBuilder$$Lambda$reference$4, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleHashesBuilder$$Lambda$reference$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleHashesBuilder$$Lambda$reference$4",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleHashesBuilder$$Lambda$reference$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$$Lambda$reference$4);
	});
	return class$;
}
$Class* ModuleHashesBuilder$$Lambda$reference$4::class$ = nullptr;

class ModuleHashesBuilder$$Lambda$InternalError$5 : public $Supplier {
	$class(ModuleHashesBuilder$$Lambda$InternalError$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $new($InternalError);
	}
};
$Class* ModuleHashesBuilder$$Lambda$InternalError$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleHashesBuilder$$Lambda$InternalError$5, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleHashesBuilder$$Lambda$InternalError$5, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleHashesBuilder$$Lambda$InternalError$5",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleHashesBuilder$$Lambda$InternalError$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$$Lambda$InternalError$5);
	});
	return class$;
}
$Class* ModuleHashesBuilder$$Lambda$InternalError$5::class$ = nullptr;

void ModuleHashesBuilder::init$($Configuration* config, $Set* modules) {
	$set(this, configuration, config);
	$set(this, hashModuleCandidates, modules);
}

$Map* ModuleHashesBuilder::computeHashes($Set* roots) {
	$useLocalObjectStack();
	$var($ModuleHashesBuilder$Graph$Builder, builder, $new($ModuleHashesBuilder$Graph$Builder));
	$var($Deque, todo, $new($ArrayDeque, $($nc(this->configuration)->modules())));
	$var($Set, visited, $new($HashSet));
	$var($ResolvedModule, rm, nullptr);
	while (($assign(rm, $cast($ResolvedModule, todo->poll()))) != nullptr) {
		if (visited->add(rm)) {
			builder->addNode($($nc(rm)->name()));
			{
				$var($Iterator, i$, $$nc(rm->reads())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ResolvedModule, dm, $cast($ResolvedModule, i$->next()));
					{
						if (!visited->contains(dm)) {
							todo->push(dm);
						}
						$var($Object, var$0, rm->name());
						builder->addEdge(var$0, $($nc(dm)->name()));
					}
				}
			}
		}
	}
	$var($ModuleHashesBuilder$Graph, transposedGraph, $$nc(builder->build())->transpose());
	$var($Set, mods, $new($HashSet));
	$var($Map, hashes, $cast($AbstractMap, $new($TreeMap)));
	$$nc($$nc($$nc(builder->build())->orderedNodes())->filter($$new(ModuleHashesBuilder$$Lambda$lambda$computeHashes$0, roots, mods)))->forEach($$new(ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1, this, transposedGraph, mods, hashes));
	return hashes;
}

void ModuleHashesBuilder::lambda$computeHashes$3($ModuleHashesBuilder$Graph* transposedGraph, $Set* mods, $Map* hashes, $String* mn) {
	$useLocalObjectStack();
	$var($Set, ns, $cast($Set, $$nc($$nc($$nc($nc(transposedGraph)->dfs(mn))->stream())->filter($$new(ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2, this, mn)))->collect($($Collectors::toSet()))));
	$nc(mods)->add(mn);
	mods->addAll(ns);
	if (!$nc(ns)->isEmpty()) {
		$var($Set, mrefs, $cast($Set, $$nc($$nc($$nc(ns->stream())->map($$new(ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3, this)))->map($$new(ModuleHashesBuilder$$Lambda$reference$4)))->collect($($Collectors::toSet()))));
		$nc(hashes)->put(mn, $($ModuleHashes::generate(mrefs, "SHA-256"_s)));
	}
}

$ResolvedModule* ModuleHashesBuilder::lambda$computeHashes$2($String* name) {
	$useLocalObjectStack();
	return $cast($ResolvedModule, $$nc($nc(this->configuration)->findModule(name))->orElseThrow($$new(ModuleHashesBuilder$$Lambda$InternalError$5)));
}

bool ModuleHashesBuilder::lambda$computeHashes$1($String* mn, $String* n) {
	bool var$0 = !$nc(n)->equals(mn);
	return var$0 && $nc(this->hashModuleCandidates)->contains(n);
}

bool ModuleHashesBuilder::lambda$computeHashes$0($Set* roots, $Set* mods, $String* mn) {
	bool var$0 = $nc(roots)->contains(mn);
	return var$0 && !$nc(mods)->contains(mn);
}

ModuleHashesBuilder::ModuleHashesBuilder() {
}

$Class* ModuleHashesBuilder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.ModuleHashesBuilder$$Lambda$lambda$computeHashes$0")) {
			return ModuleHashesBuilder$$Lambda$lambda$computeHashes$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1")) {
			return ModuleHashesBuilder$$Lambda$lambda$computeHashes$3$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2")) {
			return ModuleHashesBuilder$$Lambda$lambda$computeHashes$1$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3")) {
			return ModuleHashesBuilder$$Lambda$lambda$computeHashes$2$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleHashesBuilder$$Lambda$reference$4")) {
			return ModuleHashesBuilder$$Lambda$reference$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleHashesBuilder$$Lambda$InternalError$5")) {
			return ModuleHashesBuilder$$Lambda$InternalError$5::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"configuration", "Ljava/lang/module/Configuration;", nullptr, $PRIVATE | $FINAL, $field(ModuleHashesBuilder, configuration)},
		{"hashModuleCandidates", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ModuleHashesBuilder, hashModuleCandidates)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/module/Configuration;Ljava/util/Set;)V", "(Ljava/lang/module/Configuration;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(ModuleHashesBuilder, init$, void, $Configuration*, $Set*)},
		{"computeHashes", "(Ljava/util/Set;)Ljava/util/Map;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljava/util/Map<Ljava/lang/String;Ljdk/internal/module/ModuleHashes;>;", $PUBLIC, $virtualMethod(ModuleHashesBuilder, computeHashes, $Map*, $Set*)},
		{"lambda$computeHashes$0", "(Ljava/util/Set;Ljava/util/Set;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleHashesBuilder, lambda$computeHashes$0, bool, $Set*, $Set*, $String*)},
		{"lambda$computeHashes$1", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(ModuleHashesBuilder, lambda$computeHashes$1, bool, $String*, $String*)},
		{"lambda$computeHashes$2", "(Ljava/lang/String;)Ljava/lang/module/ResolvedModule;", nullptr, $PRIVATE | $SYNTHETIC, $method(ModuleHashesBuilder, lambda$computeHashes$2, $ResolvedModule*, $String*)},
		{"lambda$computeHashes$3", "(Ljdk/internal/module/ModuleHashesBuilder$Graph;Ljava/util/Set;Ljava/util/Map;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ModuleHashesBuilder, lambda$computeHashes$3, void, $ModuleHashesBuilder$Graph*, $Set*, $Map*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleHashesBuilder$TopoSorter", "jdk.internal.module.ModuleHashesBuilder", "TopoSorter", $PRIVATE | $STATIC},
		{"jdk.internal.module.ModuleHashesBuilder$Graph", "jdk.internal.module.ModuleHashesBuilder", "Graph", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.module.ModuleHashesBuilder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.module.ModuleHashesBuilder$TopoSorter,jdk.internal.module.ModuleHashesBuilder$Graph,jdk.internal.module.ModuleHashesBuilder$Graph$Builder"
	};
	$loadClass(ModuleHashesBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder);
	});
	return class$;
}

$Class* ModuleHashesBuilder::class$ = nullptr;

		} // module
	} // internal
} // jdk