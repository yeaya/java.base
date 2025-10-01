#include <java/util/concurrent/LinkedBlockingQueue$Itr.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/LinkedBlockingQueue$Node.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
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
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $LinkedBlockingQueue$Node = ::java::util::concurrent::LinkedBlockingQueue$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedBlockingQueue$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/LinkedBlockingQueue;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedBlockingQueue$Itr, this$0)},
	{"next", "Ljava/util/concurrent/LinkedBlockingQueue$Node;", "Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", $PRIVATE, $field(LinkedBlockingQueue$Itr, next$)},
	{"nextItem", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(LinkedBlockingQueue$Itr, nextItem)},
	{"lastRet", "Ljava/util/concurrent/LinkedBlockingQueue$Node;", "Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", $PRIVATE, $field(LinkedBlockingQueue$Itr, lastRet)},
	{"ancestor", "Ljava/util/concurrent/LinkedBlockingQueue$Node;", "Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", $PRIVATE, $field(LinkedBlockingQueue$Itr, ancestor)},
	{}
};

$MethodInfo _LinkedBlockingQueue$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/LinkedBlockingQueue;)V", nullptr, 0, $method(static_cast<void(LinkedBlockingQueue$Itr::*)($LinkedBlockingQueue*)>(&LinkedBlockingQueue$Itr::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LinkedBlockingQueue$Itr_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingQueue$Itr", "java.util.concurrent.LinkedBlockingQueue", "Itr", $PRIVATE},
	{}
};

$ClassInfo _LinkedBlockingQueue$Itr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.LinkedBlockingQueue$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_LinkedBlockingQueue$Itr_FieldInfo_,
	_LinkedBlockingQueue$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_LinkedBlockingQueue$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingQueue"
};

$Object* allocate$LinkedBlockingQueue$Itr($Class* clazz) {
	return $of($alloc(LinkedBlockingQueue$Itr));
}

void LinkedBlockingQueue$Itr::init$($LinkedBlockingQueue* this$0) {
	$set(this, this$0, this$0);
	this$0->fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (($assignField(this, next$, $nc(this$0->head)->next)) != nullptr) {
				$set(this, nextItem, $nc(this->next$)->item);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this$0->fullyUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool LinkedBlockingQueue$Itr::hasNext() {
	return this->next$ != nullptr;
}

$Object* LinkedBlockingQueue$Itr::next() {
	$var($LinkedBlockingQueue$Node, p, nullptr);
	if (($assign(p, this->next$)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastRet, p);
	$var($Object, x, this->nextItem);
	this->this$0->fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Object, e, nullptr);
			for ($assign(p, $nc(p)->next); p != nullptr && ($assign(e, p->item)) == nullptr;) {
				$assign(p, this->this$0->succ(p));
			}
			$set(this, next$, p);
			$set(this, nextItem, e);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->this$0->fullyUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $of(x);
}

void LinkedBlockingQueue$Itr::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	$var($LinkedBlockingQueue$Node, p, nullptr);
	if (($assign(p, this->next$)) == nullptr) {
		return;
	}
	$set(this, lastRet, p);
	$set(this, next$, nullptr);
	int32_t batchSize = 64;
	$var($ObjectArray, es, nullptr);
	int32_t n = 0;
	int32_t len = 1;
	do {
		this->this$0->fullyLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (es == nullptr) {
					$assign(p, $nc(p)->next);
					{
						$var($LinkedBlockingQueue$Node, q, p);
						for (; q != nullptr; $assign(q, this->this$0->succ(q))) {
							if (q->item != nullptr && ++len == batchSize) {
								break;
							}
						}
					}
					$assign(es, $new($ObjectArray, len));
					es->set(0, this->nextItem);
					$set(this, nextItem, nullptr);
					n = 1;
				} else {
					n = 0;
				}
				for (; p != nullptr && n < len; $assign(p, this->this$0->succ(p))) {
					if (($nc(es)->set(n, p->item)) != nullptr) {
						$set(this, lastRet, p);
						++n;
					}
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				this->this$0->fullyUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		for (int32_t i = 0; i < n; ++i) {
			$var($Object, e, $nc(es)->get(i));
			action->accept(e);
		}
	} while (n > 0 && p != nullptr);
}

void LinkedBlockingQueue$Itr::remove() {
	$var($LinkedBlockingQueue$Node, p, this->lastRet);
	if (p == nullptr) {
		$throwNew($IllegalStateException);
	}
	$set(this, lastRet, nullptr);
	this->this$0->fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($nc(p)->item != nullptr) {
				if (this->ancestor == nullptr) {
					$set(this, ancestor, this->this$0->head);
				}
				$set(this, ancestor, this->this$0->findPred(p, this->ancestor));
				this->this$0->unlink(p, this->ancestor);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->this$0->fullyUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

LinkedBlockingQueue$Itr::LinkedBlockingQueue$Itr() {
}

$Class* LinkedBlockingQueue$Itr::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingQueue$Itr, name, initialize, &_LinkedBlockingQueue$Itr_ClassInfo_, allocate$LinkedBlockingQueue$Itr);
	return class$;
}

$Class* LinkedBlockingQueue$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java