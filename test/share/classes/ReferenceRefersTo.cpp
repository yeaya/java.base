#include <ReferenceRefersTo.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;

$MethodInfo _ReferenceRefersTo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceRefersTo::*)()>(&ReferenceRefersTo::init$))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)($String*)>(&ReferenceRefersTo::fail)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReferenceRefersTo::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/ref/Reference;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V", "<T:Ljava/lang/ref/Reference;>(TT;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V", $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)($Reference*,Object$*,Object$*,$String*)>(&ReferenceRefersTo::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReferenceRefersTo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReferenceRefersTo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReferenceRefersTo_MethodInfo_
};

$Object* allocate$ReferenceRefersTo($Class* clazz) {
	return $of($alloc(ReferenceRefersTo));
}

void ReferenceRefersTo::init$() {
}

void ReferenceRefersTo::fail($String* msg) {
	$throwNew($RuntimeException, msg);
}

void ReferenceRefersTo::test($Reference* ref, Object$* expectedValue, Object$* unexpectedValue, $String* kind) {
	$useLocalCurrentObjectStackCache();
	if ((expectedValue != nullptr) && $nc(ref)->refersTo(nullptr)) {
		fail($$str({kind, "refers to null"_s}));
	}
	if (!$nc(ref)->refersTo(expectedValue)) {
		fail($$str({kind, " doesn\'t refer to expected value"_s}));
	}
	if ($nc(ref)->refersTo(unexpectedValue)) {
		fail($$str({kind, " refers to unexpected value"_s}));
	}
}

void ReferenceRefersTo::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ReferenceQueue, queue, $new($ReferenceQueue));
	$var($Object, obj0, $new($Object));
	$var($Object, obj1, $new($Object));
	$var($Object, obj2, $new($Object));
	$var($Object, obj3, $new($Object));
	$var($PhantomReference, pref, $new($PhantomReference, obj0, queue));
	$var($WeakReference, wref, $new($WeakReference, obj1));
	$var($SoftReference, sref, $new($SoftReference, obj2));
	test(pref, obj0, obj3, "phantom"_s);
	test(wref, obj1, obj3, "weak"_s);
	test(sref, obj2, obj3, "soft"_s);
	pref->clear();
	wref->clear();
	sref->clear();
	test(pref, nullptr, obj3, "phantom"_s);
	test(wref, nullptr, obj3, "weak"_s);
	test(sref, nullptr, obj3, "soft"_s);
}

ReferenceRefersTo::ReferenceRefersTo() {
}

$Class* ReferenceRefersTo::load$($String* name, bool initialize) {
	$loadClass(ReferenceRefersTo, name, initialize, &_ReferenceRefersTo_ClassInfo_, allocate$ReferenceRefersTo);
	return class$;
}

$Class* ReferenceRefersTo::class$ = nullptr;