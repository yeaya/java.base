#include <jdk/internal/vm/vector/VectorSupport$VecInsertOp.h>

#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VecInsertOp_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;IJ)Ljava/lang/Object;", "(TV;IJ)TV;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$VecInsertOp_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VecInsertOp", "jdk.internal.vm.vector.VectorSupport", "VecInsertOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VectorSupport$VecInsertOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$VecInsertOp",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$VecInsertOp_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VecInsertOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VecInsertOp($Class* clazz) {
	return $of($alloc(VectorSupport$VecInsertOp));
}

$Class* VectorSupport$VecInsertOp::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VecInsertOp, name, initialize, &_VectorSupport$VecInsertOp_ClassInfo_, allocate$VectorSupport$VecInsertOp);
	return class$;
}

$Class* VectorSupport$VecInsertOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk