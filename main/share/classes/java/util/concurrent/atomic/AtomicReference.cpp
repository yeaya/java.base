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

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$NamedAttribute AtomicReference_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AtomicReference_MethodAnnotations_weakCompareAndSet21[] = {
	{"Ljava/lang/Deprecated;", AtomicReference_Attribute_var$0},
	{}
};

$FieldInfo _AtomicReference_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicReference, serialVersionUID)},
	{"VALUE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicReference, VALUE)},
	{"value", "Ljava/lang/Object;", "TV;", $PRIVATE | $VOLATILE, $field(AtomicReference, value)},
	{}
};

$MethodInfo _AtomicReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC, $method(static_cast<void(AtomicReference::*)(Object$*)>(&AtomicReference::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AtomicReference::*)()>(&AtomicReference::init$))},
	{"accumulateAndGet", "(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TV;Ljava/util/function/BinaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)(Object$*,$BinaryOperator*)>(&AtomicReference::accumulateAndGet))},
	{"compareAndExchange", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TV;TV;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::compareAndExchange))},
	{"compareAndExchangeAcquire", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TV;TV;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::compareAndExchangeAcquire))},
	{"compareAndExchangeRelease", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TV;TV;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::compareAndExchangeRelease))},
	{"compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(static_cast<bool(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::compareAndSet))},
	{"get", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)()>(&AtomicReference::get))},
	{"getAcquire", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)()>(&AtomicReference::getAcquire))},
	{"getAndAccumulate", "(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TV;Ljava/util/function/BinaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)(Object$*,$BinaryOperator*)>(&AtomicReference::getAndAccumulate))},
	{"getAndSet", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)(Object$*)>(&AtomicReference::getAndSet))},
	{"getAndUpdate", "(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;", "(Ljava/util/function/UnaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)($UnaryOperator*)>(&AtomicReference::getAndUpdate))},
	{"getOpaque", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)()>(&AtomicReference::getOpaque))},
	{"getPlain", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)()>(&AtomicReference::getPlain))},
	{"lazySet", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(static_cast<void(AtomicReference::*)(Object$*)>(&AtomicReference::lazySet))},
	{"set", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(static_cast<void(AtomicReference::*)(Object$*)>(&AtomicReference::set))},
	{"setOpaque", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(static_cast<void(AtomicReference::*)(Object$*)>(&AtomicReference::setOpaque))},
	{"setPlain", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(static_cast<void(AtomicReference::*)(Object$*)>(&AtomicReference::setPlain))},
	{"setRelease", "(Ljava/lang/Object;)V", "(TV;)V", $PUBLIC | $FINAL, $method(static_cast<void(AtomicReference::*)(Object$*)>(&AtomicReference::setRelease))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAndGet", "(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;", "(Ljava/util/function/UnaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReference::*)($UnaryOperator*)>(&AtomicReference::updateAndGet))},
	{"weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<bool(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::weakCompareAndSet)), nullptr, nullptr, _AtomicReference_MethodAnnotations_weakCompareAndSet21},
	{"weakCompareAndSetAcquire", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(static_cast<bool(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::weakCompareAndSetAcquire))},
	{"weakCompareAndSetPlain", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(static_cast<bool(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::weakCompareAndSetPlain))},
	{"weakCompareAndSetRelease", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(static_cast<bool(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::weakCompareAndSetRelease))},
	{"weakCompareAndSetVolatile", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TV;TV;)Z", $PUBLIC | $FINAL, $method(static_cast<bool(AtomicReference::*)(Object$*,Object$*)>(&AtomicReference::weakCompareAndSetVolatile))},
	{}
};

$ClassInfo _AtomicReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.AtomicReference",
	"java.lang.Object",
	"java.io.Serializable",
	_AtomicReference_FieldInfo_,
	_AtomicReference_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/io/Serializable;"
};

$Object* allocate$AtomicReference($Class* clazz) {
	return $of($alloc(AtomicReference));
}

$VarHandle* AtomicReference::VALUE = nullptr;

void AtomicReference::init$(Object$* initialValue) {
	$set(this, value, initialValue);
}

void AtomicReference::init$() {
}

$Object* AtomicReference::get() {
	return $of(this->value);
}

void AtomicReference::set(Object$* newValue) {
	$set(this, value, newValue);
}

