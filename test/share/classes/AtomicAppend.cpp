#include <AtomicAppend.h>
#include <AtomicAppend$1.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/Random.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef APPEND
#undef MINUTES

using $AtomicAppend$1 = ::AtomicAppend$1;
using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Files = ::java::nio::file::Files;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Random = ::java::util::Random;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$Random* AtomicAppend::rand = nullptr;

void AtomicAppend::init$() {
}

$FileChannel* AtomicAppend::newFileChannel($File* file) {
	$init(AtomicAppend);
	$useLocalObjectStack();
	if (AtomicAppend::rand->nextBoolean()) {
		return $$new($FileOutputStream, file, true)->getChannel();
	} else {
		$init($StandardOpenOption);
		return $FileChannel::open($($nc(file)->toPath()), $$new($OpenOptionArray, {$StandardOpenOption::APPEND}));
	}
}

$OutputStream* AtomicAppend::newOutputStream($File* file) {
	$init(AtomicAppend);
	$useLocalObjectStack();
	if (AtomicAppend::rand->nextBoolean()) {
		return $new($FileOutputStream, file, true);
	} else {
		$init($StandardOpenOption);
		return $Files::newOutputStream($($nc(file)->toPath()), $$new($OpenOptionArray, {$StandardOpenOption::APPEND}));
	}
}

void AtomicAppend::write($FileChannel* fc, int32_t b) {
	$init(AtomicAppend);
	$useLocalObjectStack();
	$var($ByteBuffer, buf, $ByteBuffer::allocate(1));
	$nc(buf)->put((int8_t)b);
	buf->flip();
	if (AtomicAppend::rand->nextBoolean()) {
		$var($ByteBufferArray, bufs, $new($ByteBufferArray, 1));
		bufs->set(0, buf);
		$nc(fc)->write(bufs);
	} else {
		$nc(fc)->write(buf);
	}
}

void AtomicAppend::main($StringArray* args) {
	$init(AtomicAppend);
	$useLocalObjectStack();
	int32_t nThreads = 16;
	int32_t writes = 1000;
	$var($File, file, $File::createTempFile("foo"_s, nullptr));
	$var($Throwable, var$0, nullptr);
	try {
		$var($ExecutorService, pool, $Executors::newFixedThreadPool(nThreads));
		for (int32_t i = 0; i < nThreads; ++i) {
			$nc(pool)->execute($$new($AtomicAppend$1, file));
		}
		$nc(pool)->shutdown();
		$init($TimeUnit);
		pool->awaitTermination(1, $TimeUnit::MINUTES);
		if ($nc(file)->length() != (int64_t)(nThreads * writes)) {
			$throwNew($RuntimeException, "File not expected length"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(file)->delete$();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void AtomicAppend::clinit$($Class* clazz) {
	$assignStatic(AtomicAppend::rand, $new($Random));
}

AtomicAppend::AtomicAppend() {
}

$Class* AtomicAppend::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(AtomicAppend, rand)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AtomicAppend, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AtomicAppend, main, void, $StringArray*), "java.lang.Throwable"},
		{"newFileChannel", "(Ljava/io/File;)Ljava/nio/channels/FileChannel;", nullptr, $STATIC, $staticMethod(AtomicAppend, newFileChannel, $FileChannel*, $File*), "java.io.IOException"},
		{"newOutputStream", "(Ljava/io/File;)Ljava/io/OutputStream;", nullptr, $STATIC, $staticMethod(AtomicAppend, newOutputStream, $OutputStream*, $File*), "java.io.IOException"},
		{"write", "(Ljava/nio/channels/FileChannel;I)V", nullptr, $STATIC, $staticMethod(AtomicAppend, write, void, $FileChannel*, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AtomicAppend$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AtomicAppend",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"AtomicAppend$1"
	};
	$loadClass(AtomicAppend, name, initialize, &classInfo$$, AtomicAppend::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicAppend);
	});
	return class$;
}

$Class* AtomicAppend::class$ = nullptr;