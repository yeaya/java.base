#include <java/util/concurrent/atomic/AtomicIntegerFieldUpdater.h>

#include <java/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/IntUnaryOperator.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl = ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$CompoundAttribute _AtomicIntegerFieldUpdater_MethodAnnotations_newUpdater14[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$MethodInfo _AtomicIntegerFieldUpdater_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AtomicIntegerFieldUpdater::*)()>(&AtomicIntegerFieldUpdater::init$))},
	{"accumulateAndGet", "(Ljava/lang/Object;ILjava/util/function/IntBinaryOperator;)I", "(TT;ILjava/util/function/IntBinaryOperator;)I", $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerFieldUpdater::*)(Object$*,int32_t,$IntBinaryOperator*)>(&AtomicIntegerFieldUpdater::accumulateAndGet))},
	{"addAndGet", "(Ljava/lang/Object;I)I", "(TT;I)I", $PUBLIC},
	{"compareAndSet", "(Ljava/lang/Object;II)Z", "(TT;II)Z", $PUBLIC | $ABSTRACT},
	{"decrementAndGet", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC},
	{"get", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC | $ABSTRACT},
	{"getAndAccumulate", "(Ljava/lang/Object;ILjava/util/function/IntBinaryOperator;)I", "(TT;ILjava/util/function/IntBinaryOperator;)I", $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerFieldUpdater::*)(Object$*,int32_t,$IntBinaryOperator*)>(&AtomicIntegerFieldUpdater::getAndAccumulate))},
	{"getAndAdd", "(Ljava/lang/Object;I)I", "(TT;I)I", $PUBLIC},
	{"getAndDecrement", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC},
	{"getAndIncrement", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC},
	{"getAndSet", "(Ljava/lang/Object;I)I", "(TT;I)I", $PUBLIC},
	{"getAndUpdate", "(Ljava/lang/Object;Ljava/util/function/IntUnaryOperator;)I", "(TT;Ljava/util/function/IntUnaryOperator;)I", $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerFieldUpdater::*)(Object$*,$IntUnaryOperator*)>(&AtomicIntegerFieldUpdater::getAndUpdate))},
	{"incrementAndGet", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC},
	{"lazySet", "(Ljava/lang/Object;I)V", "(TT;I)V", $PUBLIC | $ABSTRACT},
	{"newUpdater", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater;", "<U:Ljava/lang/Object;>(Ljava/lang/Class<TU;>;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater<TU;>;", $PUBLIC | $STATIC, $method(static_cast<AtomicIntegerFieldUpdater*(*)($Class*,$String*)>(&AtomicIntegerFieldUpdater::newUpdater)), nullptr, nullptr, _AtomicIntegerFieldUpdater_MethodAnnotations_newUpdater14},
	{"set", "(Ljava/lang/Object;I)V", "(TT;I)V", $PUBLIC | $ABSTRACT},
	{"updateAndGet", "(Ljava/lang/Object;Ljava/util/function/IntUnaryOperator;)I", "(TT;Ljava/util/function/IntUnaryOperator;)I", $PUBLIC | $FINAL, $method(static_cast<int32_t(AtomicIntegerFieldUpdater::*)(Object$*,$IntUnaryOperator*)>(&AtomicIntegerFieldUpdater::updateAndGet))},
	{"weakCompareAndSet", "(Ljava/lang/Object;II)Z", "(TT;II)Z", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AtomicIntegerFieldUpdater_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl", "java.util.concurrent.atomic.AtomicIntegerFieldUpdater", "AtomicIntegerFieldUpdaterImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AtomicIntegerFieldUpdater_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.atomic.AtomicIntegerFieldUpdater",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AtomicIntegerFieldUpdater_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AtomicIntegerFieldUpdater_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl,java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1"
};

$Object* allocate$AtomicIntegerFieldUpdater($Class* clazz) {
	return $of($alloc(AtomicIntegerFieldUpdater));
}

AtomicIntegerFieldUpdater* AtomicIntegerFieldUpdater::newUpdater($Class* tclass, $String* fieldName) {
	return $new($AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl, tclass, fieldName, $Reflection::getCallerClass());
}

void AtomicIntegerFieldUpdater::init$() {
}

int32_t AtomicIntegerFieldUpdater::getAndSet(Object$* obj, int32_t newValue) {
	int32_t prev = 0;
	do {
		prev = get(obj);
	} while (!compareAndSet(obj, prev, newValue));
	return prev;
}

int32_t AtomicIntegerFieldUpdater::getAndIncrement(Object$* obj) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = prev + 1;
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int32_t AtomicIntegerFieldUpdater::getAndDecrement(Object$* obj) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = prev - 1;
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int32_t AtomicIntegerFieldUpdater::getAndAdd(Object$* obj, int32_t delta) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = prev + delta;
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int32_t AtomicIntegerFieldUpdater::incrementAndGet(Object$* obj) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = prev + 1;
	} while (!compareAndSet(obj, prev, next));
	return next;
}

int32_t AtomicIntegerFieldUpdater::decrementAndGet(Object$* obj) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = prev - 1;
	} while (!compareAndSet(obj, prev, next));
	return next;
}

int32_t AtomicIntegerFieldUpdater::addAndGet(Object$* obj, int32_t delta) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = prev + delta;
	} while (!compareAndSet(obj, prev, next));
	return next;
}

int32_t AtomicIntegerFieldUpdater::getAndUpdate(Object$* obj, $IntUnaryOperator* updateFunction) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = $nc(updateFunction)->applyAsInt(prev);
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int32_t AtomicIntegerFieldUpdater::updateAndGet(Object$* obj, $IntUnaryOperator* updateFunction) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = $nc(updateFunction)->applyAsInt(prev);
	} while (!compareAndSet(obj, prev, next));
	return next;
}

int32_t AtomicIntegerFieldUpdater::getAndAccumulate(Object$* obj, int32_t x, $IntBinaryOperator* accumulatorFunction) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = $nc(accumulatorFunction)->applyAsInt(prev, x);
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int32_t AtomicIntegerFieldUpdater::accumulateAndGet(Object$* obj, int32_t x, $IntBinaryOperator* accumulatorFunction) {
	int32_t prev = 0;
	int32_t next = 0;
	do {
		prev = get(obj);
		next = $nc(accumulatorFunction)->applyAsInt(prev, x);
	} while (!compareAndSet(obj, prev, next));
	return next;
}

AtomicIntegerFieldUpdater::AtomicIntegerFieldUpdater() {
}

$Class* AtomicIntegerFieldUpdater::load$($String* name, bool initialize) {
	$loadClass(AtomicIntegerFieldUpdater, name, initialize, &_AtomicIntegerFieldUpdater_ClassInfo_, allocate$AtomicIntegerFieldUpdater);
	return class$;
}

$Class* AtomicIntegerFieldUpdater::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java