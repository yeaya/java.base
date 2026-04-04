#include <jdk/internal/ref/PhantomCleanable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Objects.h>
#include <jdk/internal/ref/CleanerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Cleaner = ::java::lang::ref::Cleaner;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Objects = ::java::util::Objects;
using $CleanerImpl = ::jdk::internal::ref::CleanerImpl;

namespace jdk {
	namespace internal {
		namespace ref {

$Object* PhantomCleanable::clone() {
	 return this->$PhantomReference::clone();
}

int32_t PhantomCleanable::hashCode() {
	 return this->$PhantomReference::hashCode();
}

bool PhantomCleanable::equals(Object$* obj) {
	 return this->$PhantomReference::equals(obj);
}

$String* PhantomCleanable::toString() {
	 return this->$PhantomReference::toString();
}

void PhantomCleanable::finalize() {
	this->$PhantomReference::finalize();
}

void PhantomCleanable::init$(Object$* referent, $Cleaner* cleaner) {
	$useLocalObjectStack();
	$var($Object, var$0, $Objects::requireNonNull(referent));
	$PhantomReference::init$(var$0, $nc($($CleanerImpl::getCleanerImpl(cleaner)))->queue);
	$set(this, prev, this);
	$set(this, next, this);
	$set(this, list, $nc($($CleanerImpl::getCleanerImpl(cleaner)))->phantomCleanableList);
	insert();
	$Reference::reachabilityFence(referent);
	$Reference::reachabilityFence(cleaner);
}

void PhantomCleanable::init$() {
	$PhantomReference::init$(nullptr, nullptr);
	$set(this, prev, this);
	$set(this, next, this);
	$set(this, list, this);
}

void PhantomCleanable::insert() {
	$synchronized(this->list) {
		$set(this, prev, this->list);
		$set(this, next, this->list->next);
		$set($nc(this->next), prev, this);
		$set(this->list, next, this);
	}
}

bool PhantomCleanable::remove() {
	$synchronized(this->list) {
		if (this->next != this) {
			$set($nc(this->next), prev, this->prev);
			$set($nc(this->prev), next, this->next);
			$set(this, prev, this);
			$set(this, next, this);
			return true;
		}
		return false;
	}
}

bool PhantomCleanable::isListEmpty() {
	$synchronized(this->list) {
		return this->list == this->list->next;
	}
}

void PhantomCleanable::clean() {
	if (remove()) {
		$PhantomReference::clear();
		performCleanup();
	}
}

void PhantomCleanable::clear() {
	if (remove()) {
		$PhantomReference::clear();
	}
}

bool PhantomCleanable::isEnqueued() {
	$throwNew($UnsupportedOperationException, "isEnqueued"_s);
	$shouldNotReachHere();
}

bool PhantomCleanable::enqueue() {
	$throwNew($UnsupportedOperationException, "enqueue"_s);
	$shouldNotReachHere();
}

PhantomCleanable::PhantomCleanable() {
}

$Class* PhantomCleanable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prev", "Ljdk/internal/ref/PhantomCleanable;", "Ljdk/internal/ref/PhantomCleanable<*>;", 0, $field(PhantomCleanable, prev)},
		{"next", "Ljdk/internal/ref/PhantomCleanable;", "Ljdk/internal/ref/PhantomCleanable<*>;", 0, $field(PhantomCleanable, next)},
		{"list", "Ljdk/internal/ref/PhantomCleanable;", "Ljdk/internal/ref/PhantomCleanable<*>;", $PRIVATE | $FINAL, $field(PhantomCleanable, list)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/Cleaner;)V", "(TT;Ljava/lang/ref/Cleaner;)V", $PUBLIC, $method(PhantomCleanable, init$, void, Object$*, $Cleaner*)},
		{"<init>", "()V", nullptr, 0, $method(PhantomCleanable, init$, void)},
		{"clean", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(PhantomCleanable, clean, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(PhantomCleanable, clear, void)},
		{"enqueue", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(PhantomCleanable, enqueue, bool)},
		{"insert", "()V", nullptr, $PRIVATE, $method(PhantomCleanable, insert, void)},
		{"isEnqueued", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(PhantomCleanable, isEnqueued, bool)},
		{"isListEmpty", "()Z", nullptr, 0, $virtualMethod(PhantomCleanable, isListEmpty, bool)},
		{"performCleanup", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(PhantomCleanable, performCleanup, void)},
		{"remove", "()Z", nullptr, $PRIVATE, $method(PhantomCleanable, remove, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Cleaner$Cleanable", "java.lang.ref.Cleaner", "Cleanable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.ref.PhantomCleanable",
		"java.lang.ref.PhantomReference",
		"java.lang.ref.Cleaner$Cleanable",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/PhantomReference<TT;>;Ljava/lang/ref/Cleaner$Cleanable;",
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(PhantomCleanable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PhantomCleanable));
	});
	return class$;
}

$Class* PhantomCleanable::class$ = nullptr;

		} // ref
	} // internal
} // jdk