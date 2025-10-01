#include <java/nio/channels/FileLock.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/InterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $Channel = ::java::nio::channels::Channel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $InterruptibleChannel = ::java::nio::channels::InterruptibleChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Objects = ::java::util::Objects;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _FileLock_FieldInfo_[] = {
	{"channel", "Ljava/nio/channels/Channel;", nullptr, $PRIVATE | $FINAL, $field(FileLock, channel$)},
	{"position", "J", nullptr, $PRIVATE | $FINAL, $field(FileLock, position$)},
	{"size", "J", nullptr, $PRIVATE | $FINAL, $field(FileLock, size$)},
	{"shared", "Z", nullptr, $PRIVATE | $FINAL, $field(FileLock, shared)},
	{}
};

$MethodInfo _FileLock_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;JJZ)V", nullptr, $PROTECTED, $method(static_cast<void(FileLock::*)($FileChannel*,int64_t,int64_t,bool)>(&FileLock::init$))},
	{"<init>", "(Ljava/nio/channels/AsynchronousFileChannel;JJZ)V", nullptr, $PROTECTED, $method(static_cast<void(FileLock::*)($AsynchronousFileChannel*,int64_t,int64_t,bool)>(&FileLock::init$))},
	{"acquiredBy", "()Ljava/nio/channels/Channel;", nullptr, $PUBLIC},
	{"channel", "()Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$FileChannel*(FileLock::*)()>(&FileLock::channel))},
	{"close", "()V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"isShared", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(FileLock::*)()>(&FileLock::isShared))},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"overlaps", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(FileLock::*)(int64_t,int64_t)>(&FileLock::overlaps))},
	{"position", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(FileLock::*)()>(&FileLock::position))},
	{"release", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"size", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(FileLock::*)()>(&FileLock::size))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _FileLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.FileLock",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_FileLock_FieldInfo_,
	_FileLock_MethodInfo_
};

$Object* allocate$FileLock($Class* clazz) {
	return $of($alloc(FileLock));
}

void FileLock::init$($FileChannel* channel, int64_t position, int64_t size, bool shared) {
	$Objects::requireNonNull($of(channel), "Null channel"_s);
	if (position < 0) {
		$throwNew($IllegalArgumentException, "Negative position"_s);
	}
	if (size < 0) {
		$throwNew($IllegalArgumentException, "Negative size"_s);
	}
	if (position + size < 0) {
		$throwNew($IllegalArgumentException, "Negative position + size"_s);
	}
	$set(this, channel$, static_cast<$Channel*>(static_cast<$InterruptibleChannel*>(static_cast<$AbstractInterruptibleChannel*>(channel))));
	this->position$ = position;
	this->size$ = size;
	this->shared = shared;
}

void FileLock::init$($AsynchronousFileChannel* channel, int64_t position, int64_t size, bool shared) {
	$Objects::requireNonNull($of(channel), "Null channel"_s);
	if (position < 0) {
		$throwNew($IllegalArgumentException, "Negative position"_s);
	}
	if (size < 0) {
		$throwNew($IllegalArgumentException, "Negative size"_s);
	}
	if (position + size < 0) {
		$throwNew($IllegalArgumentException, "Negative position + size"_s);
	}
	$set(this, channel$, channel);
	this->position$ = position;
	this->size$ = size;
	this->shared = shared;
}

$FileChannel* FileLock::channel() {
	return ($instanceOf($FileChannel, this->channel$)) ? $cast($FileChannel, this->channel$) : ($FileChannel*)nullptr;
}

$Channel* FileLock::acquiredBy() {
	return this->channel$;
}

int64_t FileLock::position() {
	return this->position$;
}

int64_t FileLock::size() {
	return this->size$;
}

bool FileLock::isShared() {
	return this->shared;
}

bool FileLock::overlaps(int64_t position, int64_t size) {
	if (position + size <= this->position$) {
		return false;
	}
	if (this->position$ + this->size$ <= position) {
		return false;
	}
	return true;
}

void FileLock::close() {
	release();
}

$String* FileLock::toString() {
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "["_s, $$str(this->position$), ":"_s, $$str(this->size$), " "_s, (this->shared ? "shared"_s : "exclusive"_s), " "_s}));
	$var($String, var$0, $$concat(var$1, (isValid() ? "valid"_s : "invalid"_s)));
	return ($concat(var$0, "]"));
}

FileLock::FileLock() {
}

$Class* FileLock::load$($String* name, bool initialize) {
	$loadClass(FileLock, name, initialize, &_FileLock_ClassInfo_, allocate$FileLock);
	return class$;
}

$Class* FileLock::class$ = nullptr;

		} // channels
	} // nio
} // java