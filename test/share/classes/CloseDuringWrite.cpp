#include <CloseDuringWrite.h>

#include <CloseDuringWrite$Closer.h>
#include <java/io/Closeable.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
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
#include <java/util/Random.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef MILLISECONDS

using $CloseDuringWrite$Closer = ::CloseDuringWrite$Closer;
using $Closeable = ::java::io::Closeable;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
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
using $Random = ::java::util::Random;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $ScheduledExecutorService = ::java::util::concurrent::ScheduledExecutorService;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$FieldInfo _CloseDuringWrite_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(CloseDuringWrite, rand)},
	{}
};

$MethodInfo _CloseDuringWrite_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseDuringWrite::*)()>(&CloseDuringWrite::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseDuringWrite::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CloseDuringWrite_InnerClassesInfo_[] = {
	{"CloseDuringWrite$Closer", "CloseDuringWrite", "Closer", $STATIC},
	{}
};

$ClassInfo _CloseDuringWrite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseDuringWrite",
	"java.lang.Object",
	nullptr,
	_CloseDuringWrite_FieldInfo_,
	_CloseDuringWrite_MethodInfo_,
	nullptr,
	nullptr,
	_CloseDuringWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CloseDuringWrite$Closer"
};

$Object* allocate$CloseDuringWrite($Class* clazz) {
	return $of($alloc(CloseDuringWrite));
}

$Random* CloseDuringWrite::rand = nullptr;

void CloseDuringWrite::init$() {
}

void CloseDuringWrite::main($StringArray* args) {
	$init(CloseDuringWrite);
	$var($ScheduledExecutorService, pool, $Executors::newSingleThreadScheduledExecutor());
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							$nc(ssc)->bind($$new($InetSocketAddress, 0));
							$var($InetAddress, lh, $InetAddress::getLocalHost());
							int32_t port = $nc($(ssc->socket()))->getLocalPort();
							$var($SocketAddress, sa, $new($InetSocketAddress, lh, port));
							$var($ByteBuffer, bb, $ByteBuffer::allocate(2 * 1024 * 1024));
							for (int32_t i = 0; i < 20; ++i) {
								{
									$var($SocketChannel, source, $SocketChannel::open(sa));
									{
										$var($Throwable, var$2, nullptr);
										try {
											try {
												$var($SocketChannel, sink, ssc->accept());
												{
													$var($Throwable, var$3, nullptr);
													try {
														try {
															$var($CloseDuringWrite$Closer, c, $new($CloseDuringWrite$Closer, static_cast<$Closeable*>(static_cast<$Channel*>(static_cast<$InterruptibleChannel*>(static_cast<$AbstractInterruptibleChannel*>(static_cast<$SelectableChannel*>(static_cast<$AbstractSelectableChannel*>(source))))))));
															int32_t when = 1000 + $nc(CloseDuringWrite::rand)->nextInt(2000);
															$init($TimeUnit);
															$var($Future, result, $nc(pool)->schedule(static_cast<$Callable*>(c), (int64_t)when, $TimeUnit::MILLISECONDS));
															{
																$var($Throwable, var$4, nullptr);
																try {
																	try {
																		for (;;) {
																			int32_t limit = $nc(CloseDuringWrite::rand)->nextInt($nc(bb)->capacity());
																			$nc(bb)->position(0);
																			bb->limit(limit);
																			int32_t n = $nc(source)->write(bb);
																			$init($System);
																			$nc($System::out)->format("wrote %d, expected %d%n"_s, $$new($ObjectArray, {
																				$($of($Integer::valueOf(n))),
																				$($of($Integer::valueOf(limit)))
																			}));
																		}
																	} catch ($ClosedChannelException&) {
																		$var($ClosedChannelException, expected, $catch());
																		$init($System);
																		$nc($System::out)->println($$str({expected, " (expected)"_s}));
																	}
																} catch ($Throwable&) {
																	$assign(var$4, $catch());
																} /*finally*/ {
																	$nc(result)->get();
																}
																if (var$4 != nullptr) {
																	$throw(var$4);
																}
															}
														} catch ($Throwable&) {
															$var($Throwable, t$, $catch());
															if (sink != nullptr) {
																try {
																	sink->close();
																} catch ($Throwable&) {
																	$var($Throwable, x2, $catch());
																	t$->addSuppressed(x2);
																}
															}
															$throw(t$);
														}
													} catch ($Throwable&) {
														$assign(var$3, $catch());
													} /*finally*/ {
														if (sink != nullptr) {
															sink->close();
														}
													}
													if (var$3 != nullptr) {
														$throw(var$3);
													}
												}
											} catch ($Throwable&) {
												$var($Throwable, t$, $catch());
												if (source != nullptr) {
													try {
														source->close();
													} catch ($Throwable&) {
														$var($Throwable, x2, $catch());
														t$->addSuppressed(x2);
													}
												}
												$throw(t$);
											}
										} catch ($Throwable&) {
											$assign(var$2, $catch());
										} /*finally*/ {
											if (source != nullptr) {
												source->close();
											}
										}
										if (var$2 != nullptr) {
											$throw(var$2);
										}
									}
								}
							}
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							if (ssc != nullptr) {
								try {
									ssc->close();
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
						if (ssc != nullptr) {
							ssc->close();
						}
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(pool)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$CloseDuringWrite($Class* class$) {
	$assignStatic(CloseDuringWrite::rand, $new($Random));
}

CloseDuringWrite::CloseDuringWrite() {
}

$Class* CloseDuringWrite::load$($String* name, bool initialize) {
	$loadClass(CloseDuringWrite, name, initialize, &_CloseDuringWrite_ClassInfo_, clinit$CloseDuringWrite, allocate$CloseDuringWrite);
	return class$;
}

$Class* CloseDuringWrite::class$ = nullptr;