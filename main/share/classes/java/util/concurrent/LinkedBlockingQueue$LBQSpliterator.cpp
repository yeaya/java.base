#include <java/util/concurrent/LinkedBlockingQueue$LBQSpliterator.h>

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
#include <java/util/concurrent/LinkedBlockingQueue$Node.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef CONCURRENT
#undef MAX_BATCH
#undef NONNULL
#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $LinkedBlockingQueue$Node = ::java::util::concurrent::LinkedBlockingQueue$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedBlockingQueue$LBQSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/LinkedBlockingQueue;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedBlockingQueue$LBQSpliterator, this$0)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(LinkedBlockingQueue$LBQSpliterator, MAX_BATCH)},
	{"current", "Ljava/util/concurrent/LinkedBlockingQueue$Node;", "Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", 0, $field(LinkedBlockingQueue$LBQSpliterator, current)},
	{"batch", "I", nullptr, 0, $field(LinkedBlockingQueue$LBQSpliterator, batch)},
	{"exhausted", "Z", nullptr, 0, $field(LinkedBlockingQueue$LBQSpliterator, exhausted)},
	{"est", "J", nullptr, 0, $field(LinkedBlockingQueue$LBQSpliterator, est)},
	{}
};

$MethodInfo _LinkedBlockingQueue$LBQSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/LinkedBlockingQueue;)V", nullptr, 0, $method(static_cast<void(LinkedBlockingQueue$LBQSpliterator::*)($LinkedBlockingQueue*)>(&LinkedBlockingQueue$LBQSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{}
};

$InnerClassInfo _LinkedBlockingQueue$LBQSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingQueue$LBQSpliterator", "java.util.concurrent.LinkedBlockingQueue", "LBQSpliterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LinkedBlockingQueue$LBQSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.LinkedBlockingQueue$LBQSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_LinkedBlockingQueue$LBQSpliterator_FieldInfo_,
	_LinkedBlockingQueue$LBQSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_LinkedBlockingQueue$LBQSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingQueue"
};

$Object* allocate$LinkedBlockingQueue$LBQSpliterator($Class* clazz) {
	return $of($alloc(LinkedBlockingQueue$LBQSpliterator));
}

void LinkedBlockingQueue$LBQSpliterator::init$($LinkedBlockingQueue* this$0) {
	$set(this, this$0, this$0);
	this->est = this->this$0->size();
}

int64_t LinkedBlockingQueue$LBQSpliterator::estimateSize() {
	return this->est;
}

$Spliterator* LinkedBlockingQueue$LBQSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingQueue$Node, h, nullptr);
	bool var$1 = !this->exhausted;
	if (var$1) {
		bool var$2 = ($assign(h, this->current)) != nullptr;
		var$1 = (var$2 || ($assign(h, $nc(this->this$0->head)->next)) != nullptr);
	}
	bool var$0 = var$1;
	if (var$0 && $nc(h)->next != nullptr) {
		int32_t n = this->batch = $Math::min(this->batch + 1, LinkedBlockingQueue$LBQSpliterator::MAX_BATCH);
		$var($ObjectArray, a, $new($ObjectArray, n));
		int32_t i = 0;
		$var($LinkedBlockingQueue$Node, p, this->current);
		this->this$0->fullyLock();
		{
			$var($Throwable, var$3, nullptr);
			try {
				bool var$4 = p != nullptr;
				if (var$4 || ($assign(p, $nc(this->this$0->head)->next)) != nullptr) {
					for (; p != nullptr && i < n; $assign(p, this->this$0->succ(p))) {
						if ((a->set(i, p->item)) != nullptr) {
							++i;
						}
					}
				}
			} catch ($Throwable&) {
				$assign(var$3, $catch());
			} /*finally*/ {
				this->this$0->fullyUnlock();
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

bool LinkedBlockingQueue$LBQSpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	if (!this->exhausted) {
		$var($Object, e, nullptr);
		this->this$0->fullyLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($LinkedBlockingQueue$Node, p, nullptr);
				bool var$1 = ($assign(p, this->current)) != nullptr;
				if (var$1 || ($assign(p, $nc(this->this$0->head)->next)) != nullptr) {
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
				this->this$0->fullyUnlock();
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

void LinkedBlockingQueue$LBQSpliterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	if (!this->exhausted) {
		this->exhausted = true;
		$var($LinkedBlockingQueue$Node, p, this->current);
		$set(this, current, nullptr);
		this->this$0->forEachFrom(action, p);
	}
}

int32_t LinkedBlockingQueue$LBQSpliterator::characteristics() {
	return (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT);
}

LinkedBlockingQueue$LBQSpliterator::LinkedBlockingQueue$LBQSpliterator() {
}

$Class* LinkedBlockingQueue$LBQSpliterator::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingQueue$LBQSpliterator, name, initialize, &_LinkedBlockingQueue$LBQSpliterator_ClassInfo_, allocate$LinkedBlockingQueue$LBQSpliterator);
	return class$;
}

$Class* LinkedBlockingQueue$LBQSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java