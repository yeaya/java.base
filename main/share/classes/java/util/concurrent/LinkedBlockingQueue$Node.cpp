#include <java/util/concurrent/LinkedBlockingQueue$Node.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void LinkedBlockingQueue$Node::init$(Object$* x) {
	$set(this, item, x);
}

LinkedBlockingQueue$Node::LinkedBlockingQueue$Node() {
}

$Class* LinkedBlockingQueue$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"item", "Ljava/lang/Object;", "TE;", 0, $field(LinkedBlockingQueue$Node, item)},
		{"next", "Ljava/util/concurrent/LinkedBlockingQueue$Node;", "Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", 0, $field(LinkedBlockingQueue$Node, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(LinkedBlockingQueue$Node, init$, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.LinkedBlockingQueue$Node", "java.util.concurrent.LinkedBlockingQueue", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.LinkedBlockingQueue$Node",
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
		"java.util.concurrent.LinkedBlockingQueue"
	};
	$loadClass(LinkedBlockingQueue$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkedBlockingQueue$Node);
	});
	return class$;
}

$Class* LinkedBlockingQueue$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java