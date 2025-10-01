#include <jdk/internal/vm/vector/VectorSupport$VectorPayload.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _VectorSupport$VectorPayload_FieldInfo_[] = {
	{"payload", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(VectorSupport$VectorPayload, payload)},
	{}
};

$MethodInfo _VectorSupport$VectorPayload_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(VectorSupport$VectorPayload::*)(Object$*)>(&VectorSupport$VectorPayload::init$))},
	{"getPayload", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Object*(VectorSupport$VectorPayload::*)()>(&VectorSupport$VectorPayload::getPayload))},
	{}
};

$InnerClassInfo _VectorSupport$VectorPayload_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorPayload", "jdk.internal.vm.vector.VectorSupport", "VectorPayload", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$VectorPayload_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.vm.vector.VectorSupport$VectorPayload",
	"java.lang.Object",
	nullptr,
	_VectorSupport$VectorPayload_FieldInfo_,
	_VectorSupport$VectorPayload_MethodInfo_,
	nullptr,
	nullptr,
	_VectorSupport$VectorPayload_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorPayload($Class* clazz) {
	return $of($alloc(VectorSupport$VectorPayload));
}

void VectorSupport$VectorPayload::init$(Object$* payload) {
	$set(this, payload, payload);
}

$Object* VectorSupport$VectorPayload::getPayload() {
	return $of($nc(($cast(VectorSupport$VectorPayload, $($VectorSupport::maybeRebox(this)))))->payload);
}

VectorSupport$VectorPayload::VectorSupport$VectorPayload() {
}

$Class* VectorSupport$VectorPayload::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorPayload, name, initialize, &_VectorSupport$VectorPayload_ClassInfo_, allocate$VectorSupport$VectorPayload);
	return class$;
}

$Class* VectorSupport$VectorPayload::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk