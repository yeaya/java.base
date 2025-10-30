#include <jdk/internal/vm/vector/VectorSupport$VectorCompareOp.h>

#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VectorCompareOp_MethodInfo_[] = {
	{"apply", "(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(ITV;TV;)TM;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$VectorCompareOp_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorCompareOp", "jdk.internal.vm.vector.VectorSupport", "VectorCompareOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VectorSupport$VectorCompareOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$VectorCompareOp",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$VectorCompareOp_MethodInfo_,
	"<V:Ljava/lang/Object;M:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VectorCompareOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorCompareOp($Class* clazz) {
	return $of($alloc(VectorSupport$VectorCompareOp));
}

$Class* VectorSupport$VectorCompareOp::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorCompareOp, name, initialize, &_VectorSupport$VectorCompareOp_ClassInfo_, allocate$VectorSupport$VectorCompareOp);
	return class$;
}

$Class* VectorSupport$VectorCompareOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk