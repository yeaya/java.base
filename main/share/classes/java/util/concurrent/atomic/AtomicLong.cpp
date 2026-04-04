#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/lang/Number.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/LongUnaryOperator.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef U
#undef VALUE
#undef VM_SUPPORTS_LONG_CAS

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $LongUnaryOperator = ::java::util::function::LongUnaryOperator;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

bool AtomicLong::VM_SUPPORTS_LONG_CAS = false;
$Unsafe* AtomicLong::U = nullptr;
int64_t AtomicLong::VALUE = 0;

bool AtomicLong::VMSupportsCS8() {
	$init(AtomicLong);
	$prepareNativeStatic(VMSupportsCS8, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void AtomicLong::init$(int64_t initialValue) {
	$Number::init$();
	this->value = initialValue;
}

void AtomicLong::init$() {
	$Number::init$();
}

int64_t AtomicLong::get() {
	return this->value;
}

void AtomicLong::set(int64_t newValue) {
	$nc(AtomicLong::U)->putLongVolatile(this, AtomicLong::VALUE, newValue);
}

void AtomicLong::lazySet(int64_t newValue) {
	$nc(AtomicLong::U)->putLongRelease(this, AtomicLong::VALUE, newValue);
}

int64_t AtomicLong::getAndSet(int64_t newValue) {
	return $nc(AtomicLong::U)->getAndSetLong(this, AtomicLong::VALUE, newValue);
}

bool AtomicLong::compareAndSet(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->compareAndSetLong(this, AtomicLong::VALUE, expectedValue, newValue);
}

bool AtomicLong::weakCompareAndSet(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->weakCompareAndSetLongPlain(this, AtomicLong::VALUE, expectedValue, newValue);
}

bool AtomicLong::weakCompareAndSetPlain(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->weakCompareAndSetLongPlain(this, AtomicLong::VALUE, expectedValue, newValue);
}

int64_t AtomicLong::getAndIncrement() {
	return $nc(AtomicLong::U)->getAndAddLong(this, AtomicLong::VALUE, 1);
}

int64_t AtomicLong::getAndDecrement() {
	return $nc(AtomicLong::U)->getAndAddLong(this, AtomicLong::VALUE, -1);
}

int64_t AtomicLong::getAndAdd(int64_t delta) {
	return $nc(AtomicLong::U)->getAndAddLong(this, AtomicLong::VALUE, delta);
}

int64_t AtomicLong::incrementAndGet() {
	return $nc(AtomicLong::U)->getAndAddLong(this, AtomicLong::VALUE, 1) + (int64_t)1;
}

int64_t AtomicLong::decrementAndGet() {
	return $nc(AtomicLong::U)->getAndAddLong(this, AtomicLong::VALUE, -1) - (int64_t)1;
}

int64_t AtomicLong::addAndGet(int64_t delta) {
	return $nc(AtomicLong::U)->getAndAddLong(this, AtomicLong::VALUE, delta) + delta;
}

int64_t AtomicLong::getAndUpdate($LongUnaryOperator* updateFunction) {
	int64_t prev = get();
	int64_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(updateFunction)->applyAsLong(prev);
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return prev;
		}
		int64_t var$0 = prev;
		haveNext = (var$0 == (prev = get()));
	}
}

int64_t AtomicLong::updateAndGet($LongUnaryOperator* updateFunction) {
	int64_t prev = get();
	int64_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(updateFunction)->applyAsLong(prev);
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return next;
		}
		int64_t var$0 = prev;
		haveNext = (var$0 == (prev = get()));
	}
}

int64_t AtomicLong::getAndAccumulate(int64_t x, $LongBinaryOperator* accumulatorFunction) {
	int64_t prev = get();
	int64_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(accumulatorFunction)->applyAsLong(prev, x);
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return prev;
		}
		int64_t var$0 = prev;
		haveNext = (var$0 == (prev = get()));
	}
}

int64_t AtomicLong::accumulateAndGet(int64_t x, $LongBinaryOperator* accumulatorFunction) {
	int64_t prev = get();
	int64_t next = 0;
	for (bool haveNext = false;;) {
		if (!haveNext) {
			next = $nc(accumulatorFunction)->applyAsLong(prev, x);
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return next;
		}
		int64_t var$0 = prev;
		haveNext = (var$0 == (prev = get()));
	}
}

$String* AtomicLong::toString() {
	return $Long::toString(get());
}

int32_t AtomicLong::intValue() {
	return (int32_t)get();
}

int64_t AtomicLong::longValue() {
	return get();
}

float AtomicLong::floatValue() {
	return (float)get();
}

double AtomicLong::doubleValue() {
	return (double)get();
}

int64_t AtomicLong::getPlain() {
	return $nc(AtomicLong::U)->getLong(this, AtomicLong::VALUE);
}

void AtomicLong::setPlain(int64_t newValue) {
	$nc(AtomicLong::U)->putLong(this, AtomicLong::VALUE, newValue);
}

int64_t AtomicLong::getOpaque() {
	return $nc(AtomicLong::U)->getLongOpaque(this, AtomicLong::VALUE);
}

void AtomicLong::setOpaque(int64_t newValue) {
	$nc(AtomicLong::U)->putLongOpaque(this, AtomicLong::VALUE, newValue);
}

int64_t AtomicLong::getAcquire() {
	return $nc(AtomicLong::U)->getLongAcquire(this, AtomicLong::VALUE);
}

