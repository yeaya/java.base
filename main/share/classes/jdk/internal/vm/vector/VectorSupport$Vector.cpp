#include <jdk/internal/vm/vector/VectorSupport$Vector.h>

#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$VectorPayload = ::jdk::internal::vm::vector::VectorSupport$VectorPayload;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$Vector_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(VectorSupport$Vector::*)(Object$*)>(&VectorSupport$Vector::init$))},
	{}
};

$InnerClassInfo _VectorSupport$Vector_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorPayload", "jdk.internal.vm.vector.VectorSupport", "VectorPayload", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$Vector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.vm.vector.VectorSupport$Vector",
	"jdk.internal.vm.vector.VectorSupport$VectorPayload",
	nullptr,
	nullptr,
	_VectorSupport$Vector_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljdk/internal/vm/vector/VectorSupport$VectorPayload;",
	nullptr,
	_VectorSupport$Vector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$Vector($Class* clazz) {
	return $of($alloc(VectorSupport$Vector));
}

void VectorSupport$Vector::init$(Object$* payload) {
	$VectorSupport$VectorPayload::init$(payload);
}

VectorSupport$Vector::VectorSupport$Vector() {
}

$Class* VectorSupport$Vector::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$Vector, name, initialize, &_VectorSupport$Vector_ClassInfo_, allocate$VectorSupport$Vector);
	return class$;
}

$Class* VectorSupport$Vector::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk