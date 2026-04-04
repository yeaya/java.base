#include <ReferenceClone.h>
#include <ReferenceClone$CloneableRef.h>
#include <ReferenceClone$CloneableReference.h>
#include <ReferenceClone$PhantomRef.h>
#include <ReferenceClone$SoftRef.h>
#include <ReferenceClone$WeakRef.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/ref/ReferenceQueue.h>
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

$ReferenceQueue* ReferenceClone::QUEUE = nullptr;

void ReferenceClone::init$() {
}

void ReferenceClone::main($StringArray* args) {
	$init(ReferenceClone);
	$var(ReferenceClone, refClone, $new(ReferenceClone));
	refClone->test();
}

void ReferenceClone::test() {
	$useLocalObjectStack();
	$var($Object, o, $new($Object));
	assertCloneNotSupported($$new($ReferenceClone$SoftRef, this, o));
	assertCloneNotSupported($$new($ReferenceClone$WeakRef, this, o));
	assertCloneNotSupported($$new($ReferenceClone$PhantomRef, this, o));
	$var($ReferenceClone$CloneableReference, ref, $new($ReferenceClone$CloneableReference, this, o));
	try {
		ref->clone();
	} catch ($CloneNotSupportedException& e) {
	}
}

void ReferenceClone::assertCloneNotSupported($ReferenceClone$CloneableRef* ref) {
	try {
		$nc(ref)->clone();
		$throwNew($RuntimeException, "Reference::clone should throw CloneNotSupportedException"_s);
	} catch ($CloneNotSupportedException& e) {
	}
}

void ReferenceClone::clinit$($Class* clazz) {
	$assignStatic(ReferenceClone::QUEUE, $new($ReferenceQueue));
}

ReferenceClone::ReferenceClone() {
}

$Class* ReferenceClone::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"QUEUE", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ReferenceClone, QUEUE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReferenceClone, init$, void)},
		{"assertCloneNotSupported", "(LReferenceClone$CloneableRef;)V", nullptr, $PRIVATE, $method(ReferenceClone, assertCloneNotSupported, void, $ReferenceClone$CloneableRef*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ReferenceClone, main, void, $StringArray*)},
		{"test", "()V", nullptr, $PUBLIC, $virtualMethod(ReferenceClone, test, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceClone$CloneableReference", "ReferenceClone", "CloneableReference", 0},
		{"ReferenceClone$PhantomRef", "ReferenceClone", "PhantomRef", 0},
		{"ReferenceClone$WeakRef", "ReferenceClone", "WeakRef", 0},
		{"ReferenceClone$SoftRef", "ReferenceClone", "SoftRef", 0},
		{"ReferenceClone$CloneableRef", "ReferenceClone", "CloneableRef", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReferenceClone",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ReferenceClone$CloneableReference,ReferenceClone$PhantomRef,ReferenceClone$WeakRef,ReferenceClone$SoftRef,ReferenceClone$CloneableRef"
	};
	$loadClass(ReferenceClone, name, initialize, &classInfo$$, ReferenceClone::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceClone);
	});
	return class$;
}

$Class* ReferenceClone::class$ = nullptr;