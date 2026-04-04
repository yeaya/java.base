#include <java/util/concurrent/atomic/AtomicReferenceArray.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Field.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/UnaryOperator.h>
#include <jcpp.h>

#undef AA

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $1Array = ::java::lang::reflect::Array;
using $Field = ::java::lang::reflect::Field;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class AtomicReferenceArray$$Lambda$lambda$readObject$0 : public $PrivilegedAction {
	$class(AtomicReferenceArray$$Lambda$lambda$readObject$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(AtomicReferenceArray::lambda$readObject$0());
	}
};
$Class* AtomicReferenceArray$$Lambda$lambda$readObject$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AtomicReferenceArray$$Lambda$lambda$readObject$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AtomicReferenceArray$$Lambda$lambda$readObject$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.concurrent.atomic.AtomicReferenceArray$$Lambda$lambda$readObject$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(AtomicReferenceArray$$Lambda$lambda$readObject$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicReferenceArray$$Lambda$lambda$readObject$0);
	});
	return class$;
}
$Class* AtomicReferenceArray$$Lambda$lambda$readObject$0::class$ = nullptr;

$VarHandle* AtomicReferenceArray::AA = nullptr;

void AtomicReferenceArray::init$(int32_t length) {
	$set(this, array, $new($ObjectArray, length));
}

void AtomicReferenceArray::init$($ObjectArray* array) {
	$set(this, array, $Arrays::copyOf(array, $nc(array)->length, $getClass($ObjectArray)));
}

int32_t AtomicReferenceArray::length() {
	return $nc(this->array)->length;
}

$Object* AtomicReferenceArray::get(int32_t i) {
	return $nc(AtomicReferenceArray::AA)->getVolatile($$new($ObjectArray, {this->array, $$of(i)}));
}

void AtomicReferenceArray::set(int32_t i, Object$* newValue) {
	$nc(AtomicReferenceArray::AA)->setVolatile($$new($ObjectArray, {this->array, $$of(i), newValue}));
}

void AtomicReferenceArray::lazySet(int32_t i, Object$* newValue) {
	$nc(AtomicReferenceArray::AA)->setRelease($$new($ObjectArray, {this->array, $$of(i), newValue}));
}

$Object* AtomicReferenceArray::getAndSet(int32_t i, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->getAndSet($$new($ObjectArray, {this->array, $$of(i), newValue}));
}

bool AtomicReferenceArray::compareAndSet(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->compareAndSet($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

bool AtomicReferenceArray::weakCompareAndSet(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->weakCompareAndSetPlain($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

bool AtomicReferenceArray::weakCompareAndSetPlain(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->weakCompareAndSetPlain($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

$Object* AtomicReferenceArray::getAndUpdate(int32_t i, $UnaryOperator* updateFunction) {
	$useLocalObjectStack();
	$var($Object, prev, get(i));
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(updateFunction)->apply(prev));
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return prev;
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get(i))));
	}
}

$Object* AtomicReferenceArray::updateAndGet(int32_t i, $UnaryOperator* updateFunction) {
	$useLocalObjectStack();
	$var($Object, prev, get(i));
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(updateFunction)->apply(prev));
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return next;
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get(i))));
	}
}

$Object* AtomicReferenceArray::getAndAccumulate(int32_t i, Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalObjectStack();
	$var($Object, prev, get(i));
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(accumulatorFunction)->apply(prev, x));
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return prev;
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get(i))));
	}
}

$Object* AtomicReferenceArray::accumulateAndGet(int32_t i, Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalObjectStack();
	$var($Object, prev, get(i));
	$var($Object, next, nullptr);
	for (bool haveNext = false;;) {
		if (!haveNext) {
			$assign(next, $nc(accumulatorFunction)->apply(prev, x));
		}
		if (weakCompareAndSetVolatile(i, prev, next)) {
			return next;
		}
		$var($Object, var$0, prev);
		haveNext = ($equals(var$0, $assign(prev, get(i))));
	}
}

$String* AtomicReferenceArray::toString() {
	$useLocalObjectStack();
	int32_t iMax = $nc(this->array)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append($(get(i)));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(u',')->append(u' ');
	}
}

