#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

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
	return o;
}

SoftReference::SoftReference() {
}

$Class* SoftReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clock", "J", nullptr, $PRIVATE | $STATIC, $staticField(SoftReference, clock)},
		{"timestamp", "J", nullptr, $PRIVATE, $field(SoftReference, timestamp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(SoftReference, init$, void, Object$*)},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PUBLIC, $method(SoftReference, init$, void, Object$*, $ReferenceQueue*)},
		{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(SoftReference, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ref.SoftReference",
		"java.lang.ref.Reference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/Reference<TT;>;"
	};
	$loadClass(SoftReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftReference);
	});
	return class$;
}

$Class* SoftReference::class$ = nullptr;

		} // ref
	} // lang
} // java