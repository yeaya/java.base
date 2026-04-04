#include <java/util/ArrayDeque$DescendingIterator.h>
#include <java/util/ArrayDeque$DeqIterator.h>
#include <java/util/ArrayDeque.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayDeque = ::java::util::ArrayDeque;
using $ArrayDeque$DeqIterator = ::java::util::ArrayDeque$DeqIterator;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

void ArrayDeque$DescendingIterator::init$($ArrayDeque* this$0) {
	$set(this, this$0, this$0);
	$ArrayDeque$DeqIterator::init$(this$0);
	this->cursor = $ArrayDeque::dec(this$0->tail, $nc(this$0->elements)->length);
}

$Object* ArrayDeque$DescendingIterator::next() {
	$useLocalObjectStack();
	if (this->remaining <= 0) {
		$throwNew($NoSuchElementException);
	}
	$var($ObjectArray, es, this->this$0->elements);
	$var($Object, e, $ArrayDeque::nonNullElementAt(es, this->cursor));
	this->cursor = $ArrayDeque::dec(this->lastRet = this->cursor, $nc(es)->length);
	--this->remaining;
	return e;
}

void ArrayDeque$DescendingIterator::postDelete(bool leftShifted) {
	if (!leftShifted) {
		this->cursor = $ArrayDeque::inc(this->cursor, $nc(this->this$0->elements)->length);
	}
}

void ArrayDeque$DescendingIterator::forEachRemaining($Consumer* action) {
	$useLocalObjectStack();
	$Objects::requireNonNull(action);
	int32_t r = 0;
	if ((r = this->remaining) <= 0) {
		return;
	}
	this->remaining = 0;
	$var($ObjectArray, es, this->this$0->elements);
	if ($nc(es)->get(this->cursor) == nullptr || $ArrayDeque::sub(this->cursor, this->this$0->head, es->length) + 1 != r) {
		$throwNew($ConcurrentModificationException);
	}
	for (int32_t i = this->cursor, end = this->this$0->head, to = (i >= end) ? end : 0;; i = es->length - 1, to = end) {
		for (; i > to - 1; --i) {
			action->accept($($ArrayDeque::elementAt(es, i)));
		}
		if (to == end) {
			if (end != this->this$0->head) {
				$throwNew($ConcurrentModificationException);
			}
			this->lastRet = end;
			break;
		}
	}
}

ArrayDeque$DescendingIterator::ArrayDeque$DescendingIterator() {
}

$Class* ArrayDeque$DescendingIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ArrayDeque;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayDeque$DescendingIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ArrayDeque;)V", nullptr, 0, $method(ArrayDeque$DescendingIterator, init$, void, $ArrayDeque*)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC | $FINAL, $virtualMethod(ArrayDeque$DescendingIterator, forEachRemaining, void, $Consumer*)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $FINAL, $virtualMethod(ArrayDeque$DescendingIterator, next, $Object*)},
		{"postDelete", "(Z)V", nullptr, 0, $virtualMethod(ArrayDeque$DescendingIterator, postDelete, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ArrayDeque$DescendingIterator", "java.util.ArrayDeque", "DescendingIterator", $PRIVATE},
		{"java.util.ArrayDeque$DeqIterator", "java.util.ArrayDeque", "DeqIterator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ArrayDeque$DescendingIterator",
		"java.util.ArrayDeque$DeqIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/ArrayDeque<TE;>.DeqIterator;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ArrayDeque"
	};
	$loadClass(ArrayDeque$DescendingIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayDeque$DescendingIterator);
	});
	return class$;
}

$Class* ArrayDeque$DescendingIterator::class$ = nullptr;

	} // util
} // java