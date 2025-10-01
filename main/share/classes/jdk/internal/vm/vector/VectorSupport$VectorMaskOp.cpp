#include <jdk/internal/vm/vector/VectorSupport$VectorMaskOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _VectorSupport$VectorMaskOp_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;)I", "(TM;)I", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$VectorMaskOp_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorMaskOp", "jdk.internal.vm.vector.VectorSupport", "VectorMaskOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VectorSupport$VectorMaskOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$VectorMaskOp",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$VectorMaskOp_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VectorMaskOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorMaskOp($Class* clazz) {
	return $of($alloc(VectorSupport$VectorMaskOp));
}

$Class* VectorSupport$VectorMaskOp::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorMaskOp, name, initialize, &_VectorSupport$VectorMaskOp_ClassInfo_, allocate$VectorSupport$VectorMaskOp);
	return class$;
}

$Class* VectorSupport$VectorMaskOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk