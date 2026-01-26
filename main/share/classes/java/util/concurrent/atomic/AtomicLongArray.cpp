#include <java/util/concurrent/atomic/AtomicLongArray.h>

#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/LongUnaryOperator.h>
#include <jcpp.h>

#undef AA

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $LongUnaryOperator = ::java::util::function::LongUnaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$NamedAttribute AtomicLongArray_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AtomicLongArray_MethodAnnotations_weakCompareAndSet28[] = {
	{"Ljava/lang/Deprecated;", AtomicLongArray_Attribute_var$0},
	{}
};

$FieldInfo _AtomicLongArray_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicLongArray, serialVersionUID)},
	{"AA", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicLongArray, AA)},
	{"array", "[J", nullptr, $PRIVATE | $FINAL, $field(AtomicLongArray, array)},
	{}
};

$MethodInfo _AtomicLongArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(AtomicLongArray, init$, void, int32_t)},
	{"<init>", "([J)V", nullptr, $PUBLIC, $method(AtomicLongArray, init$, void, $longs*)},
	{"accumulateAndGet", "(IJLjava/util/function/LongBinaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, accumulateAndGet, int64_t, int32_t, int64_t, $LongBinaryOperator*)},
	{"addAndGet", "(IJ)J", nullptr, $PUBLIC, $virtualMethod(AtomicLongArray, addAndGet, int64_t, int32_t, int64_t)},
	{"compareAndExchange", "(IJJ)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, compareAndExchange, int64_t, int32_t, int64_t, int64_t)},
	{"compareAndExchangeAcquire", "(IJJ)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, compareAndExchangeAcquire, int64_t, int32_t, int64_t, int64_t)},
	{"compareAndExchangeRelease", "(IJJ)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, compareAndExchangeRelease, int64_t, int32_t, int64_t, int64_t)},
	{"compareAndSet", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, compareAndSet, bool, int32_t, int64_t, int64_t)},
	{"decrementAndGet", "(I)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, decrementAndGet, int64_t, int32_t)},
	{"get", "(I)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, get, int64_t, int32_t)},
	{"getAcquire", "(I)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getAcquire, int64_t, int32_t)},
	{"getAndAccumulate", "(IJLjava/util/function/LongBinaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getAndAccumulate, int64_t, int32_t, int64_t, $LongBinaryOperator*)},
	{"getAndAdd", "(IJ)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getAndAdd, int64_t, int32_t, int64_t)},
	{"getAndDecrement", "(I)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getAndDecrement, int64_t, int32_t)},
	{"getAndIncrement", "(I)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getAndIncrement, int64_t, int32_t)},
	{"getAndSet", "(IJ)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getAndSet, int64_t, int32_t, int64_t)},
	{"getAndUpdate", "(ILjava/util/function/LongUnaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getAndUpdate, int64_t, int32_t, $LongUnaryOperator*)},
	{"getOpaque", "(I)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getOpaque, int64_t, int32_t)},
	{"getPlain", "(I)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, getPlain, int64_t, int32_t)},
	{"incrementAndGet", "(I)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, incrementAndGet, int64_t, int32_t)},
	{"lazySet", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, lazySet, void, int32_t, int64_t)},
	{"length", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, length, int32_t)},
	{"set", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, set, void, int32_t, int64_t)},
	{"setOpaque", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, setOpaque, void, int32_t, int64_t)},
	{"setPlain", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, setPlain, void, int32_t, int64_t)},
	{"setRelease", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, setRelease, void, int32_t, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AtomicLongArray, toString, $String*)},
	{"updateAndGet", "(ILjava/util/function/LongUnaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, updateAndGet, int64_t, int32_t, $LongUnaryOperator*)},
	{"weakCompareAndSet", "(IJJ)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(AtomicLongArray, weakCompareAndSet, bool, int32_t, int64_t, int64_t), nullptr, nullptr, _AtomicLongArray_MethodAnnotations_weakCompareAndSet28},
	{"weakCompareAndSetAcquire", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, weakCompareAndSetAcquire, bool, int32_t, int64_t, int64_t)},
	{"weakCompareAndSetPlain", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, weakCompareAndSetPlain, bool, int32_t, int64_t, int64_t)},
	{"weakCompareAndSetRelease", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, weakCompareAndSetRelease, bool, int32_t, int64_t, int64_t)},
	{"weakCompareAndSetVolatile", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLongArray, weakCompareAndSetVolatile, bool, int32_t, int64_t, int64_t)},
	{}
};

$ClassInfo _AtomicLongArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.AtomicLongArray",
	"java.lang.Object",
	"java.io.Serializable",
	_AtomicLongArray_FieldInfo_,
	_AtomicLongArray_MethodInfo_
};

$Object* allocate$AtomicLongArray($Class* clazz) {
	return $of($alloc(AtomicLongArray));
}

$VarHandle* AtomicLongArray::AA = nullptr;

void AtomicLongArray::init$(int32_t length) {
	$set(this, array, $new($longs, length));
}

void AtomicLongArray::init$($longs* array) {
	$set(this, array, $cast($longs, $nc(array)->clone()));
}

int32_t AtomicLongArray::length() {
	return $nc(this->array)->length;
}

int64_t AtomicLongArray::get(int32_t i) {
	return $longValue($nc(AtomicLongArray::AA)->getVolatile($$new($ObjectArray, {$of(this->array), $$of(i)})));
}

void AtomicLongArray::set(int32_t i, int64_t newValue) {
	$nc(AtomicLongArray::AA)->setVolatile($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

void AtomicLongArray::lazySet(int32_t i, int64_t newValue) {
	$nc(AtomicLongArray::AA)->setRelease($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

int64_t AtomicLongArray::getAndSet(int32_t i, int64_t newValue) {
	return $longValue($nc(AtomicLongArray::AA)->getAndSet($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)})));
}

bool AtomicLongArray::compareAndSet(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLongArray::AA)->compareAndSet($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

bool AtomicLongArray::weakCompareAndSet(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLongArray::AA)->weakCompareAndSetPlain($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

bool AtomicLongArray::weakCompareAndSetPlain(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLongArray::AA)->weakCompareAndSetPlain($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

int64_t AtomicLongArray::getAndIncrement(int32_t i) {
	return $longValue($nc(AtomicLongArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(1)})));
}

int64_t AtomicLongArray::getAndDecrement(int32_t i) {
	return $longValue($nc(AtomicLongArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(-1)})));
}

int64_t AtomicLongArray::getAndAdd(int32_t i, int64_t delta) {
	return $longValue($nc(AtomicLongArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(delta)})));
}

int64_t AtomicLongArray::incrementAndGet(int32_t i) {
	return $longValue($nc(AtomicLongArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(1)}))) + (int64_t)1;
}

int64_t AtomicLongArray::decrementAndGet(int32_t i) {
	return $longValue($nc(AtomicLongArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(-1)}))) - (int64_t)1;
}

