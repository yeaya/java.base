#include <NulDevice.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef CREATE
#undef READ
#undef TRUNCATE_EXISTING
#undef WRITE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Future = ::java::util::concurrent::Future;

$MethodInfo _NulDevice_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NulDevice::*)()>(&NulDevice::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NulDevice::main)), "java.util.concurrent.ExecutionException,java.lang.InterruptedException,java.io.IOException"},
	{}
};

$ClassInfo _NulDevice_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NulDevice",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NulDevice_MethodInfo_
};

$Object* allocate$NulDevice($Class* clazz) {
	return $of($alloc(NulDevice));
}

void NulDevice::init$() {
}

void NulDevice::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Path, path, $Path::of("nul"_s, $$new($StringArray, 0)));
	{
		$var($OutputStream, os, $Files::newOutputStream(path, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(os)->write(2);
					{
						$var($InputStream, is, $Files::newInputStream(path, $$new($OpenOptionArray, 0)));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									if ($nc(is)->available() != 0) {
										$throwNew($RuntimeException, "No bytes should be available"_s);
									}
									int32_t aByte = $nc(is)->read();
									if (aByte != -1) {
										$throwNew($RuntimeException, "Should only read -1 from NUL"_s);
									}
								} catch ($Throwable& t$) {
									if (is != nullptr) {
										try {
											is->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
									}
									$throw(t$);
								}
							} catch ($Throwable& var$2) {
								$assign(var$1, var$2);
							} /*finally*/ {
								if (is != nullptr) {
									is->close();
								}
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					}
				} catch ($Throwable& t$) {
					if (os != nullptr) {
						try {
							os->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				if (os != nullptr) {
					os->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$init($StandardOpenOption);
		$var($OutputStream, os, $Files::newOutputStream(path, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::WRITE)})));
		{
			$var($Throwable, var$4, nullptr);
			try {
				try {
					$nc(os)->write(2);
				} catch ($Throwable& t$) {
					if (os != nullptr) {
						try {
							os->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$5) {
				$assign(var$4, var$5);
			} /*finally*/ {
				if (os != nullptr) {
					os->close();
				}
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
		}
	}
	{
		$init($StandardOpenOption);
		$var($FileChannel, ch, $FileChannel::open(path, $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::CREATE),
			static_cast<$OpenOption*>($StandardOpenOption::TRUNCATE_EXISTING),
			static_cast<$OpenOption*>($StandardOpenOption::WRITE)
		})));
		{
			$var($Throwable, var$6, nullptr);
			try {
				try {
					$var($bytes, bytes, "Whatever"_s->getBytes());
					$var($ByteBuffer, buf, $ByteBuffer::allocate(2 * bytes->length));
					$nc(buf)->put(bytes);
					int32_t nw = $nc(ch)->write(buf);
					if (nw != bytes->length) {
						$throwNew($RuntimeException, $$str({"Should write "_s, $$str(bytes->length), " to NUL"_s}));
					}
				} catch ($Throwable& t$) {
					if (ch != nullptr) {
						try {
							ch->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$7) {
				$assign(var$6, var$7);
			} /*finally*/ {
				if (ch != nullptr) {
					ch->close();
				}
			}
			if (var$6 != nullptr) {
				$throw(var$6);
			}
		}
	}
	{
		$init($StandardOpenOption);
		$var($FileChannel, ch, $FileChannel::open(path, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::READ)})));
		{
			$var($Throwable, var$8, nullptr);
			try {
				try {
					if ($nc(ch)->size() != 0) {
						$throwNew($RuntimeException, "Size should be zero"_s);
					}
					$var($ByteBuffer, buf, $ByteBuffer::allocate(10));
					int32_t nr = $nc(ch)->read(buf);
					if (nr != -1) {
						$throwNew($RuntimeException, $$str({"Read returns "_s, $$str(nr), " not -1"_s}));
					}
				} catch ($Throwable& t$) {
					if (ch != nullptr) {
						try {
							ch->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$9) {
				$assign(var$8, var$9);
			} /*finally*/ {
				if (ch != nullptr) {
					ch->close();
				}
			}
			if (var$8 != nullptr) {
				$throw(var$8);
			}
		}
	}
	{
		$init($StandardOpenOption);
		$var($AsynchronousFileChannel, ch, $AsynchronousFileChannel::open(path, $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::READ),
			static_cast<$OpenOption*>($StandardOpenOption::WRITE)
		})));
		{
			$var($Throwable, var$10, nullptr);
			try {
				try {
					if ($nc(ch)->size() != 0) {
						$throwNew($RuntimeException, "Size should be zero"_s);
					}
					int32_t nw = $nc(($cast($Integer, $($nc($($nc(ch)->write($($ByteBuffer::wrap($$new($bytes, {(int8_t)2}))), 0)))->get()))))->intValue();
					if (nw != 1) {
						$throwNew($RuntimeException, $$str({"Wrote "_s, $$str(nw), " bytes, not one"_s}));
					}
					$var($ByteBuffer, buf, $ByteBuffer::allocate(10));
					int32_t nr = $nc(($cast($Integer, $($nc($(ch->read(buf, 0)))->get()))))->intValue();
					if (nr != -1) {
						$throwNew($RuntimeException, $$str({"Read returns "_s, $$str(nr), " not -1"_s}));
					}
				} catch ($Throwable& t$) {
					if (ch != nullptr) {
						try {
							ch->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$11) {
				$assign(var$10, var$11);
			} /*finally*/ {
				if (ch != nullptr) {
					ch->close();
				}
			}
			if (var$10 != nullptr) {
				$throw(var$10);
			}
		}
	}
}

NulDevice::NulDevice() {
}

$Class* NulDevice::load$($String* name, bool initialize) {
	$loadClass(NulDevice, name, initialize, &_NulDevice_ClassInfo_, allocate$NulDevice);
	return class$;
}

$Class* NulDevice::class$ = nullptr;