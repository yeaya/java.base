#include <jdk/internal/vm/vector/VectorSupport$StoreVectorOperation.h>
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

$Class* VectorSupport$StoreVectorOperation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"store", "(Ljava/lang/Object;ILjdk/internal/vm/vector/VectorSupport$Vector;)V", "(TC;ITV;)V", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$StoreVectorOperation, store, void, Object$*, int32_t, $VectorSupport$Vector*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$StoreVectorOperation", "jdk.internal.vm.vector.VectorSupport", "StoreVectorOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$StoreVectorOperation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<C:Ljava/lang/Object;V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$StoreVectorOperation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$StoreVectorOperation);
	});
	return class$;
}

$Class* VectorSupport$StoreVectorOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk