#include <java/util/concurrent/ConcurrentLinkedQueue$Itr.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/concurrent/ConcurrentLinkedQueue$Node.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <jcpp.h>

#undef NEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $ConcurrentLinkedQueue$Node = ::java::util::concurrent::ConcurrentLinkedQueue$Node;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentLinkedQueue$Itr::init$($ConcurrentLinkedQueue* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	bool restartFromHead$continue = false;
	for (;;) {
		$var($ConcurrentLinkedQueue$Node, h, nullptr);
		$var($ConcurrentLinkedQueue$Node, p, nullptr);
		$var($ConcurrentLinkedQueue$Node, q, nullptr);
		for ($assign(p, $assign(h, this$0->head));; $assign(p, q)) {
			$var($Object, item, nullptr);
			if (($assign(item, $nc(p)->item)) != nullptr) {
				$set(this, nextNode, p);
				$set(this, nextItem, item);
				break;
			} else if (($assign(q, p->next)) == nullptr) {
				break;
			} else if (p == q) {
				restartFromHead$continue = true;
				break;
			}
		}
		if (restartFromHead$continue) {
			restartFromHead$continue = false;
			continue;
		}
		this$0->updateHead(h, p);
		return;
	}
}

bool ConcurrentLinkedQueue$Itr::hasNext() {
	return this->nextItem != nullptr;
}

$Object* ConcurrentLinkedQueue$Itr::next() {
	$useLocalObjectStack();
	$var($ConcurrentLinkedQueue$Node, pred, this->nextNode);
	if (pred == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastRet, pred);
	$var($Object, item, nullptr);
	{
		$var($ConcurrentLinkedQueue$Node, p, this->this$0->succ(pred));
		$var($ConcurrentLinkedQueue$Node, q, nullptr);
		for (;; $assign(p, q)) {
			if (p == nullptr || ($assign(item, p->item)) != nullptr) {
				$set(this, nextNode, p);
				$var($Object, x, this->nextItem);
				$set(this, nextItem, item);
				return x;
			}
			if (($assign(q, this->this$0->succ(p))) != nullptr) {
				$nc($ConcurrentLinkedQueue::NEXT)->compareAndSet($$new($ObjectArray, {pred, p, q}));
			}
		}
	}
}

void ConcurrentLinkedQueue$Itr::remove() {
	$var($ConcurrentLinkedQueue$Node, l, this->lastRet);
	if (l == nullptr) {
		$throwNew($IllegalStateException);
	}
	$set($nc(l), item, nullptr);
	$set(this, lastRet, nullptr);
}

ConcurrentLinkedQueue$Itr::ConcurrentLinkedQueue$Itr() {
}

$Class* ConcurrentLinkedQueue$Itr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ConcurrentLinkedQueue;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedQueue$Itr, this$0)},
		{"nextNode", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node;", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;", $PRIVATE, $field(ConcurrentLinkedQueue$Itr, nextNode)},
		{"nextItem", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(ConcurrentLinkedQueue$Itr, nextItem)},
		{"lastRet", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node;", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;", $PRIVATE, $field(ConcurrentLinkedQueue$Itr, lastRet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedQueue;)V", nullptr, 0, $method(ConcurrentLinkedQueue$Itr, init$, void, $ConcurrentLinkedQueue*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ConcurrentLinkedQueue$Itr, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ConcurrentLinkedQueue$Itr, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ConcurrentLinkedQueue$Itr, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentLinkedQueue$Itr", "java.util.concurrent.ConcurrentLinkedQueue", "Itr", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ConcurrentLinkedQueue$Itr",
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
		"java.util.concurrent.ConcurrentLinkedQueue"
	};
	$loadClass(ConcurrentLinkedQueue$Itr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentLinkedQueue$Itr);
	});
	return class$;
}

$Class* ConcurrentLinkedQueue$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java