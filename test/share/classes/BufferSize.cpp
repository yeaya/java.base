#include <BufferSize.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ServerSocket.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _BufferSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BufferSize::*)()>(&BufferSize::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BufferSize::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _BufferSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BufferSize",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BufferSize_MethodInfo_
};

$Object* allocate$BufferSize($Class* clazz) {
	return $of($alloc(BufferSize));
}

void BufferSize::init$() {
}

void BufferSize::main($StringArray* args) {
	$var($ServerSocketChannel, sc, $ServerSocketChannel::open());
	try {
		$nc($($nc(sc)->socket()))->setReceiveBufferSize(-1);
		$throwNew($Exception, "Illegal size accepted"_s);
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	try {
		$nc($($nc(sc)->socket()))->setReceiveBufferSize(0);
		$throwNew($Exception, "Illegal size accepted"_s);
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	$nc(sc)->close();
}

BufferSize::BufferSize() {
}

$Class* BufferSize::load$($String* name, bool initialize) {
	$loadClass(BufferSize, name, initialize, &_BufferSize_ClassInfo_, allocate$BufferSize);
	return class$;
}

$Class* BufferSize::class$ = nullptr;