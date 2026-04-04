#include <ReferenceClone$WeakRef.h>
#include <ReferenceClone.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

#undef QUEUE

using $ReferenceClone = ::ReferenceClone;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

int32_t ReferenceClone$WeakRef::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool ReferenceClone$WeakRef::equals(Object$* arg0) {
	 return this->$WeakReference::equals(arg0);
}

$String* ReferenceClone$WeakRef::toString() {
	 return this->$WeakReference::toString();
}

void ReferenceClone$WeakRef::finalize() {
	this->$WeakReference::finalize();
}

void ReferenceClone$WeakRef::init$($ReferenceClone* this$0, Object$* referent) {
	$set(this, this$0, this$0);
	$init($ReferenceClone);
	$WeakReference::init$(referent, $ReferenceClone::QUEUE);
}

$Object* ReferenceClone$WeakRef::clone() {
	return $WeakReference::clone();
}

ReferenceClone$WeakRef::ReferenceClone$WeakRef() {
}

$Class* ReferenceClone$WeakRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LReferenceClone;", nullptr, $FINAL | $SYNTHETIC, $field(ReferenceClone$WeakRef, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(LReferenceClone;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ReferenceClone$WeakRef, init$, void, $ReferenceClone*, Object$*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ReferenceClone$WeakRef, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceClone$WeakRef", "ReferenceClone", "WeakRef", 0},
		{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReferenceClone$WeakRef",
		"java.lang.ref.WeakReference",
		"ReferenceClone$CloneableRef",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;LReferenceClone$CloneableRef;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReferenceClone"
	};
	$loadClass(ReferenceClone$WeakRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReferenceClone$WeakRef));
	});
	return class$;
}

$Class* ReferenceClone$WeakRef::class$ = nullptr;