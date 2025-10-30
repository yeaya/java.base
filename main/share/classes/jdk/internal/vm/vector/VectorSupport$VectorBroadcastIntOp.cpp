#include <jdk/internal/vm/vector/VectorSupport$VectorBroadcastIntOp.h>

#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VectorBroadcastIntOp_MethodInfo_[] = {
	{"apply", "(Ljdk/internal/vm/vector/VectorSupport$Vector;I)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TV;I)TV;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$VectorBroadcastIntOp_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorBroadcastIntOp", "jdk.internal.vm.vector.VectorSupport", "VectorBroadcastIntOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$VectorBroadcastIntOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$VectorBroadcastIntOp",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$VectorBroadcastIntOp_MethodInfo_,
	"<V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VectorBroadcastIntOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorBroadcastIntOp($Class* clazz) {
	return $of($alloc(VectorSupport$VectorBroadcastIntOp));
}

$Class* VectorSupport$VectorBroadcastIntOp::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorBroadcastIntOp, name, initialize, &_VectorSupport$VectorBroadcastIntOp_ClassInfo_, allocate$VectorSupport$VectorBroadcastIntOp);
	return class$;
}

$Class* VectorSupport$VectorBroadcastIntOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk