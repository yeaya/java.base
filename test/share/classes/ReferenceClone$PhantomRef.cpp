#include <ReferenceClone$PhantomRef.h>
#include <ReferenceClone.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

#undef QUEUE

using $ReferenceClone = ::ReferenceClone;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PhantomReference = ::java::lang::ref::PhantomReference;

int32_t ReferenceClone$PhantomRef::hashCode() {
	 return this->$PhantomReference::hashCode();
}

bool ReferenceClone$PhantomRef::equals(Object$* arg0) {
	 return this->$PhantomReference::equals(arg0);
}

$String* ReferenceClone$PhantomRef::toString() {
	 return this->$PhantomReference::toString();
}

void ReferenceClone$PhantomRef::finalize() {
	this->$PhantomReference::finalize();
}

void ReferenceClone$PhantomRef::init$($ReferenceClone* this$0, Object$* referent) {
	$set(this, this$0, this$0);
	$init($ReferenceClone);
	$PhantomReference::init$(referent, $ReferenceClone::QUEUE);
}

$Object* ReferenceClone$PhantomRef::clone() {
	return $PhantomReference::clone();
}

ReferenceClone$PhantomRef::ReferenceClone$PhantomRef() {
}

$Class* ReferenceClone$PhantomRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LReferenceClone;", nullptr, $FINAL | $SYNTHETIC, $field(ReferenceClone$PhantomRef, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(LReferenceClone;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ReferenceClone$PhantomRef, init$, void, $ReferenceClone*, Object$*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ReferenceClone$PhantomRef, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceClone$PhantomRef", "ReferenceClone", "PhantomRef", 0},
		{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReferenceClone$PhantomRef",
		"java.lang.ref.PhantomReference",
		"ReferenceClone$CloneableRef",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/PhantomReference<Ljava/lang/Object;>;LReferenceClone$CloneableRef;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReferenceClone"
	};
	$loadClass(ReferenceClone$PhantomRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReferenceClone$PhantomRef));
	});
	return class$;
}

$Class* ReferenceClone$PhantomRef::class$ = nullptr;