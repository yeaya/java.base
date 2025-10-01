#include <MapTest.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/NonReadableChannelException.h>
#include <java/nio/channels/NonWritableChannelException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef READ
#undef CHARS_PER_LINE
#undef BLOCK_SIZE
#undef BLOCK_COUNT
#undef ISO_8859_1
#undef MAX_VALUE
#undef READ_ONLY
#undef READ_WRITE
#undef PRIVATE
#undef WRITE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $Writer = ::java::io::Writer;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $NonReadableChannelException = ::java::nio::channels::NonReadableChannelException;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Random = ::java::util::Random;

$FieldInfo _MapTest_FieldInfo_[] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $staticField(MapTest, out)},
	{"err", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $staticField(MapTest, err)},
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(MapTest, generator)},
	{"CHARS_PER_LINE", "I", nullptr, $PRIVATE | $STATIC, $staticField(MapTest, CHARS_PER_LINE)},
	{"blah", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(MapTest, blah)},
	{}
};

$MethodInfo _MapTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MapTest::*)()>(&MapTest::init$))},
	{"checkException", "(Ljava/nio/channels/FileChannel;Ljava/nio/channels/FileChannel$MapMode;JJ[Ljava/lang/Class;)V", "(Ljava/nio/channels/FileChannel;Ljava/nio/channels/FileChannel$MapMode;JJ[Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($FileChannel*,$FileChannel$MapMode*,int64_t,int64_t,$ClassArray*)>(&MapTest::checkException)), "java.io.IOException"},
	{"initTestFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&MapTest::initTestFile)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MapTest::main)), "java.lang.Exception"},
	{"testExceptions", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MapTest::testExceptions)), "java.lang.Exception"},
	{"testExceptions", "(Ljava/nio/channels/FileChannel;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FileChannel*)>(&MapTest::testExceptions)), "java.io.IOException"},
	{"testForce", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MapTest::testForce)), "java.lang.Exception"},
	{"testHighOffset", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MapTest::testHighOffset)), "java.lang.Exception"},
	{"testRead", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MapTest::testRead)), "java.lang.Exception"},
	{"testWrite", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MapTest::testWrite)), "java.lang.Exception"},
	{"testZero", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MapTest::testZero)), "java.lang.Exception"},
	{}
};

$ClassInfo _MapTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MapTest",
	"java.lang.Object",
	nullptr,
	_MapTest_FieldInfo_,
	_MapTest_MethodInfo_
};

$Object* allocate$MapTest($Class* clazz) {
	return $of($alloc(MapTest));
}

$PrintStream* MapTest::out = nullptr;
$PrintStream* MapTest::err = nullptr;
$Random* MapTest::generator = nullptr;
int32_t MapTest::CHARS_PER_LINE = 0;
$File* MapTest::blah = nullptr;

void MapTest::init$() {
}

void MapTest::main($StringArray* args) {
	$init(MapTest);
	$assignStatic(MapTest::blah, $File::createTempFile("blah"_s, nullptr));
	$nc(MapTest::blah)->deleteOnExit();
	initTestFile(MapTest::blah);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(MapTest::out)->println($$str({"Test file "_s, MapTest::blah, " initialized"_s}));
			testZero();
			$nc(MapTest::out)->println("Zero size: OK"_s);
			testRead();
			$nc(MapTest::out)->println("Read: OK"_s);
			testWrite();
			$nc(MapTest::out)->println("Write: OK"_s);
			testHighOffset();
			$nc(MapTest::out)->println("High offset: OK"_s);
			testForce();
			$nc(MapTest::out)->println("Force: OK"_s);
			testExceptions();
			$nc(MapTest::out)->println("Exceptions: OK"_s);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(MapTest::blah)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MapTest::initTestFile($File* blah) {
	$init(MapTest);
	{
		$init($StandardCharsets);
		$var($BufferedWriter, writer, $Files::newBufferedWriter($($nc(blah)->toPath()), $StandardCharsets::ISO_8859_1, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (int32_t i = 0; i < 4000; ++i) {
						$var($String, number, $$new($Integer, i)->toString());
						for (int32_t h = 0; h < 4 - $nc(number)->length(); ++h) {
							$nc(writer)->write("0"_s);
						}
						$nc(writer)->write($$str({""_s, $$str(i)}));
						writer->newLine();
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (writer != nullptr) {
						try {
							writer->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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

void MapTest::testZero() {
	$init(MapTest);
	{
		$var($FileInputStream, fis, $new($FileInputStream, MapTest::blah));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($FileChannel, fc, fis->getChannel());
					$init($FileChannel$MapMode);
					$var($MappedByteBuffer, b, $nc(fc)->map($FileChannel$MapMode::READ_ONLY, 0, 0));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						fis->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				fis->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void MapTest::testRead() {
	$init(MapTest);
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->setLength(4);
	for (int32_t x = 0; x < 1000; ++x) {
		{
			$var($FileInputStream, fis, $new($FileInputStream, MapTest::blah));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($FileChannel, fc, fis->getChannel());
						int64_t offset = $nc(MapTest::generator)->nextInt(10000);
						int64_t expectedResult = $div(offset, MapTest::CHARS_PER_LINE);
						offset = expectedResult * MapTest::CHARS_PER_LINE;
						$init($FileChannel$MapMode);
						$var($MappedByteBuffer, b, $nc(fc)->map($FileChannel$MapMode::READ_ONLY, offset, 100));
						for (int32_t i = 0; i < 4; ++i) {
							int8_t aByte = $nc(b)->get(i);
							sb->setCharAt(i, (char16_t)aByte);
						}
						int32_t result = $Integer::parseInt($(sb->toString()));
						if (result != expectedResult) {
							$nc(MapTest::err)->println($$str({"I expected "_s, $$str(expectedResult)}));
							$nc(MapTest::err)->println($$str({"I got "_s, $$str(result)}));
							$throwNew($Exception, "Read test failed"_s);
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							fis->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					fis->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void MapTest::testWrite() {
	$init(MapTest);
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->setLength(4);
	for (int32_t x = 0; x < 1000; ++x) {
		{
			$var($RandomAccessFile, raf, $new($RandomAccessFile, MapTest::blah, "rw"_s));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($FileChannel, fc, raf->getChannel());
						int64_t offset = $nc(MapTest::generator)->nextInt(1000);
						$init($FileChannel$MapMode);
						$var($MappedByteBuffer, b, $nc(fc)->map($FileChannel$MapMode::READ_WRITE, offset, 100));
						for (int32_t i = 0; i < 4; ++i) {
							$nc(b)->put(i, (int8_t)(u'0' + i));
						}
						for (int32_t i = 0; i < 4; ++i) {
							int8_t aByte = $nc(b)->get(i);
							sb->setCharAt(i, (char16_t)aByte);
						}
						if (!$nc($(sb->toString()))->equals("0123"_s)) {
							$throwNew($Exception, "Write test failed"_s);
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							raf->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					raf->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void MapTest::testHighOffset() {
	$init(MapTest);
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->setLength(4);
	for (int32_t x = 0; x < 1000; ++x) {
		{
			$var($RandomAccessFile, raf, $new($RandomAccessFile, MapTest::blah, "rw"_s));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($FileChannel, fc, raf->getChannel());
						int64_t offset = 0x000101D0;
						$init($FileChannel$MapMode);
						$var($MappedByteBuffer, b, $nc(fc)->map($FileChannel$MapMode::READ_WRITE, offset, 100));
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							raf->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					raf->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void MapTest::testForce() {
	$init(MapTest);
	for (int32_t x = 0; x < 50; ++x) {
		{
			$var($RandomAccessFile, raf, $new($RandomAccessFile, MapTest::blah, "rw"_s));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($FileChannel, fc, raf->getChannel());
						int32_t BLOCK_SIZE = 64;
						int32_t BLOCK_COUNT = $div((4096 * 2), BLOCK_SIZE);
						int32_t offset = 0;
						$init($FileChannel$MapMode);
						$var($MappedByteBuffer, b, $nc(fc)->map($FileChannel$MapMode::READ_WRITE, 0, BLOCK_SIZE * (BLOCK_COUNT + 1)));
						for (int32_t blocks = 0; blocks < BLOCK_COUNT; ++blocks) {
							for (int32_t i = 0; i < BLOCK_SIZE; ++i) {
								$nc(b)->put(offset + i, (int8_t)(u'0' + i));
							}
							$nc(b)->force(offset, BLOCK_SIZE);
							offset += BLOCK_SIZE;
						}
						$var($Exception, exc, nullptr);
						try {
							$nc(b)->force(offset + BLOCK_SIZE, BLOCK_SIZE);
						} catch ($IndexOutOfBoundsException&) {
							$var($IndexOutOfBoundsException, e, $catch());
							$assign(exc, e);
						}
						if (exc == nullptr) {
							$throwNew($RuntimeException, "expected Exception for force beyond buffer extent"_s);
						}
						$assign(exc, nullptr);
						try {
							$nc(b)->force(offset, 2 * BLOCK_SIZE);
						} catch ($IndexOutOfBoundsException&) {
							$var($IndexOutOfBoundsException, e, $catch());
							$assign(exc, e);
						}
						if (exc == nullptr) {
							$throwNew($RuntimeException, "expected Exception for force beyond write limit"_s);
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							raf->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					raf->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void MapTest::testExceptions() {
	$init(MapTest);
	{
		$init($StandardOpenOption);
		$var($FileChannel, fc, $FileChannel::open($($nc(MapTest::blah)->toPath()), $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::READ)})));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					testExceptions(fc);
					$init($FileChannel$MapMode);
					$load($NonWritableChannelException);
					checkException(fc, $FileChannel$MapMode::READ_WRITE, 0, $nc(fc)->size(), $$new($ClassArray, {$NonWritableChannelException::class$}));
						$load($IllegalArgumentException);
					checkException(fc, $FileChannel$MapMode::READ_WRITE, -1, $nc(fc)->size(), $$new($ClassArray, {
						$NonWritableChannelException::class$,
						$IllegalArgumentException::class$
					}));
					checkException(fc, $FileChannel$MapMode::READ_WRITE, 0, -1, $$new($ClassArray, {
						$NonWritableChannelException::class$,
						$IllegalArgumentException::class$
					}));
					checkException(fc, $FileChannel$MapMode::PRIVATE, 0, $nc(fc)->size(), $$new($ClassArray, {$NonWritableChannelException::class$}));
					checkException(fc, $FileChannel$MapMode::PRIVATE, -1, $nc(fc)->size(), $$new($ClassArray, {
						$NonWritableChannelException::class$,
						$IllegalArgumentException::class$
					}));
					checkException(fc, $FileChannel$MapMode::PRIVATE, 0, -1, $$new($ClassArray, {
						$NonWritableChannelException::class$,
						$IllegalArgumentException::class$
					}));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (fc != nullptr) {
						try {
							fc->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
		$var($FileChannel, fc, $FileChannel::open($($nc(MapTest::blah)->toPath()), $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::WRITE)})));
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					testExceptions(fc);
					$init($FileChannel$MapMode);
					$load($NonReadableChannelException);
					checkException(fc, $FileChannel$MapMode::READ_ONLY, 0, $nc(fc)->size(), $$new($ClassArray, {$NonReadableChannelException::class$}));
						$load($IllegalArgumentException);
					checkException(fc, $FileChannel$MapMode::READ_ONLY, -1, $nc(fc)->size(), $$new($ClassArray, {
						$NonReadableChannelException::class$,
						$IllegalArgumentException::class$
					}));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (fc != nullptr) {
						try {
							fc->close();
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
				if (fc != nullptr) {
					fc->close();
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
	{
			$init($StandardOpenOption);
		$var($FileChannel, fc, $FileChannel::open($($nc(MapTest::blah)->toPath()), $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::READ),
			static_cast<$OpenOption*>($StandardOpenOption::WRITE)
		})));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					testExceptions(fc);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (fc != nullptr) {
						try {
							fc->close();
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

void MapTest::testExceptions($FileChannel* fc) {
	$init(MapTest);
	$load($NullPointerException);
	checkException(fc, nullptr, 0, $nc(fc)->size(), $$new($ClassArray, {$NullPointerException::class$}));
	$init($FileChannel$MapMode);
	$load($IllegalArgumentException);
	checkException(fc, $FileChannel$MapMode::READ_ONLY, -1, $nc(fc)->size(), $$new($ClassArray, {$IllegalArgumentException::class$}));
	checkException(fc, nullptr, -1, $nc(fc)->size(), $$new($ClassArray, {
		$IllegalArgumentException::class$,
		$NullPointerException::class$
	}));
	checkException(fc, $FileChannel$MapMode::READ_ONLY, 0, -1, $$new($ClassArray, {$IllegalArgumentException::class$}));
	checkException(fc, nullptr, 0, -1, $$new($ClassArray, {
		$IllegalArgumentException::class$,
		$NullPointerException::class$
	}));
	checkException(fc, $FileChannel$MapMode::READ_ONLY, 0, $Integer::MAX_VALUE + (int64_t)1, $$new($ClassArray, {$IllegalArgumentException::class$}));
	checkException(fc, nullptr, 0, $Integer::MAX_VALUE + (int64_t)1, $$new($ClassArray, {
		$IllegalArgumentException::class$,
		$NullPointerException::class$
	}));
	checkException(fc, $FileChannel$MapMode::READ_ONLY, $Long::MAX_VALUE, 1, $$new($ClassArray, {$IllegalArgumentException::class$}));
	checkException(fc, nullptr, $Long::MAX_VALUE, 1, $$new($ClassArray, {
		$IllegalArgumentException::class$,
		$NullPointerException::class$
	}));
}

void MapTest::checkException($FileChannel* fc, $FileChannel$MapMode* mode, int64_t position, int64_t size, $ClassArray* expected) {
	$init(MapTest);
	$var($Exception, exc, nullptr);
	try {
		$nc(fc)->map(mode, position, size);
	} catch ($Exception&) {
		$var($Exception, actual, $catch());
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
	$init($System);
	$nc($System::err)->println("Expected one of"_s);
	{
		$var($ClassArray, arr$, expected);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* clazz = arr$->get(i$);
			{
				$nc($System::out)->println($of(clazz));
			}
		}
	}
	if (exc == nullptr) {
		$throwNew($RuntimeException, "No expection thrown"_s);
	} else {
		$throwNew($RuntimeException, "Unexpected exception thrown"_s, exc);
	}
}

void clinit$MapTest($Class* class$) {
	$init($System);
	$assignStatic(MapTest::out, $System::out);
	$assignStatic(MapTest::err, $System::err);
	$assignStatic(MapTest::generator, $new($Random));
	$init($File);
	MapTest::CHARS_PER_LINE = $File::separatorChar == u'/' ? 5 : 6;
}

MapTest::MapTest() {
}

$Class* MapTest::load$($String* name, bool initialize) {
	$loadClass(MapTest, name, initialize, &_MapTest_ClassInfo_, clinit$MapTest, allocate$MapTest);
	return class$;
}

$Class* MapTest::class$ = nullptr;