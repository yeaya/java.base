#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Modifier.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater$1.h>
#include <java/util/concurrent/atomic/AtomicLongFieldUpdater.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef TYPE
#undef U

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $Modifier = ::java::lang::reflect::Modifier;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $AtomicLongFieldUpdater = ::java::util::concurrent::atomic::AtomicLongFieldUpdater;
using $AtomicLongFieldUpdater$LockedUpdater$1 = ::java::util::concurrent::atomic::AtomicLongFieldUpdater$LockedUpdater$1;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$Unsafe* AtomicLongFieldUpdater$LockedUpdater::U = nullptr;

void AtomicLongFieldUpdater$LockedUpdater::init$($Class* tclass, $String* fieldName, $Class* caller) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$AtomicLongFieldUpdater::init$();
	$var($Field, field, nullptr);
	int32_t modifiers = 0;
	try {
		$assign(field, $cast($Field, $AccessController::doPrivileged($$new($AtomicLongFieldUpdater$LockedUpdater$1, this, tclass, fieldName))));
		modifiers = $nc(field)->getModifiers();
		$ReflectUtil::ensureMemberAccess(caller, tclass, nullptr, modifiers);
		$var($ClassLoader, cl, $nc(tclass)->getClassLoader());
		$var($ClassLoader, ccl, $nc(caller)->getClassLoader());
		if ((ccl != nullptr) && (ccl != cl) && ((cl == nullptr) || !isAncestor(cl, ccl))) {
			$ReflectUtil::checkPackageAccess(tclass);
		}
	} catch ($PrivilegedActionException& pae) {
		$throwNew($RuntimeException, $(pae->getException()));
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
	if ($nc(field)->getType() != $Long::TYPE) {
		$throwNew($IllegalArgumentException, "Must be long type"_s);
	}
	if (!$Modifier::isVolatile(modifiers)) {
		$throwNew($IllegalArgumentException, "Must be volatile type"_s);
	}
	bool var$1 = $Modifier::isProtected(modifiers);
	bool var$0 = var$1 && $nc(tclass)->isAssignableFrom(caller);
	$set(this, cclass, (var$0 && !isSamePackage(tclass, caller)) ? caller : tclass);
	$set(this, tclass, tclass);
	this->offset = $nc(AtomicLongFieldUpdater$LockedUpdater::U)->objectFieldOffset(field);
}

void AtomicLongFieldUpdater$LockedUpdater::accessCheck(Object$* obj) {
	if (!$nc(this->cclass)->isInstance(obj)) {
		$throw($(accessCheckException(obj)));
	}
}

$RuntimeException* AtomicLongFieldUpdater$LockedUpdater::accessCheckException(Object$* obj) {
	$useLocalObjectStack();
	if (this->cclass == this->tclass) {
		return $new($ClassCastException);
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Class "_s);
		var$0->append($($nc(this->cclass)->getName()));
		var$0->append(" can not access a protected member of class "_s);
		var$0->append($($nc(this->tclass)->getName()));
		var$0->append(" using an instance of "_s);
		var$0->append($($nc($of(obj))->getClass()->getName()));
		return $new($RuntimeException, $$new($IllegalAccessException, $$str(var$0)));
	}
}

bool AtomicLongFieldUpdater$LockedUpdater::compareAndSet(Object$* obj, int64_t expect, int64_t update) {
	accessCheck(obj);
	$synchronized(this) {
		int64_t v = $nc(AtomicLongFieldUpdater$LockedUpdater::U)->getLong(obj, this->offset);
		if (v != expect) {
			return false;
		}
		AtomicLongFieldUpdater$LockedUpdater::U->putLong(obj, this->offset, update);
		return true;
	}
}

bool AtomicLongFieldUpdater$LockedUpdater::weakCompareAndSet(Object$* obj, int64_t expect, int64_t update) {
	return compareAndSet(obj, expect, update);
}

void AtomicLongFieldUpdater$LockedUpdater::set(Object$* obj, int64_t newValue) {
	accessCheck(obj);
	$synchronized(this) {
		$nc(AtomicLongFieldUpdater$LockedUpdater::U)->putLong(obj, this->offset, newValue);
	}
}

void AtomicLongFieldUpdater$LockedUpdater::lazySet(Object$* obj, int64_t newValue) {
	set(obj, newValue);
}

int64_t AtomicLongFieldUpdater$LockedUpdater::get(Object$* obj) {
	accessCheck(obj);
	$synchronized(this) {
		return $nc(AtomicLongFieldUpdater$LockedUpdater::U)->getLong(obj, this->offset);
	}
}

void AtomicLongFieldUpdater$LockedUpdater::clinit$($Class* clazz) {
	$assignStatic(AtomicLongFieldUpdater$LockedUpdater::U, $Unsafe::getUnsafe());
}

AtomicLongFieldUpdater$LockedUpdater::AtomicLongFieldUpdater$LockedUpdater() {
}

$Class* AtomicLongFieldUpdater$LockedUpdater::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicLongFieldUpdater$LockedUpdater, U)},
		{"offset", "J", nullptr, $PRIVATE | $FINAL, $field(AtomicLongFieldUpdater$LockedUpdater, offset)},
		{"cclass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(AtomicLongFieldUpdater$LockedUpdater, cclass)},
		{"tclass", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(AtomicLongFieldUpdater$LockedUpdater, tclass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/Class<*>;)V", 0, $method(AtomicLongFieldUpdater$LockedUpdater, init$, void, $Class*, $String*, $Class*)},
		{"accessCheck", "(Ljava/lang/Object;)V", "(TT;)V", $PRIVATE | $FINAL, $method(AtomicLongFieldUpdater$LockedUpdater, accessCheck, void, Object$*)},
		{"accessCheckException", "(Ljava/lang/Object;)Ljava/lang/RuntimeException;", "(TT;)Ljava/lang/RuntimeException;", $PRIVATE | $FINAL, $method(AtomicLongFieldUpdater$LockedUpdater, accessCheckException, $RuntimeException*, Object$*)},
		{"compareAndSet", "(Ljava/lang/Object;JJ)Z", "(TT;JJ)Z", $PUBLIC | $FINAL, $virtualMethod(AtomicLongFieldUpdater$LockedUpdater, compareAndSet, bool, Object$*, int64_t, int64_t)},
		{"get", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC | $FINAL, $virtualMethod(AtomicLongFieldUpdater$LockedUpdater, get, int64_t, Object$*)},
		{"lazySet", "(Ljava/lang/Object;J)V", "(TT;J)V", $PUBLIC | $FINAL, $virtualMethod(AtomicLongFieldUpdater$LockedUpdater, lazySet, void, Object$*, int64_t)},
		{"set", "(Ljava/lang/Object;J)V", "(TT;J)V", $PUBLIC | $FINAL, $virtualMethod(AtomicLongFieldUpdater$LockedUpdater, set, void, Object$*, int64_t)},
		{"weakCompareAndSet", "(Ljava/lang/Object;JJ)Z", "(TT;JJ)Z", $PUBLIC | $FINAL, $virtualMethod(AtomicLongFieldUpdater$LockedUpdater, weakCompareAndSet, bool, Object$*, int64_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater", "java.util.concurrent.atomic.AtomicLongFieldUpdater", "LockedUpdater", $PRIVATE | $STATIC | $FINAL},
		{"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater",
		"java.util.concurrent.atomic.AtomicLongFieldUpdater",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/concurrent/atomic/AtomicLongFieldUpdater<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.AtomicLongFieldUpdater"
	};
	$loadClass(AtomicLongFieldUpdater$LockedUpdater, name, initialize, &classInfo$$, AtomicLongFieldUpdater$LockedUpdater::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicLongFieldUpdater$LockedUpdater);
	});
	return class$;
}

$Class* AtomicLongFieldUpdater$LockedUpdater::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java