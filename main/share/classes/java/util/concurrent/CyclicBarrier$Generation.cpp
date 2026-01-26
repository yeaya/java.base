#include <java/util/concurrent/CyclicBarrier$Generation.h>

#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CyclicBarrier$Generation_FieldInfo_[] = {
	{"broken", "Z", nullptr, 0, $field(CyclicBarrier$Generation, broken)},
	{}
};

$MethodInfo _CyclicBarrier$Generation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CyclicBarrier$Generation, init$, void)},
	{}
};

$InnerClassInfo _CyclicBarrier$Generation_InnerClassesInfo_[] = {
	{"java.util.concurrent.CyclicBarrier$Generation", "java.util.concurrent.CyclicBarrier", "Generation", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CyclicBarrier$Generation_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.CyclicBarrier$Generation",
	"java.lang.Object",
	nullptr,
	_CyclicBarrier$Generation_FieldInfo_,
	_CyclicBarrier$Generation_MethodInfo_,
	nullptr,
	nullptr,
	_CyclicBarrier$Generation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CyclicBarrier"
};

$Object* allocate$CyclicBarrier$Generation($Class* clazz) {
	return $of($alloc(CyclicBarrier$Generation));
}

void CyclicBarrier$Generation::init$() {
}

CyclicBarrier$Generation::CyclicBarrier$Generation() {
}

$Class* CyclicBarrier$Generation::load$($String* name, bool initialize) {
	$loadClass(CyclicBarrier$Generation, name, initialize, &_CyclicBarrier$Generation_ClassInfo_, allocate$CyclicBarrier$Generation);
	return class$;
}

$Class* CyclicBarrier$Generation::class$ = nullptr;

		} // concurrent
	} // util
} // java