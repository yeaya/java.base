#include <java/util/concurrent/LinkedTransferQueue$LTQSpliterator.h>

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
#include <java/util/concurrent/LinkedTransferQueue$Node.h>
#include <java/util/concurrent/LinkedTransferQueue.h>
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
using $LinkedTransferQueue = ::java::util::concurrent::LinkedTransferQueue;
using $LinkedTransferQueue$Node = ::java::util::concurrent::LinkedTransferQueue$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _LinkedTransferQueue$LTQSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/LinkedTransferQueue;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedTransferQueue$LTQSpliterator, this$0)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(LinkedTransferQueue$LTQSpliterator, MAX_BATCH)},
	{"current", "Ljava/util/concurrent/LinkedTransferQueue$Node;", nullptr, 0, $field(LinkedTransferQueue$LTQSpliterator, current$)},
	{"batch", "I", nullptr, 0, $field(LinkedTransferQueue$LTQSpliterator, batch)},
	{"exhausted", "Z", nullptr, 0, $field(LinkedTransferQueue$LTQSpliterator, exhausted)},
	{}
};

$MethodInfo _LinkedTransferQueue$LTQSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/LinkedTransferQueue;)V", nullptr, 0, $method(static_cast<void(LinkedTransferQueue$LTQSpliterator::*)($LinkedTransferQueue*)>(&LinkedTransferQueue$LTQSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"current", "()Ljava/util/concurrent/LinkedTransferQueue$Node;", nullptr, $PRIVATE, $method(static_cast<$LinkedTransferQueue$Node*(LinkedTransferQueue$LTQSpliterator::*)()>(&LinkedTransferQueue$LTQSpliterator::current))},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"setCurrent", "(Ljava/util/concurrent/LinkedTransferQueue$Node;)V", nullptr, $PRIVATE, $method(static_cast<void(LinkedTransferQueue$LTQSpliterator::*)($LinkedTransferQueue$Node*)>(&LinkedTransferQueue$LTQSpliterator::setCurrent))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{}
};

$InnerClassInfo _LinkedTransferQueue$LTQSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedTransferQueue$LTQSpliterator", "java.util.concurrent.LinkedTransferQueue", "LTQSpliterator", $FINAL},
	{}
};

$ClassInfo _LinkedTransferQueue$LTQSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.LinkedTransferQueue$LTQSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_LinkedTransferQueue$LTQSpliterator_FieldInfo_,
	_LinkedTransferQueue$LTQSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_LinkedTransferQueue$LTQSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedTransferQueue"
};

$Object* allocate$LinkedTransferQueue$LTQSpliterator($Class* clazz) {
	return $of($alloc(LinkedTransferQueue$LTQSpliterator));
}

void LinkedTransferQueue$LTQSpliterator::init$($LinkedTransferQueue* this$0) {
	$set(this, this$0, this$0);
}

$Spliterator* LinkedTransferQueue$LTQSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedTransferQueue$Node, p, nullptr);
	$var($LinkedTransferQueue$Node, q, nullptr);
	if (($assign(p, current())) == nullptr || ($assign(q, $nc(p)->next)) == nullptr) {
		return nullptr;
	}
	int32_t i = 0;
	int32_t n = this->batch = $Math::min(this->batch + 1, LinkedTransferQueue$LTQSpliterator::MAX_BATCH);
	$var($ObjectArray, a, nullptr);
	do {
		$var($Object, item, $nc(p)->item);
		if (p->isData) {
			if (item != nullptr) {
				if (a == nullptr) {
					$assign(a, $new($ObjectArray, n));
				}
				$nc(a)->set(i++, item);
			}
		} else if (item == nullptr) {
			$assign(p, nullptr);
			break;
		}
		$var($LinkedTransferQueue$Node, var$0, p);
		if (var$0 == ($assign(p, q))) {
			$assign(p, this->this$0->firstDataNode());
		}
	} while (p != nullptr && ($assign(q, p->next)) != nullptr && i < n);
	setCurrent(p);
	return (i == 0) ? ($Spliterator*)nullptr : $Spliterators::spliterator(a, 0, i, (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT));
}

void LinkedTransferQueue$LTQSpliterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	$var($LinkedTransferQueue$Node, p, nullptr);
	if (($assign(p, current())) != nullptr) {
		$set(this, current$, nullptr);
		this->exhausted = true;
		this->this$0->forEachFrom(action, p);
	}
}

bool LinkedTransferQueue$LTQSpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($LinkedTransferQueue$Node, p, nullptr);
	if (($assign(p, current())) != nullptr) {
		$var($Object, e, nullptr);
		do {
			$var($Object, item, $nc(p)->item);
			bool isData = p->isData;
			$var($LinkedTransferQueue$Node, var$0, p);
			if (var$0 == ($assign(p, p->next))) {
				$assign(p, this->this$0->head);
			}
			if (isData) {
				if (item != nullptr) {
					$assign(e, item);
					break;
				}
			} else if (item == nullptr) {
				$assign(p, nullptr);
			}
		} while (p != nullptr);
		setCurrent(p);
		if (e != nullptr) {
			action->accept(e);
			return true;
		}
	}
	return false;
}

void LinkedTransferQueue$LTQSpliterator::setCurrent($LinkedTransferQueue$Node* p) {
	if (($assignField(this, current$, p)) == nullptr) {
		this->exhausted = true;
	}
}

$LinkedTransferQueue$Node* LinkedTransferQueue$LTQSpliterator::current() {
	$var($LinkedTransferQueue$Node, p, nullptr);
	if (($assign(p, this->current$)) == nullptr && !this->exhausted) {
		setCurrent($assign(p, this->this$0->firstDataNode()));
	}
	return p;
}

int64_t LinkedTransferQueue$LTQSpliterator::estimateSize() {
	return $Long::MAX_VALUE;
}

int32_t LinkedTransferQueue$LTQSpliterator::characteristics() {
	return (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT);
}

LinkedTransferQueue$LTQSpliterator::LinkedTransferQueue$LTQSpliterator() {
}

$Class* LinkedTransferQueue$LTQSpliterator::load$($String* name, bool initialize) {
	$loadClass(LinkedTransferQueue$LTQSpliterator, name, initialize, &_LinkedTransferQueue$LTQSpliterator_ClassInfo_, allocate$LinkedTransferQueue$LTQSpliterator);
	return class$;
}

$Class* LinkedTransferQueue$LTQSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java