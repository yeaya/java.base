#include <jdk/internal/module/ModuleHashesBuilder$Graph.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Deque.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleHashesBuilder$Graph$Builder.h>
#include <jdk/internal/module/ModuleHashesBuilder$TopoSorter.h>
#include <jdk/internal/module/ModuleHashesBuilder.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Deque = ::java::util::Deque;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $ModuleHashesBuilder$Graph$Builder = ::jdk::internal::module::ModuleHashesBuilder$Graph$Builder;
using $ModuleHashesBuilder$TopoSorter = ::jdk::internal::module::ModuleHashesBuilder$TopoSorter;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleHashesBuilder$Graph$$Lambda$addNode : public $Consumer {
	$class(ModuleHashesBuilder$Graph$$Lambda$addNode, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ModuleHashesBuilder$Graph$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* node) override {
		$nc(inst$)->addNode(node);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleHashesBuilder$Graph$$Lambda$addNode>());
	}
	$ModuleHashesBuilder$Graph$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleHashesBuilder$Graph$$Lambda$addNode::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$addNode, inst$)},
	{}
};
$MethodInfo ModuleHashesBuilder$Graph$$Lambda$addNode::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder$Graph$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleHashesBuilder$Graph$$Lambda$addNode::*)($ModuleHashesBuilder$Graph$Builder*)>(&ModuleHashesBuilder$Graph$$Lambda$addNode::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleHashesBuilder$Graph$$Lambda$addNode::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleHashesBuilder$Graph$$Lambda$addNode",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleHashesBuilder$Graph$$Lambda$addNode::load$($String* name, bool initialize) {
	$loadClass(ModuleHashesBuilder$Graph$$Lambda$addNode, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleHashesBuilder$Graph$$Lambda$addNode::class$ = nullptr;

class ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1 : public $Consumer {
	$class(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ModuleHashesBuilder$Graph* inst, $ModuleHashesBuilder$Graph$Builder* builder) {
		$set(this, inst$, inst);
		$set(this, builder, builder);
	}
	virtual void accept(Object$* u) override {
		$nc(inst$)->lambda$transpose$1(builder, u);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1>());
	}
	ModuleHashesBuilder$Graph* inst$ = nullptr;
	$ModuleHashesBuilder$Graph$Builder* builder = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1, inst$)},
	{"builder", "Ljdk/internal/module/ModuleHashesBuilder$Graph$Builder;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1, builder)},
	{}
};
$MethodInfo ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder$Graph;Ljdk/internal/module/ModuleHashesBuilder$Graph$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::*)(ModuleHashesBuilder$Graph*,$ModuleHashesBuilder$Graph$Builder*)>(&ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::load$($String* name, bool initialize) {
	$loadClass(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::class$ = nullptr;

class ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2 : public $Predicate {
	$class(ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Set* visited) {
		$set(this, visited, visited);
	}
	virtual bool test(Object$* v) override {
		 return ModuleHashesBuilder$Graph::lambda$dfs$2(visited, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2>());
	}
	$Set* visited = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::fieldInfos[2] = {
	{"visited", "Ljava/util/Set;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2, visited)},
	{}
};
$MethodInfo ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::*)($Set*)>(&ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::load$($String* name, bool initialize) {
	$loadClass(ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::class$ = nullptr;

class ModuleHashesBuilder$Graph$$Lambda$push$3 : public $Consumer {
	$class(ModuleHashesBuilder$Graph$$Lambda$push$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ArrayDeque* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* e) override {
		$nc(inst$)->push(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleHashesBuilder$Graph$$Lambda$push$3>());
	}
	$ArrayDeque* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleHashesBuilder$Graph$$Lambda$push$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$push$3, inst$)},
	{}
};
$MethodInfo ModuleHashesBuilder$Graph$$Lambda$push$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/ArrayDeque;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleHashesBuilder$Graph$$Lambda$push$3::*)($ArrayDeque*)>(&ModuleHashesBuilder$Graph$$Lambda$push$3::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleHashesBuilder$Graph$$Lambda$push$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleHashesBuilder$Graph$$Lambda$push$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleHashesBuilder$Graph$$Lambda$push$3::load$($String* name, bool initialize) {
	$loadClass(ModuleHashesBuilder$Graph$$Lambda$push$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleHashesBuilder$Graph$$Lambda$push$3::class$ = nullptr;

class ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4 : public $Consumer {
	$class(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ModuleHashesBuilder$Graph* inst, $PrintStream* out) {
		$set(this, inst$, inst);
		$set(this, out, out);
	}
	virtual void accept(Object$* u) override {
		$nc(inst$)->lambda$printGraph$4(out, u);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4>());
	}
	ModuleHashesBuilder$Graph* inst$ = nullptr;
	$PrintStream* out = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4, inst$)},
	{"out", "Ljava/io/PrintStream;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4, out)},
	{}
};
$MethodInfo ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder$Graph;Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::*)(ModuleHashesBuilder$Graph*,$PrintStream*)>(&ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::load$($String* name, bool initialize) {
	$loadClass(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::class$ = nullptr;

class ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5 : public $Consumer {
	$class(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* out, Object$* u) {
		$set(this, out, out);
		$set(this, u, u);
	}
	virtual void accept(Object$* v) override {
		ModuleHashesBuilder$Graph::lambda$printGraph$3(out, u, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5>());
	}
	$PrintStream* out = nullptr;
	$Object* u = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::fieldInfos[3] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5, out)},
	{"u", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5, u)},
	{}
};
$MethodInfo ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::methodInfos[3] = {
	{"<init>", "(Ljava/io/PrintStream;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::*)($PrintStream*,Object$*)>(&ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::load$($String* name, bool initialize) {
	$loadClass(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::class$ = nullptr;

class ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6 : public $Consumer {
	$class(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ModuleHashesBuilder$Graph$Builder* builder, Object$* u) {
		$set(this, builder, builder);
		$set(this, u, u);
	}
	virtual void accept(Object$* v) override {
		ModuleHashesBuilder$Graph::lambda$transpose$0(builder, u, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6>());
	}
	$ModuleHashesBuilder$Graph$Builder* builder = nullptr;
	$Object* u = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::fieldInfos[3] = {
	{"builder", "Ljdk/internal/module/ModuleHashesBuilder$Graph$Builder;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6, builder)},
	{"u", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6, u)},
	{}
};
$MethodInfo ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/module/ModuleHashesBuilder$Graph$Builder;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::*)($ModuleHashesBuilder$Graph$Builder*,Object$*)>(&ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::load$($String* name, bool initialize) {
	$loadClass(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::class$ = nullptr;

$FieldInfo _ModuleHashesBuilder$Graph_FieldInfo_[] = {
	{"nodes", "Ljava/util/Set;", "Ljava/util/Set<TT;>;", $PRIVATE | $FINAL, $field(ModuleHashesBuilder$Graph, nodes$)},
	{"edges", "Ljava/util/Map;", "Ljava/util/Map<TT;Ljava/util/Set<TT;>;>;", $PRIVATE | $FINAL, $field(ModuleHashesBuilder$Graph, edges$)},
	{}
};

$MethodInfo _ModuleHashesBuilder$Graph_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Ljava/util/Map;)V", "(Ljava/util/Set<TT;>;Ljava/util/Map<TT;Ljava/util/Set<TT;>;>;)V", $PUBLIC, $method(static_cast<void(ModuleHashesBuilder$Graph::*)($Set*,$Map*)>(&ModuleHashesBuilder$Graph::init$))},
	{"adjacentNodes", "(Ljava/lang/Object;)Ljava/util/Set;", "(TT;)Ljava/util/Set<TT;>;", $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", "(TT;)Z", $PUBLIC},
	{"dfs", "(Ljava/lang/Object;)Ljava/util/Set;", "(TT;)Ljava/util/Set<TT;>;", $PUBLIC},
	{"dfs", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<TT;>;)Ljava/util/Set<TT;>;", $PUBLIC},
	{"edges", "()Ljava/util/Map;", "()Ljava/util/Map<TT;Ljava/util/Set<TT;>;>;", $PUBLIC},
	{"lambda$dfs$2", "(Ljava/util/Set;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Set*,Object$*)>(&ModuleHashesBuilder$Graph::lambda$dfs$2))},
	{"lambda$printGraph$3", "(Ljava/io/PrintStream;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PrintStream*,Object$*,Object$*)>(&ModuleHashesBuilder$Graph::lambda$printGraph$3))},
	{"lambda$printGraph$4", "(Ljava/io/PrintStream;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ModuleHashesBuilder$Graph::*)($PrintStream*,Object$*)>(&ModuleHashesBuilder$Graph::lambda$printGraph$4))},
	{"lambda$transpose$0", "(Ljdk/internal/module/ModuleHashesBuilder$Graph$Builder;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ModuleHashesBuilder$Graph$Builder*,Object$*,Object$*)>(&ModuleHashesBuilder$Graph::lambda$transpose$0))},
	{"lambda$transpose$1", "(Ljdk/internal/module/ModuleHashesBuilder$Graph$Builder;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ModuleHashesBuilder$Graph::*)($ModuleHashesBuilder$Graph$Builder*,Object$*)>(&ModuleHashesBuilder$Graph::lambda$transpose$1))},
	{"nodes", "()Ljava/util/Set;", "()Ljava/util/Set<TT;>;", $PUBLIC},
	{"ordered", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<TT;>;)V", $PUBLIC},
	{"orderedNodes", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TT;>;", $PUBLIC},
	{"printGraph", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"reverse", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<TT;>;)V", $PUBLIC},
	{"transpose", "()Ljdk/internal/module/ModuleHashesBuilder$Graph;", "()Ljdk/internal/module/ModuleHashesBuilder$Graph<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ModuleHashesBuilder$Graph_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleHashesBuilder$Graph", "jdk.internal.module.ModuleHashesBuilder", "Graph", $STATIC},
	{"jdk.internal.module.ModuleHashesBuilder$Graph$Builder", "jdk.internal.module.ModuleHashesBuilder$Graph", "Builder", $STATIC},
	{}
};

$ClassInfo _ModuleHashesBuilder$Graph_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModuleHashesBuilder$Graph",
	"java.lang.Object",
	nullptr,
	_ModuleHashesBuilder$Graph_FieldInfo_,
	_ModuleHashesBuilder$Graph_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ModuleHashesBuilder$Graph_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleHashesBuilder"
};

$Object* allocate$ModuleHashesBuilder$Graph($Class* clazz) {
	return $of($alloc(ModuleHashesBuilder$Graph));
}

void ModuleHashesBuilder$Graph::init$($Set* nodes, $Map* edges) {
	$set(this, nodes$, $Collections::unmodifiableSet(nodes));
	$set(this, edges$, $Collections::unmodifiableMap(edges));
}

$Set* ModuleHashesBuilder$Graph::nodes() {
	return this->nodes$;
}

$Map* ModuleHashesBuilder$Graph::edges() {
	return this->edges$;
}

$Set* ModuleHashesBuilder$Graph::adjacentNodes(Object$* u) {
	return $cast($Set, $nc(this->edges$)->get(u));
}

bool ModuleHashesBuilder$Graph::contains(Object$* u) {
	return $nc(this->nodes$)->contains(u);
}

$Stream* ModuleHashesBuilder$Graph::orderedNodes() {
	$var($ModuleHashesBuilder$TopoSorter, sorter, $new($ModuleHashesBuilder$TopoSorter, this));
	return $nc(sorter->result)->stream();
}

void ModuleHashesBuilder$Graph::ordered($Consumer* action) {
	$var($ModuleHashesBuilder$TopoSorter, sorter, $new($ModuleHashesBuilder$TopoSorter, this));
	sorter->ordered(action);
}

void ModuleHashesBuilder$Graph::reverse($Consumer* action) {
	$var($ModuleHashesBuilder$TopoSorter, sorter, $new($ModuleHashesBuilder$TopoSorter, this));
	sorter->reverse(action);
}

ModuleHashesBuilder$Graph* ModuleHashesBuilder$Graph::transpose() {
	$useLocalCurrentObjectStackCache();
	$var($ModuleHashesBuilder$Graph$Builder, builder, $new($ModuleHashesBuilder$Graph$Builder));
	$nc(this->nodes$)->forEach(static_cast<$Consumer*>($$new(ModuleHashesBuilder$Graph$$Lambda$addNode, static_cast<$ModuleHashesBuilder$Graph$Builder*>(builder))));
	$nc($($nc(this->edges$)->keySet()))->forEach(static_cast<$Consumer*>($$new(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1, this, builder)));
	return builder->build();
}

$Set* ModuleHashesBuilder$Graph::dfs(Object$* root) {
	return dfs($($Set::of(root)));
}

$Set* ModuleHashesBuilder$Graph::dfs($Set* roots) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayDeque, todo, $new($ArrayDeque, static_cast<$Collection*>(roots)));
	$var($Set, visited, $new($HashSet));
	$var($Object, u, nullptr);
	while (($assign(u, todo->poll())) != nullptr) {
		bool var$0 = visited->add(u);
		if (var$0 && contains(u)) {
			$nc($($nc($($nc($(adjacentNodes(u)))->stream()))->filter(static_cast<$Predicate*>($$new(ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2, visited)))))->forEach(static_cast<$Consumer*>($$new(ModuleHashesBuilder$Graph$$Lambda$push$3, static_cast<$ArrayDeque*>(todo))));
		}
	}
	return visited;
}

void ModuleHashesBuilder$Graph::printGraph($PrintStream* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->println($$str({"graph for "_s, this->nodes$}));
	$nc(this->nodes$)->forEach(static_cast<$Consumer*>($$new(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4, this, out)));
}

void ModuleHashesBuilder$Graph::lambda$printGraph$4($PrintStream* out, Object$* u) {
	$useLocalCurrentObjectStackCache();
	$nc($(adjacentNodes(u)))->forEach(static_cast<$Consumer*>($$new(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5, out, u)));
}

void ModuleHashesBuilder$Graph::lambda$printGraph$3($PrintStream* out, Object$* u, Object$* v) {
	$nc(out)->format("  %s -> %s%n"_s, $$new($ObjectArray, {
		u,
		v
	}));
}

bool ModuleHashesBuilder$Graph::lambda$dfs$2($Set* visited, Object$* v) {
	return !$nc(visited)->contains(v);
}

void ModuleHashesBuilder$Graph::lambda$transpose$1($ModuleHashesBuilder$Graph$Builder* builder, Object$* u) {
	$useLocalCurrentObjectStackCache();
	$nc(($cast($Set, $($nc(this->edges$)->get(u)))))->forEach(static_cast<$Consumer*>($$new(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6, builder, u)));
}

void ModuleHashesBuilder$Graph::lambda$transpose$0($ModuleHashesBuilder$Graph$Builder* builder, Object$* u, Object$* v) {
	$nc(builder)->addEdge(v, u);
}

ModuleHashesBuilder$Graph::ModuleHashesBuilder$Graph() {
}

$Class* ModuleHashesBuilder$Graph::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModuleHashesBuilder$Graph$$Lambda$addNode::classInfo$.name)) {
			return ModuleHashesBuilder$Graph$$Lambda$addNode::load$(name, initialize);
		}
		if (name->equals(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::classInfo$.name)) {
			return ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$1$1::load$(name, initialize);
		}
		if (name->equals(ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::classInfo$.name)) {
			return ModuleHashesBuilder$Graph$$Lambda$lambda$dfs$2$2::load$(name, initialize);
		}
		if (name->equals(ModuleHashesBuilder$Graph$$Lambda$push$3::classInfo$.name)) {
			return ModuleHashesBuilder$Graph$$Lambda$push$3::load$(name, initialize);
		}
		if (name->equals(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::classInfo$.name)) {
			return ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$4$4::load$(name, initialize);
		}
		if (name->equals(ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::classInfo$.name)) {
			return ModuleHashesBuilder$Graph$$Lambda$lambda$printGraph$3$5::load$(name, initialize);
		}
		if (name->equals(ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::classInfo$.name)) {
			return ModuleHashesBuilder$Graph$$Lambda$lambda$transpose$0$6::load$(name, initialize);
		}
	}
	$loadClass(ModuleHashesBuilder$Graph, name, initialize, &_ModuleHashesBuilder$Graph_ClassInfo_, allocate$ModuleHashesBuilder$Graph);
	return class$;
}

$Class* ModuleHashesBuilder$Graph::class$ = nullptr;

		} // module
	} // internal
} // jdk