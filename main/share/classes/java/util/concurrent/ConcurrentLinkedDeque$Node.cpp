#include <java/util/concurrent/ConcurrentLinkedDeque$Node.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentLinkedDeque$Node::init$() {
}

ConcurrentLinkedDeque$Node::ConcurrentLinkedDeque$Node() {
}

$Class* ConcurrentLinkedDeque$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prev", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $VOLATILE, $field(ConcurrentLinkedDeque$Node, prev)},
		{"item", "Ljava/lang/Object;", "TE;", $VOLATILE, $field(ConcurrentLinkedDeque$Node, item)},
		{"next", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $VOLATILE, $field(ConcurrentLinkedDeque$Node, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ConcurrentLinkedDeque$Node, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentLinkedDeque$Node", "java.util.concurrent.ConcurrentLinkedDeque", "Node", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentLinkedDeque$Node",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentLinkedDeque"
	};
	$loadClass(ConcurrentLinkedDeque$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentLinkedDeque$Node);
	});
	return class$;
}

$Class* ConcurrentLinkedDeque$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java