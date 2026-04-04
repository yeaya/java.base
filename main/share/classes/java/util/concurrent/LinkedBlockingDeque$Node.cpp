#include <java/util/concurrent/LinkedBlockingDeque$Node.h>
#include <java/util/concurrent/LinkedBlockingDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void LinkedBlockingDeque$Node::init$(Object$* x) {
	$set(this, item, x);
}

LinkedBlockingDeque$Node::LinkedBlockingDeque$Node() {
}

$Class* LinkedBlockingDeque$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"item", "Ljava/lang/Object;", "TE;", 0, $field(LinkedBlockingDeque$Node, item)},
		{"prev", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0, $field(LinkedBlockingDeque$Node, prev)},
		{"next", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0, $field(LinkedBlockingDeque$Node, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(LinkedBlockingDeque$Node, init$, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.LinkedBlockingDeque$Node", "java.util.concurrent.LinkedBlockingDeque", "Node", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.LinkedBlockingDeque$Node",
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
		"java.util.concurrent.LinkedBlockingDeque"
	};
	$loadClass(LinkedBlockingDeque$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkedBlockingDeque$Node);
	});
	return class$;
}

$Class* LinkedBlockingDeque$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java