void AtomicReferenceArray::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Object, a, $$nc($nc(s)->readFields())->get("array"_s, nullptr));
	if (a == nullptr || !a->getClass()->isArray()) {
		$throwNew($InvalidObjectException, "Not array type"_s);
	}
	if ($nc(a)->getClass() != $getClass($ObjectArray)) {
		$assign(a, $Arrays::copyOf($cast($ObjectArray, a), $1Array::getLength(a), $getClass($ObjectArray)));
	}
	$var($Field, arrayField, $cast($Field, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(AtomicReferenceArray$$Lambda$lambda$readObject$0)))));
	try {
		$nc(arrayField)->set(this, a);
	} catch ($IllegalAccessException& e) {
		$throwNew($Error, e);
	}
}

$Object* AtomicReferenceArray::getPlain(int32_t i) {
	return $nc(AtomicReferenceArray::AA)->get($$new($ObjectArray, {this->array, $$of(i)}));
}

void AtomicReferenceArray::setPlain(int32_t i, Object$* newValue) {
	$nc(AtomicReferenceArray::AA)->set($$new($ObjectArray, {this->array, $$of(i), newValue}));
}

$Object* AtomicReferenceArray::getOpaque(int32_t i) {
	return $nc(AtomicReferenceArray::AA)->getOpaque($$new($ObjectArray, {this->array, $$of(i)}));
}

void AtomicReferenceArray::setOpaque(int32_t i, Object$* newValue) {
	$nc(AtomicReferenceArray::AA)->setOpaque($$new($ObjectArray, {this->array, $$of(i), newValue}));
}

$Object* AtomicReferenceArray::getAcquire(int32_t i) {
	return $nc(AtomicReferenceArray::AA)->getAcquire($$new($ObjectArray, {this->array, $$of(i)}));
}

void AtomicReferenceArray::setRelease(int32_t i, Object$* newValue) {
	$nc(AtomicReferenceArray::AA)->setRelease($$new($ObjectArray, {this->array, $$of(i), newValue}));
}

