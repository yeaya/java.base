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
using $Exception = ::java::lang::Exception;
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

$NamedAttribute AtomicBoolean_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AtomicBoolean_MethodAnnotations_weakCompareAndSet17[] = {
	{"Ljava/lang/Deprecated;", AtomicBoolean_Attribute_var$0},
	{}
};

$FieldInfo _AtomicBoolean_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicBoolean, serialVersionUID)},
	{"VALUE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicBoolean, VALUE)},
	{"value", "I", nullptr, $PRIVATE | $VOLATILE, $field(AtomicBoolean, value)},
	{}
};

$MethodInfo _AtomicBoolean_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(AtomicBoolean::*)(bool)>(&AtomicBoolean::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AtomicBoolean::*)()>(&AtomicBoolean::init$))},
	{"compareAndExchange", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)(bool,bool)>(&AtomicBoolean::compareAndExchange))},
	{"compareAndExchangeAcquire", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)(bool,bool)>(&AtomicBoolean::compareAndExchangeAcquire))},
	{"compareAndExchangeRelease", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)(bool,bool)>(&AtomicBoolean::compareAndExchangeRelease))},
	{"compareAndSet", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)(bool,bool)>(&AtomicBoolean::compareAndSet))},
	{"get", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)()>(&AtomicBoolean::get))},
	{"getAcquire", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)()>(&AtomicBoolean::getAcquire))},
	{"getAndSet", "(Z)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)(bool)>(&AtomicBoolean::getAndSet))},
	{"getOpaque", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)()>(&AtomicBoolean::getOpaque))},
	{"getPlain", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)()>(&AtomicBoolean::getPlain))},
	{"lazySet", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicBoolean::*)(bool)>(&AtomicBoolean::lazySet))},
	{"set", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicBoolean::*)(bool)>(&AtomicBoolean::set))},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicBoolean::*)(bool)>(&AtomicBoolean::setOpaque))},
	{"setPlain", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicBoolean::*)(bool)>(&AtomicBoolean::setPlain))},
	{"setRelease", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AtomicBoolean::*)(bool)>(&AtomicBoolean::setRelease))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"weakCompareAndSet", "(ZZ)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _AtomicBoolean_MethodAnnotations_weakCompareAndSet17},
	{"weakCompareAndSetAcquire", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)(bool,bool)>(&AtomicBoolean::weakCompareAndSetAcquire))},
	{"weakCompareAndSetPlain", "(ZZ)Z", nullptr, $PUBLIC},
	{"weakCompareAndSetRelease", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)(bool,bool)>(&AtomicBoolean::weakCompareAndSetRelease))},
	{"weakCompareAndSetVolatile", "(ZZ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AtomicBoolean::*)(bool,bool)>(&AtomicBoolean::weakCompareAndSetVolatile))},
	{}
};

$ClassInfo _AtomicBoolean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.AtomicBoolean",
	"java.lang.Object",
	"java.io.Serializable",
	_AtomicBoolean_FieldInfo_,
	_AtomicBoolean_MethodInfo_
};

$Object* allocate$AtomicBoolean($Class* clazz) {
	return $of($alloc(AtomicBoolean));
}

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
	return $nc(AtomicBoolean::VALUE)->compareAndSet($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}));
}

bool AtomicBoolean::weakCompareAndSet(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSetPlain($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}));
}

bool AtomicBoolean::weakCompareAndSetPlain(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSetPlain($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}));
}

void AtomicBoolean::set(bool newValue) {
	this->value = newValue ? 1 : 0;
}

void AtomicBoolean::lazySet(bool newValue) {
	$nc(AtomicBoolean::VALUE)->setRelease($$new($ObjectArray, {$of(this), ($$of((newValue ? 1 : 0)))}));
}

bool AtomicBoolean::getAndSet(bool newValue) {
	return $intValue($nc(AtomicBoolean::VALUE)->getAndSet($$new($ObjectArray, {$of(this), ($$of((newValue ? 1 : 0)))}))) != 0;
}

$String* AtomicBoolean::toString() {
	return $Boolean::toString(get());
}

bool AtomicBoolean::getPlain() {
	return $intValue($nc(AtomicBoolean::VALUE)->get($$new($ObjectArray, {$of(this)}))) != 0;
}

void AtomicBoolean::setPlain(bool newValue) {
	$nc(AtomicBoolean::VALUE)->set($$new($ObjectArray, {$of(this), $$of((newValue ? 1 : 0))}));
}

bool AtomicBoolean::getOpaque() {
	return $intValue($nc(AtomicBoolean::VALUE)->getOpaque($$new($ObjectArray, {$of(this)}))) != 0;
}

void AtomicBoolean::setOpaque(bool newValue) {
	$nc(AtomicBoolean::VALUE)->setOpaque($$new($ObjectArray, {$of(this), $$of((newValue ? 1 : 0))}));
}

bool AtomicBoolean::getAcquire() {
	return $intValue($nc(AtomicBoolean::VALUE)->getAcquire($$new($ObjectArray, {$of(this)}))) != 0;
}

void AtomicBoolean::setRelease(bool newValue) {
	$nc(AtomicBoolean::VALUE)->setRelease($$new($ObjectArray, {$of(this), $$of((newValue ? 1 : 0))}));
}

bool AtomicBoolean::compareAndExchange(bool expectedValue, bool newValue) {
	return $intValue($nc(AtomicBoolean::VALUE)->compareAndExchange($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}))) != 0;
}

bool AtomicBoolean::compareAndExchangeAcquire(bool expectedValue, bool newValue) {
	return $intValue($nc(AtomicBoolean::VALUE)->compareAndExchangeAcquire($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}))) != 0;
}

bool AtomicBoolean::compareAndExchangeRelease(bool expectedValue, bool newValue) {
	return $intValue($nc(AtomicBoolean::VALUE)->compareAndExchangeRelease($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}))) != 0;
}

bool AtomicBoolean::weakCompareAndSetVolatile(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSet($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}));
}

bool AtomicBoolean::weakCompareAndSetAcquire(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSetAcquire($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}));
}

bool AtomicBoolean::weakCompareAndSetRelease(bool expectedValue, bool newValue) {
	return $nc(AtomicBoolean::VALUE)->weakCompareAndSetRelease($$new($ObjectArray, {$of(this), ($$of((expectedValue ? 1 : 0))), ($$of((newValue ? 1 : 0)))}));
}

void clinit$AtomicBoolean($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$init($Integer);
			$assignStatic(AtomicBoolean::VALUE, $nc(l)->findVarHandle(AtomicBoolean::class$, "value"_s, $Integer::TYPE));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

AtomicBoolean::AtomicBoolean() {
}

$Class* AtomicBoolean::load$($String* name, bool initialize) {
	$loadClass(AtomicBoolean, name, initialize, &_AtomicBoolean_ClassInfo_, clinit$AtomicBoolean, allocate$AtomicBoolean);
	return class$;
}

$Class* AtomicBoolean::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java