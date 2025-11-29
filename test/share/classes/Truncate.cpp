#include <Truncate.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/NonWritableChannelException.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef APPEND
#undef READ
#undef WRITE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Random = ::java::util::Random;

$FieldInfo _Truncate_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Truncate, generator)},
	{}
};

$MethodInfo _Truncate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Truncate::*)()>(&Truncate::init$))},
	{"appendTest", "(Ljava/io/File;)V", nullptr, $STATIC, $method(static_cast<void(*)($File*)>(&Truncate::appendTest)), "java.lang.Exception"},
	{"basicTest", "(Ljava/io/File;)V", nullptr, $STATIC, $method(static_cast<void(*)($File*)>(&Truncate::basicTest)), "java.lang.Exception"},
	{"checkException", "(Ljava/nio/channels/FileChannel;J[Ljava/lang/Class;)V", "(Ljava/nio/channels/FileChannel;J[Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($FileChannel*,int64_t,$ClassArray*)>(&Truncate::checkException)), "java.io.IOException"},
	{"exceptionTests", "(Ljava/io/File;)V", nullptr, $STATIC, $method(static_cast<void(*)($File*)>(&Truncate::exceptionTests)), "java.lang.Exception"},
	{"initTestFile", "(Ljava/io/File;J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*,int64_t)>(&Truncate::initTestFile)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Truncate::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Truncate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Truncate",
	"java.lang.Object",
	nullptr,
	_Truncate_FieldInfo_,
	_Truncate_MethodInfo_
};

$Object* allocate$Truncate($Class* clazz) {
	return $of($alloc(Truncate));
}

$Random* Truncate::generator = nullptr;

void Truncate::init$() {
}

void Truncate::main($StringArray* args) {
	$init(Truncate);
	$useLocalCurrentObjectStackCache();
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	{
		$var($Throwable, var$0, nullptr);
		try {
			basicTest(blah);
			appendTest(blah);
			exceptionTests(blah);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			blah->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Truncate::basicTest($File* blah) {
	$init(Truncate);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 100; ++i) {
		int64_t testSize = $nc(Truncate::generator)->nextInt(1000) + 10;
		initTestFile(blah, testSize);
		{
			$init($StandardOpenOption);
			$var($FileChannel, fc, (i < 50) ? $$new($RandomAccessFile, blah, "rw"_s)->getChannel() : $FileChannel::open($($nc(blah)->toPath()), $$new($OpenOptionArray, {
				static_cast<$OpenOption*>($StandardOpenOption::READ),
				static_cast<$OpenOption*>($StandardOpenOption::WRITE)
			})));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						if ($nc(fc)->size() != testSize) {
							$throwNew($RuntimeException, "Size failed"_s);
						}
						int64_t position = $nc(Truncate::generator)->nextInt((int32_t)testSize * 2);
						$nc(fc)->position(position);
						int64_t newSize = $nc(Truncate::generator)->nextInt((int32_t)testSize * 2);
						fc->truncate(newSize);
						if (newSize > testSize) {
							if (fc->size() != testSize) {
								$throwNew($RuntimeException, "Attempt to expand file changed size"_s);
							}
						} else if (fc->size() != newSize) {
							$throwNew($RuntimeException, "Unexpected size after truncate"_s);
						}
						if (position > newSize) {
							if (fc->position() != newSize) {
								$throwNew($RuntimeException, "Position greater than size"_s);
							}
						} else if (fc->position() != position) {
							$throwNew($RuntimeException, "Truncate changed position"_s);
						}
					} catch ($Throwable& t$) {
						if (fc != nullptr) {
							try {
								fc->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (fc != nullptr) {
						fc->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void Truncate::appendTest($File* blah) {
	$init(Truncate);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 10; ++i) {
		int64_t testSize = $nc(Truncate::generator)->nextInt(1000) + 10;
		initTestFile(blah, testSize);
		{
			$init($StandardOpenOption);
			$var($FileChannel, fc, (i < 5) ? $$new($FileOutputStream, blah, true)->getChannel() : $FileChannel::open($($nc(blah)->toPath()), $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::APPEND)})));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						int64_t newSize = $nc(Truncate::generator)->nextInt((int32_t)testSize);
						$nc(fc)->truncate(newSize);
						if (fc->size() != newSize) {
							$throwNew($RuntimeException, "Truncate failed"_s);
						}
						$var($ByteBuffer, buf, $ByteBuffer::allocate(1));
						$nc(buf)->put((int8_t)u'x');
						buf->flip();
						fc->write(buf);
						if (fc->size() != (newSize + 1)) {
							$throwNew($RuntimeException, "Unexpected size"_s);
						}
					} catch ($Throwable& t$) {
						if (fc != nullptr) {
							try {
								fc->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (fc != nullptr) {
						fc->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void Truncate::exceptionTests($File* blah) {
	$init(Truncate);
	$useLocalCurrentObjectStackCache();
	{
		$init($StandardOpenOption);
		$var($FileChannel, fc, $FileChannel::open($($nc(blah)->toPath()), $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::READ)})));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					int64_t size = $nc(fc)->size();
					$load($NonWritableChannelException);
					checkException(fc, 0, $$new($ClassArray, {$NonWritableChannelException::class$}));
					$load($IllegalArgumentException);
					checkException(fc, -1, $$new($ClassArray, {
						$NonWritableChannelException::class$,
						$IllegalArgumentException::class$
					}));
					checkException(fc, size + (int64_t)1, $$new($ClassArray, {$NonWritableChannelException::class$}));
					fc->close();
					$load($ClosedChannelException);
					checkException(fc, 0, $$new($ClassArray, {$ClosedChannelException::class$}));
					checkException(fc, -1, $$new($ClassArray, {
						$ClosedChannelException::class$,
						$IllegalArgumentException::class$
					}));
					checkException(fc, size + (int64_t)1, $$new($ClassArray, {$ClosedChannelException::class$}));
				} catch ($Throwable& t$) {
					if (fc != nullptr) {
						try {
							fc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (fc != nullptr) {
					fc->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$init($StandardOpenOption);
		$var($FileChannel, fc, $FileChannel::open($($nc(blah)->toPath()), $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::WRITE)})));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					int64_t size = $nc(fc)->size();
					$load($IllegalArgumentException);
					checkException(fc, -1, $$new($ClassArray, {$IllegalArgumentException::class$}));
					fc->close();
					$load($ClosedChannelException);
					checkException(fc, 0, $$new($ClassArray, {$ClosedChannelException::class$}));
					checkException(fc, -1, $$new($ClassArray, {
						$ClosedChannelException::class$,
						$IllegalArgumentException::class$
					}));
					checkException(fc, size + (int64_t)1, $$new($ClassArray, {$ClosedChannelException::class$}));
				} catch ($Throwable& t$) {
					if (fc != nullptr) {
						try {
							fc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				if (fc != nullptr) {
					fc->close();
				}
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

void Truncate::checkException($FileChannel* fc, int64_t size, $ClassArray* expected) {
	$init(Truncate);
	$useLocalCurrentObjectStackCache();
	$var($Exception, exc, nullptr);
	try {
		$nc(fc)->truncate(size);
	} catch ($Exception& actual) {
		$assign(exc, actual);
	}
	if (exc != nullptr) {
		{
			$var($ClassArray, arr$, expected);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$Class* clazz = arr$->get(i$);
				{
					if ($nc(clazz)->isInstance(exc)) {
						return;
					}
				}
			}
		}
	}
	$nc($System::err)->println("Expected one of"_s);
	{
		$var($ClassArray, arr$, expected);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* clazz = arr$->get(i$);
			{
				$nc($System::err)->println($of(clazz));
			}
		}
	}
	if (exc == nullptr) {
		$throwNew($RuntimeException, "No expection thrown"_s);
	} else {
		$throwNew($RuntimeException, "Unexpected exception thrown"_s, exc);
	}
}

void Truncate::initTestFile($File* blah, int64_t size) {
	$init(Truncate);
	$useLocalCurrentObjectStackCache();
	{
		$init($StandardCharsets);
		$var($BufferedWriter, writer, $Files::newBufferedWriter($($nc(blah)->toPath()), $StandardCharsets::ISO_8859_1, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (int32_t i = 0; i < size; ++i) {
						$nc(writer)->write("e"_s);
					}
				} catch ($Throwable& t$) {
					if (writer != nullptr) {
						try {
							writer->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (writer != nullptr) {
					writer->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void clinit$Truncate($Class* class$) {
	$assignStatic(Truncate::generator, $new($Random));
}

Truncate::Truncate() {
}

$Class* Truncate::load$($String* name, bool initialize) {
	$loadClass(Truncate, name, initialize, &_Truncate_ClassInfo_, clinit$Truncate, allocate$Truncate);
	return class$;
}

$Class* Truncate::class$ = nullptr;