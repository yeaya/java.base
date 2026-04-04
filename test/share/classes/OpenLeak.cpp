#include <OpenLeak.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void OpenLeak::init$() {
}

void OpenLeak::main($StringArray* args) {
	$useLocalObjectStack();
	$load(OpenLeak);
	$beforeCallerSensitive();
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($InetSocketAddress, isa, $new($InetSocketAddress, lh, 12345));
	$System::setSecurityManager($$new($SecurityManager));
	for (int32_t i = 0; i < 100000; ++i) {
		try {
			$SocketChannel::open(isa);
			$throwNew($RuntimeException, "This should not happen"_s);
		} catch ($SecurityException& x) {
		}
	}
}

OpenLeak::OpenLeak() {
}

$Class* OpenLeak::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OpenLeak, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OpenLeak, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"OpenLeak",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OpenLeak, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenLeak);
	});
	return class$;
}

$Class* OpenLeak::class$ = nullptr;