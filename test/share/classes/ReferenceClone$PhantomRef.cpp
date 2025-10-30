#include <ReferenceClone$PhantomRef.h>

#include <ReferenceClone.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

#undef QUEUE

using $ReferenceClone = ::ReferenceClone;
using $ReferenceClone$CloneableRef = ::ReferenceClone$CloneableRef;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

$FieldInfo _ReferenceClone$PhantomRef_FieldInfo_[] = {
	{"this$0", "LReferenceClone;", nullptr, $FINAL | $SYNTHETIC, $field(ReferenceClone$PhantomRef, this$0)},
	{}
};

$MethodInfo _ReferenceClone$PhantomRef_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(LReferenceClone;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceClone$PhantomRef::*)($ReferenceClone*,Object$*)>(&ReferenceClone$PhantomRef::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReferenceClone$PhantomRef_InnerClassesInfo_[] = {
	{"ReferenceClone$PhantomRef", "ReferenceClone", "PhantomRef", 0},
	{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReferenceClone$PhantomRef_ClassInfo_ = {
	$ACC_SUPER,
	"ReferenceClone$PhantomRef",
	"java.lang.ref.PhantomReference",
	"ReferenceClone$CloneableRef",
	_ReferenceClone$PhantomRef_FieldInfo_,
	_ReferenceClone$PhantomRef_MethodInfo_,
	"Ljava/lang/ref/PhantomReference<Ljava/lang/Object;>;LReferenceClone$CloneableRef;",
	nullptr,
	_ReferenceClone$PhantomRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReferenceClone"
};

$Object* allocate$ReferenceClone$PhantomRef($Class* clazz) {
	return $of($alloc(ReferenceClone$PhantomRef));
}

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
	return $of($PhantomReference::clone());
}

ReferenceClone$PhantomRef::ReferenceClone$PhantomRef() {
}

$Class* ReferenceClone$PhantomRef::load$($String* name, bool initialize) {
	$loadClass(ReferenceClone$PhantomRef, name, initialize, &_ReferenceClone$PhantomRef_ClassInfo_, allocate$ReferenceClone$PhantomRef);
	return class$;
}

$Class* ReferenceClone$PhantomRef::class$ = nullptr;