#include <java/util/concurrent/atomic/AtomicLongFieldUpdater.h>

#include <java/lang/ClassLoader.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$CASUpdater.h>
#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/LongUnaryOperator.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

#undef VM_SUPPORTS_LONG_CAS

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $AtomicLongFieldUpdater$CASUpdater = ::java::util::concurrent::atomic::AtomicLongFieldUpdater$CASUpdater;
using $AtomicLongFieldUpdater$LockedUpdater = ::java::util::concurrent::atomic::AtomicLongFieldUpdater$LockedUpdater;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $LongUnaryOperator = ::java::util::function::LongUnaryOperator;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$CompoundAttribute _AtomicLongFieldUpdater_MethodAnnotations_newUpdater16[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$MethodInfo _AtomicLongFieldUpdater_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AtomicLongFieldUpdater, init$, void)},
	{"accumulateAndGet", "(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J", "(TT;JLjava/util/function/LongBinaryOperator;)J", $PUBLIC | $FINAL, $method(AtomicLongFieldUpdater, accumulateAndGet, int64_t, Object$*, int64_t, $LongBinaryOperator*)},
	{"addAndGet", "(Ljava/lang/Object;J)J", "(TT;J)J", $PUBLIC, $virtualMethod(AtomicLongFieldUpdater, addAndGet, int64_t, Object$*, int64_t)},
	{"compareAndSet", "(Ljava/lang/Object;JJ)Z", "(TT;JJ)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicLongFieldUpdater, compareAndSet, bool, Object$*, int64_t, int64_t)},
	{"decrementAndGet", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC, $virtualMethod(AtomicLongFieldUpdater, decrementAndGet, int64_t, Object$*)},
	{"get", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicLongFieldUpdater, get, int64_t, Object$*)},
	{"getAndAccumulate", "(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J", "(TT;JLjava/util/function/LongBinaryOperator;)J", $PUBLIC | $FINAL, $method(AtomicLongFieldUpdater, getAndAccumulate, int64_t, Object$*, int64_t, $LongBinaryOperator*)},
	{"getAndAdd", "(Ljava/lang/Object;J)J", "(TT;J)J", $PUBLIC, $virtualMethod(AtomicLongFieldUpdater, getAndAdd, int64_t, Object$*, int64_t)},
	{"getAndDecrement", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC, $virtualMethod(AtomicLongFieldUpdater, getAndDecrement, int64_t, Object$*)},
	{"getAndIncrement", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC, $virtualMethod(AtomicLongFieldUpdater, getAndIncrement, int64_t, Object$*)},
	{"getAndSet", "(Ljava/lang/Object;J)J", "(TT;J)J", $PUBLIC, $virtualMethod(AtomicLongFieldUpdater, getAndSet, int64_t, Object$*, int64_t)},
	{"getAndUpdate", "(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J", "(TT;Ljava/util/function/LongUnaryOperator;)J", $PUBLIC | $FINAL, $method(AtomicLongFieldUpdater, getAndUpdate, int64_t, Object$*, $LongUnaryOperator*)},
	{"incrementAndGet", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC, $virtualMethod(AtomicLongFieldUpdater, incrementAndGet, int64_t, Object$*)},
	{"isAncestor", "(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)Z", nullptr, $STATIC, $staticMethod(AtomicLongFieldUpdater, isAncestor, bool, $ClassLoader*, $ClassLoader*)},
	{"isSamePackage", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $STATIC, $staticMethod(AtomicLongFieldUpdater, isSamePackage, bool, $Class*, $Class*)},
	{"lazySet", "(Ljava/lang/Object;J)V", "(TT;J)V", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicLongFieldUpdater, lazySet, void, Object$*, int64_t)},
	{"newUpdater", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;", "<U:Ljava/lang/Object;>(Ljava/lang/Class<TU;>;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater<TU;>;", $PUBLIC | $STATIC, $staticMethod(AtomicLongFieldUpdater, newUpdater, AtomicLongFieldUpdater*, $Class*, $String*), nullptr, nullptr, _AtomicLongFieldUpdater_MethodAnnotations_newUpdater16},
	{"set", "(Ljava/lang/Object;J)V", "(TT;J)V", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicLongFieldUpdater, set, void, Object$*, int64_t)},
	{"updateAndGet", "(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J", "(TT;Ljava/util/function/LongUnaryOperator;)J", $PUBLIC | $FINAL, $method(AtomicLongFieldUpdater, updateAndGet, int64_t, Object$*, $LongUnaryOperator*)},
	{"weakCompareAndSet", "(Ljava/lang/Object;JJ)Z", "(TT;JJ)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AtomicLongFieldUpdater, weakCompareAndSet, bool, Object$*, int64_t, int64_t)},
	{}
};

$InnerClassInfo _AtomicLongFieldUpdater_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater", "java.util.concurrent.atomic.AtomicLongFieldUpdater", "LockedUpdater", $PRIVATE | $STATIC | $FINAL},
	{"java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater", "java.util.concurrent.atomic.AtomicLongFieldUpdater", "CASUpdater", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AtomicLongFieldUpdater_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.atomic.AtomicLongFieldUpdater",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AtomicLongFieldUpdater_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AtomicLongFieldUpdater_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater,java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater$1,java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater,java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater$1"
};

$Object* allocate$AtomicLongFieldUpdater($Class* clazz) {
	return $of($alloc(AtomicLongFieldUpdater));
}

AtomicLongFieldUpdater* AtomicLongFieldUpdater::newUpdater($Class* tclass, $String* fieldName) {
	$Class* caller = $Reflection::getCallerClass();
	$init($AtomicLong);
	if ($AtomicLong::VM_SUPPORTS_LONG_CAS) {
		return $new($AtomicLongFieldUpdater$CASUpdater, tclass, fieldName, caller);
	} else {
		return $new($AtomicLongFieldUpdater$LockedUpdater, tclass, fieldName, caller);
	}
}

void AtomicLongFieldUpdater::init$() {
}

int64_t AtomicLongFieldUpdater::getAndSet(Object$* obj, int64_t newValue) {
	int64_t prev = 0;
	do {
		prev = get(obj);
	} while (!compareAndSet(obj, prev, newValue));
	return prev;
}

int64_t AtomicLongFieldUpdater::getAndIncrement(Object$* obj) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = prev + 1;
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int64_t AtomicLongFieldUpdater::getAndDecrement(Object$* obj) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = prev - 1;
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int64_t AtomicLongFieldUpdater::getAndAdd(Object$* obj, int64_t delta) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = prev + delta;
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int64_t AtomicLongFieldUpdater::incrementAndGet(Object$* obj) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = prev + 1;
	} while (!compareAndSet(obj, prev, next));
	return next;
}

