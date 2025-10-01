#include <java/util/concurrent/LinkedBlockingDeque$LBDSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/concurrent/LinkedBlockingDeque$Node.h>
#include <java/util/concurrent/LinkedBlockingDeque.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef NONNULL
#undef ORDERED
#undef MAX_BATCH
#undef CONCURRENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $LinkedBlockingDeque = ::java::util::concurrent::LinkedBlockingDeque;
using $LinkedBlockingDeque$Node = ::java::util::concurrent::LinkedBlockingDeque$Node;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedBlockingDeque$LBDSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/LinkedBlockingDeque;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedBlockingDeque$LBDSpliterator, this$0)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(LinkedBlockingDeque$LBDSpliterator, MAX_BATCH)},
	{"current", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0, $field(LinkedBlockingDeque$LBDSpliterator, current)},
	{"batch", "I", nullptr, 0, $field(LinkedBlockingDeque$LBDSpliterator, batch)},
	{"exhausted", "Z", nullptr, 0, $field(LinkedBlockingDeque$LBDSpliterator, exhausted)},
	{"est", "J", nullptr, 0, $field(LinkedBlockingDeque$LBDSpliterator, est)},
	{}
};

$MethodInfo _LinkedBlockingDeque$LBDSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/LinkedBlockingDeque;)V", nullptr, 0, $method(static_cast<void(LinkedBlockingDeque$LBDSpliterator::*)($LinkedBlockingDeque*)>(&LinkedBlockingDeque$LBDSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{}
};

$InnerClassInfo _LinkedBlockingDeque$LBDSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingDeque$LBDSpliterator", "java.util.concurrent.LinkedBlockingDeque", "LBDSpliterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LinkedBlockingDeque$LBDSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.LinkedBlockingDeque$LBDSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_LinkedBlockingDeque$LBDSpliterator_FieldInfo_,
	_LinkedBlockingDeque$LBDSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_LinkedBlockingDeque$LBDSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingDeque"
};

$Object* allocate$LinkedBlockingDeque$LBDSpliterator($Class* clazz) {
	return $of($alloc(LinkedBlockingDeque$LBDSpliterator));
}

void LinkedBlockingDeque$LBDSpliterator::init$($LinkedBlockingDeque* this$0) {
	$set(this, this$0, this$0);
	this->est = this->this$0->size();
}

int64_t LinkedBlockingDeque$LBDSpliterator::estimateSize() {
	return this->est;
}

$Spliterator* LinkedBlockingDeque$LBDSpliterator::trySplit() {
	$var($LinkedBlockingDeque$Node, h, nullptr);
	bool var$1 = !this->exhausted;
	if (var$1) {
		bool var$2 = ($assign(h, this->current)) != nullptr;
		var$1 = (var$2 || ($assign(h, this->this$0->first)) != nullptr);
	}
	bool var$0 = var$1;
	if (var$0 && $nc(h)->next != nullptr) {
		int32_t n = this->batch = $Math::min(this->batch + 1, LinkedBlockingDeque$LBDSpliterator::MAX_BATCH);
		$var($ObjectArray, a, $new($ObjectArray, n));
		$var($ReentrantLock, lock, this->this$0->lock);
		int32_t i = 0;
		$var($LinkedBlockingDeque$Node, p, this->current);
		$nc(lock)->lock();
		{
			$var($Throwable, var$3, nullptr);
			try {
				bool var$4 = p != nullptr;
				if (var$4 || ($assign(p, this->this$0->first)) != nullptr) {
					for (; p != nullptr && i < n; $assign(p, this->this$0->succ(p))) {
						if ((a->set(i, p->item)) != nullptr) {
							++i;
						}
					}
				}
			} catch ($Throwable&) {
				$assign(var$3, $catch());
			} /*finally*/ {
				lock->unlock();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
		if (($assignField(this, current, p)) == nullptr) {
			this->est = 0;
			this->exhausted = true;
		} else if ((this->est -= i) < (int64_t)0) {
			this->est = 0;
		}
		if (i > 0) {
			return $Spliterators::spliterator(a, 0, i, (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT));
		}
	}
	return nullptr;
}

bool LinkedBlockingDeque$LBDSpliterator::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	if (!this->exhausted) {
		$var($Object, e, nullptr);
		$var($ReentrantLock, lock, this->this$0->lock);
		$nc(lock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($LinkedBlockingDeque$Node, p, nullptr);
				bool var$1 = ($assign(p, this->current)) != nullptr;
				if (var$1 || ($assign(p, this->this$0->first)) != nullptr) {
					do {
						$assign(e, $nc(p)->item);
						$assign(p, this->this$0->succ(p));
					} while (e == nullptr && p != nullptr);
				}
				if (($assignField(this, current, p)) == nullptr) {
					this->exhausted = true;
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				lock->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		if (e != nullptr) {
			action->accept(e);
			return true;
		}
	}
	return false;
}

void LinkedBlockingDeque$LBDSpliterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	if (!this->exhausted) {
		this->exhausted = true;
		$var($LinkedBlockingDeque$Node, p, this->current);
		$set(this, current, nullptr);
		this->this$0->forEachFrom(action, p);
	}
}

int32_t LinkedBlockingDeque$LBDSpliterator::characteristics() {
	return (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT);
}

LinkedBlockingDeque$LBDSpliterator::LinkedBlockingDeque$LBDSpliterator() {
}

$Class* LinkedBlockingDeque$LBDSpliterator::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingDeque$LBDSpliterator, name, initialize, &_LinkedBlockingDeque$LBDSpliterator_ClassInfo_, allocate$LinkedBlockingDeque$LBDSpliterator);
	return class$;
}

$Class* LinkedBlockingDeque$LBDSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java