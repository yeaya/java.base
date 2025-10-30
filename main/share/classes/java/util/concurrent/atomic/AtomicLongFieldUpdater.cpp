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
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AtomicLongFieldUpdater::*)()>(&AtomicLongFieldUpdater::init$))},
	{"accumulateAndGet", "(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J", "(TT;JLjava/util/function/LongBinaryOperator;)J", $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongFieldUpdater::*)(Object$*,int64_t,$LongBinaryOperator*)>(&AtomicLongFieldUpdater::accumulateAndGet))},
	{"addAndGet", "(Ljava/lang/Object;J)J", "(TT;J)J", $PUBLIC},
	{"compareAndSet", "(Ljava/lang/Object;JJ)Z", "(TT;JJ)Z", $PUBLIC | $ABSTRACT},
	{"decrementAndGet", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC},
	{"get", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC | $ABSTRACT},
	{"getAndAccumulate", "(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J", "(TT;JLjava/util/function/LongBinaryOperator;)J", $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongFieldUpdater::*)(Object$*,int64_t,$LongBinaryOperator*)>(&AtomicLongFieldUpdater::getAndAccumulate))},
	{"getAndAdd", "(Ljava/lang/Object;J)J", "(TT;J)J", $PUBLIC},
	{"getAndDecrement", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC},
	{"getAndIncrement", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC},
	{"getAndSet", "(Ljava/lang/Object;J)J", "(TT;J)J", $PUBLIC},
	{"getAndUpdate", "(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J", "(TT;Ljava/util/function/LongUnaryOperator;)J", $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongFieldUpdater::*)(Object$*,$LongUnaryOperator*)>(&AtomicLongFieldUpdater::getAndUpdate))},
	{"incrementAndGet", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC},
	{"isAncestor", "(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($ClassLoader*,$ClassLoader*)>(&AtomicLongFieldUpdater::isAncestor))},
	{"isSamePackage", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&AtomicLongFieldUpdater::isSamePackage))},
	{"lazySet", "(Ljava/lang/Object;J)V", "(TT;J)V", $PUBLIC | $ABSTRACT},
	{"newUpdater", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;", "<U:Ljava/lang/Object;>(Ljava/lang/Class<TU;>;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater<TU;>;", $PUBLIC | $STATIC, $method(static_cast<AtomicLongFieldUpdater*(*)($Class*,$String*)>(&AtomicLongFieldUpdater::newUpdater)), nullptr, nullptr, _AtomicLongFieldUpdater_MethodAnnotations_newUpdater16},
	{"set", "(Ljava/lang/Object;J)V", "(TT;J)V", $PUBLIC | $ABSTRACT},
	{"updateAndGet", "(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J", "(TT;Ljava/util/function/LongUnaryOperator;)J", $PUBLIC | $FINAL, $method(static_cast<int64_t(AtomicLongFieldUpdater::*)(Object$*,$LongUnaryOperator*)>(&AtomicLongFieldUpdater::updateAndGet))},
	{"weakCompareAndSet", "(Ljava/lang/Object;JJ)Z", "(TT;JJ)Z", $PUBLIC | $ABSTRACT},
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