void AtomicLong::setRelease(int64_t newValue) {
	$nc(AtomicLong::U)->putLongRelease(this, AtomicLong::VALUE, newValue);
}

int64_t AtomicLong::compareAndExchange(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->compareAndExchangeLong(this, AtomicLong::VALUE, expectedValue, newValue);
}

int64_t AtomicLong::compareAndExchangeAcquire(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->compareAndExchangeLongAcquire(this, AtomicLong::VALUE, expectedValue, newValue);
}

int64_t AtomicLong::compareAndExchangeRelease(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->compareAndExchangeLongRelease(this, AtomicLong::VALUE, expectedValue, newValue);
}

bool AtomicLong::weakCompareAndSetVolatile(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->weakCompareAndSetLong(this, AtomicLong::VALUE, expectedValue, newValue);
}

bool AtomicLong::weakCompareAndSetAcquire(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->weakCompareAndSetLongAcquire(this, AtomicLong::VALUE, expectedValue, newValue);
}

bool AtomicLong::weakCompareAndSetRelease(int64_t expectedValue, int64_t newValue) {
	return $nc(AtomicLong::U)->weakCompareAndSetLongRelease(this, AtomicLong::VALUE, expectedValue, newValue);
}

void AtomicLong::clinit$($Class* clazz) {
	AtomicLong::VM_SUPPORTS_LONG_CAS = AtomicLong::VMSupportsCS8();
	$assignStatic(AtomicLong::U, $Unsafe::getUnsafe());
	AtomicLong::VALUE = $nc(AtomicLong::U)->objectFieldOffset(AtomicLong::class$, "value"_s);
}

AtomicLong::AtomicLong() {
}

$Class* AtomicLong::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicLong, serialVersionUID)},
		{"VM_SUPPORTS_LONG_CAS", "Z", nullptr, $STATIC | $FINAL, $staticField(AtomicLong, VM_SUPPORTS_LONG_CAS)},
		{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicLong, U)},
		{"VALUE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicLong, VALUE)},
		{"value", "J", nullptr, $PRIVATE | $VOLATILE, $field(AtomicLong, value)},
		{}
	};
	$NamedAttribute weakCompareAndSetmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute weakCompareAndSetmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", weakCompareAndSetmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(AtomicLong, init$, void, int64_t)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AtomicLong, init$, void)},
		{"VMSupportsCS8", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(AtomicLong, VMSupportsCS8, bool)},
		{"accumulateAndGet", "(JLjava/util/function/LongBinaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, accumulateAndGet, int64_t, int64_t, $LongBinaryOperator*)},
		{"addAndGet", "(J)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, addAndGet, int64_t, int64_t)},
		{"compareAndExchange", "(JJ)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, compareAndExchange, int64_t, int64_t, int64_t)},
		{"compareAndExchangeAcquire", "(JJ)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, compareAndExchangeAcquire, int64_t, int64_t, int64_t)},
		{"compareAndExchangeRelease", "(JJ)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, compareAndExchangeRelease, int64_t, int64_t, int64_t)},
		{"compareAndSet", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, compareAndSet, bool, int64_t, int64_t)},
		{"decrementAndGet", "()J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, decrementAndGet, int64_t)},
		{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(AtomicLong, doubleValue, double)},
		{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(AtomicLong, floatValue, float)},
		{"get", "()J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, get, int64_t)},
		{"getAcquire", "()J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getAcquire, int64_t)},
		{"getAndAccumulate", "(JLjava/util/function/LongBinaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getAndAccumulate, int64_t, int64_t, $LongBinaryOperator*)},
		{"getAndAdd", "(J)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getAndAdd, int64_t, int64_t)},
		{"getAndDecrement", "()J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getAndDecrement, int64_t)},
		{"getAndIncrement", "()J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getAndIncrement, int64_t)},
		{"getAndSet", "(J)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getAndSet, int64_t, int64_t)},
		{"getAndUpdate", "(Ljava/util/function/LongUnaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getAndUpdate, int64_t, $LongUnaryOperator*)},
		{"getOpaque", "()J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getOpaque, int64_t)},
		{"getPlain", "()J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, getPlain, int64_t)},
		{"incrementAndGet", "()J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, incrementAndGet, int64_t)},
		{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(AtomicLong, intValue, int32_t)},
		{"lazySet", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, lazySet, void, int64_t)},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(AtomicLong, longValue, int64_t)},
		{"set", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, set, void, int64_t)},
		{"setOpaque", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, setOpaque, void, int64_t)},
		{"setPlain", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, setPlain, void, int64_t)},
		{"setRelease", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, setRelease, void, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AtomicLong, toString, $String*)},
		{"updateAndGet", "(Ljava/util/function/LongUnaryOperator;)J", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, updateAndGet, int64_t, $LongUnaryOperator*)},
		{"weakCompareAndSet", "(JJ)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(AtomicLong, weakCompareAndSet, bool, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, weakCompareAndSetAcquire, bool, int64_t, int64_t)},
		{"weakCompareAndSetPlain", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, weakCompareAndSetPlain, bool, int64_t, int64_t)},
		{"weakCompareAndSetRelease", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, weakCompareAndSetRelease, bool, int64_t, int64_t)},
		{"weakCompareAndSetVolatile", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicLong, weakCompareAndSetVolatile, bool, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.atomic.AtomicLong",
		"java.lang.Number",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AtomicLong, name, initialize, &classInfo$$, AtomicLong::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicLong);
	});
	return class$;
}

$Class* AtomicLong::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java