#include <java/lang/invoke/MethodType$ConcurrentWeakInternSet$WeakEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodType$ConcurrentWeakInternSet.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodType$ConcurrentWeakInternSet = ::java::lang::invoke::MethodType$ConcurrentWeakInternSet;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodType$ConcurrentWeakInternSet$WeakEntry_FieldInfo_[] = {
	{"hashcode", "I", nullptr, $PUBLIC | $FINAL, $field(MethodType$ConcurrentWeakInternSet$WeakEntry, hashcode)},
	{}
};

$MethodInfo _MethodType$ConcurrentWeakInternSet$WeakEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<TT;>;)V", $PUBLIC, $method(static_cast<void(MethodType$ConcurrentWeakInternSet$WeakEntry::*)(Object$*,$ReferenceQueue*)>(&MethodType$ConcurrentWeakInternSet$WeakEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MethodType$ConcurrentWeakInternSet$WeakEntry_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodType$ConcurrentWeakInternSet", "java.lang.invoke.MethodType", "ConcurrentWeakInternSet", $PRIVATE | $STATIC},
	{"java.lang.invoke.MethodType$ConcurrentWeakInternSet$WeakEntry", "java.lang.invoke.MethodType$ConcurrentWeakInternSet", "WeakEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MethodType$ConcurrentWeakInternSet$WeakEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodType$ConcurrentWeakInternSet$WeakEntry",
	"java.lang.ref.WeakReference",
	nullptr,
	_MethodType$ConcurrentWeakInternSet$WeakEntry_FieldInfo_,
	_MethodType$ConcurrentWeakInternSet$WeakEntry_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;",
	nullptr,
	_MethodType$ConcurrentWeakInternSet$WeakEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodType"
};

$Object* allocate$MethodType$ConcurrentWeakInternSet$WeakEntry($Class* clazz) {
	return $of($alloc(MethodType$ConcurrentWeakInternSet$WeakEntry));
}

void MethodType$ConcurrentWeakInternSet$WeakEntry::init$(Object$* key, $ReferenceQueue* queue) {
	$WeakReference::init$(key, queue);
	this->hashcode = $nc($of(key))->hashCode();
}

bool MethodType$ConcurrentWeakInternSet$WeakEntry::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var($Object, mine, get());
	if ($instanceOf(MethodType$ConcurrentWeakInternSet$WeakEntry, obj)) {
		$var($Object, that, $nc(($cast(MethodType$ConcurrentWeakInternSet$WeakEntry, obj)))->get());
		return (that == nullptr || mine == nullptr) ? ($equals(this, obj)) : $nc($of(mine))->equals(that);
	}
	return (mine == nullptr) ? (obj == nullptr) : $nc($of(mine))->equals(obj);
}

int32_t MethodType$ConcurrentWeakInternSet$WeakEntry::hashCode() {
	return this->hashcode;
}

MethodType$ConcurrentWeakInternSet$WeakEntry::MethodType$ConcurrentWeakInternSet$WeakEntry() {
}

$Class* MethodType$ConcurrentWeakInternSet$WeakEntry::load$($String* name, bool initialize) {
	$loadClass(MethodType$ConcurrentWeakInternSet$WeakEntry, name, initialize, &_MethodType$ConcurrentWeakInternSet$WeakEntry_ClassInfo_, allocate$MethodType$ConcurrentWeakInternSet$WeakEntry);
	return class$;
}

$Class* MethodType$ConcurrentWeakInternSet$WeakEntry::class$ = nullptr;

		} // invoke
	} // lang
} // java