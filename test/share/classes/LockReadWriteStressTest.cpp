#include <LockReadWriteStressTest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef CREATE
#undef READ
#undef WRITE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Future = ::java::util::concurrent::Future;

$MethodInfo _LockReadWriteStressTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LockReadWriteStressTest::*)()>(&LockReadWriteStressTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LockReadWriteStressTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _LockReadWriteStressTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LockReadWriteStressTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LockReadWriteStressTest_MethodInfo_
};

$Object* allocate$LockReadWriteStressTest($Class* clazz) {
	return $of($alloc(LockReadWriteStressTest));
}

void LockReadWriteStressTest::init$() {
}

void LockReadWriteStressTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Path, path, $Path::of("blah"_s, $$new($StringArray, 0)));
	$var($ByteBuffer, buf, $ByteBuffer::allocate(16));
	for (int32_t i = 0; i < 1000; ++i) {
		{
				$init($StandardOpenOption);
			$var($AsynchronousFileChannel, ch, $AsynchronousFileChannel::open(path, $$new($OpenOptionArray, {
				static_cast<$OpenOption*>($StandardOpenOption::READ),
				static_cast<$OpenOption*>($StandardOpenOption::WRITE),
				static_cast<$OpenOption*>($StandardOpenOption::CREATE)
			})));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($FileLock, lock, $cast($FileLock, $nc($($nc(ch)->lock()))->get()));
						$nc($(ch->read(buf, 0)))->get();
						$nc(buf)->rewind();
						$nc($(ch->write(buf, 0)))->get();
						$nc(lock)->release();
						buf->clear();
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (ch != nullptr) {
							try {
								ch->close();
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
					if (ch != nullptr) {
						ch->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

LockReadWriteStressTest::LockReadWriteStressTest() {
}

$Class* LockReadWriteStressTest::load$($String* name, bool initialize) {
	$loadClass(LockReadWriteStressTest, name, initialize, &_LockReadWriteStressTest_ClassInfo_, allocate$LockReadWriteStressTest);
	return class$;
}

$Class* LockReadWriteStressTest::class$ = nullptr;