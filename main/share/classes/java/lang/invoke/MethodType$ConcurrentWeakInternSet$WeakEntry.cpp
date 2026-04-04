#include <java/lang/invoke/MethodType$ConcurrentWeakInternSet$WeakEntry.h>
#include <java/lang/invoke/MethodType$ConcurrentWeakInternSet.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {
		namespace invoke {

void MethodType$ConcurrentWeakInternSet$WeakEntry::init$(Object$* key, $ReferenceQueue* queue) {
	$WeakReference::init$(key, queue);
	this->hashcode = $nc($of(key))->hashCode();
}

bool MethodType$ConcurrentWeakInternSet$WeakEntry::equals(Object$* obj) {
	$useLocalObjectStack();
	$var($Object, mine, get());
	if ($instanceOf(MethodType$ConcurrentWeakInternSet$WeakEntry, obj)) {
		$var($Object, that, $cast(MethodType$ConcurrentWeakInternSet$WeakEntry, obj)->get());
		return (that == nullptr || mine == nullptr) ? ($equals(this, obj)) : mine->equals(that);
	}
	return (mine == nullptr) ? (obj == nullptr) : mine->equals(obj);
}

int32_t MethodType$ConcurrentWeakInternSet$WeakEntry::hashCode() {
	return this->hashcode;
}

MethodType$ConcurrentWeakInternSet$WeakEntry::MethodType$ConcurrentWeakInternSet$WeakEntry() {
}

$Class* MethodType$ConcurrentWeakInternSet$WeakEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hashcode", "I", nullptr, $PUBLIC | $FINAL, $field(MethodType$ConcurrentWeakInternSet$WeakEntry, hashcode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<TT;>;)V", $PUBLIC, $method(MethodType$ConcurrentWeakInternSet$WeakEntry, init$, void, Object$*, $ReferenceQueue*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodType$ConcurrentWeakInternSet$WeakEntry, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MethodType$ConcurrentWeakInternSet$WeakEntry, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodType$ConcurrentWeakInternSet", "java.lang.invoke.MethodType", "ConcurrentWeakInternSet", $PRIVATE | $STATIC},
		{"java.lang.invoke.MethodType$ConcurrentWeakInternSet$WeakEntry", "java.lang.invoke.MethodType$ConcurrentWeakInternSet", "WeakEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodType$ConcurrentWeakInternSet$WeakEntry",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodType"
	};
	$loadClass(MethodType$ConcurrentWeakInternSet$WeakEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodType$ConcurrentWeakInternSet$WeakEntry);
	});
	return class$;
}

$Class* MethodType$ConcurrentWeakInternSet$WeakEntry::class$ = nullptr;

		} // invoke
	} // lang
} // java