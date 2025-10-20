#include <java/util/concurrent/ConcurrentLinkedDeque$CLDSpliterator.h>

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
#include <java/util/concurrent/ConcurrentLinkedDeque$Node.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
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
using $ConcurrentLinkedDeque = ::java::util::concurrent::ConcurrentLinkedDeque;
using $ConcurrentLinkedDeque$Node = ::java::util::concurrent::ConcurrentLinkedDeque$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentLinkedDeque$CLDSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ConcurrentLinkedDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedDeque$CLDSpliterator, this$0)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentLinkedDeque$CLDSpliterator, MAX_BATCH)},
	{"current", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0, $field(ConcurrentLinkedDeque$CLDSpliterator, current$)},
	{"batch", "I", nullptr, 0, $field(ConcurrentLinkedDeque$CLDSpliterator, batch)},
	{"exhausted", "Z", nullptr, 0, $field(ConcurrentLinkedDeque$CLDSpliterator, exhausted)},
	{}
};

$MethodInfo _ConcurrentLinkedDeque$CLDSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedDeque;)V", nullptr, 0, $method(static_cast<void(ConcurrentLinkedDeque$CLDSpliterator::*)($ConcurrentLinkedDeque*)>(&ConcurrentLinkedDeque$CLDSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"current", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $PRIVATE, $method(static_cast<$ConcurrentLinkedDeque$Node*(ConcurrentLinkedDeque$CLDSpliterator::*)()>(&ConcurrentLinkedDeque$CLDSpliterator::current))},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"setCurrent", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque$CLDSpliterator::*)($ConcurrentLinkedDeque$Node*)>(&ConcurrentLinkedDeque$CLDSpliterator::setCurrent))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentLinkedDeque$CLDSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedDeque$CLDSpliterator", "java.util.concurrent.ConcurrentLinkedDeque", "CLDSpliterator", $FINAL},
	{}
};

$ClassInfo _ConcurrentLinkedDeque$CLDSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentLinkedDeque$CLDSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_ConcurrentLinkedDeque$CLDSpliterator_FieldInfo_,
	_ConcurrentLinkedDeque$CLDSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_ConcurrentLinkedDeque$CLDSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedDeque"
};

$Object* allocate$ConcurrentLinkedDeque$CLDSpliterator($Class* clazz) {
	return $of($alloc(ConcurrentLinkedDeque$CLDSpliterator));
}

void ConcurrentLinkedDeque$CLDSpliterator::init$($ConcurrentLinkedDeque* this$0) {
	$set(this, this$0, this$0);
}

$Spliterator* ConcurrentLinkedDeque$CLDSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, p, nullptr);
	$var($ConcurrentLinkedDeque$Node, q, nullptr);
	if (($assign(p, current())) == nullptr || ($assign(q, $nc(p)->next)) == nullptr) {
		return nullptr;
	}
	int32_t i = 0;
	int32_t n = this->batch = $Math::min(this->batch + 1, ConcurrentLinkedDeque$CLDSpliterator::MAX_BATCH);
	$var($ObjectArray, a, nullptr);
	do {
		$var($Object, e, nullptr);
		if (($assign(e, $nc(p)->item)) != nullptr) {
			if (a == nullptr) {
				$assign(a, $new($ObjectArray, n));
			}
			$nc(a)->set(i++, e);
		}
		$var($ConcurrentLinkedDeque$Node, var$0, p);
		if (var$0 == ($assign(p, q))) {
			$assign(p, this->this$0->first());
		}
	} while (p != nullptr && ($assign(q, p->next)) != nullptr && i < n);
	setCurrent(p);
	return (i == 0) ? ($Spliterator*)nullptr : $Spliterators::spliterator(a, 0, i, (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT));
}

void ConcurrentLinkedDeque$CLDSpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($ConcurrentLinkedDeque$Node, p, nullptr);
	if (($assign(p, current())) != nullptr) {
		$set(this, current$, nullptr);
		this->exhausted = true;
		do {
			$var($Object, e, nullptr);
			if (($assign(e, $nc(p)->item)) != nullptr) {
				action->accept(e);
			}
			$var($ConcurrentLinkedDeque$Node, var$0, p);
			if (var$0 == ($assign(p, $nc(p)->next))) {
				$assign(p, this->this$0->first());
			}
		} while (p != nullptr);
	}
}

bool ConcurrentLinkedDeque$CLDSpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($ConcurrentLinkedDeque$Node, p, nullptr);
	if (($assign(p, current())) != nullptr) {
		$var($Object, e, nullptr);
		do {
			$assign(e, $nc(p)->item);
			$var($ConcurrentLinkedDeque$Node, var$0, p);
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

void ConcurrentLinkedDeque$CLDSpliterator::setCurrent($ConcurrentLinkedDeque$Node* p) {
	if (($assignField(this, current$, p)) == nullptr) {
		this->exhausted = true;
	}
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque$CLDSpliterator::current() {
	$var($ConcurrentLinkedDeque$Node, p, nullptr);
	if (($assign(p, this->current$)) == nullptr && !this->exhausted) {
		setCurrent($assign(p, this->this$0->first()));
	}
	return p;
}

int64_t ConcurrentLinkedDeque$CLDSpliterator::estimateSize() {
	return $Long::MAX_VALUE;
}

int32_t ConcurrentLinkedDeque$CLDSpliterator::characteristics() {
	return (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT);
}

ConcurrentLinkedDeque$CLDSpliterator::ConcurrentLinkedDeque$CLDSpliterator() {
}

$Class* ConcurrentLinkedDeque$CLDSpliterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedDeque$CLDSpliterator, name, initialize, &_ConcurrentLinkedDeque$CLDSpliterator_ClassInfo_, allocate$ConcurrentLinkedDeque$CLDSpliterator);
	return class$;
}

$Class* ConcurrentLinkedDeque$CLDSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java