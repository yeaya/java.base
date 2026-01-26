#include <Position.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef APPEND
#undef READ

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Charset = ::java::nio::charset::Charset;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Random = ::java::util::Random;

$FieldInfo _Position_FieldInfo_[] = {
	{"ISO8859_1", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Position, ISO8859_1)},
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Position, generator)},
	{}
};

$MethodInfo _Position_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Position, init$, void)},
	{"initTestFile", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Position, initTestFile, void, $Path*), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Position, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Position_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Position",
	"java.lang.Object",
	nullptr,
	_Position_FieldInfo_,
	_Position_MethodInfo_
};

$Object* allocate$Position($Class* clazz) {
	return $of($alloc(Position));
}

$Charset* Position::ISO8859_1 = nullptr;
$Random* Position::generator = nullptr;

void Position::init$() {
}

void Position::main($StringArray* args) {
	$init(Position);
	$useLocalCurrentObjectStackCache();
	$var($Path, blah, $Files::createTempFile("blah"_s, nullptr, $$new($FileAttributeArray, 0)));
	$nc($($nc(blah)->toFile()))->deleteOnExit();
	initTestFile(blah);
	for (int32_t i = 0; i < 10; ++i) {
		{
			$init($StandardOpenOption);
			$var($FileChannel, fc, ($nc(Position::generator)->nextBoolean()) ? $FileChannel::open(blah, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::READ)})) : $$new($FileInputStream, $(blah->toFile()))->getChannel());
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						for (int32_t j = 0; j < 100; ++j) {
							int64_t newPos = $nc(Position::generator)->nextInt(1000);
							$nc(fc)->position(newPos);
							if (fc->position() != newPos) {
								$throwNew($RuntimeException, "Position failed"_s);
							}
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
	for (int32_t i = 0; i < 10; ++i) {
		{
			$init($StandardOpenOption);
			$var($FileChannel, fc, ($nc(Position::generator)->nextBoolean()) ? $FileChannel::open(blah, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::APPEND)})) : $$new($FileOutputStream, $(blah->toFile()), true)->getChannel());
			{
				$var($Throwable, var$2, nullptr);
				try {
					try {
						for (int32_t j = 0; j < 10; ++j) {
							int64_t var$3 = $nc(fc)->position();
							if (var$3 != fc->size()) {
								$throwNew($RuntimeException, "Position expected to be size"_s);
							}
							$var($bytes, buf, $new($bytes, $nc(Position::generator)->nextInt(100)));
							$nc(fc)->write($($ByteBuffer::wrap(buf)));
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
				} catch ($Throwable& var$4) {
					$assign(var$2, var$4);
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
	$Files::delete$(blah);
}

void Position::initTestFile($Path* blah) {
	$init(Position);
	$useLocalCurrentObjectStackCache();
	{
		$var($BufferedWriter, awriter, $Files::newBufferedWriter(blah, Position::ISO8859_1, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (int32_t i = 0; i < 4000; ++i) {
						$var($String, number, $$new($Integer, i)->toString());
						for (int32_t h = 0; h < 4 - $nc(number)->length(); ++h) {
							$nc(awriter)->write("0"_s);
						}
						$nc(awriter)->write($$str({""_s, $$str(i)}));
						awriter->newLine();
					}
				} catch ($Throwable& t$) {
					if (awriter != nullptr) {
						try {
							awriter->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (awriter != nullptr) {
					awriter->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void clinit$Position($Class* class$) {
	$assignStatic(Position::ISO8859_1, $Charset::forName("8859_1"_s));
	$assignStatic(Position::generator, $new($Random));
}

Position::Position() {
}

$Class* Position::load$($String* name, bool initialize) {
	$loadClass(Position, name, initialize, &_Position_ClassInfo_, clinit$Position, allocate$Position);
	return class$;
}

$Class* Position::class$ = nullptr;