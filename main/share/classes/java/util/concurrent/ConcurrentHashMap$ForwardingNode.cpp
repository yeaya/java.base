#include <java/util/concurrent/ConcurrentHashMap$ForwardingNode.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentHashMap$ForwardingNode::init$($ConcurrentHashMap$NodeArray* tab) {
	$ConcurrentHashMap$Node::init$(-1, nullptr, nullptr);
	$set(this, nextTable, tab);
}

$ConcurrentHashMap$Node* ConcurrentHashMap$ForwardingNode::find(int32_t h, Object$* k) {
	$useLocalObjectStack();
	bool outer$continue = false;
	$var($ConcurrentHashMap$NodeArray, tab, this->nextTable);
	for (;;) {
		$var($ConcurrentHashMap$Node, e, nullptr);
		int32_t n = 0;
		bool var$0 = k == nullptr || tab == nullptr || (n = tab->length) == 0;
		if (var$0 || ($assign(e, $ConcurrentHashMap::tabAt(tab, (n - 1) & h))) == nullptr) {
			return nullptr;
		}
		for (;;) {
			int32_t eh = 0;
			$var($Object, ek, nullptr);
			bool var$1 = (eh = $nc(e)->hash) == h;
			if (var$1) {
				bool var$2 = $equals($assign(ek, e->key), k);
				var$1 = var$2 || (ek != nullptr && $nc($of(k))->equals(ek));
			}
			if (var$1) {
				return e;
			}
			if (eh < 0) {
				if ($instanceOf(ConcurrentHashMap$ForwardingNode, e)) {
					$assign(tab, $cast(ConcurrentHashMap$ForwardingNode, e)->nextTable);
					outer$continue = true;
					break;
				} else {
					return e->find(h, k);
				}
			}
			if (($assign(e, e->next)) == nullptr) {
				return nullptr;
			}
		}
		if (outer$continue) {
			outer$continue = false;
			continue;
		}
	}
}

ConcurrentHashMap$ForwardingNode::ConcurrentHashMap$ForwardingNode() {
}

$Class* ConcurrentHashMap$ForwardingNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nextTable", "[Ljava/util/concurrent/ConcurrentHashMap$Node;", "[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $FINAL, $field(ConcurrentHashMap$ForwardingNode, nextTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/util/concurrent/ConcurrentHashMap$Node;)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)V", 0, $method(ConcurrentHashMap$ForwardingNode, init$, void, $ConcurrentHashMap$NodeArray*)},
		{"find", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node;", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $virtualMethod(ConcurrentHashMap$ForwardingNode, find, $ConcurrentHashMap$Node*, int32_t, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$ForwardingNode", "java.util.concurrent.ConcurrentHashMap", "ForwardingNode", $STATIC | $FINAL},
		{"java.util.concurrent.ConcurrentHashMap$Node", "java.util.concurrent.ConcurrentHashMap", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$ForwardingNode",
		"java.util.concurrent.ConcurrentHashMap$Node",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentHashMap"
	};
	$loadClass(ConcurrentHashMap$ForwardingNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentHashMap$ForwardingNode);
	});
	return class$;
}

$Class* ConcurrentHashMap$ForwardingNode::class$ = nullptr;

		} // concurrent
	} // util
} // java