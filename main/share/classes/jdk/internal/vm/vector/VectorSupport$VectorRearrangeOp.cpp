#include <jdk/internal/vm/vector/VectorSupport$VectorRearrangeOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorShuffle.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;
using $VectorSupport$VectorShuffle = ::jdk::internal::vm::vector::VectorSupport$VectorShuffle;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VectorRearrangeOp_MethodInfo_[] = {
	{"apply", "(Ljdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$VectorShuffle;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TV;TSh;)TV;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$VectorRearrangeOp_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorRearrangeOp", "jdk.internal.vm.vector.VectorSupport", "VectorRearrangeOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorShuffle", "jdk.internal.vm.vector.VectorSupport", "VectorShuffle", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$VectorRearrangeOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$VectorRearrangeOp",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$VectorRearrangeOp_MethodInfo_,
	"<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;Sh:Ljdk/internal/vm/vector/VectorSupport$VectorShuffle<TE;>;E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VectorRearrangeOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorRearrangeOp($Class* clazz) {
	return $of($alloc(VectorSupport$VectorRearrangeOp));
}

$Class* VectorSupport$VectorRearrangeOp::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorRearrangeOp, name, initialize, &_VectorSupport$VectorRearrangeOp_ClassInfo_, allocate$VectorSupport$VectorRearrangeOp);
	return class$;
}

$Class* VectorSupport$VectorRearrangeOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk