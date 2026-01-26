#include <java/lang/ref/ReferenceQueue$Lock.h>

#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace ref {

$MethodInfo _ReferenceQueue$Lock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ReferenceQueue$Lock, init$, void)},
	{}
};

$InnerClassInfo _ReferenceQueue$Lock_InnerClassesInfo_[] = {
	{"java.lang.ref.ReferenceQueue$Lock", "java.lang.ref.ReferenceQueue", "Lock", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ReferenceQueue$Lock_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ref.ReferenceQueue$Lock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReferenceQueue$Lock_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceQueue$Lock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.ReferenceQueue"
};

$Object* allocate$ReferenceQueue$Lock($Class* clazz) {
	return $of($alloc(ReferenceQueue$Lock));
}

void ReferenceQueue$Lock::init$() {
}

ReferenceQueue$Lock::ReferenceQueue$Lock() {
}

$Class* ReferenceQueue$Lock::load$($String* name, bool initialize) {
	$loadClass(ReferenceQueue$Lock, name, initialize, &_ReferenceQueue$Lock_ClassInfo_, allocate$ReferenceQueue$Lock);
	return class$;
}

$Class* ReferenceQueue$Lock::class$ = nullptr;

		} // ref
	} // lang
} // java