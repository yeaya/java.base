#include <java/lang/ref/ReferenceQueue$Null.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {
		namespace ref {

$MethodInfo _ReferenceQueue$Null_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ReferenceQueue$Null::*)()>(&ReferenceQueue$Null::init$))},
	{"enqueue", "(Ljava/lang/ref/Reference;)Z", "(Ljava/lang/ref/Reference<*>;)Z", 0},
	{}
};

$InnerClassInfo _ReferenceQueue$Null_InnerClassesInfo_[] = {
	{"java.lang.ref.ReferenceQueue$Null", "java.lang.ref.ReferenceQueue", "Null", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ReferenceQueue$Null_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ref.ReferenceQueue$Null",
	"java.lang.ref.ReferenceQueue",
	nullptr,
	nullptr,
	_ReferenceQueue$Null_MethodInfo_,
	"Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;",
	nullptr,
	_ReferenceQueue$Null_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.ReferenceQueue"
};

$Object* allocate$ReferenceQueue$Null($Class* clazz) {
	return $of($alloc(ReferenceQueue$Null));
}

void ReferenceQueue$Null::init$() {
	$ReferenceQueue::init$();
}

bool ReferenceQueue$Null::enqueue($Reference* r) {
	return false;
}

ReferenceQueue$Null::ReferenceQueue$Null() {
}

$Class* ReferenceQueue$Null::load$($String* name, bool initialize) {
	$loadClass(ReferenceQueue$Null, name, initialize, &_ReferenceQueue$Null_ClassInfo_, allocate$ReferenceQueue$Null);
	return class$;
}

$Class* ReferenceQueue$Null::class$ = nullptr;

		} // ref
	} // lang
} // java