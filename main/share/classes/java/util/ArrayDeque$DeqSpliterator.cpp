#include <java/util/ArrayDeque$DeqSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayDeque.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef NONNULL
#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ArrayDeque = ::java::util::ArrayDeque;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _ArrayDeque$DeqSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/ArrayDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayDeque$DeqSpliterator, this$0)},
	{"fence", "I", nullptr, $PRIVATE, $field(ArrayDeque$DeqSpliterator, fence)},
	{"cursor", "I", nullptr, $PRIVATE, $field(ArrayDeque$DeqSpliterator, cursor)},
	{}
};

$MethodInfo _ArrayDeque$DeqSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayDeque;)V", nullptr, 0, $method(static_cast<void(ArrayDeque$DeqSpliterator::*)($ArrayDeque*)>(&ArrayDeque$DeqSpliterator::init$))},
	{"<init>", "(Ljava/util/ArrayDeque;II)V", nullptr, 0, $method(static_cast<void(ArrayDeque$DeqSpliterator::*)($ArrayDeque*,int32_t,int32_t)>(&ArrayDeque$DeqSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"getFence", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ArrayDeque$DeqSpliterator::*)()>(&ArrayDeque$DeqSpliterator::getFence))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/ArrayDeque$DeqSpliterator;", "()Ljava/util/ArrayDeque<TE;>.DeqSpliterator;", $PUBLIC},
	{}
};

$InnerClassInfo _ArrayDeque$DeqSpliterator_InnerClassesInfo_[] = {
	{"java.util.ArrayDeque$DeqSpliterator", "java.util.ArrayDeque", "DeqSpliterator", $FINAL},
	{}
};

$ClassInfo _ArrayDeque$DeqSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArrayDeque$DeqSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_ArrayDeque$DeqSpliterator_FieldInfo_,
	_ArrayDeque$DeqSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_ArrayDeque$DeqSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayDeque"
};

$Object* allocate$ArrayDeque$DeqSpliterator($Class* clazz) {
	return $of($alloc(ArrayDeque$DeqSpliterator));
}

void ArrayDeque$DeqSpliterator::init$($ArrayDeque* this$0) {
	$set(this, this$0, this$0);
	this->fence = -1;
}

void ArrayDeque$DeqSpliterator::init$($ArrayDeque* this$0, int32_t origin, int32_t fence) {
	$set(this, this$0, this$0);
	this->cursor = origin;
	this->fence = fence;
}

int32_t ArrayDeque$DeqSpliterator::getFence() {
	int32_t t = 0;
	if ((t = this->fence) < 0) {
		t = (this->fence = this->this$0->tail);
		this->cursor = this->this$0->head;
	}
	return t;
}

ArrayDeque$DeqSpliterator* ArrayDeque$DeqSpliterator::trySplit() {
	$var($ObjectArray, es, this->this$0->elements);
	int32_t i = 0;
	int32_t n = 0;
	return ((n = $ArrayDeque::sub(getFence(), i = this->cursor, $nc(es)->length) >> 1) <= 0) ? (ArrayDeque$DeqSpliterator*)nullptr : $new(ArrayDeque$DeqSpliterator, this->this$0, i, this->cursor = $ArrayDeque::inc(i, n, $nc(es)->length));
}

void ArrayDeque$DeqSpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t end = getFence();
	int32_t cursor = this->cursor;
	$var($ObjectArray, es, this->this$0->elements);
	if (cursor != end) {
		this->cursor = end;
		if ($nc(es)->get(cursor) == nullptr || $nc(es)->get($ArrayDeque::dec(end, es->length)) == nullptr) {
			$throwNew($ConcurrentModificationException);
		}
		{
			int32_t i = cursor;
			int32_t to = (i <= end) ? end : $nc(es)->length;
			for (;; i = 0, to = end) {
				for (; i < to; ++i) {
					$nc(action)->accept($($ArrayDeque::elementAt(es, i)));
				}
				if (to == end) {
					break;
				}
			}
		}
	}
}

bool ArrayDeque$DeqSpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($ObjectArray, es, this->this$0->elements);
	if (this->fence < 0) {
		this->fence = this->this$0->tail;
		this->cursor = this->this$0->head;
	}
	int32_t i = 0;
	if ((i = this->cursor) == this->fence) {
		return false;
	}
	$var($Object, e, $ArrayDeque::nonNullElementAt(es, i));
	this->cursor = $ArrayDeque::inc(i, $nc(es)->length);
	action->accept(e);
	return true;
}

int64_t ArrayDeque$DeqSpliterator::estimateSize() {
	return $ArrayDeque::sub(getFence(), this->cursor, $nc(this->this$0->elements)->length);
}

int32_t ArrayDeque$DeqSpliterator::characteristics() {
	return (($Spliterator::NONNULL | $Spliterator::ORDERED) | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

ArrayDeque$DeqSpliterator::ArrayDeque$DeqSpliterator() {
}

$Class* ArrayDeque$DeqSpliterator::load$($String* name, bool initialize) {
	$loadClass(ArrayDeque$DeqSpliterator, name, initialize, &_ArrayDeque$DeqSpliterator_ClassInfo_, allocate$ArrayDeque$DeqSpliterator);
	return class$;
}

$Class* ArrayDeque$DeqSpliterator::class$ = nullptr;

	} // util
} // java