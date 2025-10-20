#include <ClosedByInterrupt.h>

#include <ClosedByInterrupt$ReaderWriter.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef K

using $ClosedByInterrupt$ReaderWriter = ::ClosedByInterrupt$ReaderWriter;
using $ThreadArray = $Array<::java::lang::Thread>;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Random = ::java::util::Random;

$FieldInfo _ClosedByInterrupt_FieldInfo_[] = {
	{"K", "I", nullptr, $STATIC | $FINAL, $constField(ClosedByInterrupt, K)},
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(ClosedByInterrupt, rand)},
	{"failed", "Z", nullptr, $STATIC | $VOLATILE, $staticField(ClosedByInterrupt, failed)},
	{}
};

$MethodInfo _ClosedByInterrupt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedByInterrupt::*)()>(&ClosedByInterrupt::init$))},
	{"expected", "(Ljava/lang/Exception;)V", nullptr, $STATIC, $method(static_cast<void(*)($Exception*)>(&ClosedByInterrupt::expected))},
	{"expected", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&ClosedByInterrupt::expected))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClosedByInterrupt::main)), "java.lang.Exception"},
	{"test", "(Ljava/io/File;I)V", nullptr, $STATIC, $method(static_cast<void(*)($File*,int32_t)>(&ClosedByInterrupt::test)), "java.lang.Exception"},
	{"unexpected", "(Ljava/lang/Exception;)V", nullptr, $STATIC, $method(static_cast<void(*)($Exception*)>(&ClosedByInterrupt::unexpected))},
	{"unexpected", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&ClosedByInterrupt::unexpected))},
	{}
};

$InnerClassInfo _ClosedByInterrupt_InnerClassesInfo_[] = {
	{"ClosedByInterrupt$ReaderWriter", "ClosedByInterrupt", "ReaderWriter", $STATIC},
	{}
};

$ClassInfo _ClosedByInterrupt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClosedByInterrupt",
	"java.lang.Object",
	nullptr,
	_ClosedByInterrupt_FieldInfo_,
	_ClosedByInterrupt_MethodInfo_,
	nullptr,
	nullptr,
	_ClosedByInterrupt_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ClosedByInterrupt$ReaderWriter"
};

$Object* allocate$ClosedByInterrupt($Class* clazz) {
	return $of($alloc(ClosedByInterrupt));
}

$Random* ClosedByInterrupt::rand = nullptr;
$volatile(bool) ClosedByInterrupt::failed = false;

void ClosedByInterrupt::init$() {
}

void ClosedByInterrupt::main($StringArray* args) {
	$init(ClosedByInterrupt);
	$useLocalCurrentObjectStackCache();
	$var($File, f, $File::createTempFile("blah"_s, nullptr));
	$nc(f)->deleteOnExit();
	$var($bytes, b, $new($bytes, ClosedByInterrupt::K * ClosedByInterrupt::K));
	$nc(ClosedByInterrupt::rand)->nextBytes(b);
	$var($ByteBuffer, bb, $ByteBuffer::wrap(b));
	{
		$var($FileChannel, fc, $$new($FileOutputStream, f)->getChannel());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					while ($nc(bb)->hasRemaining()) {
						$nc(fc)->write(bb);
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
	for (int32_t i = 1; i <= 16; ++i) {
		$init($System);
		$nc($System::out)->format("%d thread(s)%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		test(f, i);
		if (ClosedByInterrupt::failed) {
			break;
		}
	}
	if (ClosedByInterrupt::failed) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void ClosedByInterrupt::test($File* f, int32_t nThreads) {
	$init(ClosedByInterrupt);
	$useLocalCurrentObjectStackCache();
	{
		$var($FileChannel, fc, $$new($RandomAccessFile, f, "rwd"_s)->getChannel());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ThreadArray, threads, $new($ThreadArray, nThreads));
					for (int32_t i = 0; i < nThreads; ++i) {
						bool interruptible = (i == 0);
						$var($ClosedByInterrupt$ReaderWriter, task, $new($ClosedByInterrupt$ReaderWriter, fc, interruptible));
						$var($Thread, t, $new($Thread, static_cast<$Runnable*>(task)));
						t->start();
						threads->set(i, t);
					}
					$Thread::sleep(500 + $nc(ClosedByInterrupt::rand)->nextInt(1000));
					while ($nc(fc)->isOpen()) {
						$nc(threads->get(0))->interrupt();
						$Thread::sleep($nc(ClosedByInterrupt::rand)->nextInt(50));
					}
					for (int32_t i = 0; i < nThreads; ++i) {
						$nc(threads->get(i))->join();
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
}

void ClosedByInterrupt::expected($Exception* e) {
	$init(ClosedByInterrupt);
	$init($System);
	$nc($System::out)->format("%s (expected)%n"_s, $$new($ObjectArray, {$of(e)}));
}

void ClosedByInterrupt::expected($String* msg) {
	$init(ClosedByInterrupt);
	$init($System);
	$nc($System::out)->format("%s (expected)%n"_s, $$new($ObjectArray, {$of(msg)}));
}

void ClosedByInterrupt::unexpected($Exception* e) {
	$init(ClosedByInterrupt);
	$init($System);
	$nc($System::err)->format("%s (not expected)%n"_s, $$new($ObjectArray, {$of(e)}));
	ClosedByInterrupt::failed = true;
}

void ClosedByInterrupt::unexpected($String* msg) {
	$init(ClosedByInterrupt);
	$init($System);
	$nc($System::err)->println(msg);
	ClosedByInterrupt::failed = true;
}

void clinit$ClosedByInterrupt($Class* class$) {
	$assignStatic(ClosedByInterrupt::rand, $new($Random));
}

ClosedByInterrupt::ClosedByInterrupt() {
}

$Class* ClosedByInterrupt::load$($String* name, bool initialize) {
	$loadClass(ClosedByInterrupt, name, initialize, &_ClosedByInterrupt_ClassInfo_, clinit$ClosedByInterrupt, allocate$ClosedByInterrupt);
	return class$;
}

$Class* ClosedByInterrupt::class$ = nullptr;