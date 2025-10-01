#include <Size.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef READ_WRITE

using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Random = ::java::util::Random;

$MethodInfo _Size_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Size::*)()>(&Size::init$))},
	{"initTestFile", "(Ljava/io/File;J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*,int64_t)>(&Size::initTestFile)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Size::main)), "java.lang.Exception"},
	{"testLargeFile", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Size::testLargeFile)), "java.lang.Exception"},
	{"testSmallFile", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Size::testSmallFile)), "java.lang.Exception"},
	{}
};

$ClassInfo _Size_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Size",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Size_MethodInfo_
};

$Object* allocate$Size($Class* clazz) {
	return $of($alloc(Size));
}

void Size::init$() {
}

void Size::main($StringArray* args) {
	testSmallFile();
	testLargeFile();
}

void Size::testSmallFile() {
	$var($File, smallFile, $new($File, "smallFileTest"_s));
	$var($Random, generator, $new($Random));
	for (int32_t i = 0; i < 100; ++i) {
		int64_t testSize = generator->nextInt(1000);
		initTestFile(smallFile, testSize);
		{
			$var($FileChannel, c, $$new($FileInputStream, smallFile)->getChannel());
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						if ($nc(c)->size() != testSize) {
							$throwNew($RuntimeException, $$str({"Size failed in testSmallFile. Expect size "_s, $$str(testSize), ", actual size "_s, $$str(c->size())}));
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (c != nullptr) {
							try {
								c->close();
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
					if (c != nullptr) {
						c->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	smallFile->deleteOnExit();
}

void Size::testLargeFile() {
	$var($File, largeFile, $new($File, "largeFileTest"_s));
	int64_t testSize = ((int64_t)$Integer::MAX_VALUE) * 2;
	initTestFile(largeFile, 10);
	{
		$var($FileChannel, fc, $$new($RandomAccessFile, largeFile, "rw"_s)->getChannel());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(fc)->size();
					$init($FileChannel$MapMode);
					fc->map($FileChannel$MapMode::READ_WRITE, testSize, 10);
					if (fc->size() != testSize + 10) {
						$throwNew($RuntimeException, $$str({"Size failed in testLargeFile. Expect size "_s, $$str((testSize + 10)), ", actual size "_s, $$str(fc->size())}));
					}
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
	largeFile->deleteOnExit();
}

void Size::initTestFile($File* f, int64_t size) {
	{
		$var($BufferedWriter, awriter, $new($BufferedWriter, $$new($OutputStreamWriter, static_cast<$OutputStream*>($$new($FileOutputStream, f)), "8859_1"_s)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (int32_t i = 0; i < size; ++i) {
						awriter->write("e"_s);
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						awriter->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				awriter->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

Size::Size() {
}

$Class* Size::load$($String* name, bool initialize) {
	$loadClass(Size, name, initialize, &_Size_ClassInfo_, allocate$Size);
	return class$;
}

$Class* Size::class$ = nullptr;