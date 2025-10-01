#include <Open.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketException.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $Pipe = ::java::nio::channels::Pipe;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

$MethodInfo _Open_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Open::*)()>(&Open::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Open::main)), "java.lang.Exception"},
	{"test1", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Open::test1))},
	{"test2", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Open::test2))},
	{"test3", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Open::test3))},
	{"test4", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Open::test4))},
	{}
};

$ClassInfo _Open_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Open",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Open_MethodInfo_
};

$Object* allocate$Open($Class* clazz) {
	return $of($alloc(Open));
}

void Open::init$() {
}

void Open::test1() {
	for (int32_t i = 0; i < 11000; ++i) {
		try {
			$var($SocketChannel, sc, $SocketChannel::open());
		} catch ($Exception&) {
			$catch();
		}
	}
}

void Open::test2() {
	for (int32_t i = 0; i < 11000; ++i) {
		try {
			$var($DatagramChannel, sc, $DatagramChannel::open());
		} catch ($Exception&) {
			$catch();
		}
	}
}

void Open::test3() {
	$var($SelectorProvider, sp, $SelectorProvider::provider());
	for (int32_t i = 0; i < 11000; ++i) {
		try {
			$var($Pipe, p, $nc(sp)->openPipe());
		} catch ($Exception&) {
			$catch();
		}
	}
}

void Open::test4() {
	for (int32_t i = 0; i < 11000; ++i) {
		try {
			$var($ServerSocketChannel, sc, $ServerSocketChannel::open());
		} catch ($Exception&) {
			$catch();
		}
	}
}

void Open::main($StringArray* args) {
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$var($Exception, se, $new($SocketException));
	$var($SelectorProvider, sp, $SelectorProvider::provider());
	$var($Pipe, p, $nc(sp)->openPipe());
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	test1();
	test2();
	test3();
	test4();
}

Open::Open() {
}

$Class* Open::load$($String* name, bool initialize) {
	$loadClass(Open, name, initialize, &_Open_ClassInfo_, allocate$Open);
	return class$;
}

$Class* Open::class$ = nullptr;