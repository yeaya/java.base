#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$VectorSpecies_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VectorSupport$VectorSpecies::*)()>(&VectorSupport$VectorSpecies::init$))},
	{}
};

$InnerClassInfo _VectorSupport$VectorSpecies_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$VectorSpecies_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.vm.vector.VectorSupport$VectorSpecies",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VectorSupport$VectorSpecies_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$VectorSpecies_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$VectorSpecies($Class* clazz) {
	return $of($alloc(VectorSupport$VectorSpecies));
}

void VectorSupport$VectorSpecies::init$() {
}

VectorSupport$VectorSpecies::VectorSupport$VectorSpecies() {
}

$Class* VectorSupport$VectorSpecies::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$VectorSpecies, name, initialize, &_VectorSupport$VectorSpecies_ClassInfo_, allocate$VectorSupport$VectorSpecies);
	return class$;
}

$Class* VectorSupport$VectorSpecies::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk