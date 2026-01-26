#include <ForceException.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef READ_WRITE

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;

$MethodInfo _ForceException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ForceException, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ForceException, main, void, $StringArray*), "java.io.IOException"},
	{}
};

$ClassInfo _ForceException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ForceException",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ForceException_MethodInfo_
};

$Object* allocate$ForceException($Class* clazz) {
	return $of($alloc(ForceException));
}

void ForceException::init$() {
}

void ForceException::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t blockSize = 2048 * 1024;
	int32_t numberOfBlocks = 200;
	int32_t fileLength = numberOfBlocks * blockSize;
	$var($File, file, $new($File, $($System::getProperty("test.src"_s, "."_s)), "test.dat"_s));
	file->deleteOnExit();
	{
		$var($RandomAccessFile, raf, $new($RandomAccessFile, file, "rw"_s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					raf->setLength(fileLength);
					int32_t pos = (numberOfBlocks - 1) * blockSize;
					int32_t size = $Math::min(blockSize, fileLength - pos);
					$init($FileChannel$MapMode);
					$var($MappedByteBuffer, mbb, $nc($(raf->getChannel()))->map($FileChannel$MapMode::READ_WRITE, pos, size));
					$nc($System::out)->printf("Write region 0x%s..0x%s%n"_s, $$new($ObjectArray, {
						$($of($Long::toHexString(pos))),
						$($of($Long::toHexString(size)))
					}));
					for (int32_t k = 0; k < $nc(mbb)->limit(); ++k) {
						mbb->put(k, (int8_t)65);
					}
					try {
						$nc($System::out)->println("Force"_s);
						$nc(mbb)->force();
					} catch ($UncheckedIOException& legal) {
						$nc($System::out)->printf("Caught legal exception %s%n"_s, $$new($ObjectArray, {$of(legal)}));
						$var($IOException, cause, $cast($IOException, legal->getCause()));
						if ($nc($($nc(cause)->getMessage()))->startsWith("Flush failed"_s)) {
							$throw(cause);
						}
					}
					$nc($System::out)->println("OK"_s);
				} catch ($Throwable& t$) {
					try {
						raf->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				raf->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

ForceException::ForceException() {
}

$Class* ForceException::load$($String* name, bool initialize) {
	$loadClass(ForceException, name, initialize, &_ForceException_ClassInfo_, allocate$ForceException);
	return class$;
}

$Class* ForceException::class$ = nullptr;