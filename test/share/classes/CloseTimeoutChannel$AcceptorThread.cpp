#include <CloseTimeoutChannel$AcceptorThread.h>

#include <CloseTimeoutChannel.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/InterruptedException.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

#undef INDENT

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$FieldInfo _CloseTimeoutChannel$AcceptorThread_FieldInfo_[] = {
	{"INDENT", "Ljava/lang/String;", nullptr, $FINAL, $field(CloseTimeoutChannel$AcceptorThread, INDENT)},
	{"_listener", "Ljava/nio/channels/ServerSocketChannel;", nullptr, 0, $field(CloseTimeoutChannel$AcceptorThread, _listener)},
	{}
};

$MethodInfo _CloseTimeoutChannel$AcceptorThread_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/ServerSocketChannel;)V", nullptr, 0, $method(CloseTimeoutChannel$AcceptorThread, init$, void, $ServerSocketChannel*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CloseTimeoutChannel$AcceptorThread, run, void)},
	{}
};

$InnerClassInfo _CloseTimeoutChannel$AcceptorThread_InnerClassesInfo_[] = {
	{"CloseTimeoutChannel$AcceptorThread", "CloseTimeoutChannel", "AcceptorThread", $STATIC},
	{}
};

$ClassInfo _CloseTimeoutChannel$AcceptorThread_ClassInfo_ = {
	$ACC_SUPER,
	"CloseTimeoutChannel$AcceptorThread",
	"java.lang.Thread",
	nullptr,
	_CloseTimeoutChannel$AcceptorThread_FieldInfo_,
	_CloseTimeoutChannel$AcceptorThread_MethodInfo_,
	nullptr,
	nullptr,
	_CloseTimeoutChannel$AcceptorThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseTimeoutChannel"
};

$Object* allocate$CloseTimeoutChannel$AcceptorThread($Class* clazz) {
	return $of($alloc(CloseTimeoutChannel$AcceptorThread));
}

void CloseTimeoutChannel$AcceptorThread::init$($ServerSocketChannel* listener) {
	$Thread::init$();
	$set(this, INDENT, "\t\t\t\t"_s);
	$set(this, _listener, listener);
}

void CloseTimeoutChannel$AcceptorThread::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				try {
					$Thread::sleep(100);
				} catch ($InterruptedException& e) {
				}
				$nc($System::out)->println($$str({this->INDENT, "Listening on port "_s, $$str($nc($($nc(this->_listener)->socket()))->getLocalPort())}));
				$var($ByteBuffer, buf, $ByteBuffer::allocate(5));
				$var($Socket, client, $nc($($nc(this->_listener)->accept()))->socket());
				$nc($System::out)->println($$str({this->INDENT, "Accepted client"_s}));
				$var($OutputStream, out, $nc(client)->getOutputStream());
				$var($InputStream, in, client->getInputStream());
				int32_t n = $nc(in)->read();
				$nc($System::out)->println($$str({this->INDENT, "Read byte "_s, $$str(n), "\n"_s}));
				$nc($System::out)->println($$str({this->INDENT, "2. Writing byte 2"_s}));
				$nc(out)->write((int32_t)(int8_t)2);
				n = in->read();
				$nc($System::out)->println($$str({this->INDENT, "Read byte "_s, $$str(n), "\n"_s}));
				n = in->read();
				$nc($System::out)->println($$str({this->INDENT, "Read byte "_s, (n < 0 ? "EOF"_s : $($Integer::toString(n)))}));
				$nc($System::out)->println($$str({this->INDENT, "Closing"_s}));
				client->close();
			} catch ($IOException& e) {
				$nc($System::out)->println($$str({this->INDENT, "Error accepting!"_s}));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			try {
				$nc(this->_listener)->close();
			} catch ($IOException& ignore) {
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

CloseTimeoutChannel$AcceptorThread::CloseTimeoutChannel$AcceptorThread() {
}

$Class* CloseTimeoutChannel$AcceptorThread::load$($String* name, bool initialize) {
	$loadClass(CloseTimeoutChannel$AcceptorThread, name, initialize, &_CloseTimeoutChannel$AcceptorThread_ClassInfo_, allocate$CloseTimeoutChannel$AcceptorThread);
	return class$;
}

$Class* CloseTimeoutChannel$AcceptorThread::class$ = nullptr;