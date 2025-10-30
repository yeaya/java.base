#include <java/util/concurrent/atomic/AtomicStampedReference.h>

#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/concurrent/atomic/AtomicStampedReference$Pair.h>
#include <jcpp.h>

#undef PAIR

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $AtomicStampedReference$Pair = ::java::util::concurrent::atomic::AtomicStampedReference$Pair;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _AtomicStampedReference_FieldInfo_[] = {
	{"pair", "Ljava/util/concurrent/atomic/AtomicStampedReference$Pair;", "Ljava/util/concurrent/atomic/AtomicStampedReference$Pair<TV;>;", $PRIVATE | $VOLATILE, $field(AtomicStampedReference, pair)},
	{"PAIR", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicStampedReference, PAIR)},
	{}
};

$MethodInfo _AtomicStampedReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;I)V", "(TV;I)V", $PUBLIC, $method(static_cast<void(AtomicStampedReference::*)(Object$*,int32_t)>(&AtomicStampedReference::init$))},
	{"attemptStamp", "(Ljava/lang/Object;I)Z", "(TV;I)Z", $PUBLIC},
	{"casPair", "(Ljava/util/concurrent/atomic/AtomicStampedReference$Pair;Ljava/util/concurrent/atomic/AtomicStampedReference$Pair;)Z", "(Ljava/util/concurrent/atomic/AtomicStampedReference$Pair<TV;>;Ljava/util/concurrent/atomic/AtomicStampedReference$Pair<TV;>;)Z", $PRIVATE, $method(static_cast<bool(AtomicStampedReference::*)($AtomicStampedReference$Pair*,$AtomicStampedReference$Pair*)>(&AtomicStampedReference::casPair))},
	{"compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;II)Z", "(TV;TV;II)Z", $PUBLIC},
	{"get", "([I)Ljava/lang/Object;", "([I)TV;", $PUBLIC},
	{"getReference", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"getStamp", "()I", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;I)V", "(TV;I)V", $PUBLIC},
	{"weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;II)Z", "(TV;TV;II)Z", $PUBLIC},
	{}
};

$InnerClassInfo _AtomicStampedReference_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicStampedReference$Pair", "java.util.concurrent.atomic.AtomicStampedReference", "Pair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AtomicStampedReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.AtomicStampedReference",
	"java.lang.Object",
	nullptr,
	_AtomicStampedReference_FieldInfo_,
	_AtomicStampedReference_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AtomicStampedReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicStampedReference$Pair"
};

$Object* allocate$AtomicStampedReference($Class* clazz) {
	return $of($alloc(AtomicStampedReference));
}

$VarHandle* AtomicStampedReference::PAIR = nullptr;

void AtomicStampedReference::init$(Object$* initialRef, int32_t initialStamp) {
	$set(this, pair, $AtomicStampedReference$Pair::of(initialRef, initialStamp));
}

$Object* AtomicStampedReference::getReference() {
	return $of($nc(this->pair)->reference);
}

int32_t AtomicStampedReference::getStamp() {
	return $nc(this->pair)->stamp;
}

$Object* AtomicStampedReference::get($ints* stampHolder) {
	$var($AtomicStampedReference$Pair, pair, this->pair);
	$nc(stampHolder)->set(0, $nc(pair)->stamp);
	return $of(pair->reference);
}

bool AtomicStampedReference::weakCompareAndSet(Object$* expectedReference, Object$* newReference, int32_t expectedStamp, int32_t newStamp) {
	return compareAndSet(expectedReference, newReference, expectedStamp, newStamp);
}

bool AtomicStampedReference::compareAndSet(Object$* expectedReference, Object$* newReference, int32_t expectedStamp, int32_t newStamp) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicStampedReference$Pair, current, this->pair);
	return $equals(expectedReference, $nc(current)->reference) && expectedStamp == current->stamp && (($equals(newReference, current->reference) && newStamp == current->stamp) || casPair(current, $($AtomicStampedReference$Pair::of(newReference, newStamp))));
}

void AtomicStampedReference::set(Object$* newReference, int32_t newStamp) {
	$var($AtomicStampedReference$Pair, current, this->pair);
	if (!$equals(newReference, $nc(current)->reference) || newStamp != $nc(current)->stamp) {
		$set(this, pair, $AtomicStampedReference$Pair::of(newReference, newStamp));
	}
}

bool AtomicStampedReference::attemptStamp(Object$* expectedReference, int32_t newStamp) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicStampedReference$Pair, current, this->pair);
	return $equals(expectedReference, $nc(current)->reference) && (newStamp == current->stamp || casPair(current, $($AtomicStampedReference$Pair::of(expectedReference, newStamp))));
}

bool AtomicStampedReference::casPair($AtomicStampedReference$Pair* cmp, $AtomicStampedReference$Pair* val) {
	return $nc(AtomicStampedReference::PAIR)->compareAndSet($$new($ObjectArray, {$of(this), $of(cmp), $of(val)}));
}

void clinit$AtomicStampedReference($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$load($AtomicStampedReference$Pair);
			$assignStatic(AtomicStampedReference::PAIR, $nc(l)->findVarHandle(AtomicStampedReference::class$, "pair"_s, $AtomicStampedReference$Pair::class$));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

AtomicStampedReference::AtomicStampedReference() {
}

$Class* AtomicStampedReference::load$($String* name, bool initialize) {
	$loadClass(AtomicStampedReference, name, initialize, &_AtomicStampedReference_ClassInfo_, clinit$AtomicStampedReference, allocate$AtomicStampedReference);
	return class$;
}

$Class* AtomicStampedReference::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java