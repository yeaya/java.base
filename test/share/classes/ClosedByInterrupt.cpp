#include <ClosedByInterrupt.h>
#include <ClosedByInterrupt$ReaderWriter.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef K

using $ClosedByInterrupt$ReaderWriter = ::ClosedByInterrupt$ReaderWriter;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Random = ::java::util::Random;

$Random* ClosedByInterrupt::rand = nullptr;
$volatile(bool) ClosedByInterrupt::failed = false;

void ClosedByInterrupt::init$() {
}

void ClosedByInterrupt::main($StringArray* args) {
	$init(ClosedByInterrupt);
	$useLocalObjectStack();
	$var($File, f, $File::createTempFile("blah"_s, nullptr));
	$nc(f)->deleteOnExit();
	$var($bytes, b, $new($bytes, ClosedByInterrupt::K * ClosedByInterrupt::K));
	ClosedByInterrupt::rand->nextBytes(b);
	$var($ByteBuffer, bb, $ByteBuffer::wrap(b));
	{
		$var($FileChannel, fc, $$new($FileOutputStream, f)->getChannel());
		$var($Throwable, var$0, nullptr);
		try {
			try {
				while ($nc(bb)->hasRemaining()) {
					$nc(fc)->write(bb);
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
	for (int32_t i = 1; i <= 16; ++i) {
		$nc($System::out)->format("%d thread(s)%n"_s, $$new($ObjectArray, {$($Integer::valueOf(i))}));
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
	$useLocalObjectStack();
	{
		$var($FileChannel, fc, $$new($RandomAccessFile, f, "rwd"_s)->getChannel());
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($ThreadArray, threads, $new($ThreadArray, nThreads));
				for (int32_t i = 0; i < nThreads; ++i) {
					bool interruptible = (i == 0);
					$var($ClosedByInterrupt$ReaderWriter, task, $new($ClosedByInterrupt$ReaderWriter, fc, interruptible));
					$var($Thread, t, $new($Thread, task));
					t->start();
					threads->set(i, t);
				}
				$Thread::sleep(500 + ClosedByInterrupt::rand->nextInt(1000));
				while ($nc(fc)->isOpen()) {
					$nc(threads->get(0))->interrupt();
					$Thread::sleep(ClosedByInterrupt::rand->nextInt(50));
				}
				for (int32_t i = 0; i < nThreads; ++i) {
					$nc(threads->get(i))->join();
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

void ClosedByInterrupt::expected($Exception* e) {
	$init(ClosedByInterrupt);
	$nc($System::out)->format("%s (expected)%n"_s, $$new($ObjectArray, {e}));
}

void ClosedByInterrupt::expected($String* msg) {
	$init(ClosedByInterrupt);
	$nc($System::out)->format("%s (expected)%n"_s, $$new($ObjectArray, {msg}));
}

void ClosedByInterrupt::unexpected($Exception* e) {
	$init(ClosedByInterrupt);
	$nc($System::err)->format("%s (not expected)%n"_s, $$new($ObjectArray, {e}));
	ClosedByInterrupt::failed = true;
}

void ClosedByInterrupt::unexpected($String* msg) {
	$init(ClosedByInterrupt);
	$nc($System::err)->println(msg);
	ClosedByInterrupt::failed = true;
}

void ClosedByInterrupt::clinit$($Class* clazz) {
	$assignStatic(ClosedByInterrupt::rand, $new($Random));
}

ClosedByInterrupt::ClosedByInterrupt() {
}

$Class* ClosedByInterrupt::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"K", "I", nullptr, $STATIC | $FINAL, $constField(ClosedByInterrupt, K)},
		{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(ClosedByInterrupt, rand)},
		{"failed", "Z", nullptr, $STATIC | $VOLATILE, $staticField(ClosedByInterrupt, failed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedByInterrupt, init$, void)},
		{"expected", "(Ljava/lang/Exception;)V", nullptr, $STATIC, $staticMethod(ClosedByInterrupt, expected, void, $Exception*)},
		{"expected", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ClosedByInterrupt, expected, void, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClosedByInterrupt, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/io/File;I)V", nullptr, $STATIC, $staticMethod(ClosedByInterrupt, test, void, $File*, int32_t), "java.lang.Exception"},
		{"unexpected", "(Ljava/lang/Exception;)V", nullptr, $STATIC, $staticMethod(ClosedByInterrupt, unexpected, void, $Exception*)},
		{"unexpected", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ClosedByInterrupt, unexpected, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClosedByInterrupt$ReaderWriter", "ClosedByInterrupt", "ReaderWriter", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ClosedByInterrupt",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ClosedByInterrupt$ReaderWriter"
	};
	$loadClass(ClosedByInterrupt, name, initialize, &classInfo$$, ClosedByInterrupt::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedByInterrupt);
	});
	return class$;
}

$Class* ClosedByInterrupt::class$ = nullptr;