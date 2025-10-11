#include <Shutdown.h>

#include <java/io/Closeable.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/SocketAddress.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/InterruptibleChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketAddress = ::java::net::SocketAddress;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Channel = ::java::nio::channels::Channel;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $InterruptibleChannel = ::java::nio::channels::InterruptibleChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Arrays = ::java::util::Arrays;

$MethodInfo _Shutdown_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Shutdown::*)()>(&Shutdown::init$))},
	{"assertTrue", "(ZLjava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)(bool,$String*)>(&Shutdown::assertTrue))},
	{"close", "(Ljava/io/Closeable;)V", nullptr, $STATIC, $method(static_cast<void(*)($Closeable*)>(&Shutdown::close))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Shutdown::main)), "java.lang.Exception"},
	{"runTest", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Shutdown::runTest)), "java.io.IOException"},
	{"supported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&Shutdown::supported))},
	{}
};

$ClassInfo _Shutdown_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Shutdown",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Shutdown_MethodInfo_
};

$Object* allocate$Shutdown($Class* clazz) {
	return $of($alloc(Shutdown));
}

void Shutdown::init$() {
}

void Shutdown::main($StringArray* args) {
	if (!supported()) {
		$init($System);
		$nc($System::out)->println("Unix domain channels not supported"_s);
		return;
	}
	runTest();
}

bool Shutdown::supported() {
	try {
		$init($StandardProtocolFamily);
		$nc($($SocketChannel::open(static_cast<$ProtocolFamily*>($StandardProtocolFamily::UNIX))))->close();
	} catch ($UnsupportedOperationException&) {
		$var($UnsupportedOperationException, e, $catch());
		return false;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
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
	$var($ServerSocketChannel, server, nullptr);
	$var($SocketChannel, client, nullptr);
	$var($SocketChannel, acceptee, nullptr);
	$var($UnixDomainSocketAddress, usa, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($StandardProtocolFamily);
			$assign(server, $ServerSocketChannel::open($StandardProtocolFamily::UNIX));
			$nc(server)->bind(nullptr);
			$assign(usa, $cast($UnixDomainSocketAddress, server->getLocalAddress()));
			$init($System);
			$nc($System::out)->println($$str({"Local address "_s, usa}));
			$assign(client, $SocketChannel::open(static_cast<$SocketAddress*>(usa)));
			$assign(acceptee, server->accept());
			$init($StandardCharsets);
			$var($ByteBuffer, buf, $ByteBuffer::wrap($("Hello world"_s->getBytes($StandardCharsets::ISO_8859_1))));
			$var($ByteBuffer, rx, $ByteBuffer::allocate($nc(buf)->capacity()));
			$nc(client)->write(buf);
			$nc(buf)->rewind();
			while ($nc(rx)->hasRemaining()) {
				$nc(acceptee)->read(rx);
			}
			$var($bytes, var$1, $cast($bytes, buf->array()));
			assertTrue($Arrays::equals(var$1, $($cast($bytes, $nc(rx)->array()))), "array contents not equal"_s);
			client->shutdownOutput();
			try {
				client->write(buf);
				$throwNew($RuntimeException, "shutdown error"_s);
			} catch ($ClosedChannelException&) {
				$catch();
			}
			$nc(rx)->clear();
			int32_t c = $nc(acceptee)->read(rx);
			assertTrue(c == -1, "read after remote shutdown"_s);
			client->configureBlocking(false);
			c = client->read(rx);
			assertTrue(c == 0, "expected c == 0"_s);
			client->shutdownInput();
			c = client->read(rx);
			assertTrue(c == -1, "expected c == -1"_s);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			close(static_cast<$Closeable*>(static_cast<$Channel*>(static_cast<$InterruptibleChannel*>(static_cast<$AbstractInterruptibleChannel*>(static_cast<$SelectableChannel*>(static_cast<$AbstractSelectableChannel*>(server)))))));
			close(static_cast<$Closeable*>(static_cast<$Channel*>(static_cast<$InterruptibleChannel*>(static_cast<$AbstractInterruptibleChannel*>(static_cast<$SelectableChannel*>(static_cast<$AbstractSelectableChannel*>(client)))))));
			close(static_cast<$Closeable*>(static_cast<$Channel*>(static_cast<$InterruptibleChannel*>(static_cast<$AbstractInterruptibleChannel*>(static_cast<$SelectableChannel*>(static_cast<$AbstractSelectableChannel*>(acceptee)))))));
			if (usa != nullptr) {
				$Files::delete$($(usa->getPath()));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$init($System);
	$nc($System::out)->println("OK"_s);
}

void Shutdown::close($Closeable* c) {
	try {
		if (c != nullptr) {
			c->close();
		}
	} catch ($IOException&) {
		$catch();
	}
}

Shutdown::Shutdown() {
}

$Class* Shutdown::load$($String* name, bool initialize) {
	$loadClass(Shutdown, name, initialize, &_Shutdown_ClassInfo_, allocate$Shutdown);
	return class$;
}

$Class* Shutdown::class$ = nullptr;