int64_t AtomicLongFieldUpdater::decrementAndGet(Object$* obj) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = prev - 1;
	} while (!compareAndSet(obj, prev, next));
	return next;
}

int64_t AtomicLongFieldUpdater::addAndGet(Object$* obj, int64_t delta) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = prev + delta;
	} while (!compareAndSet(obj, prev, next));
	return next;
}

int64_t AtomicLongFieldUpdater::getAndUpdate(Object$* obj, $LongUnaryOperator* updateFunction) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = $nc(updateFunction)->applyAsLong(prev);
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int64_t AtomicLongFieldUpdater::updateAndGet(Object$* obj, $LongUnaryOperator* updateFunction) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = $nc(updateFunction)->applyAsLong(prev);
	} while (!compareAndSet(obj, prev, next));
	return next;
}

int64_t AtomicLongFieldUpdater::getAndAccumulate(Object$* obj, int64_t x, $LongBinaryOperator* accumulatorFunction) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = $nc(accumulatorFunction)->applyAsLong(prev, x);
	} while (!compareAndSet(obj, prev, next));
	return prev;
}

int64_t AtomicLongFieldUpdater::accumulateAndGet(Object$* obj, int64_t x, $LongBinaryOperator* accumulatorFunction) {
	int64_t prev = 0;
	int64_t next = 0;
	do {
		prev = get(obj);
		next = $nc(accumulatorFunction)->applyAsLong(prev, x);
	} while (!compareAndSet(obj, prev, next));
	return next;
}

bool AtomicLongFieldUpdater::isAncestor($ClassLoader* first, $ClassLoader* second) {
	$load(AtomicLongFieldUpdater);
	$beforeCallerSensitive();
	$var($ClassLoader, acl, first);
	do {
		$assign(acl, $nc(acl)->getParent());
		if (second == acl) {
			return true;
		}
	} while (acl != nullptr);
	return false;
}

bool AtomicLongFieldUpdater::isSamePackage($Class* class1, $Class* class2) {
	$load(AtomicLongFieldUpdater);
	$beforeCallerSensitive();
	bool var$0 = $nc(class1)->getClassLoader() == $nc(class2)->getClassLoader();
	if (var$0) {
		var$0 = class1->getPackageName() == class2->getPackageName();
	}
	return var$0;
}

AtomicLongFieldUpdater::AtomicLongFieldUpdater() {
}

$Class* AtomicLongFieldUpdater::load$($String* name, bool initialize) {
	$loadClass(AtomicLongFieldUpdater, name, initialize, &_AtomicLongFieldUpdater_ClassInfo_, allocate$AtomicLongFieldUpdater);
	return class$;
}

$Class* AtomicLongFieldUpdater::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java