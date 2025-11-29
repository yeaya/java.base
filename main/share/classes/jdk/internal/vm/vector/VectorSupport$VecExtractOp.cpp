#include <jdk/internal/vm/vector/VectorSupport$VecExtractOp.h>

#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VecExtractOp_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;I)J", "(TV;I)J", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$VecExtractOp_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VecExtractOp", "jdk.internal.vm.vector.VectorSupport", "VecExtractOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VectorSupport$VecExtractOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$VecExtractOp",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$VecExtractOp_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VecExtractOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VecExtractOp($Class* clazz) {
	return $of($alloc(VectorSupport$VecExtractOp));
}

$Class* VectorSupport$VecExtractOp::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VecExtractOp, name, initialize, &_VectorSupport$VecExtractOp_ClassInfo_, allocate$VectorSupport$VecExtractOp);
	return class$;
}

$Class* VectorSupport$VecExtractOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk