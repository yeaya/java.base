#include <java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h>
#include <java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/UnaryOperator.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl = ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

AtomicReferenceFieldUpdater* AtomicReferenceFieldUpdater::newUpdater($Class* tclass, $Class* vclass, $String* fieldName) {
	return $new($AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl, tclass, vclass, fieldName, $Reflection::getCallerClass());
}

void AtomicReferenceFieldUpdater::init$() {
}

$Object* AtomicReferenceFieldUpdater::getAndSet(Object$* obj, Object$* newValue) {
	$var($Object, prev, nullptr);
	do {
		$assign(prev, get(obj));
	} while (!compareAndSet(obj, prev, newValue));
	return prev;
}

$Object* AtomicReferenceFieldUpdater::getAndUpdate(Object$* obj, $UnaryOperator* updateFunction) {
	$useLocalObjectStack();
	$var($Object, prev, nullptr);
	$var($Object, next, nullptr);
	do {
		$assign(prev, get(obj));
		$assign(next, $nc(updateFunction)->apply(prev));
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

$Object* AtomicReferenceFieldUpdater::updateAndGet(Object$* obj, $UnaryOperator* updateFunction) {
	$useLocalObjectStack();
	$var($Object, prev, nullptr);
	$var($Object, next, nullptr);
	do {
		$assign(prev, get(obj));
		$assign(next, $nc(updateFunction)->apply(prev));
	} while (!compareAndSet(obj, prev, next));
	return next;
}

$Object* AtomicReferenceFieldUpdater::getAndAccumulate(Object$* obj, Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalObjectStack();
	$var($Object, prev, nullptr);
	$var($Object, next, nullptr);
	do {
		$assign(prev, get(obj));
		$assign(next, $nc(accumulatorFunction)->apply(prev, x));
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

$Object* AtomicReferenceFieldUpdater::accumulateAndGet(Object$* obj, Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalObjectStack();
	$var($Object, prev, nullptr);
	$var($Object, next, nullptr);
	do {
		$assign(prev, get(obj));
		$assign(next, $nc(accumulatorFunction)->apply(prev, x));
	} while (!compareAndSet(obj, prev, next));
	return next;
}

AtomicReferenceFieldUpdater::AtomicReferenceFieldUpdater() {
}

$Class* AtomicReferenceFieldUpdater::load$($String* name, bool initialize) {
	$CompoundAttribute newUpdatermethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AtomicReferenceFieldUpdater, init$, void)},
		{"accumulateAndGet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TT;TV;Ljava/util/function/BinaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(AtomicReferenceFieldUpdater, accumulateAndGet, $Object*, Object$*, Object$*, $BinaryOperator*)},
		{"compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TT;TV;TV;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicReferenceFieldUpdater, compareAndSet, bool, Object$*, Object$*, Object$*)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicReferenceFieldUpdater, get, $Object*, Object$*)},
		{"getAndAccumulate", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TT;TV;Ljava/util/function/BinaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(AtomicReferenceFieldUpdater, getAndAccumulate, $Object*, Object$*, Object$*, $BinaryOperator*)},
		{"getAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TT;TV;)TV;", $PUBLIC, $virtualMethod(AtomicReferenceFieldUpdater, getAndSet, $Object*, Object$*, Object$*)},
		{"getAndUpdate", "(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;", "(TT;Ljava/util/function/UnaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(AtomicReferenceFieldUpdater, getAndUpdate, $Object*, Object$*, $UnaryOperator*)},
		{"lazySet", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TV;)V", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicReferenceFieldUpdater, lazySet, void, Object$*, Object$*)},
		{"newUpdater", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;", "<U:Ljava/lang/Object;W:Ljava/lang/Object;>(Ljava/lang/Class<TU;>;Ljava/lang/Class<TW;>;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater<TU;TW;>;", $PUBLIC | $STATIC, $staticMethod(AtomicReferenceFieldUpdater, newUpdater, AtomicReferenceFieldUpdater*, $Class*, $Class*, $String*), nullptr, nullptr, newUpdatermethodAnnotations$$},
		{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TV;)V", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicReferenceFieldUpdater, set, void, Object$*, Object$*)},
		{"updateAndGet", "(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;", "(TT;Ljava/util/function/UnaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(AtomicReferenceFieldUpdater, updateAndGet, $Object*, Object$*, $UnaryOperator*)},
		{"weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TT;TV;TV;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicReferenceFieldUpdater, weakCompareAndSet, bool, Object$*, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl", "java.util.concurrent.atomic.AtomicReferenceFieldUpdater", "AtomicReferenceFieldUpdaterImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.atomic.AtomicReferenceFieldUpdater",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl,java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1"
	};
	$loadClass(AtomicReferenceFieldUpdater, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicReferenceFieldUpdater);
	});
	return class$;
}

$Class* AtomicReferenceFieldUpdater::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java