$Object* AtomicReferenceArray::compareAndExchange(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->compareAndExchange($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

$Object* AtomicReferenceArray::compareAndExchangeAcquire(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->compareAndExchangeAcquire($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

$Object* AtomicReferenceArray::compareAndExchangeRelease(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->compareAndExchangeRelease($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

bool AtomicReferenceArray::weakCompareAndSetVolatile(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->weakCompareAndSet($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

bool AtomicReferenceArray::weakCompareAndSetAcquire(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->weakCompareAndSetAcquire($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

bool AtomicReferenceArray::weakCompareAndSetRelease(int32_t i, Object$* expectedValue, Object$* newValue) {
	return $nc(AtomicReferenceArray::AA)->weakCompareAndSetRelease($$new($ObjectArray, {this->array, $$of(i), expectedValue, newValue}));
}

$Field* AtomicReferenceArray::lambda$readObject$0() {
	$init(AtomicReferenceArray);
	$beforeCallerSensitive();
	try {
		$var($Field, f, AtomicReferenceArray::class$->getDeclaredField("array"_s));
		$nc(f)->setAccessible(true);
		return f;
	} catch ($ReflectiveOperationException& e) {
		$throwNew($Error, e);
	}
	$shouldNotReachHere();
}

void AtomicReferenceArray::clinit$($Class* clazz) {
	$assignStatic(AtomicReferenceArray::AA, $MethodHandles::arrayElementVarHandle($getClass($ObjectArray)));
}

AtomicReferenceArray::AtomicReferenceArray() {
}

$Class* AtomicReferenceArray::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.concurrent.atomic.AtomicReferenceArray$$Lambda$lambda$readObject$0")) {
			return AtomicReferenceArray$$Lambda$lambda$readObject$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicReferenceArray, serialVersionUID)},
		{"AA", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicReferenceArray, AA)},
		{"array", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AtomicReferenceArray, array)},
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
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(AtomicReferenceArray, init$, void, int32_t)},
		{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC, $method(AtomicReferenceArray, init$, void, $ObjectArray*)},
		{"accumulateAndGet", "(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(ITE;Ljava/util/function/BinaryOperator<TE;>;)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, accumulateAndGet, $Object*, int32_t, Object$*, $BinaryOperator*)},
		{"compareAndExchange", "(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(ITE;TE;)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, compareAndExchange, $Object*, int32_t, Object$*, Object$*)},
		{"compareAndExchangeAcquire", "(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(ITE;TE;)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, compareAndExchangeAcquire, $Object*, int32_t, Object$*, Object$*)},
		{"compareAndExchangeRelease", "(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(ITE;TE;)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, compareAndExchangeRelease, $Object*, int32_t, Object$*, Object$*)},
		{"compareAndSet", "(ILjava/lang/Object;Ljava/lang/Object;)Z", "(ITE;TE;)Z", $PUBLIC | $FINAL, $method(AtomicReferenceArray, compareAndSet, bool, int32_t, Object$*, Object$*)},
		{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, get, $Object*, int32_t)},
		{"getAcquire", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, getAcquire, $Object*, int32_t)},
		{"getAndAccumulate", "(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(ITE;Ljava/util/function/BinaryOperator<TE;>;)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, getAndAccumulate, $Object*, int32_t, Object$*, $BinaryOperator*)},
		{"getAndSet", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, getAndSet, $Object*, int32_t, Object$*)},
		{"getAndUpdate", "(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;", "(ILjava/util/function/UnaryOperator<TE;>;)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, getAndUpdate, $Object*, int32_t, $UnaryOperator*)},
		{"getOpaque", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, getOpaque, $Object*, int32_t)},
		{"getPlain", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, getPlain, $Object*, int32_t)},
		{"lambda$readObject$0", "()Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AtomicReferenceArray, lambda$readObject$0, $Field*)},
		{"lazySet", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC | $FINAL, $method(AtomicReferenceArray, lazySet, void, int32_t, Object$*)},
		{"length", "()I", nullptr, $PUBLIC | $FINAL, $method(AtomicReferenceArray, length, int32_t)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(AtomicReferenceArray, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"set", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC | $FINAL, $method(AtomicReferenceArray, set, void, int32_t, Object$*)},
		{"setOpaque", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC | $FINAL, $method(AtomicReferenceArray, setOpaque, void, int32_t, Object$*)},
		{"setPlain", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC | $FINAL, $method(AtomicReferenceArray, setPlain, void, int32_t, Object$*)},
		{"setRelease", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC | $FINAL, $method(AtomicReferenceArray, setRelease, void, int32_t, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AtomicReferenceArray, toString, $String*)},
		{"updateAndGet", "(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;", "(ILjava/util/function/UnaryOperator<TE;>;)TE;", $PUBLIC | $FINAL, $method(AtomicReferenceArray, updateAndGet, $Object*, int32_t, $UnaryOperator*)},
		{"weakCompareAndSet", "(ILjava/lang/Object;Ljava/lang/Object;)Z", "(ITE;TE;)Z", $PUBLIC | $FINAL | $DEPRECATED, $method(AtomicReferenceArray, weakCompareAndSet, bool, int32_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(ILjava/lang/Object;Ljava/lang/Object;)Z", "(ITE;TE;)Z", $PUBLIC | $FINAL, $method(AtomicReferenceArray, weakCompareAndSetAcquire, bool, int32_t, Object$*, Object$*)},
		{"weakCompareAndSetPlain", "(ILjava/lang/Object;Ljava/lang/Object;)Z", "(ITE;TE;)Z", $PUBLIC | $FINAL, $method(AtomicReferenceArray, weakCompareAndSetPlain, bool, int32_t, Object$*, Object$*)},
		{"weakCompareAndSetRelease", "(ILjava/lang/Object;Ljava/lang/Object;)Z", "(ITE;TE;)Z", $PUBLIC | $FINAL, $method(AtomicReferenceArray, weakCompareAndSetRelease, bool, int32_t, Object$*, Object$*)},
		{"weakCompareAndSetVolatile", "(ILjava/lang/Object;Ljava/lang/Object;)Z", "(ITE;TE;)Z", $PUBLIC | $FINAL, $method(AtomicReferenceArray, weakCompareAndSetVolatile, bool, int32_t, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.atomic.AtomicReferenceArray",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/io/Serializable;"
	};
	$loadClass(AtomicReferenceArray, name, initialize, &classInfo$$, AtomicReferenceArray::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicReferenceArray);
	});
	return class$;
}

$Class* AtomicReferenceArray::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java