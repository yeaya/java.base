#include <jdk/internal/module/ModuleHashesBuilder$TopoSorter.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Deque.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/module/ModuleHashesBuilder$Graph.h>
#include <jdk/internal/module/ModuleHashesBuilder.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Deque = ::java::util::Deque;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $ModuleHashesBuilder$Graph = ::jdk::internal::module::ModuleHashesBuilder$Graph;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0 : public $Consumer {
	$class(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ModuleHashesBuilder$TopoSorter* inst, $Set* visited, $Deque* stack) {
		$set(this, inst$, inst);
		$set(this, visited, visited);
		$set(this, stack, stack);
	}
	virtual void accept(Object$* node) override {
		$nc(inst$)->lambda$sort$0(visited, stack, node);
	}
	ModuleHashesBuilder$TopoSorter* inst$ = nullptr;
	$Set* visited = nullptr;
	$Deque* stack = nullptr;
};
$Class* ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, inst$)},
		{"visited", "Ljava/util/Set;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, visited)},
		{"stack", "Ljava/util/Deque;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, stack)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder$TopoSorter;Ljava/util/Set;Ljava/util/Deque;)V", nullptr, $PUBLIC, $method(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, init$, void, ModuleHashesBuilder$TopoSorter*, $Set*, $Deque*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0);
	});
	return class$;
}
$Class* ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0::class$ = nullptr;

void ModuleHashesBuilder$TopoSorter::init$($ModuleHashesBuilder$Graph* graph) {
	$set(this, result, $new($ArrayDeque));
	$set(this, graph, graph);
	sort();
}

void ModuleHashesBuilder$TopoSorter::ordered($Consumer* action) {
	this->result->forEach(action);
}

void ModuleHashesBuilder$TopoSorter::reverse($Consumer* action) {
	$$nc(this->result->descendingIterator())->forEachRemaining(action);
}

void ModuleHashesBuilder$TopoSorter::sort() {
	$useLocalObjectStack();
	$var($Set, visited, $new($HashSet));
	$var($Deque, stack, $new($ArrayDeque));
	$nc($nc(this->graph)->nodes$)->forEach($$new(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, this, visited, stack));
}

$Set* ModuleHashesBuilder$TopoSorter::children(Object$* node) {
	return $cast($Set, $$nc($nc(this->graph)->edges())->get(node));
}

void ModuleHashesBuilder$TopoSorter::visit(Object$* node, $Set* visited, $Deque* stack) {
	$useLocalObjectStack();
	if ($nc(visited)->add(node)) {
		$nc(stack)->push(node);
		$$nc(children(node))->forEach($$new(ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0, this, visited, stack));
		stack->pop();
		this->result->addLast(node);
	} else if ($nc(stack)->contains(node)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Cycle detected: "_s);
		var$0->append(node);
		var$0->append(" -> "_s);
		var$0->append($(children(node)));
		$throwNew($IllegalArgumentException, $$str(var$0));
	}
}

void ModuleHashesBuilder$TopoSorter::lambda$sort$0($Set* visited, $Deque* stack, Object$* node) {
	visit(node, visited, stack);
}

ModuleHashesBuilder$TopoSorter::ModuleHashesBuilder$TopoSorter() {
}

$Class* ModuleHashesBuilder$TopoSorter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0")) {
			return ModuleHashesBuilder$TopoSorter$$Lambda$lambda$sort$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"result", "Ljava/util/Deque;", "Ljava/util/Deque<TT;>;", $FINAL, $field(ModuleHashesBuilder$TopoSorter, result)},
		{"graph", "Ljdk/internal/module/ModuleHashesBuilder$Graph;", "Ljdk/internal/module/ModuleHashesBuilder$Graph<TT;>;", $FINAL, $field(ModuleHashesBuilder$TopoSorter, graph)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder$Graph;)V", "(Ljdk/internal/module/ModuleHashesBuilder$Graph<TT;>;)V", 0, $method(ModuleHashesBuilder$TopoSorter, init$, void, $ModuleHashesBuilder$Graph*)},
		{"children", "(Ljava/lang/Object;)Ljava/util/Set;", "(TT;)Ljava/util/Set<TT;>;", $PRIVATE, $method(ModuleHashesBuilder$TopoSorter, children, $Set*, Object$*)},
		{"lambda$sort$0", "(Ljava/util/Set;Ljava/util/Deque;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ModuleHashesBuilder$TopoSorter, lambda$sort$0, void, $Set*, $Deque*, Object$*)},
		{"ordered", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<TT;>;)V", $PUBLIC, $virtualMethod(ModuleHashesBuilder$TopoSorter, ordered, void, $Consumer*)},
		{"reverse", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<TT;>;)V", $PUBLIC, $virtualMethod(ModuleHashesBuilder$TopoSorter, reverse, void, $Consumer*)},
		{"sort", "()V", nullptr, $PRIVATE, $method(ModuleHashesBuilder$TopoSorter, sort, void)},
		{"visit", "(Ljava/lang/Object;Ljava/util/Set;Ljava/util/Deque;)V", "(TT;Ljava/util/Set<TT;>;Ljava/util/Deque<TT;>;)V", $PRIVATE, $method(ModuleHashesBuilder$TopoSorter, visit, void, Object$*, $Set*, $Deque*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleHashesBuilder$TopoSorter", "jdk.internal.module.ModuleHashesBuilder", "TopoSorter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleHashesBuilder$TopoSorter",
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
	$loadClass(ModuleHashesBuilder$TopoSorter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashesBuilder$TopoSorter);
	});
	return class$;
}

$Class* ModuleHashesBuilder$TopoSorter::class$ = nullptr;

		} // module
	} // internal
} // jdk