int64_t AtomicLongArray::addAndGet(int32_t i, int64_t delta) {
	return $longValue($nc(AtomicLongArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(delta)}))) + delta;
}

int64_t AtomicLongArray::getAndUpdate(int32_t i, $LongUnaryOperator* updateFunction) {
	int64_t prev = get(i);
	int64_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(updateFunction)->applyAsLong(prev);
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return prev;
		}
		int64_t var$0 = prev;
		haveNext = (var$0 == (prev = get(i)));
	}
}

int64_t AtomicLongArray::updateAndGet(int32_t i, $LongUnaryOperator* updateFunction) {
	int64_t prev = get(i);
	int64_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(updateFunction)->applyAsLong(prev);
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return next;
		}
		int64_t var$0 = prev;
		haveNext = (var$0 == (prev = get(i)));
	}
}

int64_t AtomicLongArray::getAndAccumulate(int32_t i, int64_t x, $LongBinaryOperator* accumulatorFunction) {
	int64_t prev = get(i);
	int64_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(accumulatorFunction)->applyAsLong(prev, x);
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return prev;
		}
		int64_t var$0 = prev;
		haveNext = (var$0 == (prev = get(i)));
	}
}

int64_t AtomicLongArray::accumulateAndGet(int32_t i, int64_t x, $LongBinaryOperator* accumulatorFunction) {
	int64_t prev = get(i);
	int64_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(accumulatorFunction)->applyAsLong(prev, x);
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return next;
		}
		int64_t var$0 = prev;
		haveNext = (var$0 == (prev = get(i)));
	}
}

$String* AtomicLongArray::toString() {
	int32_t iMax = $nc(this->array)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append(get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(u',')->append(u' ');
	}
}

int64_t AtomicLongArray::getPlain(int32_t i) {
	return $longValue($nc(AtomicLongArray::AA)->get($$new($ObjectArray, {$of(this->array), $$of(i)})));
}

void AtomicLongArray::setPlain(int32_t i, int64_t newValue) {
	$nc(AtomicLongArray::AA)->set($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

int64_t AtomicLongArray::getOpaque(int32_t i) {
	return $longValue($nc(AtomicLongArray::AA)->getOpaque($$new($ObjectArray, {$of(this->array), $$of(i)})));
}

void AtomicLongArray::setOpaque(int32_t i, int64_t newValue) {
	$nc(AtomicLongArray::AA)->setOpaque($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

int64_t AtomicLongArray::getAcquire(int32_t i) {
	return $longValue($nc(AtomicLongArray::AA)->getAcquire($$new($ObjectArray, {$of(this->array), $$of(i)})));
}

void AtomicLongArray::setRelease(int32_t i, int64_t newValue) {
	$nc(AtomicLongArray::AA)->setRelease($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

int64_t AtomicLongArray::compareAndExchange(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $longValue($nc(AtomicLongArray::AA)->compareAndExchange($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)})));
}

int64_t AtomicLongArray::compareAndExchangeAcquire(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $longValue($nc(AtomicLongArray::AA)->compareAndExchangeAcquire($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)})));
}

int64_t AtomicLongArray::compareAndExchangeRelease(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $longValue($nc(AtomicLongArray::AA)->compareAndExchangeRelease($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)})));
}

bool AtomicLongArray::weakCompareAndSetVolatile(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLongArray::AA)->weakCompareAndSet($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

bool AtomicLongArray::weakCompareAndSetAcquire(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLongArray::AA)->weakCompareAndSetAcquire($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

bool AtomicLongArray::weakCompareAndSetRelease(int32_t i, int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLongArray::AA)->weakCompareAndSetRelease($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

void clinit$AtomicLongArray($Class* class$) {
	$load($longs);
	$assignStatic(AtomicLongArray::AA, $MethodHandles::arrayElementVarHandle($getClass($longs)));
}

AtomicLongArray::AtomicLongArray() {
}

$Class* AtomicLongArray::load$($String* name, bool initialize) {
	$loadClass(AtomicLongArray, name, initialize, &_AtomicLongArray_ClassInfo_, clinit$AtomicLongArray, allocate$AtomicLongArray);
	return class$;
}

$Class* AtomicLongArray::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java