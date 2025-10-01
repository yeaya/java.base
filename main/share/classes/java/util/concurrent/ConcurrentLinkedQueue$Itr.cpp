#include <java/util/concurrent/ConcurrentLinkedQueue$Itr.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $VarHandle = ::java::lang::invoke::VarHandle;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $ConcurrentLinkedQueue$Node = ::java::util::concurrent::ConcurrentLinkedQueue$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentLinkedQueue$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentLinkedQueue;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedQueue$Itr, this$0)},
	{"nextNode", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node;", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;", $PRIVATE, $field(ConcurrentLinkedQueue$Itr, nextNode)},
	{"nextItem", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(ConcurrentLinkedQueue$Itr, nextItem)},
	{"lastRet", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node;", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;", $PRIVATE, $field(ConcurrentLinkedQueue$Itr, lastRet)},
	{}
};

$MethodInfo _ConcurrentLinkedQueue$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedQueue;)V", nullptr, 0, $method(static_cast<void(ConcurrentLinkedQueue$Itr::*)($ConcurrentLinkedQueue*)>(&ConcurrentLinkedQueue$Itr::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentLinkedQueue$Itr_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedQueue$Itr", "java.util.concurrent.ConcurrentLinkedQueue", "Itr", $PRIVATE},
	{}
};

$ClassInfo _ConcurrentLinkedQueue$Itr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ConcurrentLinkedQueue$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_ConcurrentLinkedQueue$Itr_FieldInfo_,
	_ConcurrentLinkedQueue$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_ConcurrentLinkedQueue$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedQueue"
};

$Object* allocate$ConcurrentLinkedQueue$Itr($Class* clazz) {
	return $of($alloc(ConcurrentLinkedQueue$Itr));
}

void ConcurrentLinkedQueue$Itr::init$($ConcurrentLinkedQueue* this$0) {
	$set(this, this$0, this$0);
	bool restartFromHead$continue = false;
	for (;;) {
		$var($ConcurrentLinkedQueue$Node, h, nullptr);
		$var($ConcurrentLinkedQueue$Node, p, nullptr);
		$var($ConcurrentLinkedQueue$Node, q, nullptr);
		for ($assign(p, ($assign(h, this$0->head)));; $assign(p, q)) {
			$var($Object, item, nullptr);
			if (($assign(item, $nc(p)->item)) != nullptr) {
				$set(this, nextNode, p);
				$set(this, nextItem, item);
				break;
			} else if (($assign(q, $nc(p)->next)) == nullptr) {
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
			if (p == nullptr || ($assign(item, $nc(p)->item)) != nullptr) {
				$set(this, nextNode, p);
				$var($Object, x, this->nextItem);
				$set(this, nextItem, item);
				return $of(x);
			}
			if (($assign(q, this->this$0->succ(p))) != nullptr) {
				$nc($ConcurrentLinkedQueue::NEXT)->compareAndSet($$new($ObjectArray, {$of(pred), $of(p), $of(q)}));
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
	$loadClass(ConcurrentLinkedQueue$Itr, name, initialize, &_ConcurrentLinkedQueue$Itr_ClassInfo_, allocate$ConcurrentLinkedQueue$Itr);
	return class$;
}

$Class* ConcurrentLinkedQueue$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java