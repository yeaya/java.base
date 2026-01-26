#include <jdk/internal/vm/vector/VectorSupport$VectorMask.h>

#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$VectorPayload = ::jdk::internal::vm::vector::VectorSupport$VectorPayload;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VectorMask_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(VectorSupport$VectorMask, init$, void, Object$*)},
	{}
};

$InnerClassInfo _VectorSupport$VectorMask_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorMask", "jdk.internal.vm.vector.VectorSupport", "VectorMask", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorPayload", "jdk.internal.vm.vector.VectorSupport", "VectorPayload", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$VectorMask_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.vm.vector.VectorSupport$VectorMask",
	"jdk.internal.vm.vector.VectorSupport$VectorPayload",
	nullptr,
	nullptr,
	_VectorSupport$VectorMask_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljdk/internal/vm/vector/VectorSupport$VectorPayload;",
	nullptr,
	_VectorSupport$VectorMask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorMask($Class* clazz) {
	return $of($alloc(VectorSupport$VectorMask));
}

void VectorSupport$VectorMask::init$(Object$* payload) {
	$VectorSupport$VectorPayload::init$(payload);
}

VectorSupport$VectorMask::VectorSupport$VectorMask() {
}

$Class* VectorSupport$VectorMask::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorMask, name, initialize, &_VectorSupport$VectorMask_ClassInfo_, allocate$VectorSupport$VectorMask);
	return class$;
}

$Class* VectorSupport$VectorMask::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk