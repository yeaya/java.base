#include <java/util/concurrent/ConcurrentLinkedQueue$CLQSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/concurrent/ConcurrentLinkedQueue$Node.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef CONCURRENT
#undef MAX_BATCH
#undef MAX_VALUE
#undef NONNULL
#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $ConcurrentLinkedQueue$Node = ::java::util::concurrent::ConcurrentLinkedQueue$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentLinkedQueue$CLQSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentLinkedQueue;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedQueue$CLQSpliterator, this$0)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentLinkedQueue$CLQSpliterator, MAX_BATCH)},
	{"current", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node;", "Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;", 0, $field(ConcurrentLinkedQueue$CLQSpliterator, current$)},
	{"batch", "I", nullptr, 0, $field(ConcurrentLinkedQueue$CLQSpliterator, batch)},
	{"exhausted", "Z", nullptr, 0, $field(ConcurrentLinkedQueue$CLQSpliterator, exhausted)},
	{}
};

$MethodInfo _ConcurrentLinkedQueue$CLQSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedQueue;)V", nullptr, 0, $method(static_cast<void(ConcurrentLinkedQueue$CLQSpliterator::*)($ConcurrentLinkedQueue*)>(&ConcurrentLinkedQueue$CLQSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"current", "()Ljava/util/concurrent/ConcurrentLinkedQueue$Node;", "()Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;", $PRIVATE, $method(static_cast<$ConcurrentLinkedQueue$Node*(ConcurrentLinkedQueue$CLQSpliterator::*)()>(&ConcurrentLinkedQueue$CLQSpliterator::current))},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"setCurrent", "(Ljava/util/concurrent/ConcurrentLinkedQueue$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedQueue$Node<TE;>;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedQueue$CLQSpliterator::*)($ConcurrentLinkedQueue$Node*)>(&ConcurrentLinkedQueue$CLQSpliterator::setCurrent))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentLinkedQueue$CLQSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedQueue$CLQSpliterator", "java.util.concurrent.ConcurrentLinkedQueue", "CLQSpliterator", $FINAL},
	{}
};

$ClassInfo _ConcurrentLinkedQueue$CLQSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentLinkedQueue$CLQSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_ConcurrentLinkedQueue$CLQSpliterator_FieldInfo_,
	_ConcurrentLinkedQueue$CLQSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_ConcurrentLinkedQueue$CLQSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedQueue"
};

$Object* allocate$ConcurrentLinkedQueue$CLQSpliterator($Class* clazz) {
	return $of($alloc(ConcurrentLinkedQueue$CLQSpliterator));
}

void ConcurrentLinkedQueue$CLQSpliterator::init$($ConcurrentLinkedQueue* this$0) {
	$set(this, this$0, this$0);
}

$Spliterator* ConcurrentLinkedQueue$CLQSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedQueue$Node, p, nullptr);
	$var($ConcurrentLinkedQueue$Node, q, nullptr);
	if (($assign(p, current())) == nullptr || ($assign(q, $nc(p)->next)) == nullptr) {
		return nullptr;
	}
	int32_t i = 0;
	int32_t n = this->batch = $Math::min(this->batch + 1, ConcurrentLinkedQueue$CLQSpliterator::MAX_BATCH);
	$var($ObjectArray, a, nullptr);
	do {
		$var($Object, e, nullptr);
		if (($assign(e, $nc(p)->item)) != nullptr) {
			if (a == nullptr) {
				$assign(a, $new($ObjectArray, n));
			}
			$nc(a)->set(i++, e);
		}
		$var($ConcurrentLinkedQueue$Node, var$0, p);
		if (var$0 == ($assign(p, q))) {
			$assign(p, this->this$0->first());
		}
	} while (p != nullptr && ($assign(q, p->next)) != nullptr && i < n);
	setCurrent(p);
	return (i == 0) ? ($Spliterator*)nullptr : $Spliterators::spliterator(a, 0, i, (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT));
}

void ConcurrentLinkedQueue$CLQSpliterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	$var($ConcurrentLinkedQueue$Node, p, nullptr);
	if (($assign(p, current())) != nullptr) {
		$set(this, current$, nullptr);
		this->exhausted = true;
		this->this$0->forEachFrom(action, p);
	}
}

bool ConcurrentLinkedQueue$CLQSpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($ConcurrentLinkedQueue$Node, p, nullptr);
	if (($assign(p, current())) != nullptr) {
		$var($Object, e, nullptr);
		do {
			$assign(e, $nc(p)->item);
			$var($ConcurrentLinkedQueue$Node, var$0, p);
			if (var$0 == ($assign(p, p->next))) {
				$assign(p, this->this$0->first());
			}
		} while (e == nullptr && p != nullptr);
		setCurrent(p);
		if (e != nullptr) {
			action->accept(e);
			return true;
		}
	}
	return false;
}

void ConcurrentLinkedQueue$CLQSpliterator::setCurrent($ConcurrentLinkedQueue$Node* p) {
	if (($assignField(this, current$, p)) == nullptr) {
		this->exhausted = true;
	}
}

$ConcurrentLinkedQueue$Node* ConcurrentLinkedQueue$CLQSpliterator::current() {
	$var($ConcurrentLinkedQueue$Node, p, nullptr);
	if (($assign(p, this->current$)) == nullptr && !this->exhausted) {
		setCurrent($assign(p, this->this$0->first()));
	}
	return p;
}

int64_t ConcurrentLinkedQueue$CLQSpliterator::estimateSize() {
	return $Long::MAX_VALUE;
}

int32_t ConcurrentLinkedQueue$CLQSpliterator::characteristics() {
	return (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT);
}

ConcurrentLinkedQueue$CLQSpliterator::ConcurrentLinkedQueue$CLQSpliterator() {
}

$Class* ConcurrentLinkedQueue$CLQSpliterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedQueue$CLQSpliterator, name, initialize, &_ConcurrentLinkedQueue$CLQSpliterator_ClassInfo_, allocate$ConcurrentLinkedQueue$CLQSpliterator);
	return class$;
}

$Class* ConcurrentLinkedQueue$CLQSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java