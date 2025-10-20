#include <java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$CompoundAttribute _AtomicReferenceFieldUpdater_MethodAnnotations_newUpdater8[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$MethodInfo _AtomicReferenceFieldUpdater_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AtomicReferenceFieldUpdater::*)()>(&AtomicReferenceFieldUpdater::init$))},
	{"accumulateAndGet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TT;TV;Ljava/util/function/BinaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReferenceFieldUpdater::*)(Object$*,Object$*,$BinaryOperator*)>(&AtomicReferenceFieldUpdater::accumulateAndGet))},
	{"compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TT;TV;TV;)Z", $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TV;", $PUBLIC | $ABSTRACT},
	{"getAndAccumulate", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TT;TV;Ljava/util/function/BinaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReferenceFieldUpdater::*)(Object$*,Object$*,$BinaryOperator*)>(&AtomicReferenceFieldUpdater::getAndAccumulate))},
	{"getAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TT;TV;)TV;", $PUBLIC},
	{"getAndUpdate", "(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;", "(TT;Ljava/util/function/UnaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReferenceFieldUpdater::*)(Object$*,$UnaryOperator*)>(&AtomicReferenceFieldUpdater::getAndUpdate))},
	{"lazySet", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TV;)V", $PUBLIC | $ABSTRACT},
	{"newUpdater", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;", "<U:Ljava/lang/Object;W:Ljava/lang/Object;>(Ljava/lang/Class<TU;>;Ljava/lang/Class<TW;>;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater<TU;TW;>;", $PUBLIC | $STATIC, $method(static_cast<AtomicReferenceFieldUpdater*(*)($Class*,$Class*,$String*)>(&AtomicReferenceFieldUpdater::newUpdater)), nullptr, nullptr, _AtomicReferenceFieldUpdater_MethodAnnotations_newUpdater8},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TV;)V", $PUBLIC | $ABSTRACT},
	{"updateAndGet", "(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;", "(TT;Ljava/util/function/UnaryOperator<TV;>;)TV;", $PUBLIC | $FINAL, $method(static_cast<$Object*(AtomicReferenceFieldUpdater::*)(Object$*,$UnaryOperator*)>(&AtomicReferenceFieldUpdater::updateAndGet))},
	{"weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TT;TV;TV;)Z", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AtomicReferenceFieldUpdater_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl", "java.util.concurrent.atomic.AtomicReferenceFieldUpdater", "AtomicReferenceFieldUpdaterImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AtomicReferenceFieldUpdater_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.atomic.AtomicReferenceFieldUpdater",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AtomicReferenceFieldUpdater_MethodInfo_,
	"<T:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AtomicReferenceFieldUpdater_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl,java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1"
};

$Object* allocate$AtomicReferenceFieldUpdater($Class* clazz) {
	return $of($alloc(AtomicReferenceFieldUpdater));
}

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
	return $of(prev);
}

$Object* AtomicReferenceFieldUpdater::getAndUpdate(Object$* obj, $UnaryOperator* updateFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, prev, nullptr);
	$var($Object, next, nullptr);
	do {
		$assign(prev, get(obj));
		$assign(next, $nc(updateFunction)->apply(prev));
	} while (!compareAndSet(obj, prev, next));
	return $of(prev);
}

$Object* AtomicReferenceFieldUpdater::updateAndGet(Object$* obj, $UnaryOperator* updateFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, prev, nullptr);
	$var($Object, next, nullptr);
	do {
		$assign(prev, get(obj));
		$assign(next, $nc(updateFunction)->apply(prev));
	} while (!compareAndSet(obj, prev, next));
	return $of(next);
}

$Object* AtomicReferenceFieldUpdater::getAndAccumulate(Object$* obj, Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, prev, nullptr);
	$var($Object, next, nullptr);
	do {
		$assign(prev, get(obj));
		$assign(next, $nc(accumulatorFunction)->apply(prev, x));
	} while (!compareAndSet(obj, prev, next));
	return $of(prev);
}

$Object* AtomicReferenceFieldUpdater::accumulateAndGet(Object$* obj, Object$* x, $BinaryOperator* accumulatorFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, prev, nullptr);
	$var($Object, next, nullptr);
	do {
		$assign(prev, get(obj));
		$assign(next, $nc(accumulatorFunction)->apply(prev, x));
	} while (!compareAndSet(obj, prev, next));
	return $of(next);
}

AtomicReferenceFieldUpdater::AtomicReferenceFieldUpdater() {
}

$Class* AtomicReferenceFieldUpdater::load$($String* name, bool initialize) {
	$loadClass(AtomicReferenceFieldUpdater, name, initialize, &_AtomicReferenceFieldUpdater_ClassInfo_, allocate$AtomicReferenceFieldUpdater);
	return class$;
}

$Class* AtomicReferenceFieldUpdater::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java