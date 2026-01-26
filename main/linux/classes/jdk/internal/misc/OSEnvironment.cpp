#include <jdk/internal/misc/OSEnvironment.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace misc {

$MethodInfo _OSEnvironment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OSEnvironment, init$, void)},
	{"initialize", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(OSEnvironment, initialize, void)},
	{}
};

$ClassInfo _OSEnvironment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.misc.OSEnvironment",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OSEnvironment_MethodInfo_
};

$Object* allocate$OSEnvironment($Class* clazz) {
	return $of($alloc(OSEnvironment));
}

void OSEnvironment::init$() {
}

void OSEnvironment::initialize() {
}

OSEnvironment::OSEnvironment() {
}

$Class* OSEnvironment::load$($String* name, bool initialize) {
	$loadClass(OSEnvironment, name, initialize, &_OSEnvironment_ClassInfo_, allocate$OSEnvironment);
	return class$;
}

$Class* OSEnvironment::class$ = nullptr;

		} // misc
	} // internal
} // jdk