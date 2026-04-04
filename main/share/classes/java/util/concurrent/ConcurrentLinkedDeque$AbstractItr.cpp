#include <java/util/concurrent/ConcurrentLinkedDeque$AbstractItr.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$Node.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentLinkedDeque = ::java::util::concurrent::ConcurrentLinkedDeque;
using $ConcurrentLinkedDeque$Node = ::java::util::concurrent::ConcurrentLinkedDeque$Node;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentLinkedDeque$AbstractItr::init$($ConcurrentLinkedDeque* this$0) {
	$set(this, this$0, this$0);
	advance();
}

void ConcurrentLinkedDeque$AbstractItr::advance() {
	$useLocalObjectStack();
	$set(this, lastRet, this->nextNode$);
	$var($ConcurrentLinkedDeque$Node, p, (this->nextNode$ == nullptr) ? startNode() : nextNode(this->nextNode$));
	for (;; $assign(p, nextNode(p))) {
		if (p == nullptr) {
			$set(this, nextNode$, nullptr);
			$set(this, nextItem, nullptr);
			break;
		}
		$var($Object, item, nullptr);
		if (($assign(item, $nc(p)->item)) != nullptr) {
			$set(this, nextNode$, p);
			$set(this, nextItem, item);
			break;
		}
	}
}

bool ConcurrentLinkedDeque$AbstractItr::hasNext() {
	return this->nextItem != nullptr;
}

$Object* ConcurrentLinkedDeque$AbstractItr::next() {
	$var($Object, item, this->nextItem);
	if (item == nullptr) {
		$throwNew($NoSuchElementException);
	}
	advance();
	return item;
}

void ConcurrentLinkedDeque$AbstractItr::remove() {
	$var($ConcurrentLinkedDeque$Node, l, this->lastRet);
	if (l == nullptr) {
		$throwNew($IllegalStateException);
	}
	$set($nc(l), item, nullptr);
	this->this$0->unlink(l);
	$set(this, lastRet, nullptr);
}

ConcurrentLinkedDeque$AbstractItr::ConcurrentLinkedDeque$AbstractItr() {
}

$Class* ConcurrentLinkedDeque$AbstractItr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ConcurrentLinkedDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedDeque$AbstractItr, this$0)},
		{"nextNode", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $PRIVATE, $field(ConcurrentLinkedDeque$AbstractItr, nextNode$)},
		{"nextItem", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(ConcurrentLinkedDeque$AbstractItr, nextItem)},
		{"lastRet", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $PRIVATE, $field(ConcurrentLinkedDeque$AbstractItr, lastRet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedDeque;)V", nullptr, 0, $method(ConcurrentLinkedDeque$AbstractItr, init$, void, $ConcurrentLinkedDeque*)},
		{"advance", "()V", nullptr, $PRIVATE, $method(ConcurrentLinkedDeque$AbstractItr, advance, void)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ConcurrentLinkedDeque$AbstractItr, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ConcurrentLinkedDeque$AbstractItr, next, $Object*)},
		{"nextNode", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $ABSTRACT, $virtualMethod(ConcurrentLinkedDeque$AbstractItr, nextNode, $ConcurrentLinkedDeque$Node*, $ConcurrentLinkedDeque$Node*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ConcurrentLinkedDeque$AbstractItr, remove, void)},
		{"startNode", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $ABSTRACT, $virtualMethod(ConcurrentLinkedDeque$AbstractItr, startNode, $ConcurrentLinkedDeque$Node*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr", "java.util.concurrent.ConcurrentLinkedDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentLinkedDeque"
	};
	$loadClass(ConcurrentLinkedDeque$AbstractItr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentLinkedDeque$AbstractItr);
	});
	return class$;
}

$Class* ConcurrentLinkedDeque$AbstractItr::class$ = nullptr;

		} // concurrent
	} // util
} // java