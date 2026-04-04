#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentSkipListMap$Node::init$(Object$* key, Object$* value, ConcurrentSkipListMap$Node* next) {
	$set(this, key, key);
	$set(this, val, value);
	$set(this, next, next);
}

ConcurrentSkipListMap$Node::ConcurrentSkipListMap$Node() {
}

$Class* ConcurrentSkipListMap$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(ConcurrentSkipListMap$Node, key)},
		{"val", "Ljava/lang/Object;", "TV;", 0, $field(ConcurrentSkipListMap$Node, val)},
		{"next", "Ljava/util/concurrent/ConcurrentSkipListMap$Node;", "Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;", 0, $field(ConcurrentSkipListMap$Node, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/concurrent/ConcurrentSkipListMap$Node;)V", "(TK;TV;Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;)V", 0, $method(ConcurrentSkipListMap$Node, init$, void, Object$*, Object$*, ConcurrentSkipListMap$Node*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentSkipListMap$Node", "java.util.concurrent.ConcurrentSkipListMap", "Node", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentSkipListMap$Node",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentSkipListMap"
	};
	$loadClass(ConcurrentSkipListMap$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentSkipListMap$Node);
	});
	return class$;
}

$Class* ConcurrentSkipListMap$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java