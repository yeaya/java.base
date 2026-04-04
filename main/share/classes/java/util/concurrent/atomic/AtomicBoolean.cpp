#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

#undef TYPE
#undef VALUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$VarHandle* AtomicBoolean::VALUE = nullptr;

void AtomicBoolean::init$(bool initialValue) {
	if (initialValue) {
		this->value = 1;
	}
}

void AtomicBoolean::init$() {
}

bool AtomicBoolean::get() {
	return this->value != 0;
}

bool AtomicBoolean::compareAndSet(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->compareAndSet($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}));
}

bool AtomicBoolean::weakCompareAndSet(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSetPlain($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}));
}

bool AtomicBoolean::weakCompareAndSetPlain(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSetPlain($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}));
}

void AtomicBoolean::set(bool newValue) {
	this->value = newValue ? 1 : 0;
}

void AtomicBoolean::lazySet(bool newValue) {
	$nc(AtomicBoolean::VALUE)->setRelease($$new($ObjectArray, {this, ($$of(newValue ? 1 : 0))}));
}

bool AtomicBoolean::getAndSet(bool newValue) {
	return $intValue($nc(AtomicBoolean::VALUE)->getAndSet($$new($ObjectArray, {this, ($$of(newValue ? 1 : 0))}))) != 0;
}

$String* AtomicBoolean::toString() {
	return $Boolean::toString(get());
}

bool AtomicBoolean::getPlain() {
	return $intValue($nc(AtomicBoolean::VALUE)->get($$new($ObjectArray, {this}))) != 0;
}

void AtomicBoolean::setPlain(bool newValue) {
	$nc(AtomicBoolean::VALUE)->set($$new($ObjectArray, {this, $$of(newValue ? 1 : 0)}));
}

bool AtomicBoolean::getOpaque() {
	return $intValue($nc(AtomicBoolean::VALUE)->getOpaque($$new($ObjectArray, {this}))) != 0;
}

void AtomicBoolean::setOpaque(bool newValue) {
	$nc(AtomicBoolean::VALUE)->setOpaque($$new($ObjectArray, {this, $$of(newValue ? 1 : 0)}));
}

bool AtomicBoolean::getAcquire() {
	return $intValue($nc(AtomicBoolean::VALUE)->getAcquire($$new($ObjectArray, {this}))) != 0;
}

void AtomicBoolean::setRelease(bool newValue) {
	$nc(AtomicBoolean::VALUE)->setRelease($$new($ObjectArray, {this, $$of(newValue ? 1 : 0)}));
}

bool AtomicBoolean::compareAndExchange(bool expectedValue, bool newValue) {
	return $intValue($nc(AtomicBoolean::VALUE)->compareAndExchange($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}))) != 0;
}

bool AtomicBoolean::compareAndExchangeAcquire(bool expectedValue, bool newValue) {
	return $intValue($nc(AtomicBoolean::VALUE)->compareAndExchangeAcquire($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}))) != 0;
}

bool AtomicBoolean::compareAndExchangeRelease(bool expectedValue, bool newValue) {
	return $intValue($nc(AtomicBoolean::VALUE)->compareAndExchangeRelease($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}))) != 0;
}

bool AtomicBoolean::weakCompareAndSetVolatile(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSet($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}));
}

bool AtomicBoolean::weakCompareAndSetAcquire(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSetAcquire($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}));
}

bool AtomicBoolean::weakCompareAndSetRelease(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSetRelease($$new($ObjectArray, {this, ($$of(expectedValue ? 1 : 0)), ($$of(newValue ? 1 : 0))}));
}

void AtomicBoolean::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(AtomicBoolean::VALUE, $nc(l)->findVarHandle(AtomicBoolean::class$, "value"_s, $Integer::TYPE));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, e);
		}
	}
}

AtomicBoolean::AtomicBoolean() {
}

$Class* AtomicBoolean::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicBoolean, serialVersionUID)},
		{"VALUE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicBoolean, VALUE)},
		{"value", "I", nullptr, $PRIVATE | $VOLATILE, $field(AtomicBoolean, value)},
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
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(AtomicBoolean, init$, void, bool)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AtomicBoolean, init$, void)},
		{"compareAndExchange", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, compareAndExchange, bool, bool, bool)},
		{"compareAndExchangeAcquire", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, compareAndExchangeAcquire, bool, bool, bool)},
		{"compareAndExchangeRelease", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, compareAndExchangeRelease, bool, bool, bool)},
		{"compareAndSet", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, compareAndSet, bool, bool, bool)},
		{"get", "()Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, get, bool)},
		{"getAcquire", "()Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, getAcquire, bool)},
		{"getAndSet", "(Z)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, getAndSet, bool, bool)},
		{"getOpaque", "()Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, getOpaque, bool)},
		{"getPlain", "()Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, getPlain, bool)},
		{"lazySet", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, lazySet, void, bool)},
		{"set", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, set, void, bool)},
		{"setOpaque", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, setOpaque, void, bool)},
		{"setPlain", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, setPlain, void, bool)},
		{"setRelease", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, setRelease, void, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AtomicBoolean, toString, $String*)},
		{"weakCompareAndSet", "(ZZ)Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(AtomicBoolean, weakCompareAndSet, bool, bool, bool), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, weakCompareAndSetAcquire, bool, bool, bool)},
		{"weakCompareAndSetPlain", "(ZZ)Z", nullptr, $PUBLIC, $virtualMethod(AtomicBoolean, weakCompareAndSetPlain, bool, bool, bool)},
		{"weakCompareAndSetRelease", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, weakCompareAndSetRelease, bool, bool, bool)},
		{"weakCompareAndSetVolatile", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(AtomicBoolean, weakCompareAndSetVolatile, bool, bool, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.atomic.AtomicBoolean",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AtomicBoolean, name, initialize, &classInfo$$, AtomicBoolean::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicBoolean);
	});
	return class$;
}

$Class* AtomicBoolean::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java