#include <jdk/internal/vm/vector/VectorSupport$VectorRearrangeOp.h>
#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorShuffle.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;
using $VectorSupport$VectorShuffle = ::jdk::internal::vm::vector::VectorSupport$VectorShuffle;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$VectorRearrangeOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$VectorShuffle;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TV;TSh;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$VectorRearrangeOp, apply, $VectorSupport$Vector*, $VectorSupport$Vector*, $VectorSupport$VectorShuffle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorRearrangeOp", "jdk.internal.vm.vector.VectorSupport", "VectorRearrangeOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
		{"jdk.internal.vm.vector.VectorSupport$VectorShuffle", "jdk.internal.vm.vector.VectorSupport", "VectorShuffle", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$VectorRearrangeOp",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;Sh:Ljdk/internal/vm/vector/VectorSupport$VectorShuffle<TE;>;E:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VectorRearrangeOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorRearrangeOp);
	});
	return class$;
}

$Class* VectorSupport$VectorRearrangeOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk