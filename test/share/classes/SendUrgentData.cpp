#include <SendUrgentData.h>

#include <SendUrgentData$ServerSocketChannelThread.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $SendUrgentData$ServerSocketChannelThread = ::SendUrgentData$ServerSocketChannelThread;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

$MethodInfo _SendUrgentData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SendUrgentData::*)()>(&SendUrgentData::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SendUrgentData::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SendUrgentData_InnerClassesInfo_[] = {
	{"SendUrgentData$ServerSocketChannelThread", "SendUrgentData", "ServerSocketChannelThread", $STATIC},
	{}
};

$ClassInfo _SendUrgentData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SendUrgentData",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SendUrgentData_MethodInfo_,
	nullptr,
	nullptr,
	_SendUrgentData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SendUrgentData$ServerSocketChannelThread"
};

$Object* allocate$SendUrgentData($Class* clazz) {
	return $of($alloc(SendUrgentData));
}

void SendUrgentData::init$() {
}

void SendUrgentData::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($SendUrgentData$ServerSocketChannelThread, serverThread, $new($SendUrgentData$ServerSocketChannelThread, "SendUrgentDataServer"_s));
	serverThread->start();
	bool b = serverThread->isAlive();
	$var($String, host, nullptr);
	int32_t port = 0;
	bool inline$ = false;
	if ($nc(args)->length > 0 && $nc(args->get(0))->equals("-server"_s)) {
		$init($System);
		$nc($System::out)->println($($of(serverThread->getAddress())));
		$($Thread::currentThread())->suspend();
	} else if (args->length > 0 && $nc(args->get(0))->equals("-client"_s)) {
		$assign(host, args->get(1));
		port = $Integer::parseInt(args->get(2));
		if (args->length > 3) {
			inline$ = $nc(args->get(2))->equals("-inline"_s);
		}
	} else {
		$assign(host, "localhost"_s);
		port = $nc($(serverThread->getAddress()))->getPort();
		if (args->length > 0) {
			inline$ = $nc(args->get(0))->equals("-inline"_s);
		}
	}
	$init($System);
	$nc($System::out)->println($$str({"OOB Inline : "_s, $$str(inline$)}));
	$var($SocketAddress, sa, $new($InetSocketAddress, host, port));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($SocketChannel, sc, $SocketChannel::open(sa));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$nc(sc)->configureBlocking(false);
						$nc($(sc->socket()))->setOOBInline(inline$);
						$nc($(sc->socket()))->sendUrgentData(0);
						$nc($System::out)->println("wrote 1 OOB byte"_s);
						$var($ByteBuffer, bb, $ByteBuffer::wrap($$new($bytes, 100 * 1000)));
						int32_t blocked = 0;
						int64_t total = 0;
						int32_t n = 0;
						do {
							n = sc->write(bb);
							if (n == 0) {
								$nc($System::out)->println($$str({"blocked, wrote "_s, $$str(total), " so far"_s}));
								if (++blocked == 10) {
									break;
								}
								$Thread::sleep(100);
							} else {
								total += n;
								$nc(bb)->rewind();
							}
						} while (n > 0);
						int64_t attempted = 0;
						while (attempted < total) {
							$nc(bb)->rewind();
							n = sc->write(bb);
							$nc($System::out)->println($$str({"wrote "_s, $$str(n), " normal bytes"_s}));
							attempted += bb->capacity();
							$var($String, osName, $nc($($System::getProperty("os.name"_s)))->toLowerCase());
							try {
								$nc($(sc->socket()))->sendUrgentData(0);
							} catch ($IOException&) {
								$var($IOException, ex, $catch());
								if (osName->contains("linux"_s)) {
									if (!$nc($(ex->getMessage()))->contains("Socket buffer full"_s)) {
										$throwNew($RuntimeException, "Unexpected message"_s, ex);
									}
								} else {
									bool var$3 = osName->contains("os x"_s);
									if (var$3 || osName->contains("mac"_s)) {
										if (!$nc($(ex->getMessage()))->equals("No buffer space available"_s)) {
											$throwNew($RuntimeException, "Unexpected message"_s, ex);
										}
									} else if (osName->contains("windows"_s)) {
										if (!$nc($(ex->getMessage()))->equals("Socket buffer full"_s)) {
											$throwNew($RuntimeException, "Unexpected message"_s, ex);
										}
									} else {
										$throwNew($RuntimeException, "Unexpected IOException"_s, ex);
									}
								}
							}
							try {
								$Thread::sleep(100);
							} catch ($InterruptedException&) {
								$var($InterruptedException, ex, $catch());
								ex->printStackTrace();
								break;
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (sc != nullptr) {
							try {
								sc->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					if (sc != nullptr) {
						sc->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			serverThread->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

SendUrgentData::SendUrgentData() {
}

$Class* SendUrgentData::load$($String* name, bool initialize) {
	$loadClass(SendUrgentData, name, initialize, &_SendUrgentData_ClassInfo_, allocate$SendUrgentData);
	return class$;
}

$Class* SendUrgentData::class$ = nullptr;