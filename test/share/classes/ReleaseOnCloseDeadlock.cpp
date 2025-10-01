#include <ReleaseOnCloseDeadlock.h>

#include <ReleaseOnCloseDeadlock$1.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/channels/InterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef READ
#undef LOCK_COUNT
#undef WRITE

using $ReleaseOnCloseDeadlock$1 = ::ReleaseOnCloseDeadlock$1;
using $FileLockArray = $Array<::java::nio::channels::FileLock>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $Channel = ::java::nio::channels::Channel;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $InterruptibleChannel = ::java::nio::channels::InterruptibleChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Future = ::java::util::concurrent::Future;

$FieldInfo _ReleaseOnCloseDeadlock_FieldInfo_[] = {
	{"LOCK_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReleaseOnCloseDeadlock, LOCK_COUNT)},
	{}
};

$MethodInfo _ReleaseOnCloseDeadlock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReleaseOnCloseDeadlock::*)()>(&ReleaseOnCloseDeadlock::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReleaseOnCloseDeadlock::main)), "java.io.IOException"},
	{"test", "(Ljava/nio/file/Path;)V", nullptr, $STATIC, $method(static_cast<void(*)($Path*)>(&ReleaseOnCloseDeadlock::test)), "java.io.IOException"},
	{"tryToDeadlock", "(Ljava/nio/channels/Channel;[Ljava/nio/channels/FileLock;)V", nullptr, $STATIC, $method(static_cast<void(*)($Channel*,$FileLockArray*)>(&ReleaseOnCloseDeadlock::tryToDeadlock)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ReleaseOnCloseDeadlock_InnerClassesInfo_[] = {
	{"ReleaseOnCloseDeadlock$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReleaseOnCloseDeadlock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReleaseOnCloseDeadlock",
	"java.lang.Object",
	nullptr,
	_ReleaseOnCloseDeadlock_FieldInfo_,
	_ReleaseOnCloseDeadlock_MethodInfo_,
	nullptr,
	nullptr,
	_ReleaseOnCloseDeadlock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ReleaseOnCloseDeadlock$1"
};

$Object* allocate$ReleaseOnCloseDeadlock($Class* clazz) {
	return $of($alloc(ReleaseOnCloseDeadlock));
}

void ReleaseOnCloseDeadlock::init$() {
}

void ReleaseOnCloseDeadlock::main($StringArray* args) {
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t i = 0; i < 100; ++i) {
				test($(blah->toPath()));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			blah->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ReleaseOnCloseDeadlock::test($Path* file) {
	$var($FileLockArray, locks, $new($FileLockArray, ReleaseOnCloseDeadlock::LOCK_COUNT));
		$init($StandardOpenOption);
	$var($FileChannel, fc, $FileChannel::open(file, $$new($OpenOptionArray, {
		static_cast<$OpenOption*>($StandardOpenOption::READ),
		static_cast<$OpenOption*>($StandardOpenOption::WRITE)
	})));
	for (int32_t i = 0; i < ReleaseOnCloseDeadlock::LOCK_COUNT; ++i) {
		locks->set(i, $($nc(fc)->lock(i, 1, true)));
	}
	tryToDeadlock(static_cast<$Channel*>(static_cast<$InterruptibleChannel*>(static_cast<$AbstractInterruptibleChannel*>(fc))), locks);
	$var($AsynchronousFileChannel, ch, $AsynchronousFileChannel::open(file, $$new($OpenOptionArray, {
		static_cast<$OpenOption*>($StandardOpenOption::READ),
		static_cast<$OpenOption*>($StandardOpenOption::WRITE)
	})));
	for (int32_t i = 0; i < ReleaseOnCloseDeadlock::LOCK_COUNT; ++i) {
		try {
			locks->set(i, $cast($FileLock, $($nc($($nc(ch)->lock(i, 1, true)))->get())));
		} catch ($InterruptedException&) {
			$var($InterruptedException, x, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(x));
		} catch ($ExecutionException&) {
			$var($ExecutionException, x, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(x));
		}
	}
	tryToDeadlock(ch, locks);
}

void ReleaseOnCloseDeadlock::tryToDeadlock($Channel* channel, $FileLockArray* locks) {
	$var($Thread, closer, $new($Thread, static_cast<$Runnable*>($$new($ReleaseOnCloseDeadlock$1, channel))));
	closer->start();
	for (int32_t i = 0; i < $nc(locks)->length; ++i) {
		try {
			$nc(locks->get(i))->release();
		} catch ($ClosedChannelException&) {
			$catch();
		}
	}
	while (closer->isAlive()) {
		try {
			closer->join();
		} catch ($InterruptedException&) {
			$catch();
		}
	}
}

ReleaseOnCloseDeadlock::ReleaseOnCloseDeadlock() {
}

$Class* ReleaseOnCloseDeadlock::load$($String* name, bool initialize) {
	$loadClass(ReleaseOnCloseDeadlock, name, initialize, &_ReleaseOnCloseDeadlock_ClassInfo_, allocate$ReleaseOnCloseDeadlock);
	return class$;
}

$Class* ReleaseOnCloseDeadlock::class$ = nullptr;