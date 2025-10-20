#include <ReferenceClone.h>

#include <ReferenceClone$CloneableRef.h>
#include <ReferenceClone$CloneableReference.h>
#include <ReferenceClone$PhantomRef.h>
#include <ReferenceClone$SoftRef.h>
#include <ReferenceClone$WeakRef.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef QUEUE

using $ReferenceClone$CloneableRef = ::ReferenceClone$CloneableRef;
using $ReferenceClone$CloneableReference = ::ReferenceClone$CloneableReference;
using $ReferenceClone$PhantomRef = ::ReferenceClone$PhantomRef;
using $ReferenceClone$SoftRef = ::ReferenceClone$SoftRef;
using $ReferenceClone$WeakRef = ::ReferenceClone$WeakRef;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

$FieldInfo _ReferenceClone_FieldInfo_[] = {
	{"QUEUE", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ReferenceClone, QUEUE)},
	{}
};

$MethodInfo _ReferenceClone_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceClone::*)()>(&ReferenceClone::init$))},
	{"assertCloneNotSupported", "(LReferenceClone$CloneableRef;)V", nullptr, $PRIVATE, $method(static_cast<void(ReferenceClone::*)($ReferenceClone$CloneableRef*)>(&ReferenceClone::assertCloneNotSupported))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&ReferenceClone::main))},
	{"test", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReferenceClone_InnerClassesInfo_[] = {
	{"ReferenceClone$CloneableReference", "ReferenceClone", "CloneableReference", 0},
	{"ReferenceClone$PhantomRef", "ReferenceClone", "PhantomRef", 0},
	{"ReferenceClone$WeakRef", "ReferenceClone", "WeakRef", 0},
	{"ReferenceClone$SoftRef", "ReferenceClone", "SoftRef", 0},
	{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReferenceClone_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReferenceClone",
	"java.lang.Object",
	nullptr,
	_ReferenceClone_FieldInfo_,
	_ReferenceClone_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceClone_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ReferenceClone$CloneableReference,ReferenceClone$PhantomRef,ReferenceClone$WeakRef,ReferenceClone$SoftRef,ReferenceClone$CloneableRef"
};

$Object* allocate$ReferenceClone($Class* clazz) {
	return $of($alloc(ReferenceClone));
}

$ReferenceQueue* ReferenceClone::QUEUE = nullptr;

void ReferenceClone::init$() {
}

void ReferenceClone::main($StringArray* args) {
	$init(ReferenceClone);
	$var(ReferenceClone, refClone, $new(ReferenceClone));
	refClone->test();
}

void ReferenceClone::test() {
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $new($Object));
	assertCloneNotSupported($$new($ReferenceClone$SoftRef, this, o));
	assertCloneNotSupported($$new($ReferenceClone$WeakRef, this, o));
	assertCloneNotSupported($$new($ReferenceClone$PhantomRef, this, o));
	$var($ReferenceClone$CloneableReference, ref, $new($ReferenceClone$CloneableReference, this, o));
	try {
		ref->clone();
	} catch ($CloneNotSupportedException&) {
		$catch();
	}
}

void ReferenceClone::assertCloneNotSupported($ReferenceClone$CloneableRef* ref) {
	try {
		$nc(ref)->clone();
		$throwNew($RuntimeException, "Reference::clone should throw CloneNotSupportedException"_s);
	} catch ($CloneNotSupportedException&) {
		$catch();
	}
}

void clinit$ReferenceClone($Class* class$) {
	$assignStatic(ReferenceClone::QUEUE, $new($ReferenceQueue));
}

ReferenceClone::ReferenceClone() {
}

$Class* ReferenceClone::load$($String* name, bool initialize) {
	$loadClass(ReferenceClone, name, initialize, &_ReferenceClone_ClassInfo_, clinit$ReferenceClone, allocate$ReferenceClone);
	return class$;
}

$Class* ReferenceClone::class$ = nullptr;