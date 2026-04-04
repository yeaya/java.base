#include <java/nio/channels/FileLock.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $Channel = ::java::nio::channels::Channel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Objects = ::java::util::Objects;

namespace java {
	namespace nio {
		namespace channels {

void FileLock::init$($FileChannel* channel, int64_t position, int64_t size, bool shared) {
	$Objects::requireNonNull(channel, "Null channel"_s);
	if (position < 0) {
		$throwNew($IllegalArgumentException, "Negative position"_s);
	}
	if (size < 0) {
		$throwNew($IllegalArgumentException, "Negative size"_s);
	}
	if (position + size < 0) {
		$throwNew($IllegalArgumentException, "Negative position + size"_s);
	}
	$set(this, channel$, $cast($AbstractInterruptibleChannel, channel));
	this->position$ = position;
	this->size$ = size;
	this->shared = shared;
}

void FileLock::init$($AsynchronousFileChannel* channel, int64_t position, int64_t size, bool shared) {
	$Objects::requireNonNull(channel, "Null channel"_s);
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
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(this->getClass()->getName()));
	var$0->append("["_s);
	var$0->append(this->position$);
	var$0->append(":"_s);
	var$0->append(this->size$);
	var$0->append(" "_s);
	var$0->append(this->shared ? "shared"_s : "exclusive"_s);
	var$0->append(" "_s);
	var$0->append(isValid() ? "valid"_s : "invalid"_s);
	var$0->append("]"_s);
	return ($str(var$0));
}

FileLock::FileLock() {
}

$Class* FileLock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"channel", "Ljava/nio/channels/Channel;", nullptr, $PRIVATE | $FINAL, $field(FileLock, channel$)},
		{"position", "J", nullptr, $PRIVATE | $FINAL, $field(FileLock, position$)},
		{"size", "J", nullptr, $PRIVATE | $FINAL, $field(FileLock, size$)},
		{"shared", "Z", nullptr, $PRIVATE | $FINAL, $field(FileLock, shared)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileChannel;JJZ)V", nullptr, $PROTECTED, $method(FileLock, init$, void, $FileChannel*, int64_t, int64_t, bool)},
		{"<init>", "(Ljava/nio/channels/AsynchronousFileChannel;JJZ)V", nullptr, $PROTECTED, $method(FileLock, init$, void, $AsynchronousFileChannel*, int64_t, int64_t, bool)},
		{"acquiredBy", "()Ljava/nio/channels/Channel;", nullptr, $PUBLIC, $virtualMethod(FileLock, acquiredBy, $Channel*)},
		{"channel", "()Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC | $FINAL, $method(FileLock, channel, $FileChannel*)},
		{"close", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(FileLock, close, void), "java.io.IOException"},
		{"isShared", "()Z", nullptr, $PUBLIC | $FINAL, $method(FileLock, isShared, bool)},
		{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileLock, isValid, bool)},
		{"overlaps", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(FileLock, overlaps, bool, int64_t, int64_t)},
		{"position", "()J", nullptr, $PUBLIC | $FINAL, $method(FileLock, position, int64_t)},
		{"release", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileLock, release, void), "java.io.IOException"},
		{"size", "()J", nullptr, $PUBLIC | $FINAL, $method(FileLock, size, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(FileLock, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.nio.channels.FileLock",
		"java.lang.Object",
		"java.lang.AutoCloseable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileLock);
	});
	return class$;
}

$Class* FileLock::class$ = nullptr;

		} // channels
	} // nio
} // java