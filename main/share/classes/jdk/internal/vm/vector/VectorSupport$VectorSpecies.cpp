#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

void VectorSupport$VectorSpecies::init$() {
}

VectorSupport$VectorSpecies::VectorSupport$VectorSpecies() {
}

$Class* VectorSupport$VectorSpecies::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VectorSupport$VectorSpecies, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.vm.vector.VectorSupport$VectorSpecies",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VectorSpecies, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorSpecies);
	});
	return class$;
}

$Class* VectorSupport$VectorSpecies::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk