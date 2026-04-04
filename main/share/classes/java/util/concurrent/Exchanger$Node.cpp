#include <java/util/concurrent/Exchanger$Node.h>
#include <java/util/concurrent/Exchanger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void Exchanger$Node::init$() {
}

Exchanger$Node::Exchanger$Node() {
}

$Class* Exchanger$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, 0, $field(Exchanger$Node, index)},
		{"bound", "I", nullptr, 0, $field(Exchanger$Node, bound)},
		{"collides", "I", nullptr, 0, $field(Exchanger$Node, collides)},
		{"hash", "I", nullptr, 0, $field(Exchanger$Node, hash)},
		{"item", "Ljava/lang/Object;", nullptr, 0, $field(Exchanger$Node, item)},
		{"match", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(Exchanger$Node, match)},
		{"parked", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(Exchanger$Node, parked)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exchanger$Node, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Exchanger$Node", "java.util.concurrent.Exchanger", "Node", $STATIC | $FINAL},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/vm/annotation/Contended;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.Exchanger$Node",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.util.concurrent.Exchanger"
	};
	$loadClass(Exchanger$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exchanger$Node);
	});
	return class$;
}

$Class* Exchanger$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java