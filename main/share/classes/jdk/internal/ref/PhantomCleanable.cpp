#include <jdk/internal/ref/PhantomCleanable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jdk/internal/ref/CleanerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Objects = ::java::util::Objects;
using $CleanerImpl = ::jdk::internal::ref::CleanerImpl;

namespace jdk {
	namespace internal {
		namespace ref {

$FieldInfo _PhantomCleanable_FieldInfo_[] = {
	{"prev", "Ljdk/internal/ref/PhantomCleanable;", "Ljdk/internal/ref/PhantomCleanable<*>;", 0, $field(PhantomCleanable, prev)},
	{"next", "Ljdk/internal/ref/PhantomCleanable;", "Ljdk/internal/ref/PhantomCleanable<*>;", 0, $field(PhantomCleanable, next)},
	{"list", "Ljdk/internal/ref/PhantomCleanable;", "Ljdk/internal/ref/PhantomCleanable<*>;", $PRIVATE | $FINAL, $field(PhantomCleanable, list)},
	{}
};

$MethodInfo _PhantomCleanable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/Cleaner;)V", "(TT;Ljava/lang/ref/Cleaner;)V", $PUBLIC, $method(static_cast<void(PhantomCleanable::*)(Object$*,$Cleaner*)>(&PhantomCleanable::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PhantomCleanable::*)()>(&PhantomCleanable::init$))},
	{"clean", "()V", nullptr, $PUBLIC | $FINAL},
	{"clear", "()V", nullptr, $PUBLIC},
	{"enqueue", "()Z", nullptr, $PUBLIC | $FINAL},
	{"insert", "()V", nullptr, $PRIVATE, $method(static_cast<void(PhantomCleanable::*)()>(&PhantomCleanable::insert))},
	{"isEnqueued", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isListEmpty", "()Z", nullptr, 0},
	{"performCleanup", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"remove", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(PhantomCleanable::*)()>(&PhantomCleanable::remove))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PhantomCleanable_InnerClassesInfo_[] = {
	{"java.lang.ref.Cleaner$Cleanable", "java.lang.ref.Cleaner", "Cleanable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PhantomCleanable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.ref.PhantomCleanable",
	"java.lang.ref.PhantomReference",
	"java.lang.ref.Cleaner$Cleanable",
	_PhantomCleanable_FieldInfo_,
	_PhantomCleanable_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/PhantomReference<TT;>;Ljava/lang/ref/Cleaner$Cleanable;",
	nullptr,
	_PhantomCleanable_InnerClassesInfo_
};

$Object* allocate$PhantomCleanable($Class* clazz) {
	return $of($alloc(PhantomCleanable));
}

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
	$useLocalCurrentObjectStackCache();
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
		$set(this, next, $nc(this->list)->next);
		$set($nc(this->next), prev, this);
		$set($nc(this->list), next, this);
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
		return this->list == $nc(this->list)->next;
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
	$loadClass(PhantomCleanable, name, initialize, &_PhantomCleanable_ClassInfo_, allocate$PhantomCleanable);
	return class$;
}

$Class* PhantomCleanable::class$ = nullptr;

		} // ref
	} // internal
} // jdk