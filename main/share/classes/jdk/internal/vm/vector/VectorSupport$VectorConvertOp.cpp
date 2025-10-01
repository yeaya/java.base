#include <jdk/internal/vm/vector/VectorSupport$VectorConvertOp.h>

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

$MethodInfo _VectorSupport$VectorConvertOp_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TVIN;TS;)TVOUT;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$VectorConvertOp_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorConvertOp", "jdk.internal.vm.vector.VectorSupport", "VectorConvertOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VectorSupport$VectorConvertOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$VectorConvertOp",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$VectorConvertOp_MethodInfo_,
	"<VOUT:Ljava/lang/Object;VIN:Ljava/lang/Object;S:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VectorConvertOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorConvertOp($Class* clazz) {
	return $of($alloc(VectorSupport$VectorConvertOp));
}

$Class* VectorSupport$VectorConvertOp::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorConvertOp, name, initialize, &_VectorSupport$VectorConvertOp_ClassInfo_, allocate$VectorSupport$VectorConvertOp);
	return class$;
}

$Class* VectorSupport$VectorConvertOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk