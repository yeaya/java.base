#include <java/util/ArrayDeque$DeqIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/ArrayDeque.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayDeque = ::java::util::ArrayDeque;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _ArrayDeque$DeqIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/ArrayDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayDeque$DeqIterator, this$0)},
	{"cursor", "I", nullptr, 0, $field(ArrayDeque$DeqIterator, cursor)},
	{"remaining", "I", nullptr, 0, $field(ArrayDeque$DeqIterator, remaining)},
	{"lastRet", "I", nullptr, 0, $field(ArrayDeque$DeqIterator, lastRet)},
	{}
};

$MethodInfo _ArrayDeque$DeqIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayDeque;)V", nullptr, 0, $method(static_cast<void(ArrayDeque$DeqIterator::*)($ArrayDeque*)>(&ArrayDeque$DeqIterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"postDelete", "(Z)V", nullptr, 0},
	{"remove", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ArrayDeque$DeqIterator_InnerClassesInfo_[] = {
	{"java.util.ArrayDeque$DeqIterator", "java.util.ArrayDeque", "DeqIterator", $PRIVATE},
	{}
};

$ClassInfo _ArrayDeque$DeqIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ArrayDeque$DeqIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ArrayDeque$DeqIterator_FieldInfo_,
	_ArrayDeque$DeqIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_ArrayDeque$DeqIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayDeque"
};

$Object* allocate$ArrayDeque$DeqIterator($Class* clazz) {
	return $of($alloc(ArrayDeque$DeqIterator));
}

void ArrayDeque$DeqIterator::init$($ArrayDeque* this$0) {
	$set(this, this$0, this$0);
	this->remaining = this->this$0->size();
	this->lastRet = -1;
	this->cursor = this$0->head;
}

bool ArrayDeque$DeqIterator::hasNext() {
	return this->remaining > 0;
}

$Object* ArrayDeque$DeqIterator::next() {
	$useLocalCurrentObjectStackCache();
	if (this->remaining <= 0) {
		$throwNew($NoSuchElementException);
	}
	$var($ObjectArray, es, this->this$0->elements);
	$var($Object, e, $ArrayDeque::nonNullElementAt(es, this->cursor));
	this->cursor = $ArrayDeque::inc(this->lastRet = this->cursor, $nc(es)->length);
	--this->remaining;
	return $of(e);
}

void ArrayDeque$DeqIterator::postDelete(bool leftShifted) {
	if (leftShifted) {
		this->cursor = $ArrayDeque::dec(this->cursor, $nc(this->this$0->elements)->length);
	}
}

void ArrayDeque$DeqIterator::remove() {
	if (this->lastRet < 0) {
		$throwNew($IllegalStateException);
	}
	postDelete(this->this$0->delete$(this->lastRet));
	this->lastRet = -1;
}

void ArrayDeque$DeqIterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	int32_t r = 0;
	if ((r = this->remaining) <= 0) {
		return;
	}
	this->remaining = 0;
	$var($ObjectArray, es, this->this$0->elements);
	if ($nc(es)->get(this->cursor) == nullptr || $ArrayDeque::sub(this->this$0->tail, this->cursor, $nc(es)->length) != r) {
		$throwNew($ConcurrentModificationException);
	}
	{
		int32_t i = this->cursor;
		int32_t end = this->this$0->tail;
		int32_t to = (i <= end) ? end : $nc(es)->length;
		for (;; i = 0, to = end) {
			for (; i < to; ++i) {
				action->accept($($ArrayDeque::elementAt(es, i)));
			}
			if (to == end) {
				if (end != this->this$0->tail) {
					$throwNew($ConcurrentModificationException);
				}
				this->lastRet = $ArrayDeque::dec(end, es->length);
				break;
			}
		}
	}
}

ArrayDeque$DeqIterator::ArrayDeque$DeqIterator() {
}

$Class* ArrayDeque$DeqIterator::load$($String* name, bool initialize) {
	$loadClass(ArrayDeque$DeqIterator, name, initialize, &_ArrayDeque$DeqIterator_ClassInfo_, allocate$ArrayDeque$DeqIterator);
	return class$;
}

$Class* ArrayDeque$DeqIterator::class$ = nullptr;

	} // util
} // java