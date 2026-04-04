#include <jdk/internal/vm/vector/VectorSupport$VectorBroadcastIntOp.h>
#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$VectorBroadcastIntOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljdk/internal/vm/vector/VectorSupport$Vector;I)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TV;I)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$VectorBroadcastIntOp, apply, $VectorSupport$Vector*, $VectorSupport$Vector*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorBroadcastIntOp", "jdk.internal.vm.vector.VectorSupport", "VectorBroadcastIntOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$VectorBroadcastIntOp",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VectorBroadcastIntOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorBroadcastIntOp);
	});
	return class$;
}

$Class* VectorSupport$VectorBroadcastIntOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk