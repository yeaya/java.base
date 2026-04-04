#include <jdk/internal/vm/vector/VectorSupport$VectorBlendOp.h>
#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorMask.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;
using $VectorSupport$VectorMask = ::jdk::internal::vm::vector::VectorSupport$VectorMask;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$VectorBlendOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$Vector;Ljdk/internal/vm/vector/VectorSupport$VectorMask;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TV;TV;TM;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$VectorBlendOp, apply, $VectorSupport$Vector*, $VectorSupport$Vector*, $VectorSupport$Vector*, $VectorSupport$VectorMask*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorBlendOp", "jdk.internal.vm.vector.VectorSupport", "VectorBlendOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
		{"jdk.internal.vm.vector.VectorSupport$VectorMask", "jdk.internal.vm.vector.VectorSupport", "VectorMask", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$VectorBlendOp",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;M:Ljdk/internal/vm/vector/VectorSupport$VectorMask<TE;>;E:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VectorBlendOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorBlendOp);
	});
	return class$;
}

$Class* VectorSupport$VectorBlendOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk