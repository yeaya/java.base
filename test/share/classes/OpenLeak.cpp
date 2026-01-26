#include <OpenLeak.h>

#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _OpenLeak_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OpenLeak, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OpenLeak, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _OpenLeak_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OpenLeak",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OpenLeak_MethodInfo_
};

$Object* allocate$OpenLeak($Class* clazz) {
	return $of($alloc(OpenLeak));
}

void OpenLeak::init$() {
}

void OpenLeak::main($StringArray* args) {
	$load(OpenLeak);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($InetSocketAddress, isa, $new($InetSocketAddress, lh, 12345));
	$System::setSecurityManager($$new($SecurityManager));
	for (int32_t i = 0; i < 0x000186A0; ++i) {
		try {
			$SocketChannel::open(static_cast<$SocketAddress*>(isa));
			$throwNew($RuntimeException, "This should not happen"_s);
		} catch ($SecurityException& x) {
		}
	}
}

OpenLeak::OpenLeak() {
}

$Class* OpenLeak::load$($String* name, bool initialize) {
	$loadClass(OpenLeak, name, initialize, &_OpenLeak_ClassInfo_, allocate$OpenLeak);
	return class$;
}

$Class* OpenLeak::class$ = nullptr;