#include <java/util/concurrent/atomic/AtomicIntegerArray.h>

#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/IntUnaryOperator.h>
#include <jcpp.h>

#undef AA

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$NamedAttribute AtomicIntegerArray_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AtomicIntegerArray_MethodAnnotations_weakCompareAndSet28[] = {
	{"Ljava/lang/Deprecated;", AtomicIntegerArray_Attribute_var$0},
	{}
};

$FieldInfo _AtomicIntegerArray_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicIntegerArray, serialVersionUID)},
	{"AA", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicIntegerArray, AA)},
	{"array", "[I", nullptr, $PRIVATE | $FINAL, $field(AtomicIntegerArray, array)},
	{}
};

$MethodInfo _AtomicIntegerArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::init$))},
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(AtomicIntegerArray::*)($ints*)>(&AtomicIntegerArray::init$))},
	{"accumulateAndGet", "(IILjava/util/function/IntBinaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,int32_t,$IntBinaryOperator*)>(&AtomicIntegerArray::accumulateAndGet))},
	{"addAndGet", "(II)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,int32_t)>(&AtomicIntegerArray::addAndGet))},
	{"compareAndExchange", "(III)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::compareAndExchange))},
	{"compareAndExchangeAcquire", "(III)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::compareAndExchangeAcquire))},
	{"compareAndExchangeRelease", "(III)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::compareAndExchangeRelease))},
	{"compareAndSet", "(III)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::compareAndSet))},
	{"decrementAndGet", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::decrementAndGet))},
	{"get", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::get))},
	{"getAcquire", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::getAcquire))},
	{"getAndAccumulate", "(IILjava/util/function/IntBinaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,int32_t,$IntBinaryOperator*)>(&AtomicIntegerArray::getAndAccumulate))},
	{"getAndAdd", "(II)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,int32_t)>(&AtomicIntegerArray::getAndAdd))},
	{"getAndDecrement", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::getAndDecrement))},
	{"getAndIncrement", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::getAndIncrement))},
	{"getAndSet", "(II)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,int32_t)>(&AtomicIntegerArray::getAndSet))},
	{"getAndUpdate", "(ILjava/util/function/IntUnaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,$IntUnaryOperator*)>(&AtomicIntegerArray::getAndUpdate))},
	{"getOpaque", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::getOpaque))},
	{"getPlain", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::getPlain))},
	{"incrementAndGet", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t)>(&AtomicIntegerArray::incrementAndGet))},
	{"lazySet", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicIntegerArray::*)(int32_t,int32_t)>(&AtomicIntegerArray::lazySet))},
	{"length", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)()>(&AtomicIntegerArray::length))},
	{"set", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicIntegerArray::*)(int32_t,int32_t)>(&AtomicIntegerArray::set))},
	{"setOpaque", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicIntegerArray::*)(int32_t,int32_t)>(&AtomicIntegerArray::setOpaque))},
	{"setPlain", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicIntegerArray::*)(int32_t,int32_t)>(&AtomicIntegerArray::setPlain))},
	{"setRelease", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicIntegerArray::*)(int32_t,int32_t)>(&AtomicIntegerArray::setRelease))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAndGet", "(ILjava/util/function/IntUnaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerArray::*)(int32_t,$IntUnaryOperator*)>(&AtomicIntegerArray::updateAndGet))},
	{"weakCompareAndSet", "(III)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<bool(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::weakCompareAndSet)), nullptr, nullptr, _AtomicIntegerArray_MethodAnnotations_weakCompareAndSet28},
	{"weakCompareAndSetAcquire", "(III)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::weakCompareAndSetAcquire))},
	{"weakCompareAndSetPlain", "(III)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::weakCompareAndSetPlain))},
	{"weakCompareAndSetRelease", "(III)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::weakCompareAndSetRelease))},
	{"weakCompareAndSetVolatile", "(III)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicIntegerArray::*)(int32_t,int32_t,int32_t)>(&AtomicIntegerArray::weakCompareAndSetVolatile))},
	{}
};

$ClassInfo _AtomicIntegerArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.AtomicIntegerArray",
	"java.lang.Object",
	"java.io.Serializable",
	_AtomicIntegerArray_FieldInfo_,
	_AtomicIntegerArray_MethodInfo_
};

$Object* allocate$AtomicIntegerArray($Class* clazz) {
	return $of($alloc(AtomicIntegerArray));
}

$VarHandle* AtomicIntegerArray::AA = nullptr;

void AtomicIntegerArray::init$(int32_t length) {
	$set(this, array, $new($ints, length));
}

void AtomicIntegerArray::init$($ints* array) {
	$set(this, array, $cast($ints, $nc(array)->clone()));
}

int32_t AtomicIntegerArray::length() {
	return $nc(this->array)->length;
}

int32_t AtomicIntegerArray::get(int32_t i) {
	return $intValue($nc(AtomicIntegerArray::AA)->getVolatile($$new($ObjectArray, {$of(this->array), $$of(i)})));
}

void AtomicIntegerArray::set(int32_t i, int32_t newValue) {
	$nc(AtomicIntegerArray::AA)->setVolatile($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

void AtomicIntegerArray::lazySet(int32_t i, int32_t newValue) {
	$nc(AtomicIntegerArray::AA)->setRelease($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

int32_t AtomicIntegerArray::getAndSet(int32_t i, int32_t newValue) {
	return $intValue($nc(AtomicIntegerArray::AA)->getAndSet($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)})));
}

bool AtomicIntegerArray::compareAndSet(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicIntegerArray::AA)->compareAndSet($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

bool AtomicIntegerArray::weakCompareAndSet(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicIntegerArray::AA)->weakCompareAndSetPlain($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

bool AtomicIntegerArray::weakCompareAndSetPlain(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicIntegerArray::AA)->weakCompareAndSetPlain($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

int32_t AtomicIntegerArray::getAndIncrement(int32_t i) {
	return $intValue($nc(AtomicIntegerArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(1)})));
}

int32_t AtomicIntegerArray::getAndDecrement(int32_t i) {
	return $intValue($nc(AtomicIntegerArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(-1)})));
}

int32_t AtomicIntegerArray::getAndAdd(int32_t i, int32_t delta) {
	return $intValue($nc(AtomicIntegerArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(delta)})));
}

int32_t AtomicIntegerArray::incrementAndGet(int32_t i) {
	return $intValue($nc(AtomicIntegerArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(1)}))) + 1;
}

