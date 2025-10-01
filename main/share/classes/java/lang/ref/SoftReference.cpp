#include <java/lang/ref/SoftReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#include <java/lang/ObjectManagerInternal.h>
using ::java::lang::ObjectManagerInternal;

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

$FieldInfo _SoftReference_FieldInfo_[] = {
	{"clock", "J", nullptr, $PRIVATE | $STATIC, $staticField(SoftReference, clock)},
	{"timestamp", "J", nullptr, $PRIVATE, $field(SoftReference, timestamp)},
	{}
};

$MethodInfo _SoftReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(static_cast<void(SoftReference::*)(Object$*)>(&SoftReference::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PUBLIC, $method(static_cast<void(SoftReference::*)(Object$*,$ReferenceQueue*)>(&SoftReference::init$))},
	{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{}
};

$ClassInfo _SoftReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ref.SoftReference",
	"java.lang.ref.Reference",
	nullptr,
	_SoftReference_FieldInfo_,
	_SoftReference_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/Reference<TT;>;"
};

$Object* allocate$SoftReference($Class* clazz) {
	return $of($alloc(SoftReference));
}


int64_t SoftReference::clock = 0;

void SoftReference::init$(Object$* referent) {
	$Reference::init$(referent);
	this->timestamp = SoftReference::clock;
}

void SoftReference::init$(Object$* referent, $ReferenceQueue* q) {
	$Reference::init$(referent, q);
	this->timestamp = SoftReference::clock;
}

$Object* SoftReference::get() {
	$var($Object, o, $Reference::get());
	if (o != nullptr && this->timestamp != SoftReference::clock) {
		this->timestamp = SoftReference::clock;
	}
	return $of(o);
}

SoftReference::SoftReference() {
	ObjectManagerInternal::setSoftRef(this);
}

$Class* SoftReference::load$($String* name, bool initialize) {
	$loadClass(SoftReference, name, initialize, &_SoftReference_ClassInfo_, allocate$SoftReference);
	return class$;
}

$Class* SoftReference::class$ = nullptr;

		} // ref
	} // lang
} // java