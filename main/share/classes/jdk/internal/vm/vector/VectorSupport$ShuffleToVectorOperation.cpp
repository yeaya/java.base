#include <jdk/internal/vm/vector/VectorSupport$ShuffleToVectorOperation.h>

#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$ShuffleToVectorOperation_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TSh;)TVM;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$ShuffleToVectorOperation_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$ShuffleToVectorOperation", "jdk.internal.vm.vector.VectorSupport", "ShuffleToVectorOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VectorSupport$ShuffleToVectorOperation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$ShuffleToVectorOperation",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$ShuffleToVectorOperation_MethodInfo_,
	"<VM:Ljava/lang/Object;Sh:Ljava/lang/Object;E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$ShuffleToVectorOperation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$ShuffleToVectorOperation($Class* clazz) {
	return $of($alloc(VectorSupport$ShuffleToVectorOperation));
}

$Class* VectorSupport$ShuffleToVectorOperation::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$ShuffleToVectorOperation, name, initialize, &_VectorSupport$ShuffleToVectorOperation_ClassInfo_, allocate$VectorSupport$ShuffleToVectorOperation);
	return class$;
}

$Class* VectorSupport$ShuffleToVectorOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk