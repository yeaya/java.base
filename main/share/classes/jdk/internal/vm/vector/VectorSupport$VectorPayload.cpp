#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

void VectorSupport$VectorPayload::init$(Object$* payload) {
	$set(this, payload, payload);
}

$Object* VectorSupport$VectorPayload::getPayload() {
	return $nc(($$cast(VectorSupport$VectorPayload, $VectorSupport::maybeRebox(this))))->payload;
}

VectorSupport$VectorPayload::VectorSupport$VectorPayload() {
}

$Class* VectorSupport$VectorPayload::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"payload", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(VectorSupport$VectorPayload, payload)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(VectorSupport$VectorPayload, init$, void, Object$*)},
		{"getPayload", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $method(VectorSupport$VectorPayload, getPayload, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorPayload", "jdk.internal.vm.vector.VectorSupport", "VectorPayload", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.vm.vector.VectorSupport$VectorPayload",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VectorPayload, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorPayload);
	});
	return class$;
}

$Class* VectorSupport$VectorPayload::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk