#include <java/util/concurrent/atomic/AtomicLongArray.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/LongUnaryOperator.h>
#include <jcpp.h>

#undef AA

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
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
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::init$))},
	{"<init>", "([J)V", nullptr, $PUBLIC, $method(static_cast<void(AtomicLongArray::*)($longs*)>(&AtomicLongArray::init$))},
	{"accumulateAndGet", "(IJLjava/util/function/LongBinaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,int64_t,$LongBinaryOperator*)>(&AtomicLongArray::accumulateAndGet))},
	{"addAndGet", "(IJ)J", nullptr, $PUBLIC},
	{"compareAndExchange", "(IJJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::compareAndExchange))},
	{"compareAndExchangeAcquire", "(IJJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::compareAndExchangeAcquire))},
	{"compareAndExchangeRelease", "(IJJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::compareAndExchangeRelease))},
	{"compareAndSet", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::compareAndSet))},
	{"decrementAndGet", "(I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::decrementAndGet))},
	{"get", "(I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::get))},
	{"getAcquire", "(I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::getAcquire))},
	{"getAndAccumulate", "(IJLjava/util/function/LongBinaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,int64_t,$LongBinaryOperator*)>(&AtomicLongArray::getAndAccumulate))},
	{"getAndAdd", "(IJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,int64_t)>(&AtomicLongArray::getAndAdd))},
	{"getAndDecrement", "(I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::getAndDecrement))},
	{"getAndIncrement", "(I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::getAndIncrement))},
	{"getAndSet", "(IJ)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,int64_t)>(&AtomicLongArray::getAndSet))},
	{"getAndUpdate", "(ILjava/util/function/LongUnaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,$LongUnaryOperator*)>(&AtomicLongArray::getAndUpdate))},
	{"getOpaque", "(I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::getOpaque))},
	{"getPlain", "(I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::getPlain))},
	{"incrementAndGet", "(I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t)>(&AtomicLongArray::incrementAndGet))},
	{"lazySet", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicLongArray::*)(int32_t,int64_t)>(&AtomicLongArray::lazySet))},
	{"length", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicLongArray::*)()>(&AtomicLongArray::length))},
	{"set", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicLongArray::*)(int32_t,int64_t)>(&AtomicLongArray::set))},
	{"setOpaque", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicLongArray::*)(int32_t,int64_t)>(&AtomicLongArray::setOpaque))},
	{"setPlain", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicLongArray::*)(int32_t,int64_t)>(&AtomicLongArray::setPlain))},
	{"setRelease", "(IJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicLongArray::*)(int32_t,int64_t)>(&AtomicLongArray::setRelease))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAndGet", "(ILjava/util/function/LongUnaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongArray::*)(int32_t,$LongUnaryOperator*)>(&AtomicLongArray::updateAndGet))},
	{"weakCompareAndSet", "(IJJ)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<bool(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::weakCompareAndSet)), nullptr, nullptr, _AtomicLongArray_MethodAnnotations_weakCompareAndSet28},
	{"weakCompareAndSetAcquire", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::weakCompareAndSetAcquire))},
	{"weakCompareAndSetPlain", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::weakCompareAndSetPlain))},
	{"weakCompareAndSetRelease", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::weakCompareAndSetRelease))},
	{"weakCompareAndSetVolatile", "(IJJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicLongArray::*)(int32_t,int64_t,int64_t)>(&AtomicLongArray::weakCompareAndSetVolatile))},
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