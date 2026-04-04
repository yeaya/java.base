#include <jdk/internal/vm/vector/VectorSupport$ShuffleIotaOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorShuffle.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$VectorShuffle = ::jdk::internal::vm::vector::VectorSupport$VectorShuffle;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$ShuffleIotaOperation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(IIILjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljdk/internal/vm/vector/VectorSupport$VectorShuffle;", "(IIITS;)Ljdk/internal/vm/vector/VectorSupport$VectorShuffle<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$ShuffleIotaOperation, apply, $VectorSupport$VectorShuffle*, int32_t, int32_t, int32_t, $VectorSupport$VectorSpecies*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$ShuffleIotaOperation", "jdk.internal.vm.vector.VectorSupport", "ShuffleIotaOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$ShuffleIotaOperation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$ShuffleIotaOperation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$ShuffleIotaOperation);
	});
	return class$;
}

$Class* VectorSupport$ShuffleIotaOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk