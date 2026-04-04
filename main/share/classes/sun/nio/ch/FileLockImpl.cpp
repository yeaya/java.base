#include <sun/nio/ch/FileLockImpl.h>
#include <java/lang/AssertionError.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <sun/nio/ch/AsynchronousFileChannelImpl.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $Channel = ::java::nio::channels::Channel;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $AsynchronousFileChannelImpl = ::sun::nio::ch::AsynchronousFileChannelImpl;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

bool FileLockImpl::$assertionsDisabled = false;

void FileLockImpl::init$($FileChannel* channel, int64_t position, int64_t size, bool shared) {
	$FileLock::init$(channel, position, size, shared);
}

void FileLockImpl::init$($AsynchronousFileChannel* channel, int64_t position, int64_t size, bool shared) {
	$FileLock::init$(channel, position, size, shared);
}

bool FileLockImpl::isValid() {
	return !this->invalid;
}

void FileLockImpl::invalidate() {
	if (!FileLockImpl::$assertionsDisabled && !$Thread::holdsLock(this)) {
		$throwNew($AssertionError);
	}
	this->invalid = true;
}

void FileLockImpl::release() {
	$synchronized(this) {
		$var($Channel, ch, acquiredBy());
		if (!$nc(ch)->isOpen()) {
			$throwNew($ClosedChannelException);
		}
		if (isValid()) {
			if ($instanceOf($FileChannelImpl, ch)) {
				$cast($FileChannelImpl, ch)->release(this);
			} else if ($instanceOf($AsynchronousFileChannelImpl, ch)) {
				$cast($AsynchronousFileChannelImpl, ch)->release(this);
			} else {
				$throwNew($AssertionError);
			}
			invalidate();
		}
	}
}

void FileLockImpl::clinit$($Class* clazz) {
	FileLockImpl::$assertionsDisabled = !FileLockImpl::class$->desiredAssertionStatus();
}

FileLockImpl::FileLockImpl() {
}

$Class* FileLockImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileLockImpl, $assertionsDisabled)},
		{"invalid", "Z", nullptr, $PRIVATE | $VOLATILE, $field(FileLockImpl, invalid)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileChannel;JJZ)V", nullptr, 0, $method(FileLockImpl, init$, void, $FileChannel*, int64_t, int64_t, bool)},
		{"<init>", "(Ljava/nio/channels/AsynchronousFileChannel;JJZ)V", nullptr, 0, $method(FileLockImpl, init$, void, $AsynchronousFileChannel*, int64_t, int64_t, bool)},
		{"invalidate", "()V", nullptr, 0, $virtualMethod(FileLockImpl, invalidate, void)},
		{"isValid", "()Z", nullptr, $PUBLIC, $virtualMethod(FileLockImpl, isValid, bool)},
		{"release", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(FileLockImpl, release, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.ch.FileLockImpl",
		"java.nio.channels.FileLock",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileLockImpl, name, initialize, &classInfo$$, FileLockImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileLockImpl);
	});
	return class$;
}

$Class* FileLockImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun