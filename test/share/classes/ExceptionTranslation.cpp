#include <ExceptionTranslation.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _ExceptionTranslation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExceptionTranslation::*)()>(&ExceptionTranslation::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExceptionTranslation::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ExceptionTranslation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExceptionTranslation",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExceptionTranslation_MethodInfo_
};

$Object* allocate$ExceptionTranslation($Class* clazz) {
	return $of($alloc(ExceptionTranslation));
}

void ExceptionTranslation::init$() {
}

void ExceptionTranslation::main($StringArray* args) {
	$var($InetSocketAddress, iAddr, $new($InetSocketAddress, "nosuchhostname"_s, 5182));
	try {
		$var($SocketChannel, channel, $SocketChannel::open());
		$nc($($nc(channel)->socket()))->connect(iAddr, 30000);
		$throwNew($RuntimeException, "Expected exception not thrown"_s);
	} catch ($UnknownHostException&) {
		$catch();
	}
	try {
		$var($SocketChannel, chan1, $SocketChannel::open());
		$nc($($nc(chan1)->socket()))->bind($$new($InetSocketAddress, 0));
		$nc($(chan1->socket()))->bind($$new($InetSocketAddress, 0));
		$throwNew($RuntimeException, "Expected exception not thrown"_s);
	} catch ($IOException&) {
		$catch();
	}
}

ExceptionTranslation::ExceptionTranslation() {
}

$Class* ExceptionTranslation::load$($String* name, bool initialize) {
	$loadClass(ExceptionTranslation, name, initialize, &_ExceptionTranslation_ClassInfo_, allocate$ExceptionTranslation);
	return class$;
}

$Class* ExceptionTranslation::class$ = nullptr;