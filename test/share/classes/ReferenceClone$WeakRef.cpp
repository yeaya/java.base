#include <ReferenceClone$WeakRef.h>

#include <ReferenceClone.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

#undef QUEUE

using $ReferenceClone = ::ReferenceClone;
using $ReferenceClone$CloneableRef = ::ReferenceClone$CloneableRef;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

$FieldInfo _ReferenceClone$WeakRef_FieldInfo_[] = {
	{"this$0", "LReferenceClone;", nullptr, $FINAL | $SYNTHETIC, $field(ReferenceClone$WeakRef, this$0)},
	{}
};

$MethodInfo _ReferenceClone$WeakRef_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(LReferenceClone;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceClone$WeakRef::*)($ReferenceClone*,Object$*)>(&ReferenceClone$WeakRef::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReferenceClone$WeakRef_InnerClassesInfo_[] = {
	{"ReferenceClone$WeakRef", "ReferenceClone", "WeakRef", 0},
	{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReferenceClone$WeakRef_ClassInfo_ = {
	$ACC_SUPER,
	"ReferenceClone$WeakRef",
	"java.lang.ref.WeakReference",
	"ReferenceClone$CloneableRef",
	_ReferenceClone$WeakRef_FieldInfo_,
	_ReferenceClone$WeakRef_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;LReferenceClone$CloneableRef;",
	nullptr,
	_ReferenceClone$WeakRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReferenceClone"
};

$Object* allocate$ReferenceClone$WeakRef($Class* clazz) {
	return $of($alloc(ReferenceClone$WeakRef));
}

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
	return $of($WeakReference::clone());
}

ReferenceClone$WeakRef::ReferenceClone$WeakRef() {
}

$Class* ReferenceClone$WeakRef::load$($String* name, bool initialize) {
	$loadClass(ReferenceClone$WeakRef, name, initialize, &_ReferenceClone$WeakRef_ClassInfo_, allocate$ReferenceClone$WeakRef);
	return class$;
}

$Class* ReferenceClone$WeakRef::class$ = nullptr;