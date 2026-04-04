#include <Shutdown.h>
#include <java/io/Closeable.h>
#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/SocketAddress.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef UNIX

using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SocketAddress = ::java::net::SocketAddress;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Files = ::java::nio::file::Files;
using $Arrays = ::java::util::Arrays;

void Shutdown::init$() {
}

void Shutdown::main($StringArray* args) {
	if (!supported()) {
		$nc($System::out)->println("Unix domain channels not supported"_s);
		return;
	}
	runTest();
}

bool Shutdown::supported() {
	try {
		$init($StandardProtocolFamily);
		$$nc($SocketChannel::open($StandardProtocolFamily::UNIX))->close();
	} catch ($UnsupportedOperationException& e) {
		return false;
	} catch ($Exception& e) {
		return true;
	}
	return true;
}

void Shutdown::assertTrue(bool condition, $String* error) {
	if (!condition) {
		$throwNew($RuntimeException, error);
	}
}

void Shutdown::runTest() {
	$useLocalObjectStack();
	$var($ServerSocketChannel, server, nullptr);
	$var($SocketChannel, client, nullptr);
	$var($SocketChannel, acceptee, nullptr);
	$var($UnixDomainSocketAddress, usa, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$init($StandardProtocolFamily);
		$assign(server, $ServerSocketChannel::open($StandardProtocolFamily::UNIX));
		$nc(server)->bind(nullptr);
		$assign(usa, $cast($UnixDomainSocketAddress, server->getLocalAddress()));
		$nc($System::out)->println($$str({"Local address "_s, usa}));
		$assign(client, $SocketChannel::open(usa));
		$assign(acceptee, server->accept());
		$init($StandardCharsets);
		$var($ByteBuffer, buf, $ByteBuffer::wrap($("Hello world"_s->getBytes($StandardCharsets::ISO_8859_1))));
		$var($ByteBuffer, rx, $ByteBuffer::allocate($nc(buf)->capacity()));
		$nc(client)->write(buf);
		buf->rewind();
		while ($nc(rx)->hasRemaining()) {
			$nc(acceptee)->read(rx);
		}
		$var($bytes, var$1, $cast($bytes, buf->array()));
		assertTrue($Arrays::equals(var$1, $$cast($bytes, rx->array())), "array contents not equal"_s);
		client->shutdownOutput();
		try {
			client->write(buf);
			$throwNew($RuntimeException, "shutdown error"_s);
		} catch ($ClosedChannelException& e) {
		}
		rx->clear();
		int32_t c = $nc(acceptee)->read(rx);
		assertTrue(c == -1, "read after remote shutdown"_s);
		client->configureBlocking(false);
		c = client->read(rx);
		assertTrue(c == 0, "expected c == 0"_s);
		client->shutdownInput();
		c = client->read(rx);
		assertTrue(c == -1, "expected c == -1"_s);
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		close($cast($AbstractSelectableChannel, server));
		close($cast($AbstractSelectableChannel, client));
		close($cast($AbstractSelectableChannel, acceptee));
		if (usa != nullptr) {
			$Files::delete$($(usa->getPath()));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$nc($System::out)->println("OK"_s);
}

void Shutdown::close($Closeable* c) {
	try {
		if (c != nullptr) {
			c->close();
		}
	} catch ($IOException& e) {
	}
}

Shutdown::Shutdown() {
}

$Class* Shutdown::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Shutdown, init$, void)},
		{"assertTrue", "(ZLjava/lang/String;)V", nullptr, $STATIC, $staticMethod(Shutdown, assertTrue, void, bool, $String*)},
		{"close", "(Ljava/io/Closeable;)V", nullptr, $STATIC, $staticMethod(Shutdown, close, void, $Closeable*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Shutdown, main, void, $StringArray*), "java.lang.Exception"},
		{"runTest", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Shutdown, runTest, void), "java.io.IOException"},
		{"supported", "()Z", nullptr, $STATIC, $staticMethod(Shutdown, supported, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Shutdown",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Shutdown, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Shutdown);
	});
	return class$;
}

$Class* Shutdown::class$ = nullptr;