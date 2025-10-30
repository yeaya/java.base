#include <LargeFileAvailable.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef CREATE_NEW
#undef MAX_VALUE
#undef NANOSECONDS
#undef SPARSE
#undef WRITE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$MethodInfo _LargeFileAvailable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LargeFileAvailable::*)()>(&LargeFileAvailable::init$))},
	{"createLargeFile", "(JLjava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int64_t,$File*)>(&LargeFileAvailable::createLargeFile)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LargeFileAvailable::main)), "java.lang.Exception"},
	{"skipBytes", "(Ljava/io/InputStream;JJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($InputStream*,int64_t,int64_t)>(&LargeFileAvailable::skipBytes)), "java.io.IOException"},
	{}
};

$ClassInfo _LargeFileAvailable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LargeFileAvailable",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LargeFileAvailable_MethodInfo_
};

$Object* allocate$LargeFileAvailable($Class* clazz) {
	return $of($alloc(LargeFileAvailable));
}

void LargeFileAvailable::init$() {
}

void LargeFileAvailable::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $File::createTempFile("largefile"_s, nullptr, $$new($File, "."_s)));
	int64_t spaceavailable = $nc(file)->getUsableSpace();
	int64_t filesize = $Math::min(spaceavailable, (int64_t)0x00000001B9681FF6);
	if (spaceavailable == (int64_t)0) {
		$throwNew($RuntimeException, "No space available for temp file."_s);
	}
	createLargeFile(filesize, file);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($FileInputStream, fis, $new($FileInputStream, file));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						if (file->length() != filesize) {
							$throwNew($RuntimeException, $$str({"unexpected file size = "_s, $$str(file->length())}));
						}
						int64_t bigSkip = $Math::min(filesize / 2, (int64_t)0x00000000B9681FF2);
						int64_t remaining = filesize;
						remaining -= skipBytes(fis, bigSkip, remaining);
						remaining -= skipBytes(fis, 10, remaining);
						remaining -= skipBytes(fis, bigSkip, remaining);
						int32_t expected = (remaining >= $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : (remaining > 0 ? (int32_t)remaining : 0);
						if (fis->available() != expected) {
							$throwNew($RuntimeException, $$str({"available() returns "_s, $$str(fis->available()), " but expected "_s, $$str(expected)}));
						}
					} catch ($Throwable& t$) {
						try {
							fis->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					fis->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			file->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc($System::out)->println("Test succeeded."_s);
	$nc($System::out)->flush();
}

int64_t LargeFileAvailable::skipBytes($InputStream* is, int64_t toSkip, int64_t avail) {
	$useLocalCurrentObjectStackCache();
	int64_t skip = $nc(is)->skip(toSkip);
	if (skip != toSkip) {
		$throwNew($RuntimeException, $$str({"skip() returns "_s, $$str(skip), " but expected "_s, $$str(toSkip)}));
	}
	int64_t remaining = avail - skip;
	int32_t expected = (remaining >= $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : (remaining > 0 ? (int32_t)remaining : 0);
	$nc($System::out)->println($$str({"Skipped "_s, $$str(skip), " bytes, available() returns "_s, $$str(expected), ", remaining "_s, $$str(remaining)}));
	if (is->available() != expected) {
		$throwNew($RuntimeException, $$str({"available() returns "_s, $$str(is->available()), " but expected "_s, $$str(expected)}));
	}
	return skip;
}

void LargeFileAvailable::createLargeFile(int64_t filesize, $File* file) {
	$useLocalCurrentObjectStackCache();
	$Files::delete$($($nc(file)->toPath()));
	{
		$init($StandardOpenOption);
		$var($FileChannel, fc, $FileChannel::open($($nc(file)->toPath()), $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::CREATE_NEW),
			static_cast<$OpenOption*>($StandardOpenOption::WRITE),
			static_cast<$OpenOption*>($StandardOpenOption::SPARSE)
		})));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ByteBuffer, bb, $nc($($ByteBuffer::allocate(1)))->put((int8_t)1));
					$nc(bb)->rewind();
					$nc($System::out)->println("  Writing large file..."_s);
					int64_t t0 = $System::nanoTime();
					int32_t rc = $nc(fc)->write(bb, filesize - 1);
					int64_t t1 = $System::nanoTime();
					$init($TimeUnit);
					$nc($System::out)->printf("  Wrote large file in %d ns (%d ms) %n"_s, $$new($ObjectArray, {
						$($of($Long::valueOf(t1 - t0))),
						$($of($Long::valueOf($TimeUnit::NANOSECONDS->toMillis(t1 - t0))))
					}));
					if (rc != 1) {
						$throwNew($RuntimeException, "Failed to write 1 byte to the large file"_s);
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
	return;
}

LargeFileAvailable::LargeFileAvailable() {
}

$Class* LargeFileAvailable::load$($String* name, bool initialize) {
	$loadClass(LargeFileAvailable, name, initialize, &_LargeFileAvailable_ClassInfo_, allocate$LargeFileAvailable);
	return class$;
}

$Class* LargeFileAvailable::class$ = nullptr;