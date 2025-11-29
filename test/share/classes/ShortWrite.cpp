#include <ShortWrite.h>

#include <ShortWrite$Reader.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/util/Random.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/zip/CRC32.h>
#include <jcpp.h>

#undef BOUNDARY

using $ShortWrite$Reader = ::ShortWrite$Reader;
using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Random = ::java::util::Random;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $CRC32 = ::java::util::zip::CRC32;

$FieldInfo _ShortWrite_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(ShortWrite, rand)},
	{}
};

$MethodInfo _ShortWrite_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShortWrite::*)()>(&ShortWrite::init$))},
	{"computeChecksum", "([Ljava/nio/ByteBuffer;)J", nullptr, $STATIC | $TRANSIENT, $method(static_cast<int64_t(*)($ByteBufferArray*)>(&ShortWrite::computeChecksum))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ShortWrite::main)), "java.lang.Exception"},
	{"test1", "(Ljava/util/concurrent/ExecutorService;Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;I)V", nullptr, $STATIC, $method(static_cast<void(*)($ExecutorService*,$SocketChannel*,$SocketChannel*,int32_t)>(&ShortWrite::test1)), "java.lang.Exception"},
	{"testN", "(Ljava/util/concurrent/ExecutorService;Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;[I)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)($ExecutorService*,$SocketChannel*,$SocketChannel*,$ints*)>(&ShortWrite::testN)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ShortWrite_InnerClassesInfo_[] = {
	{"ShortWrite$Reader", "ShortWrite", "Reader", $STATIC},
	{}
};

$ClassInfo _ShortWrite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ShortWrite",
	"java.lang.Object",
	nullptr,
	_ShortWrite_FieldInfo_,
	_ShortWrite_MethodInfo_,
	nullptr,
	nullptr,
	_ShortWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ShortWrite$Reader"
};

$Object* allocate$ShortWrite($Class* clazz) {
	return $of($alloc(ShortWrite));
}

$Random* ShortWrite::rand = nullptr;

void ShortWrite::init$() {
}

int64_t ShortWrite::computeChecksum($ByteBufferArray* bufs) {
	$init(ShortWrite);
	$var($CRC32, crc32, $new($CRC32));
	for (int32_t i = 0; i < $nc(bufs)->length; ++i) {
		crc32->update(bufs->get(i));
	}
	return crc32->getValue();
}

void ShortWrite::test1($ExecutorService* pool, $SocketChannel* source, $SocketChannel* sink, int32_t size) {
	$init(ShortWrite);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"write(ByteBuffer), size="_s, $$str(size)}));
	$var($ByteBuffer, buf, $ByteBuffer::allocate(size));
	$nc(ShortWrite::rand)->nextBytes($($cast($bytes, $nc(buf)->array())));
	$var($Future, result, $nc(pool)->submit(static_cast<$Callable*>($$new($ShortWrite$Reader, sink, size))));
	int32_t n = $nc(source)->write(buf);
	if (n != size) {
		$throwNew($RuntimeException, "Short write detected"_s);
	}
	$nc(buf)->rewind();
	int64_t expected = computeChecksum($$new($ByteBufferArray, {buf}));
	int64_t actual = $nc(($cast($Long, $($nc(result)->get()))))->longValue();
	if (actual != expected) {
		$throwNew($RuntimeException, "Checksum did not match"_s);
	}
}

void ShortWrite::testN($ExecutorService* pool, $SocketChannel* source, $SocketChannel* sink, $ints* sizes) {
	$init(ShortWrite);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->print("write(ByteBuffer[]), sizes="_s);
	{
		$var($ints, arr$, sizes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t size = arr$->get(i$);
			$nc($System::out)->print($$str({$$str(size), " "_s}));
		}
	}
	$nc($System::out)->println();
	int32_t total = 0;
	int32_t len = $nc(sizes)->length;
	$var($ByteBufferArray, bufs, $new($ByteBufferArray, len));
	for (int32_t i = 0; i < len; ++i) {
		int32_t size = sizes->get(i);
		$var($ByteBuffer, buf, $ByteBuffer::allocate(size));
		$nc(ShortWrite::rand)->nextBytes($($cast($bytes, $nc(buf)->array())));
		bufs->set(i, buf);
		total += size;
	}
	$var($Future, result, $nc(pool)->submit(static_cast<$Callable*>($$new($ShortWrite$Reader, sink, total))));
	int64_t n = $nc(source)->write(bufs);
	if (n != total) {
		$throwNew($RuntimeException, "Short write detected"_s);
	}
	for (int32_t i = 0; i < len; ++i) {
		$nc(bufs->get(i))->rewind();
	}
	int64_t expected = computeChecksum(bufs);
	int64_t actual = $nc(($cast($Long, $($nc(result)->get()))))->longValue();
	if (actual != expected) {
		$throwNew($RuntimeException, "Checksum did not match"_s);
	}
}

