#include <java/util/concurrent/atomic/AtomicInteger.h>

#include <java/lang/Number.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/IntUnaryOperator.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef U
#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$NamedAttribute AtomicInteger_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AtomicInteger_MethodAnnotations_weakCompareAndSet31[] = {
	{"Ljava/lang/Deprecated;", AtomicInteger_Attribute_var$0},
	{}
};

$FieldInfo _AtomicInteger_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicInteger, serialVersionUID)},
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicInteger, U)},
	{"VALUE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicInteger, VALUE)},
	{"value", "I", nullptr, $PRIVATE | $VOLATILE, $field(AtomicInteger, value)},
	{}
};

$MethodInfo _AtomicInteger_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(AtomicInteger, init$, void, int32_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AtomicInteger, init$, void)},
	{"accumulateAndGet", "(ILjava/util/function/IntBinaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, accumulateAndGet, int32_t, int32_t, $IntBinaryOperator*)},
	{"addAndGet", "(I)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, addAndGet, int32_t, int32_t)},
	{"compareAndExchange", "(II)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, compareAndExchange, int32_t, int32_t, int32_t)},
	{"compareAndExchangeAcquire", "(II)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, compareAndExchangeAcquire, int32_t, int32_t, int32_t)},
	{"compareAndExchangeRelease", "(II)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, compareAndExchangeRelease, int32_t, int32_t, int32_t)},
	{"compareAndSet", "(II)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, compareAndSet, bool, int32_t, int32_t)},
	{"decrementAndGet", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, decrementAndGet, int32_t)},
	{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(AtomicInteger, doubleValue, double)},
	{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(AtomicInteger, floatValue, float)},
	{"get", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, get, int32_t)},
	{"getAcquire", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getAcquire, int32_t)},
	{"getAndAccumulate", "(ILjava/util/function/IntBinaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getAndAccumulate, int32_t, int32_t, $IntBinaryOperator*)},
	{"getAndAdd", "(I)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getAndAdd, int32_t, int32_t)},
	{"getAndDecrement", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getAndDecrement, int32_t)},
	{"getAndIncrement", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getAndIncrement, int32_t)},
	{"getAndSet", "(I)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getAndSet, int32_t, int32_t)},
	{"getAndUpdate", "(Ljava/util/function/IntUnaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getAndUpdate, int32_t, $IntUnaryOperator*)},
	{"getOpaque", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getOpaque, int32_t)},
	{"getPlain", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, getPlain, int32_t)},
	{"incrementAndGet", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, incrementAndGet, int32_t)},
	{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(AtomicInteger, intValue, int32_t)},
	{"lazySet", "(I)V", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, lazySet, void, int32_t)},
	{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(AtomicInteger, longValue, int64_t)},
	{"set", "(I)V", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, set, void, int32_t)},
	{"setOpaque", "(I)V", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, setOpaque, void, int32_t)},
	{"setPlain", "(I)V", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, setPlain, void, int32_t)},
	{"setRelease", "(I)V", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, setRelease, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AtomicInteger, toString, $String*)},
	{"updateAndGet", "(Ljava/util/function/IntUnaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, updateAndGet, int32_t, $IntUnaryOperator*)},
	{"weakCompareAndSet", "(II)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(AtomicInteger, weakCompareAndSet, bool, int32_t, int32_t), nullptr, nullptr, _AtomicInteger_MethodAnnotations_weakCompareAndSet31},
	{"weakCompareAndSetAcquire", "(II)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, weakCompareAndSetAcquire, bool, int32_t, int32_t)},
	{"weakCompareAndSetPlain", "(II)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, weakCompareAndSetPlain, bool, int32_t, int32_t)},
	{"weakCompareAndSetRelease", "(II)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, weakCompareAndSetRelease, bool, int32_t, int32_t)},
	{"weakCompareAndSetVolatile", "(II)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicInteger, weakCompareAndSetVolatile, bool, int32_t, int32_t)},
	{}
};

$ClassInfo _AtomicInteger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.AtomicInteger",
	"java.lang.Number",
	nullptr,
	_AtomicInteger_FieldInfo_,
	_AtomicInteger_MethodInfo_
};

$Object* allocate$AtomicInteger($Class* clazz) {
	return $of($alloc(AtomicInteger));
}

$Unsafe* AtomicInteger::U = nullptr;
int64_t AtomicInteger::VALUE = 0;

void AtomicInteger::init$(int32_t initialValue) {
	$Number::init$();
	this->value = initialValue;
}

void AtomicInteger::init$() {
	$Number::init$();
}

int32_t AtomicInteger::get() {
	return this->value;
}

void AtomicInteger::set(int32_t newValue) {
	this->value = newValue;
}

void AtomicInteger::lazySet(int32_t newValue) {
	$nc(AtomicInteger::U)->putIntRelease(this, AtomicInteger::VALUE, newValue);
}

int32_t AtomicInteger::getAndSet(int32_t newValue) {
	return $nc(AtomicInteger::U)->getAndSetInt(this, AtomicInteger::VALUE, newValue);
}

bool AtomicInteger::compareAndSet(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->compareAndSetInt(this, AtomicInteger::VALUE, expectedValue, newValue);
}

bool AtomicInteger::weakCompareAndSet(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->weakCompareAndSetIntPlain(this, AtomicInteger::VALUE, expectedValue, newValue);
}

bool AtomicInteger::weakCompareAndSetPlain(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->weakCompareAndSetIntPlain(this, AtomicInteger::VALUE, expectedValue, newValue);
}

int32_t AtomicInteger::getAndIncrement() {
	return $nc(AtomicInteger::U)->getAndAddInt(this, AtomicInteger::VALUE, 1);
}

int32_t AtomicInteger::getAndDecrement() {
	return $nc(AtomicInteger::U)->getAndAddInt(this, AtomicInteger::VALUE, -1);
}

int32_t AtomicInteger::getAndAdd(int32_t delta) {
	return $nc(AtomicInteger::U)->getAndAddInt(this, AtomicInteger::VALUE, delta);
}

int32_t AtomicInteger::incrementAndGet() {
	return $nc(AtomicInteger::U)->getAndAddInt(this, AtomicInteger::VALUE, 1) + 1;
}

int32_t AtomicInteger::decrementAndGet() {
	return $nc(AtomicInteger::U)->getAndAddInt(this, AtomicInteger::VALUE, -1) - 1;
}

int32_t AtomicInteger::addAndGet(int32_t delta) {
	return $nc(AtomicInteger::U)->getAndAddInt(this, AtomicInteger::VALUE, delta) + delta;
}

int32_t AtomicInteger::getAndUpdate($IntUnaryOperator* updateFunction) {
	int32_t prev = get();
	int32_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(updateFunction)->applyAsInt(prev);
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return prev;
		}
		int32_t var$0 = prev;
		haveNext = (var$0 == (prev = get()));
	}
}

int32_t AtomicInteger::updateAndGet($IntUnaryOperator* updateFunction) {
	int32_t prev = get();
	int32_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(updateFunction)->applyAsInt(prev);
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return next;
		}
		int32_t var$0 = prev;
		haveNext = (var$0 == (prev = get()));
	}
}

