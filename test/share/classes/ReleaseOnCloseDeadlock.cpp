#include <ReleaseOnCloseDeadlock.h>
#include <ReleaseOnCloseDeadlock$1.h>
#include <java/io/File.h>
#include <java/lang/InterruptedException.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef LOCK_COUNT
#undef READ
#undef WRITE

using $ReleaseOnCloseDeadlock$1 = ::ReleaseOnCloseDeadlock$1;
using $FileLockArray = $Array<::java::nio::channels::FileLock>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $Channel = ::java::nio::channels::Channel;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $ExecutionException = ::java::util::concurrent::ExecutionException;

void ReleaseOnCloseDeadlock::init$() {
}

void ReleaseOnCloseDeadlock::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($Throwable, var$0, nullptr);
	try {
		for (int32_t i = 0; i < 100; ++i) {
			test($(blah->toPath()));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		blah->delete$();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ReleaseOnCloseDeadlock::test($Path* file) {
	$useLocalObjectStack();
	$var($FileLockArray, locks, $new($FileLockArray, ReleaseOnCloseDeadlock::LOCK_COUNT));
	$init($StandardOpenOption);
	$var($FileChannel, fc, $FileChannel::open(file, $$new($OpenOptionArray, {
		$StandardOpenOption::READ,
		$StandardOpenOption::WRITE
	})));
	for (int32_t i = 0; i < ReleaseOnCloseDeadlock::LOCK_COUNT; ++i) {
		locks->set(i, $($nc(fc)->lock(i, 1, true)));
	}
	tryToDeadlock($cast($AbstractInterruptibleChannel, fc), locks);
	$var($AsynchronousFileChannel, ch, $AsynchronousFileChannel::open(file, $$new($OpenOptionArray, {
		$StandardOpenOption::READ,
		$StandardOpenOption::WRITE
	})));
	for (int32_t i = 0; i < ReleaseOnCloseDeadlock::LOCK_COUNT; ++i) {
		try {
			locks->set(i, $$cast($FileLock, $$nc($nc(ch)->lock(i, 1, true))->get()));
		} catch ($InterruptedException& x) {
			$throwNew($RuntimeException, x);
		} catch ($ExecutionException& x) {
			$throwNew($RuntimeException, x);
		}
	}
	tryToDeadlock(ch, locks);
}

void ReleaseOnCloseDeadlock::tryToDeadlock($Channel* channel, $FileLockArray* locks) {
	$useLocalObjectStack();
	$var($Thread, closer, $new($Thread, $$new($ReleaseOnCloseDeadlock$1, channel)));
	closer->start();
	for (int32_t i = 0; i < $nc(locks)->length; ++i) {
		try {
			$nc(locks->get(i))->release();
		} catch ($ClosedChannelException& ignore) {
		}
	}
	while (closer->isAlive()) {
		try {
			closer->join();
		} catch ($InterruptedException& ignore) {
		}
	}
}

ReleaseOnCloseDeadlock::ReleaseOnCloseDeadlock() {
}

$Class* ReleaseOnCloseDeadlock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOCK_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReleaseOnCloseDeadlock, LOCK_COUNT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReleaseOnCloseDeadlock, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReleaseOnCloseDeadlock, main, void, $StringArray*), "java.io.IOException"},
		{"test", "(Ljava/nio/file/Path;)V", nullptr, $STATIC, $staticMethod(ReleaseOnCloseDeadlock, test, void, $Path*), "java.io.IOException"},
		{"tryToDeadlock", "(Ljava/nio/channels/Channel;[Ljava/nio/channels/FileLock;)V", nullptr, $STATIC, $staticMethod(ReleaseOnCloseDeadlock, tryToDeadlock, void, $Channel*, $FileLockArray*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReleaseOnCloseDeadlock$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReleaseOnCloseDeadlock",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ReleaseOnCloseDeadlock$1"
	};
	$loadClass(ReleaseOnCloseDeadlock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReleaseOnCloseDeadlock);
	});
	return class$;
}

$Class* ReleaseOnCloseDeadlock::class$ = nullptr;