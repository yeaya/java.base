#include <jdk/internal/vm/vector/VectorSupport$VectorBlendOp.h>

#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorMask.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VectorBlendOp_MethodInfo_[] = {
	{"apply", "(Ljdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$VectorMask;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TV;TV;TM;)TV;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$VectorBlendOp_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorBlendOp", "jdk.internal.vm.vector.VectorSupport", "VectorBlendOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorMask", "jdk.internal.vm.vector.VectorSupport", "VectorMask", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$VectorBlendOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$VectorBlendOp",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$VectorBlendOp_MethodInfo_,
	"<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;M:Ljdk/internal/vm/vector/VectorSupport$VectorMask<TE;>;E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VectorBlendOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorBlendOp($Class* clazz) {
	return $of($alloc(VectorSupport$VectorBlendOp));
}

$Class* VectorSupport$VectorBlendOp::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorBlendOp, name, initialize, &_VectorSupport$VectorBlendOp_ClassInfo_, allocate$VectorSupport$VectorBlendOp);
	return class$;
}

$Class* VectorSupport$VectorBlendOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk