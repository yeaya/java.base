#include <ReferenceClone$SoftRef.h>
#include <ReferenceClone.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

#undef QUEUE

using $ReferenceClone = ::ReferenceClone;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

int32_t ReferenceClone$SoftRef::hashCode() {
	 return this->$SoftReference::hashCode();
}

bool ReferenceClone$SoftRef::equals(Object$* arg0) {
	 return this->$SoftReference::equals(arg0);
}

$String* ReferenceClone$SoftRef::toString() {
	 return this->$SoftReference::toString();
}

void ReferenceClone$SoftRef::finalize() {
	this->$SoftReference::finalize();
}

void ReferenceClone$SoftRef::init$($ReferenceClone* this$0, Object$* referent) {
	$set(this, this$0, this$0);
	$init($ReferenceClone);
	$SoftReference::init$(referent, $ReferenceClone::QUEUE);
}

$Object* ReferenceClone$SoftRef::clone() {
	return $SoftReference::clone();
}

ReferenceClone$SoftRef::ReferenceClone$SoftRef() {
}

$Class* ReferenceClone$SoftRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LReferenceClone;", nullptr, $FINAL | $SYNTHETIC, $field(ReferenceClone$SoftRef, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(LReferenceClone;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ReferenceClone$SoftRef, init$, void, $ReferenceClone*, Object$*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ReferenceClone$SoftRef, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceClone$SoftRef", "ReferenceClone", "SoftRef", 0},
		{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReferenceClone$SoftRef",
		"java.lang.ref.SoftReference",
		"ReferenceClone$CloneableRef",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/SoftReference<Ljava/lang/Object;>;LReferenceClone$CloneableRef;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReferenceClone"
	};
	$loadClass(ReferenceClone$SoftRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReferenceClone$SoftRef));
	});
	return class$;
}

$Class* ReferenceClone$SoftRef::class$ = nullptr;