#include <BufferSize.h>

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

$MethodInfo _BufferSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BufferSize, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BufferSize, main, void, $StringArray*), "java.lang.Exception"},
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
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, sc, $ServerSocketChannel::open());
	try {
		$nc($($nc(sc)->socket()))->setReceiveBufferSize(-1);
		$throwNew($Exception, "Illegal size accepted"_s);
	} catch ($IllegalArgumentException& iae) {
	}
	try {
		$nc($($nc(sc)->socket()))->setReceiveBufferSize(0);
		$throwNew($Exception, "Illegal size accepted"_s);
	} catch ($IllegalArgumentException& iae) {
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