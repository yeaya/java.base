#include <ReferenceClone$CloneableReference.h>
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

int32_t ReferenceClone$CloneableReference::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool ReferenceClone$CloneableReference::equals(Object$* arg0) {
	 return this->$WeakReference::equals(arg0);
}

$String* ReferenceClone$CloneableReference::toString() {
	 return this->$WeakReference::toString();
}

void ReferenceClone$CloneableReference::finalize() {
	this->$WeakReference::finalize();
}

void ReferenceClone$CloneableReference::init$($ReferenceClone* this$0, Object$* referent) {
	$set(this, this$0, this$0);
	$init($ReferenceClone);
	$WeakReference::init$(referent, $ReferenceClone::QUEUE);
}

$Object* ReferenceClone$CloneableReference::clone() {
	return $of($new(ReferenceClone$CloneableReference, this->this$0, $(this->get())));
}

ReferenceClone$CloneableReference::ReferenceClone$CloneableReference() {
}

$Class* ReferenceClone$CloneableReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LReferenceClone;", nullptr, $FINAL | $SYNTHETIC, $field(ReferenceClone$CloneableReference, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(LReferenceClone;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ReferenceClone$CloneableReference, init$, void, $ReferenceClone*, Object$*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ReferenceClone$CloneableReference, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceClone$CloneableReference", "ReferenceClone", "CloneableReference", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReferenceClone$CloneableReference",
		"java.lang.ref.WeakReference",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;Ljava/lang/Cloneable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReferenceClone"
	};
	$loadClass(ReferenceClone$CloneableReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReferenceClone$CloneableReference));
	});
	return class$;
}

$Class* ReferenceClone$CloneableReference::class$ = nullptr;