void AtomicReference::lazySet(Object$* newValue) {
	$nc(AtomicReference::VALUE)->setRelease($$new($ObjectArray, {$of(this), newValue}));
}

bool AtomicReference::compareAndSet(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->compareAndSet($$new($ObjectArray, {$of(this), expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSet(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSetPlain($$new($ObjectArray, {$of(this), expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSetPlain(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSetPlain($$new($ObjectArray, {$of(this), expectedValue, newValue}));
}

$Object* AtomicReference::getAndSet(Object$* newValue) {
	return $of($nc(AtomicReference::VALUE)->getAndSet($$new($ObjectArray, {$of(this), newValue})));
}

$Object* AtomicReference::getAndUpdate($UnaryOperator* updateFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, prev, get());
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(updateFunction)->apply(prev));
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return $of(prev);
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get())));
	}
}

$Object* AtomicReference::updateAndGet($UnaryOperator* updateFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, prev, get());
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(updateFunction)->apply(prev));
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return $of(next);
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get())));
	}
}

$Object* AtomicReference::getAndAccumulate(Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, prev, get());
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(accumulatorFunction)->apply(prev, x));
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return $of(prev);
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get())));
	}
}

$Object* AtomicReference::accumulateAndGet(Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, prev, get());
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(accumulatorFunction)->apply(prev, x));
		}
		if (weakCompareAndSetVolatile(prev, next)) {
			return $of(next);
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get())));
	}
}

$String* AtomicReference::toString() {
	return $String::valueOf($(get()));
}

$Object* AtomicReference::getPlain() {
	return $of($nc(AtomicReference::VALUE)->get($$new($ObjectArray, {$of(this)})));
}

void AtomicReference::setPlain(Object$* newValue) {
	$nc(AtomicReference::VALUE)->set($$new($ObjectArray, {$of(this), newValue}));
}

$Object* AtomicReference::getOpaque() {
	return $of($nc(AtomicReference::VALUE)->getOpaque($$new($ObjectArray, {$of(this)})));
}

void AtomicReference::setOpaque(Object$* newValue) {
	$nc(AtomicReference::VALUE)->setOpaque($$new($ObjectArray, {$of(this), newValue}));
}

$Object* AtomicReference::getAcquire() {
	return $of($nc(AtomicReference::VALUE)->getAcquire($$new($ObjectArray, {$of(this)})));
}

void AtomicReference::setRelease(Object$* newValue) {
	$nc(AtomicReference::VALUE)->setRelease($$new($ObjectArray, {$of(this), newValue}));
}

$Object* AtomicReference::compareAndExchange(Object$* expectedValue, Object$* newValue) {
	return $of($nc(AtomicReference::VALUE)->compareAndExchange($$new($ObjectArray, {$of(this), expectedValue, newValue})));
}

$Object* AtomicReference::compareAndExchangeAcquire(Object$* expectedValue, Object$* newValue) {
	return $of($nc(AtomicReference::VALUE)->compareAndExchangeAcquire($$new($ObjectArray, {$of(this), expectedValue, newValue})));
}

$Object* AtomicReference::compareAndExchangeRelease(Object$* expectedValue, Object$* newValue) {
	return $of($nc(AtomicReference::VALUE)->compareAndExchangeRelease($$new($ObjectArray, {$of(this), expectedValue, newValue})));
}

bool AtomicReference::weakCompareAndSetVolatile(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSet($$new($ObjectArray, {$of(this), expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSetAcquire(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSetAcquire($$new($ObjectArray, {$of(this), expectedValue, newValue}));
}

bool AtomicReference::weakCompareAndSetRelease(Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReference::VALUE)->weakCompareAndSetRelease($$new($ObjectArray, {$of(this), expectedValue, newValue}));
}

void clinit$AtomicReference($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(AtomicReference::VALUE, $nc(l)->findVarHandle(AtomicReference::class$, "value"_s, $Object::class$));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

AtomicReference::AtomicReference() {
}

$Class* AtomicReference::load$($String* name, bool initialize) {
	$loadClass(AtomicReference, name, initialize, &_AtomicReference_ClassInfo_, clinit$AtomicReference, allocate$AtomicReference);
	return class$;
}

$Class* AtomicReference::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java