int32_t AtomicInteger::getAndAccumulate(int32_t x, $IntBinaryOperator* accumulatorFunction) {
	int32_t prev = get();
	int32_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(accumulatorFunction)->applyAsInt(prev, x);
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return prev;
		}
		int32_t var$0 = prev;
		haveNext = (var$0 == (prev = get()));
	}
}

int32_t AtomicInteger::accumulateAndGet(int32_t x, $IntBinaryOperator* accumulatorFunction) {
	int32_t prev = get();
	int32_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(accumulatorFunction)->applyAsInt(prev, x);
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return next;
		}
		int32_t var$0 = prev;
		haveNext = (var$0 == (prev = get()));
	}
}

$String* AtomicInteger::toString() {
	return $Integer::toString(get());
}

int32_t AtomicInteger::intValue() {
	return get();
}

int64_t AtomicInteger::longValue() {
	return (int64_t)get();
}

float AtomicInteger::floatValue() {
	return (float)get();
}

double AtomicInteger::doubleValue() {
	return (double)get();
}

int32_t AtomicInteger::getPlain() {
	return $nc(AtomicInteger::U)->getInt(this, AtomicInteger::VALUE);
}

void AtomicInteger::setPlain(int32_t newValue) {
	$nc(AtomicInteger::U)->putInt(this, AtomicInteger::VALUE, newValue);
}

int32_t AtomicInteger::getOpaque() {
	return $nc(AtomicInteger::U)->getIntOpaque(this, AtomicInteger::VALUE);
}

void AtomicInteger::setOpaque(int32_t newValue) {
	$nc(AtomicInteger::U)->putIntOpaque(this, AtomicInteger::VALUE, newValue);
}

int32_t AtomicInteger::getAcquire() {
	return $nc(AtomicInteger::U)->getIntAcquire(this, AtomicInteger::VALUE);
}

void AtomicInteger::setRelease(int32_t newValue) {
	$nc(AtomicInteger::U)->putIntRelease(this, AtomicInteger::VALUE, newValue);
}

int32_t AtomicInteger::compareAndExchange(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->compareAndExchangeInt(this, AtomicInteger::VALUE, expectedValue, newValue);
}

int32_t AtomicInteger::compareAndExchangeAcquire(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->compareAndExchangeIntAcquire(this, AtomicInteger::VALUE, expectedValue, newValue);
}

int32_t AtomicInteger::compareAndExchangeRelease(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->compareAndExchangeIntRelease(this, AtomicInteger::VALUE, expectedValue, newValue);
}

bool AtomicInteger::weakCompareAndSetVolatile(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->weakCompareAndSetInt(this, AtomicInteger::VALUE, expectedValue, newValue);
}

bool AtomicInteger::weakCompareAndSetAcquire(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->weakCompareAndSetIntAcquire(this, AtomicInteger::VALUE, expectedValue, newValue);
}

bool AtomicInteger::weakCompareAndSetRelease(int32_t expectedValue, int32_t newValue) {
	return $nc(AtomicInteger::U)->weakCompareAndSetIntRelease(this, AtomicInteger::VALUE, expectedValue, newValue);
}

void clinit$AtomicInteger($Class* class$) {
	$assignStatic(AtomicInteger::U, $Unsafe::getUnsafe());
	AtomicInteger::VALUE = $nc(AtomicInteger::U)->objectFieldOffset(AtomicInteger::class$, "value"_s);
}

AtomicInteger::AtomicInteger() {
}

$Class* AtomicInteger::load$($String* name, bool initialize) {
	$loadClass(AtomicInteger, name, initialize, &_AtomicInteger_ClassInfo_, clinit$AtomicInteger, allocate$AtomicInteger);
	return class$;
}

$Class* AtomicInteger::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java