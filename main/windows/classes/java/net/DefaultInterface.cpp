#include <java/net/DefaultInterface.h>

#include <java/net/NetworkInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkInterface = ::java::net::NetworkInterface;

namespace java {
	namespace net {

$MethodInfo _DefaultInterface_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultInterface::*)()>(&DefaultInterface::init$))},
	{"getDefault", "()Ljava/net/NetworkInterface;", nullptr, $STATIC, $method(static_cast<$NetworkInterface*(*)()>(&DefaultInterface::getDefault))},
	{}
};

$ClassInfo _DefaultInterface_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.DefaultInterface",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultInterface_MethodInfo_
};

$Object* allocate$DefaultInterface($Class* clazz) {
	return $of($alloc(DefaultInterface));
}

void DefaultInterface::init$() {
}

$NetworkInterface* DefaultInterface::getDefault() {
	return nullptr;
}

DefaultInterface::DefaultInterface() {
}

$Class* DefaultInterface::load$($String* name, bool initialize) {
	$loadClass(DefaultInterface, name, initialize, &_DefaultInterface_ClassInfo_, allocate$DefaultInterface);
	return class$;
}

$Class* DefaultInterface::class$ = nullptr;

	} // net
} // java