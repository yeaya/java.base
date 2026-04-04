#include <jdk/internal/module/ModuleHashesBuilder$Graph$Builder.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <jdk/internal/module/ModuleHashesBuilder$Graph.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $ModuleHashesBuilder$Graph = ::jdk::internal::module::ModuleHashesBuilder$Graph;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0 : public $Function {
	$class(ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* _e) override {
		 return ModuleHashesBuilder$Graph$Builder::lambda$addNode$0(_e);
	}
};
$Class* ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0);
	});
	return class$;
}
$Class* ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0::class$ = nullptr;

void ModuleHashesBuilder$Graph$Builder::init$() {
	$set(this, nodes, $new($HashSet));
	$set(this, edges, $new($HashMap));
}

void ModuleHashesBuilder$Graph$Builder::addNode(Object$* node) {
	if (this->nodes->add(node)) {
		this->edges->computeIfAbsent(node, $$new(ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0));
	}
}

void ModuleHashesBuilder$Graph$Builder::addEdge(Object$* u, Object$* v) {
	addNode(u);
	addNode(v);
	$$sure($Set, this->edges->get(u))->add(v);
}

$ModuleHashesBuilder$Graph* ModuleHashesBuilder$Graph$Builder::build() {
	return $new($ModuleHashesBuilder$Graph, this->nodes, this->edges);
}

$Set* ModuleHashesBuilder$Graph$Builder::lambda$addNode$0(Object$* _e) {
	return $new($HashSet);
}

ModuleHashesBuilder$Graph$Builder::ModuleHashesBuilder$Graph$Builder() {
}

$Class* ModuleHashesBuilder$Graph$Builder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0")) {
			return ModuleHashesBuilder$Graph$Builder$$Lambda$lambda$addNode$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"nodes", "Ljava/util/Set;", "Ljava/util/Set<TT;>;", $FINAL, $field(ModuleHashesBuilder$Graph$Builder, nodes)},
		{"edges", "Ljava/util/Map;", "Ljava/util/Map<TT;Ljava/util/Set<TT;>;>;", $FINAL, $field(ModuleHashesBuilder$Graph$Builder, edges)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ModuleHashesBuilder$Graph$Builder, init$, void)},
		{"addEdge", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TT;)V", $PUBLIC, $virtualMethod(ModuleHashesBuilder$Graph$Builder, addEdge, void, Object$*, Object$*)},
		{"addNode", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(ModuleHashesBuilder$Graph$Builder, addNode, void, Object$*)},
		{"build", "()Ljdk/internal/module/ModuleHashesBuilder$Graph;", "()Ljdk/internal/module/ModuleHashesBuilder$Graph<TT;>;", $PUBLIC, $virtualMethod(ModuleHashesBuilder$Graph$Builder, build, $ModuleHashesBuilder$Graph*)},
		{"lambda$addNode$0", "(Ljava/lang/Object;)Ljava/util/Set;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleHashesBuilder$Graph$Builder, lambda$addNode$0, $Set*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleHashesBuilder$Graph", "jdk.internal.module.ModuleHashesBuilder", "Graph", $STATIC},
		{"jdk.internal.module.ModuleHashesBuilder$Graph$Builder", "jdk.internal.module.ModuleHashesBuilder$Graph", "Builder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleHashesBuilder$Graph$Builder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ModuleHashesBuilder"
	};
	$loadClass(ModuleHashesBuilder$Graph$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$Graph$Builder);
	});
	return class$;
}

$Class* ModuleHashesBuilder$Graph$Builder::class$ = nullptr;

		} // module
	} // internal
} // jdk