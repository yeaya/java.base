#include <jdk/internal/vm/vector/VectorSupport$LoadOperation.h>
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

$Class* VectorSupport$LoadOperation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"load", "(Ljava/lang/Object;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljava/lang/Object;", "(TC;ITS;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$LoadOperation, load, $Object*, Object$*, int32_t, $VectorSupport$VectorSpecies*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$LoadOperation", "jdk.internal.vm.vector.VectorSupport", "LoadOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$LoadOperation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<C:Ljava/lang/Object;V:Ljava/lang/Object;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$LoadOperation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$LoadOperation);
	});
	return class$;
}

$Class* VectorSupport$LoadOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk