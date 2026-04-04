#include <ExceptionTranslation.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/UnknownHostException.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void ExceptionTranslation::init$() {
}

void ExceptionTranslation::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetSocketAddress, iAddr, $new($InetSocketAddress, "nosuchhostname"_s, 5182));
	try {
		$var($SocketChannel, channel, $SocketChannel::open());
		$$nc($nc(channel)->socket())->connect(iAddr, 30000);
		$throwNew($RuntimeException, "Expected exception not thrown"_s);
	} catch ($UnknownHostException& x) {
	}
	try {
		$var($SocketChannel, chan1, $SocketChannel::open());
		$$nc($nc(chan1)->socket())->bind($$new($InetSocketAddress, 0));
		$$nc(chan1->socket())->bind($$new($InetSocketAddress, 0));
		$throwNew($RuntimeException, "Expected exception not thrown"_s);
	} catch ($IOException& e) {
	}
}

ExceptionTranslation::ExceptionTranslation() {
}

$Class* ExceptionTranslation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExceptionTranslation, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ExceptionTranslation, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ExceptionTranslation",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExceptionTranslation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExceptionTranslation);
	});
	return class$;
}

$Class* ExceptionTranslation::class$ = nullptr;