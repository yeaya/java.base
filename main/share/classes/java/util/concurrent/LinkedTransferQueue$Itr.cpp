#include <java/util/concurrent/LinkedTransferQueue$Itr.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/LinkedTransferQueue$Node.h>
#include <java/util/concurrent/LinkedTransferQueue.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $LinkedTransferQueue = ::java::util::concurrent::LinkedTransferQueue;
using $LinkedTransferQueue$Node = ::java::util::concurrent::LinkedTransferQueue$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedTransferQueue$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/LinkedTransferQueue;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedTransferQueue$Itr, this$0)},
	{"nextNode", "Ljava/util/concurrent/LinkedTransferQueue$Node;", nullptr, $PRIVATE, $field(LinkedTransferQueue$Itr, nextNode)},
	{"nextItem", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(LinkedTransferQueue$Itr, nextItem)},
	{"lastRet", "Ljava/util/concurrent/LinkedTransferQueue$Node;", nullptr, $PRIVATE, $field(LinkedTransferQueue$Itr, lastRet)},
	{"ancestor", "Ljava/util/concurrent/LinkedTransferQueue$Node;", nullptr, $PRIVATE, $field(LinkedTransferQueue$Itr, ancestor)},
	{}
};

$MethodInfo _LinkedTransferQueue$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/LinkedTransferQueue;)V", nullptr, 0, $method(static_cast<void(LinkedTransferQueue$Itr::*)($LinkedTransferQueue*)>(&LinkedTransferQueue$Itr::init$))},
	{"advance", "(Ljava/util/concurrent/LinkedTransferQueue$Node;)V", nullptr, $PRIVATE, $method(static_cast<void(LinkedTransferQueue$Itr::*)($LinkedTransferQueue$Node*)>(&LinkedTransferQueue$Itr::advance))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $FINAL},
	{"remove", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _LinkedTransferQueue$Itr_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedTransferQueue$Itr", "java.util.concurrent.LinkedTransferQueue", "Itr", $FINAL},
	{}
};

$ClassInfo _LinkedTransferQueue$Itr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.LinkedTransferQueue$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_LinkedTransferQueue$Itr_FieldInfo_,
	_LinkedTransferQueue$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_LinkedTransferQueue$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedTransferQueue"
};

$Object* allocate$LinkedTransferQueue$Itr($Class* clazz) {
	return $of($alloc(LinkedTransferQueue$Itr));
}

void LinkedTransferQueue$Itr::advance($LinkedTransferQueue$Node* pred$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedTransferQueue$Node, pred, pred$renamed);
	{
		$var($LinkedTransferQueue$Node, p, (pred == nullptr) ? $cast($LinkedTransferQueue$Node, this->this$0->head) : $cast($LinkedTransferQueue$Node, $nc(pred)->next));
		$var($LinkedTransferQueue$Node, c, p);
		for (; p != nullptr;) {
			$var($Object, item, nullptr);
			if (($assign(item, p->item)) != nullptr && p->isData) {
				$set(this, nextNode, p);
				$set(this, nextItem, item);
				if (c != p) {
					this->this$0->tryCasSuccessor(pred, c, p);
				}
				return;
			} else if (!p->isData && item == nullptr) {
				break;
			}
			bool var$0 = c != p;
			if (var$0) {
				$var($LinkedTransferQueue$Node, var$1, pred);
				$var($LinkedTransferQueue$Node, var$2, c);
				var$0 = !this->this$0->tryCasSuccessor(var$1, var$2, $assign(c, p));
			}
			if (var$0) {
				$assign(pred, p);
				$assign(c, ($assign(p, p->next)));
			} else {
				$var($LinkedTransferQueue$Node, var$4, p);
				if (var$4 == ($assign(p, p->next))) {
					$assign(pred, nullptr);
					$assign(c, ($assign(p, this->this$0->head)));
				}
			}
		}
	}
	$set(this, nextItem, nullptr);
	$set(this, nextNode, nullptr);
}

void LinkedTransferQueue$Itr::init$($LinkedTransferQueue* this$0) {
	$set(this, this$0, this$0);
	advance(nullptr);
}

bool LinkedTransferQueue$Itr::hasNext() {
	return this->nextNode != nullptr;
}

$Object* LinkedTransferQueue$Itr::next() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedTransferQueue$Node, p, nullptr);
	if (($assign(p, this->nextNode)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, e, this->nextItem);
	advance($assignField(this, lastRet, p));
	return $of(e);
}

void LinkedTransferQueue$Itr::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($LinkedTransferQueue$Node, q, nullptr);
	{
		$var($LinkedTransferQueue$Node, p, nullptr);
		for (; ($assign(p, this->nextNode)) != nullptr; advance($assign(q, p))) {
			action->accept(this->nextItem);
		}
	}
	if (q != nullptr) {
		$set(this, lastRet, q);
	}
}

void LinkedTransferQueue$Itr::remove() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedTransferQueue$Node, lastRet, this->lastRet);
	if (lastRet == nullptr) {
		$throwNew($IllegalStateException);
	}
	$set(this, lastRet, nullptr);
	if ($nc(lastRet)->item == nullptr) {
		return;
	}
	$var($LinkedTransferQueue$Node, pred, this->ancestor);
	{
		$var($LinkedTransferQueue$Node, p, (pred == nullptr) ? $cast($LinkedTransferQueue$Node, this->this$0->head) : $cast($LinkedTransferQueue$Node, $nc(pred)->next));
		$var($LinkedTransferQueue$Node, c, p);
		$var($LinkedTransferQueue$Node, q, nullptr);
		for (; p != nullptr;) {
			if (p == lastRet) {
				$var($Object, item, nullptr);
				if (($assign(item, p->item)) != nullptr) {
					p->tryMatch(item, nullptr);
				}
				if (($assign(q, p->next)) == nullptr) {
					$assign(q, p);
				}
				if (c != q) {
					this->this$0->tryCasSuccessor(pred, c, q);
				}
				$set(this, ancestor, pred);
				return;
			}
			$var($Object, item, nullptr);
			bool pAlive = false;
			if (pAlive = (($assign(item, p->item)) != nullptr && p->isData)) {
			} else if (!p->isData && item == nullptr) {
				break;
			}
			bool var$0 = c != p;
			if (var$0) {
				$var($LinkedTransferQueue$Node, var$1, pred);
				$var($LinkedTransferQueue$Node, var$2, c);
				var$0 = !this->this$0->tryCasSuccessor(var$1, var$2, $assign(c, p));
			}
			if ((var$0) || pAlive) {
				$assign(pred, p);
				$assign(c, ($assign(p, p->next)));
			} else {
				$var($LinkedTransferQueue$Node, var$4, p);
				if (var$4 == ($assign(p, p->next))) {
					$assign(pred, nullptr);
					$assign(c, ($assign(p, this->this$0->head)));
				}
			}
		}
	}
}

LinkedTransferQueue$Itr::LinkedTransferQueue$Itr() {
}

$Class* LinkedTransferQueue$Itr::load$($String* name, bool initialize) {
	$loadClass(LinkedTransferQueue$Itr, name, initialize, &_LinkedTransferQueue$Itr_ClassInfo_, allocate$LinkedTransferQueue$Itr);
	return class$;
}

$Class* LinkedTransferQueue$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java