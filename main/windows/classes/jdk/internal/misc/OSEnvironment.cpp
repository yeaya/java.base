#include <jdk/internal/misc/OSEnvironment.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/io/Win32ErrorMode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ErrorMode = ::sun::io::Win32ErrorMode;

namespace jdk {
	namespace internal {
		namespace misc {

$MethodInfo _OSEnvironment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OSEnvironment::*)()>(&OSEnvironment::init$))},
	{"initialize", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&OSEnvironment::initialize))},
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
	$Win32ErrorMode::initialize();
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