int32_t AtomicIntegerArray::decrementAndGet(int32_t i) {
	return $intValue($nc(AtomicIntegerArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(-1)}))) - 1;
}

int32_t AtomicIntegerArray::addAndGet(int32_t i, int32_t delta) {
	return $intValue($nc(AtomicIntegerArray::AA)->getAndAdd($$new($ObjectArray, {$of(this->array), $$of(i), $$of(delta)}))) + delta;
}

int32_t AtomicIntegerArray::getAndUpdate(int32_t i, $IntUnaryOperator* updateFunction) {
	int32_t prev = get(i);
	int32_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(updateFunction)->applyAsInt(prev);
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return prev;
		}
		int32_t var$0 = prev;
		haveNext = (var$0 == (prev = get(i)));
	}
}

int32_t AtomicIntegerArray::updateAndGet(int32_t i, $IntUnaryOperator* updateFunction) {
	int32_t prev = get(i);
	int32_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(updateFunction)->applyAsInt(prev);
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return next;
		}
		int32_t var$0 = prev;
		haveNext = (var$0 == (prev = get(i)));
	}
}

int32_t AtomicIntegerArray::getAndAccumulate(int32_t i, int32_t x, $IntBinaryOperator* accumulatorFunction) {
	int32_t prev = get(i);
	int32_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(accumulatorFunction)->applyAsInt(prev, x);
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return prev;
		}
		int32_t var$0 = prev;
		haveNext = (var$0 == (prev = get(i)));
	}
}

int32_t AtomicIntegerArray::accumulateAndGet(int32_t i, int32_t x, $IntBinaryOperator* accumulatorFunction) {
	int32_t prev = get(i);
	int32_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(accumulatorFunction)->applyAsInt(prev, x);
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return next;
		}
		int32_t var$0 = prev;
		haveNext = (var$0 == (prev = get(i)));
	}
}

$String* AtomicIntegerArray::toString() {
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

int32_t AtomicIntegerArray::getPlain(int32_t i) {
	return $intValue($nc(AtomicIntegerArray::AA)->get($$new($ObjectArray, {$of(this->array), $$of(i)})));
}

void AtomicIntegerArray::setPlain(int32_t i, int32_t newValue) {
	$nc(AtomicIntegerArray::AA)->set($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

int32_t AtomicIntegerArray::getOpaque(int32_t i) {
	return $intValue($nc(AtomicIntegerArray::AA)->getOpaque($$new($ObjectArray, {$of(this->array), $$of(i)})));
}

void AtomicIntegerArray::setOpaque(int32_t i, int32_t newValue) {
	$nc(AtomicIntegerArray::AA)->setOpaque($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

int32_t AtomicIntegerArray::getAcquire(int32_t i) {
	return $intValue($nc(AtomicIntegerArray::AA)->getAcquire($$new($ObjectArray, {$of(this->array), $$of(i)})));
}

void AtomicIntegerArray::setRelease(int32_t i, int32_t newValue) {
	$nc(AtomicIntegerArray::AA)->setRelease($$new($ObjectArray, {$of(this->array), $$of(i), $$of(newValue)}));
}

int32_t AtomicIntegerArray::compareAndExchange(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $intValue($nc(AtomicIntegerArray::AA)->compareAndExchange($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)})));
}

int32_t AtomicIntegerArray::compareAndExchangeAcquire(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $intValue($nc(AtomicIntegerArray::AA)->compareAndExchangeAcquire($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)})));
}

int32_t AtomicIntegerArray::compareAndExchangeRelease(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $intValue($nc(AtomicIntegerArray::AA)->compareAndExchangeRelease($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)})));
}

bool AtomicIntegerArray::weakCompareAndSetVolatile(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicIntegerArray::AA)->weakCompareAndSet($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

bool AtomicIntegerArray::weakCompareAndSetAcquire(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicIntegerArray::AA)->weakCompareAndSetAcquire($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

bool AtomicIntegerArray::weakCompareAndSetRelease(int32_t i, int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicIntegerArray::AA)->weakCompareAndSetRelease($$new($ObjectArray, {$of(this->array), $$of(i), $$of(expectedValue), $$of(newValue)}));
}

void clinit$AtomicIntegerArray($Class* class$) {
	$load($ints);
	$assignStatic(AtomicIntegerArray::AA, $MethodHandles::arrayElementVarHandle($getClass($ints)));
}

AtomicIntegerArray::AtomicIntegerArray() {
}

$Class* AtomicIntegerArray::load$($String* name, bool initialize) {
	$loadClass(AtomicIntegerArray, name, initialize, &_AtomicIntegerArray_ClassInfo_, clinit$AtomicIntegerArray, allocate$AtomicIntegerArray);
	return class$;
}

$Class* AtomicIntegerArray::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java