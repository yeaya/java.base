#include <java/util/concurrent/LinkedBlockingDeque$AbstractItr.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/LinkedBlockingDeque$Node.h>
#include <java/util/concurrent/LinkedBlockingDeque.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
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
using $LinkedBlockingDeque = ::java::util::concurrent::LinkedBlockingDeque;
using $LinkedBlockingDeque$Node = ::java::util::concurrent::LinkedBlockingDeque$Node;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedBlockingDeque$AbstractItr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/LinkedBlockingDeque;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedBlockingDeque$AbstractItr, this$0)},
	{"next", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0, $field(LinkedBlockingDeque$AbstractItr, next$)},
	{"nextItem", "Ljava/lang/Object;", "TE;", 0, $field(LinkedBlockingDeque$AbstractItr, nextItem)},
	{"lastRet", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", $PRIVATE, $field(LinkedBlockingDeque$AbstractItr, lastRet)},
	{}
};

$MethodInfo _LinkedBlockingDeque$AbstractItr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/LinkedBlockingDeque;)V", nullptr, 0, $method(static_cast<void(LinkedBlockingDeque$AbstractItr::*)($LinkedBlockingDeque*)>(&LinkedBlockingDeque$AbstractItr::init$))},
	{"firstNode", "()Ljava/util/concurrent/LinkedBlockingDeque$Node;", "()Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", $ABSTRACT},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"nextNode", "(Ljava/util/concurrent/LinkedBlockingDeque$Node;)Ljava/util/concurrent/LinkedBlockingDeque$Node;", "(Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", $ABSTRACT},
	{"remove", "()V", nullptr, $PUBLIC},
	{"succ", "(Ljava/util/concurrent/LinkedBlockingDeque$Node;)Ljava/util/concurrent/LinkedBlockingDeque$Node;", "(Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", $PRIVATE, $method(static_cast<$LinkedBlockingDeque$Node*(LinkedBlockingDeque$AbstractItr::*)($LinkedBlockingDeque$Node*)>(&LinkedBlockingDeque$AbstractItr::succ))},
	{}
};

$InnerClassInfo _LinkedBlockingDeque$AbstractItr_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingDeque$AbstractItr", "java.util.concurrent.LinkedBlockingDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _LinkedBlockingDeque$AbstractItr_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.LinkedBlockingDeque$AbstractItr",
	"java.lang.Object",
	"java.util.Iterator",
	_LinkedBlockingDeque$AbstractItr_FieldInfo_,
	_LinkedBlockingDeque$AbstractItr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_LinkedBlockingDeque$AbstractItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingDeque"
};

$Object* allocate$LinkedBlockingDeque$AbstractItr($Class* clazz) {
	return $of($alloc(LinkedBlockingDeque$AbstractItr));
}

$LinkedBlockingDeque$Node* LinkedBlockingDeque$AbstractItr::succ($LinkedBlockingDeque$Node* p$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingDeque$Node, p, p$renamed);
	$var($LinkedBlockingDeque$Node, var$0, p);
	if (var$0 == ($assign(p, nextNode(p)))) {
		$assign(p, firstNode());
	}
	return p;
}

void LinkedBlockingDeque$AbstractItr::init$($LinkedBlockingDeque* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($ReentrantLock, lock, this$0->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (($set(this, next$, firstNode())) != nullptr) {
				$set(this, nextItem, $nc(this->next$)->item);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool LinkedBlockingDeque$AbstractItr::hasNext() {
	return this->next$ != nullptr;
}

$Object* LinkedBlockingDeque$AbstractItr::next() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingDeque$Node, p, nullptr);
	if (($assign(p, this->next$)) == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastRet, p);
	$var($Object, x, this->nextItem);
	$var($ReentrantLock, lock, this->this$0->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Object, e, nullptr);
			for ($assign(p, nextNode(p)); p != nullptr && ($assign(e, p->item)) == nullptr;) {
				$assign(p, succ(p));
			}
			$set(this, next$, p);
			$set(this, nextItem, e);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $of(x);
}

void LinkedBlockingDeque$AbstractItr::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($LinkedBlockingDeque$Node, p, nullptr);
	if (($assign(p, this->next$)) == nullptr) {
		return;
	}
	$set(this, lastRet, p);
	$set(this, next$, nullptr);
	$var($ReentrantLock, lock, this->this$0->lock);
	int32_t batchSize = 64;
	$var($ObjectArray, es, nullptr);
	int32_t n = 0;
	int32_t len = 1;
	do {
		$nc(lock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (es == nullptr) {
					$assign(p, nextNode(p));
					{
						$var($LinkedBlockingDeque$Node, q, p);
						for (; q != nullptr; $assign(q, succ(q))) {
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
				for (; p != nullptr && n < len; $assign(p, succ(p))) {
					if (($nc(es)->set(n, p->item)) != nullptr) {
						$set(this, lastRet, p);
						++n;
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				lock->unlock();
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

void LinkedBlockingDeque$AbstractItr::remove() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingDeque$Node, n, this->lastRet);
	if (n == nullptr) {
		$throwNew($IllegalStateException);
	}
	$set(this, lastRet, nullptr);
	$var($ReentrantLock, lock, this->this$0->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($nc(n)->item != nullptr) {
				this->this$0->unlink(n);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

LinkedBlockingDeque$AbstractItr::LinkedBlockingDeque$AbstractItr() {
}

$Class* LinkedBlockingDeque$AbstractItr::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingDeque$AbstractItr, name, initialize, &_LinkedBlockingDeque$AbstractItr_ClassInfo_, allocate$LinkedBlockingDeque$AbstractItr);
	return class$;
}

$Class* LinkedBlockingDeque$AbstractItr::class$ = nullptr;

		} // concurrent
	} // util
} // java