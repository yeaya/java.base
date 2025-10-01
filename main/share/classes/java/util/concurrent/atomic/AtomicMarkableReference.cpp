#include <java/util/concurrent/atomic/AtomicMarkableReference.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicMarkableReference$Pair.h>
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
using $AtomicMarkableReference$Pair = ::java::util::concurrent::atomic::AtomicMarkableReference$Pair;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _AtomicMarkableReference_FieldInfo_[] = {
	{"pair", "Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair;", "Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair<TV;>;", $PRIVATE | $VOLATILE, $field(AtomicMarkableReference, pair)},
	{"PAIR", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AtomicMarkableReference, PAIR)},
	{}
};

$MethodInfo _AtomicMarkableReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Z)V", "(TV;Z)V", $PUBLIC, $method(static_cast<void(AtomicMarkableReference::*)(Object$*,bool)>(&AtomicMarkableReference::init$))},
	{"attemptMark", "(Ljava/lang/Object;Z)Z", "(TV;Z)Z", $PUBLIC},
	{"casPair", "(Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair;Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair;)Z", "(Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair<TV;>;Ljava/util/concurrent/atomic/AtomicMarkableReference$Pair<TV;>;)Z", $PRIVATE, $method(static_cast<bool(AtomicMarkableReference::*)($AtomicMarkableReference$Pair*,$AtomicMarkableReference$Pair*)>(&AtomicMarkableReference::casPair))},
	{"compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z", "(TV;TV;ZZ)Z", $PUBLIC},
	{"get", "([Z)Ljava/lang/Object;", "([Z)TV;", $PUBLIC},
	{"getReference", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"isMarked", "()Z", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;Z)V", "(TV;Z)V", $PUBLIC},
	{"weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z", "(TV;TV;ZZ)Z", $PUBLIC},
	{}
};

$InnerClassInfo _AtomicMarkableReference_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicMarkableReference$Pair", "java.util.concurrent.atomic.AtomicMarkableReference", "Pair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AtomicMarkableReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.AtomicMarkableReference",
	"java.lang.Object",
	nullptr,
	_AtomicMarkableReference_FieldInfo_,
	_AtomicMarkableReference_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AtomicMarkableReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicMarkableReference$Pair"
};

$Object* allocate$AtomicMarkableReference($Class* clazz) {
	return $of($alloc(AtomicMarkableReference));
}

$VarHandle* AtomicMarkableReference::PAIR = nullptr;

void AtomicMarkableReference::init$(Object$* initialRef, bool initialMark) {
	$set(this, pair, $AtomicMarkableReference$Pair::of(initialRef, initialMark));
}

$Object* AtomicMarkableReference::getReference() {
	return $of($nc(this->pair)->reference);
}

bool AtomicMarkableReference::isMarked() {
	return $nc(this->pair)->mark;
}

$Object* AtomicMarkableReference::get($booleans* markHolder) {
	$var($AtomicMarkableReference$Pair, pair, this->pair);
	$nc(markHolder)->set(0, $nc(pair)->mark);
	return $of(pair->reference);
}

bool AtomicMarkableReference::weakCompareAndSet(Object$* expectedReference, Object$* newReference, bool expectedMark, bool newMark) {
	return compareAndSet(expectedReference, newReference, expectedMark, newMark);
}

bool AtomicMarkableReference::compareAndSet(Object$* expectedReference, Object$* newReference, bool expectedMark, bool newMark) {
	$var($AtomicMarkableReference$Pair, current, this->pair);
	return $equals(expectedReference, $nc(current)->reference) && expectedMark == current->mark && (($equals(newReference, current->reference) && newMark == current->mark) || casPair(current, $($AtomicMarkableReference$Pair::of(newReference, newMark))));
}

void AtomicMarkableReference::set(Object$* newReference, bool newMark) {
	$var($AtomicMarkableReference$Pair, current, this->pair);
	if (!$equals(newReference, $nc(current)->reference) || newMark != $nc(current)->mark) {
		$set(this, pair, $AtomicMarkableReference$Pair::of(newReference, newMark));
	}
}

bool AtomicMarkableReference::attemptMark(Object$* expectedReference, bool newMark) {
	$var($AtomicMarkableReference$Pair, current, this->pair);
	return $equals(expectedReference, $nc(current)->reference) && (newMark == current->mark || casPair(current, $($AtomicMarkableReference$Pair::of(expectedReference, newMark))));
}

bool AtomicMarkableReference::casPair($AtomicMarkableReference$Pair* cmp, $AtomicMarkableReference$Pair* val) {
	return $nc(AtomicMarkableReference::PAIR)->compareAndSet($$new($ObjectArray, {$of(this), $of(cmp), $of(val)}));
}

void clinit$AtomicMarkableReference($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$load($AtomicMarkableReference$Pair);
			$assignStatic(AtomicMarkableReference::PAIR, $nc(l)->findVarHandle(AtomicMarkableReference::class$, "pair"_s, $AtomicMarkableReference$Pair::class$));
		} catch ($ReflectiveOperationException&) {
			$var($ReflectiveOperationException, e, $catch());
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

AtomicMarkableReference::AtomicMarkableReference() {
}

$Class* AtomicMarkableReference::load$($String* name, bool initialize) {
	$loadClass(AtomicMarkableReference, name, initialize, &_AtomicMarkableReference_ClassInfo_, clinit$AtomicMarkableReference, allocate$AtomicMarkableReference);
	return class$;
}

$Class* AtomicMarkableReference::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java