void ShortWrite::main($StringArray* args) {
	$init(ShortWrite);
	$useLocalCurrentObjectStackCache();
	$var($ExecutorService, pool, $Executors::newSingleThreadExecutor());
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
														int32_t BOUNDARY = 128 * 1024;
														for (int32_t size = (BOUNDARY - 2); size <= (BOUNDARY + 2); ++size) {
															test1(pool, source, sink, size);
														}
														for (int32_t i = 0; i < 20; ++i) {
															int32_t size = $nc(ShortWrite::rand)->nextInt(1024 * 1024);
															test1(pool, source, sink, size);
														}
														for (int32_t i = BOUNDARY - 2; i <= BOUNDARY + 2; ++i) {
															testN(pool, source, sink, $$new($ints, {i}));
															testN(pool, source, sink, $$new($ints, {
																0,
																i
															}));
															testN(pool, source, sink, $$new($ints, {
																i,
																0
															}));
															for (int32_t j = BOUNDARY - 2; j <= BOUNDARY + 2; ++j) {
																testN(pool, source, sink, $$new($ints, {
																	i,
																	j
																}));
																testN(pool, source, sink, $$new($ints, {
																	0,
																	i,
																	j
																}));
																testN(pool, source, sink, $$new($ints, {
																	i,
																	0,
																	j
																}));
																testN(pool, source, sink, $$new($ints, {
																	i,
																	j,
																	0
																}));
																for (int32_t k = BOUNDARY - 2; k <= BOUNDARY + 2; ++k) {
																	testN(pool, source, sink, $$new($ints, {
																		i,
																		j,
																		k
																	}));
																	testN(pool, source, sink, $$new($ints, {
																		0,
																		i,
																		j,
																		k
																	}));
																	testN(pool, source, sink, $$new($ints, {
																		i,
																		0,
																		j,
																		k
																	}));
																	testN(pool, source, sink, $$new($ints, {
																		i,
																		j,
																		0,
																		k
																	}));
																	testN(pool, source, sink, $$new($ints, {
																		i,
																		j,
																		k,
																		0
																	}));
																}
															}
														}
														for (int32_t i = 0; i < 20; ++i) {
															int32_t n = $nc(ShortWrite::rand)->nextInt(9);
															$var($ints, sizes, $new($ints, n));
															for (int32_t j = 0; j < n; ++j) {
																sizes->set(j, $nc(ShortWrite::rand)->nextInt(1024 * 1024));
															}
															testN(pool, source, sink, sizes);
														}
													} catch ($Throwable& t$) {
														if (sink != nullptr) {
															try {
																sink->close();
															} catch ($Throwable& x2) {
																t$->addSuppressed(x2);
															}
														}
														$throw(t$);
													}
												} catch ($Throwable& var$4) {
													$assign(var$3, var$4);
												} /*finally*/ {
													if (sink != nullptr) {
														sink->close();
													}
												}
												if (var$3 != nullptr) {
													$throw(var$3);
												}
											}
										} catch ($Throwable& t$) {
											if (source != nullptr) {
												try {
													source->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
											}
											$throw(t$);
										}
									} catch ($Throwable& var$5) {
										$assign(var$2, var$5);
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
						} catch ($Throwable& t$) {
							if (ssc != nullptr) {
								try {
									ssc->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$6) {
						$assign(var$1, var$6);
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
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} /*finally*/ {
			$nc(pool)->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$ShortWrite($Class* class$) {
	$assignStatic(ShortWrite::rand, $new($Random));
}

ShortWrite::ShortWrite() {
}

$Class* ShortWrite::load$($String* name, bool initialize) {
	$loadClass(ShortWrite, name, initialize, &_ShortWrite_ClassInfo_, clinit$ShortWrite, allocate$ShortWrite);
	return class$;
}

$Class* ShortWrite::class$ = nullptr;