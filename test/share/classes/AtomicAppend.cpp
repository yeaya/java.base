#include <AtomicAppend.h>

#include <AtomicAppend$1.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Random = ::java::util::Random;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$FieldInfo _AtomicAppend_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(AtomicAppend, rand)},
	{}
};

$MethodInfo _AtomicAppend_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AtomicAppend::*)()>(&AtomicAppend::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AtomicAppend::main)), "java.lang.Throwable"},
	{"newFileChannel", "(Ljava/io/File;)Ljava/nio/channels/FileChannel;", nullptr, $STATIC, $method(static_cast<$FileChannel*(*)($File*)>(&AtomicAppend::newFileChannel)), "java.io.IOException"},
	{"newOutputStream", "(Ljava/io/File;)Ljava/io/OutputStream;", nullptr, $STATIC, $method(static_cast<$OutputStream*(*)($File*)>(&AtomicAppend::newOutputStream)), "java.io.IOException"},
	{"write", "(Ljava/nio/channels/FileChannel;I)V", nullptr, $STATIC, $method(static_cast<void(*)($FileChannel*,int32_t)>(&AtomicAppend::write)), "java.io.IOException"},
	{}
};

$InnerClassInfo _AtomicAppend_InnerClassesInfo_[] = {
	{"AtomicAppend$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicAppend_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AtomicAppend",
	"java.lang.Object",
	nullptr,
	_AtomicAppend_FieldInfo_,
	_AtomicAppend_MethodInfo_,
	nullptr,
	nullptr,
	_AtomicAppend_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AtomicAppend$1"
};

$Object* allocate$AtomicAppend($Class* clazz) {
	return $of($alloc(AtomicAppend));
}

$Random* AtomicAppend::rand = nullptr;

void AtomicAppend::init$() {
}

$FileChannel* AtomicAppend::newFileChannel($File* file) {
	$init(AtomicAppend);
	if ($nc(AtomicAppend::rand)->nextBoolean()) {
		return $$new($FileOutputStream, file, true)->getChannel();
	} else {
		$init($StandardOpenOption);
		return $FileChannel::open($($nc(file)->toPath()), $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::APPEND)}));
	}
}

$OutputStream* AtomicAppend::newOutputStream($File* file) {
	$init(AtomicAppend);
	if ($nc(AtomicAppend::rand)->nextBoolean()) {
		return $new($FileOutputStream, file, true);
	} else {
		$init($StandardOpenOption);
		return $Files::newOutputStream($($nc(file)->toPath()), $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::APPEND)}));
	}
}

void AtomicAppend::write($FileChannel* fc, int32_t b) {
	$init(AtomicAppend);
	$var($ByteBuffer, buf, $ByteBuffer::allocate(1));
	$nc(buf)->put((int8_t)b);
	buf->flip();
	if ($nc(AtomicAppend::rand)->nextBoolean()) {
		$var($ByteBufferArray, bufs, $new($ByteBufferArray, 1));
		bufs->set(0, buf);
		$nc(fc)->write(bufs);
	} else {
		$nc(fc)->write(buf);
	}
}

void AtomicAppend::main($StringArray* args) {
	$init(AtomicAppend);
	int32_t nThreads = 16;
	int32_t writes = 1000;
	$var($File, file, $File::createTempFile("foo"_s, nullptr));
	{
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(file)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$AtomicAppend($Class* class$) {
	$assignStatic(AtomicAppend::rand, $new($Random));
}

AtomicAppend::AtomicAppend() {
}

$Class* AtomicAppend::load$($String* name, bool initialize) {
	$loadClass(AtomicAppend, name, initialize, &_AtomicAppend_ClassInfo_, clinit$AtomicAppend, allocate$AtomicAppend);
	return class$;
}

$Class* AtomicAppend::class$ = nullptr;