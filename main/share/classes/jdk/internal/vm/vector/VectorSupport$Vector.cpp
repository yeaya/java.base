#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$VectorPayload = ::jdk::internal::vm::vector::VectorSupport$VectorPayload;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

void VectorSupport$Vector::init$(Object$* payload) {
	$VectorSupport$VectorPayload::init$(payload);
}

VectorSupport$Vector::VectorSupport$Vector() {
}

$Class* VectorSupport$Vector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(VectorSupport$Vector, init$, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
		{"jdk.internal.vm.vector.VectorSupport$VectorPayload", "jdk.internal.vm.vector.VectorSupport", "VectorPayload", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.vm.vector.VectorSupport$Vector",
		"jdk.internal.vm.vector.VectorSupport$VectorPayload",
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljdk/internal/vm/vector/VectorSupport$VectorPayload;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$Vector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$Vector);
	});
	return class$;
}

$Class* VectorSupport$Vector::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk