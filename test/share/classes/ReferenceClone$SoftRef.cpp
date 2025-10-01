#include <ReferenceClone$SoftRef.h>

#include <ReferenceClone.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $SoftReference = ::java::lang::ref::SoftReference;

$FieldInfo _ReferenceClone$SoftRef_FieldInfo_[] = {
	{"this$0", "LReferenceClone;", nullptr, $FINAL | $SYNTHETIC, $field(ReferenceClone$SoftRef, this$0)},
	{}
};

$MethodInfo _ReferenceClone$SoftRef_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(LReferenceClone;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceClone$SoftRef::*)($ReferenceClone*,Object$*)>(&ReferenceClone$SoftRef::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReferenceClone$SoftRef_InnerClassesInfo_[] = {
	{"ReferenceClone$SoftRef", "ReferenceClone", "SoftRef", 0},
	{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReferenceClone$SoftRef_ClassInfo_ = {
	$ACC_SUPER,
	"ReferenceClone$SoftRef",
	"java.lang.ref.SoftReference",
	"ReferenceClone$CloneableRef",
	_ReferenceClone$SoftRef_FieldInfo_,
	_ReferenceClone$SoftRef_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/lang/Object;>;LReferenceClone$CloneableRef;",
	nullptr,
	_ReferenceClone$SoftRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReferenceClone"
};

$Object* allocate$ReferenceClone$SoftRef($Class* clazz) {
	return $of($alloc(ReferenceClone$SoftRef));
}

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
	return $of($SoftReference::clone());
}

ReferenceClone$SoftRef::ReferenceClone$SoftRef() {
}

$Class* ReferenceClone$SoftRef::load$($String* name, bool initialize) {
	$loadClass(ReferenceClone$SoftRef, name, initialize, &_ReferenceClone$SoftRef_ClassInfo_, allocate$ReferenceClone$SoftRef);
	return class$;
}

$Class* ReferenceClone$SoftRef::class$ = nullptr;