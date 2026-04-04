#include <java/util/concurrent/ConcurrentLinkedDeque$Itr.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$AbstractItr.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$Node.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentLinkedDeque = ::java::util::concurrent::ConcurrentLinkedDeque;
using $ConcurrentLinkedDeque$AbstractItr = ::java::util::concurrent::ConcurrentLinkedDeque$AbstractItr;
using $ConcurrentLinkedDeque$Node = ::java::util::concurrent::ConcurrentLinkedDeque$Node;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentLinkedDeque$Itr::init$($ConcurrentLinkedDeque* this$0) {
	$set(this, this$0, this$0);
	$ConcurrentLinkedDeque$AbstractItr::init$(this$0);
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque$Itr::startNode() {
	return this->this$0->first();
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque$Itr::nextNode($ConcurrentLinkedDeque$Node* p) {
	return this->this$0->succ(p);
}

ConcurrentLinkedDeque$Itr::ConcurrentLinkedDeque$Itr() {
}

$Class* ConcurrentLinkedDeque$Itr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ConcurrentLinkedDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedDeque$Itr, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedDeque;)V", nullptr, 0, $method(ConcurrentLinkedDeque$Itr, init$, void, $ConcurrentLinkedDeque*)},
		{"nextNode", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0, $virtualMethod(ConcurrentLinkedDeque$Itr, nextNode, $ConcurrentLinkedDeque$Node*, $ConcurrentLinkedDeque$Node*)},
		{"startNode", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0, $virtualMethod(ConcurrentLinkedDeque$Itr, startNode, $ConcurrentLinkedDeque$Node*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentLinkedDeque$Itr", "java.util.concurrent.ConcurrentLinkedDeque", "Itr", $PRIVATE},
		{"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr", "java.util.concurrent.ConcurrentLinkedDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ConcurrentLinkedDeque$Itr",
		"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/ConcurrentLinkedDeque<TE;>.AbstractItr;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentLinkedDeque"
	};
	$loadClass(ConcurrentLinkedDeque$Itr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentLinkedDeque$Itr);
	});
	return class$;
}

$Class* ConcurrentLinkedDeque$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java