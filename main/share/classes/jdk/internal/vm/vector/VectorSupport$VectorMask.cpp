#include <jdk/internal/vm/vector/VectorSupport$VectorMask.h>
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

void VectorSupport$VectorMask::init$(Object$* payload) {
	$VectorSupport$VectorPayload::init$(payload);
}

VectorSupport$VectorMask::VectorSupport$VectorMask() {
}

$Class* VectorSupport$VectorMask::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(VectorSupport$VectorMask, init$, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorMask", "jdk.internal.vm.vector.VectorSupport", "VectorMask", $PUBLIC | $STATIC},
		{"jdk.internal.vm.vector.VectorSupport$VectorPayload", "jdk.internal.vm.vector.VectorSupport", "VectorPayload", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.vm.vector.VectorSupport$VectorMask",
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
	$loadClass(VectorSupport$VectorMask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorMask);
	});
	return class$;
}

$Class* VectorSupport$VectorMask::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk