#include <jdk/internal/vm/vector/VectorSupport$BroadcastOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$BroadcastOperation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"broadcast", "(JLjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljava/lang/Object;", "(JTS;)TVM;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$BroadcastOperation, broadcast, $Object*, int64_t, $VectorSupport$VectorSpecies*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$BroadcastOperation", "jdk.internal.vm.vector.VectorSupport", "BroadcastOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$BroadcastOperation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<VM:Ljava/lang/Object;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$BroadcastOperation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$BroadcastOperation);
	});
	return class$;
}

$Class* VectorSupport$BroadcastOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk