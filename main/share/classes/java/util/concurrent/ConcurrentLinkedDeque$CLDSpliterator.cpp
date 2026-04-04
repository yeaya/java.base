#include <java/util/concurrent/ConcurrentLinkedDeque$CLDSpliterator.h>
#include <java/lang/Math.h>
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

void ConcurrentLinkedDeque$CLDSpliterator::init$($ConcurrentLinkedDeque* this$0) {
	$set(this, this$0, this$0);
}

$Spliterator* ConcurrentLinkedDeque$CLDSpliterator::trySplit() {
	$useLocalObjectStack();
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
	$useLocalObjectStack();
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
			if (var$0 == ($assign(p, p->next))) {
				$assign(p, this->this$0->first());
			}
		} while (p != nullptr);
	}
}

bool ConcurrentLinkedDeque$CLDSpliterator::tryAdvance($Consumer* action) {
	$useLocalObjectStack();
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
	if (($set(this, current$, p)) == nullptr) {
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ConcurrentLinkedDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ConcurrentLinkedDeque$CLDSpliterator, this$0)},
		{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentLinkedDeque$CLDSpliterator, MAX_BATCH)},
		{"current", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0, $field(ConcurrentLinkedDeque$CLDSpliterator, current$)},
		{"batch", "I", nullptr, 0, $field(ConcurrentLinkedDeque$CLDSpliterator, batch)},
		{"exhausted", "Z", nullptr, 0, $field(ConcurrentLinkedDeque$CLDSpliterator, exhausted)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentLinkedDeque;)V", nullptr, 0, $method(ConcurrentLinkedDeque$CLDSpliterator, init$, void, $ConcurrentLinkedDeque*)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(ConcurrentLinkedDeque$CLDSpliterator, characteristics, int32_t)},
		{"current", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $PRIVATE, $method(ConcurrentLinkedDeque$CLDSpliterator, current, $ConcurrentLinkedDeque$Node*)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(ConcurrentLinkedDeque$CLDSpliterator, estimateSize, int64_t)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(ConcurrentLinkedDeque$CLDSpliterator, forEachRemaining, void, $Consumer*)},
		{"setCurrent", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)V", $PRIVATE, $method(ConcurrentLinkedDeque$CLDSpliterator, setCurrent, void, $ConcurrentLinkedDeque$Node*)},
		{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC, $virtualMethod(ConcurrentLinkedDeque$CLDSpliterator, tryAdvance, bool, $Consumer*)},
		{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(ConcurrentLinkedDeque$CLDSpliterator, trySplit, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentLinkedDeque$CLDSpliterator", "java.util.concurrent.ConcurrentLinkedDeque", "CLDSpliterator", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentLinkedDeque$CLDSpliterator",
		"java.lang.Object",
		"java.util.Spliterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentLinkedDeque"
	};
	$loadClass(ConcurrentLinkedDeque$CLDSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentLinkedDeque$CLDSpliterator);
	});
	return class$;
}

$Class* ConcurrentLinkedDeque$CLDSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java