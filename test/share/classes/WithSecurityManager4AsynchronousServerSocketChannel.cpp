#include <WithSecurityManager4AsynchronousServerSocketChannel.h>

#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Future = ::java::util::concurrent::Future;

$MethodInfo _WithSecurityManager4AsynchronousServerSocketChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(WithSecurityManager4AsynchronousServerSocketChannel, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WithSecurityManager4AsynchronousServerSocketChannel, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _WithSecurityManager4AsynchronousServerSocketChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WithSecurityManager4AsynchronousServerSocketChannel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WithSecurityManager4AsynchronousServerSocketChannel_MethodInfo_
};

$Object* allocate$WithSecurityManager4AsynchronousServerSocketChannel($Class* clazz) {
	return $of($alloc(WithSecurityManager4AsynchronousServerSocketChannel));
}

void WithSecurityManager4AsynchronousServerSocketChannel::init$() {
}

void WithSecurityManager4AsynchronousServerSocketChannel::main($StringArray* args) {
	$load(WithSecurityManager4AsynchronousServerSocketChannel);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool allow = false;
	$var($String, policy, ($nc($nc(args)->get(0))->equals("allow"_s)) ? "java.policy.allow"_s : "java.policy.deny"_s);
	$var($String, testSrc, $System::getProperty("test.src"_s));
	if (testSrc == nullptr) {
		$assign(testSrc, "."_s);
	}
	$System::setProperty("java.security.policy"_s, $($nc($($nc($($Paths::get(testSrc, $$new($StringArray, 0))))->resolve(policy)))->toString()));
	$System::setSecurityManager($$new($SecurityManager));
	$var($AsynchronousServerSocketChannel, listener, $cast($AsynchronousServerSocketChannel, $nc($($AsynchronousServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	int32_t port = $nc((($cast($InetSocketAddress, $($nc(listener)->getLocalAddress())))))->getPort();
	$var($SocketChannel, sc, $SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, lh, port))));
	$var($Future, result, listener->accept());
	if (allow) {
		$nc(($cast($AsynchronousSocketChannel, $($nc(result)->get()))))->close();
	} else {
		try {
			$nc(result)->get();
		} catch ($ExecutionException& x) {
			if (!($instanceOf($SecurityException, $(x->getCause())))) {
				$throwNew($RuntimeException, "SecurityException expected"_s);
			}
		}
	}
	$nc(sc)->close();
	listener->close();
}

WithSecurityManager4AsynchronousServerSocketChannel::WithSecurityManager4AsynchronousServerSocketChannel() {
}

$Class* WithSecurityManager4AsynchronousServerSocketChannel::load$($String* name, bool initialize) {
	$loadClass(WithSecurityManager4AsynchronousServerSocketChannel, name, initialize, &_WithSecurityManager4AsynchronousServerSocketChannel_ClassInfo_, allocate$WithSecurityManager4AsynchronousServerSocketChannel);
	return class$;
}

$Class* WithSecurityManager4AsynchronousServerSocketChannel::class$ = nullptr;