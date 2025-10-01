#include <sun/nio/ch/FileLockImpl.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _FileLockImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileLockImpl, $assertionsDisabled)},
	{"invalid", "Z", nullptr, $PRIVATE | $VOLATILE, $field(FileLockImpl, invalid)},
	{}
};

$MethodInfo _FileLockImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;JJZ)V", nullptr, 0, $method(static_cast<void(FileLockImpl::*)($FileChannel*,int64_t,int64_t,bool)>(&FileLockImpl::init$))},
	{"<init>", "(Ljava/nio/channels/AsynchronousFileChannel;JJZ)V", nullptr, 0, $method(static_cast<void(FileLockImpl::*)($AsynchronousFileChannel*,int64_t,int64_t,bool)>(&FileLockImpl::init$))},
	{"invalidate", "()V", nullptr, 0},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"release", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FileLockImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.FileLockImpl",
	"java.nio.channels.FileLock",
	nullptr,
	_FileLockImpl_FieldInfo_,
	_FileLockImpl_MethodInfo_
};

$Object* allocate$FileLockImpl($Class* clazz) {
	return $of($alloc(FileLockImpl));
}

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
				$nc(($cast($FileChannelImpl, ch)))->release(this);
			} else if ($instanceOf($AsynchronousFileChannelImpl, ch)) {
				$nc(($cast($AsynchronousFileChannelImpl, ch)))->release(this);
			} else {
				$throwNew($AssertionError);
			}
			invalidate();
		}
	}
}

void clinit$FileLockImpl($Class* class$) {
	FileLockImpl::$assertionsDisabled = !FileLockImpl::class$->desiredAssertionStatus();
}

FileLockImpl::FileLockImpl() {
}

$Class* FileLockImpl::load$($String* name, bool initialize) {
	$loadClass(FileLockImpl, name, initialize, &_FileLockImpl_ClassInfo_, clinit$FileLockImpl, allocate$FileLockImpl);
	return class$;
}

$Class* FileLockImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun