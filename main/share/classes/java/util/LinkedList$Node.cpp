#include <java/util/LinkedList$Node.h>
#include <java/util/LinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void LinkedList$Node::init$(LinkedList$Node* prev, Object$* element, LinkedList$Node* next) {
	$set(this, item, element);
	$set(this, next, next);
	$set(this, prev, prev);
}

LinkedList$Node::LinkedList$Node() {
}

$Class* LinkedList$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"item", "Ljava/lang/Object;", "TE;", 0, $field(LinkedList$Node, item)},
		{"next", "Ljava/util/LinkedList$Node;", "Ljava/util/LinkedList$Node<TE;>;", 0, $field(LinkedList$Node, next)},
		{"prev", "Ljava/util/LinkedList$Node;", "Ljava/util/LinkedList$Node<TE;>;", 0, $field(LinkedList$Node, prev)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/LinkedList$Node;Ljava/lang/Object;Ljava/util/LinkedList$Node;)V", "(Ljava/util/LinkedList$Node<TE;>;TE;Ljava/util/LinkedList$Node<TE;>;)V", 0, $method(LinkedList$Node, init$, void, LinkedList$Node*, Object$*, LinkedList$Node*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.LinkedList$Node", "java.util.LinkedList", "Node", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.LinkedList$Node",
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
		"java.util.LinkedList"
	};
	$loadClass(LinkedList$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkedList$Node);
	});
	return class$;
}

$Class* LinkedList$Node::class$ = nullptr;

	} // util
} // java