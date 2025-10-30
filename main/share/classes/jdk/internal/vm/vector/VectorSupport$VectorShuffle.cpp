#include <jdk/internal/vm/vector/VectorSupport$VectorShuffle.h>

#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$VectorPayload = ::jdk::internal::vm::vector::VectorSupport$VectorPayload;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VectorShuffle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(VectorSupport$VectorShuffle::*)(Object$*)>(&VectorSupport$VectorShuffle::init$))},
	{}
};

$InnerClassInfo _VectorSupport$VectorShuffle_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorShuffle", "jdk.internal.vm.vector.VectorSupport", "VectorShuffle", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorPayload", "jdk.internal.vm.vector.VectorSupport", "VectorPayload", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$VectorShuffle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.vm.vector.VectorSupport$VectorShuffle",
	"jdk.internal.vm.vector.VectorSupport$VectorPayload",
	nullptr,
	nullptr,
	_VectorSupport$VectorShuffle_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljdk/internal/vm/vector/VectorSupport$VectorPayload;",
	nullptr,
	_VectorSupport$VectorShuffle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorShuffle($Class* clazz) {
	return $of($alloc(VectorSupport$VectorShuffle));
}

void VectorSupport$VectorShuffle::init$(Object$* payload) {
	$VectorSupport$VectorPayload::init$(payload);
}

VectorSupport$VectorShuffle::VectorSupport$VectorShuffle() {
}

$Class* VectorSupport$VectorShuffle::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorShuffle, name, initialize, &_VectorSupport$VectorShuffle_ClassInfo_, allocate$VectorSupport$VectorShuffle);
	return class$;
}

$Class* VectorSupport$VectorShuffle::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk