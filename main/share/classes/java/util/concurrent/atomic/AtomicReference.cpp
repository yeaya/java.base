#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/UnaryOperator.h>
#include <jcpp.h>

#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$VarHandle* AtomicReference::VALUE = nullptr;

void AtomicReference::init$(Object$* initialValue) {
	$set(this, value, initialValue);
}

void AtomicReference::init$() {
}

$Object* AtomicReference::get() {
	return this->value;
}

void AtomicReference::set(Object$* newValue) {
	$set(this, value, newValue);
}

void AtomicReference::lazySet(Object$* newValue) {
	$nc(AtomicReference::VALUE)->setRelease($$new($ObjectArray, {this, newValue}));
}

bool AtomicReference::compareAndSet(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->compareAndSet($$new($ObjectArray, {this, expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSet(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSetPlain($$new($ObjectArray, {this, expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSetPlain(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSetPlain($$new($ObjectArray, {this, expectedValue, newValue}));
}

$Object* AtomicReference::getAndSet(Object$* newValue) {
	return $nc(AtomicReference::VALUE)->getAndSet($$new($ObjectArray, {this, newValue}));
}

$Object* AtomicReference::getAndUpdate($UnaryOperator* updateFunction) {
	$useLocalObjectStack();
	$var($Object, prev, get());
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(updateFunction)->apply(prev));
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return prev;
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get())));
	}
}

$Object* AtomicReference::updateAndGet($UnaryOperator* updateFunction) {
	$useLocalObjectStack();
	$var($Object, prev, get());
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(updateFunction)->apply(prev));
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return next;
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get())));
	}
}

$Object* AtomicReference::getAndAccumulate(Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalObjectStack();
	$var($Object, prev, get());
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(accumulatorFunction)->apply(prev, x));
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return prev;
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get())));
	}
}

$Object* AtomicReference::accumulateAndGet(Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalObjectStack();
	$var($Object, prev, get());
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(accumulatorFunction)->apply(prev, x));
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return next;
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get())));
	}
}

$String* AtomicReference::toString() {
	return $String::valueOf($(get()));
}

$Object* AtomicReference::getPlain() {
	return $nc(AtomicReference::VALUE)->get($$new($ObjectArray, {this}));
}

void AtomicReference::setPlain(Object$* newValue) {
	$nc(AtomicReference::VALUE)->set($$new($ObjectArray, {this, newValue}));
}

$Object* AtomicReference::getOpaque() {
	return $nc(AtomicReference::VALUE)->getOpaque($$new($ObjectArray, {this}));
}

void AtomicReference::setOpaque(Object$* newValue) {
	$nc(AtomicReference::VALUE)->setOpaque($$new($ObjectArray, {this, newValue}));
}

$Object* AtomicReference::getAcquire() {
	return $nc(AtomicReference::VALUE)->getAcquire($$new($ObjectArray, {this}));
}

void AtomicReference::setRelease(Object$* newValue) {
	$nc(AtomicReference::VALUE)->setRelease($$new($ObjectArray, {this, newValue}));
}

$Object* AtomicReference::compareAndExchange(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->compareAndExchange($$new($ObjectArray, {this, expectedValue, newValue}));
}

$Object* AtomicReference::compareAndExchangeAcquire(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->compareAndExchangeAcquire($$new($ObjectArray, {this, expectedValue, newValue}));
}

$Object* AtomicReference::compareAndExchangeRelease(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->compareAndExchangeRelease($$new($ObjectArray, {this, expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSetVolatile(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSet($$new($ObjectArray, {this, expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSetAcquire(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSetAcquire($$new($ObjectArray, {this, expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSetRelease(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSetRelease($$new($ObjectArray, {this, expectedValue, newValue}));
}

void AtomicReference::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(AtomicReference::VALUE, $nc(l)->findVarHandle(AtomicReference::class$, "value"_s, $Object::class$));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, e);
		}
	}
}

AtomicReference::AtomicReference() {
}

$Class* AtomicReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicReference, serialVersionUID)},
		{"VALUE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicReference, VALUE)},
		{"value", "Ljava/lang/Object;", "TV;", $PRIVATE | $VOLATILE, $field(AtomicReference, value)},
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
		{"<init>", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC, $method(AtomicReference, init$, void, Object$*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AtomicReference, init$, void)},
		{"accumulateAndGet", "(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TV;Ljava/util/function/BinaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(AtomicReference, accumulateAndGet, $Object*, Object$*, $BinaryOperator*)},
		{"compareAndExchange", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TV;TV;)TV;", $PUBLIC | $FINAL, $method(AtomicReference, compareAndExchange, $Object*, Object$*, Object$*)},
		{"compareAndExchangeAcquire", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TV;TV;)TV;", $PUBLIC | $FINAL, $method(AtomicReference, compareAndExchangeAcquire, $Object*, Object$*, Object$*)},
		{"compareAndExchangeRelease", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TV;TV;)TV;", $PUBLIC | $FINAL, $method(AtomicReference, compareAndExchangeRelease, $Object*, Object$*, Object$*)},
		{"compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(AtomicReference, compareAndSet, bool, Object$*, Object$*)},
		{"get", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $method(AtomicReference, get, $Object*)},
		{"getAcquire", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $method(AtomicReference, getAcquire, $Object*)},
		{"getAndAccumulate", "(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TV;Ljava/util/function/BinaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(AtomicReference, getAndAccumulate, $Object*, Object$*, $BinaryOperator*)},
		{"getAndSet", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC | $FINAL, $method(AtomicReference, getAndSet, $Object*, Object$*)},
		{"getAndUpdate", "(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;", "(Ljava/util/function/UnaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(AtomicReference, getAndUpdate, $Object*, $UnaryOperator*)},
		{"getOpaque", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $method(AtomicReference, getOpaque, $Object*)},
		{"getPlain", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $method(AtomicReference, getPlain, $Object*)},
		{"lazySet", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(AtomicReference, lazySet, void, Object$*)},
		{"set", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(AtomicReference, set, void, Object$*)},
		{"setOpaque", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(AtomicReference, setOpaque, void, Object$*)},
		{"setPlain", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(AtomicReference, setPlain, void, Object$*)},
		{"setRelease", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(AtomicReference, setRelease, void, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AtomicReference, toString, $String*)},
		{"updateAndGet", "(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;", "(Ljava/util/function/UnaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(AtomicReference, updateAndGet, $Object*, $UnaryOperator*)},
		{"weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL | $DEPRECATED, $method(AtomicReference, weakCompareAndSet, bool, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(AtomicReference, weakCompareAndSetAcquire, bool, Object$*, Object$*)},
		{"weakCompareAndSetPlain", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(AtomicReference, weakCompareAndSetPlain, bool, Object$*, Object$*)},
		{"weakCompareAndSetRelease", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(AtomicReference, weakCompareAndSetRelease, bool, Object$*, Object$*)},
		{"weakCompareAndSetVolatile", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(AtomicReference, weakCompareAndSetVolatile, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.atomic.AtomicReference",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/io/Serializable;"
	};
	$loadClass(AtomicReference, name, initialize, &classInfo$$, AtomicReference::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicReference);
	});
	return class$;
}

$Class* AtomicReference::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java