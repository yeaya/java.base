#include <FileLockSub.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;

$MethodInfo _FileLockSub_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;JJZ)V", nullptr, 0, $method(static_cast<void(FileLockSub::*)($FileChannel*,int64_t,int64_t,bool)>(&FileLockSub::init$))},
	{"<init>", "(Ljava/nio/channels/AsynchronousFileChannel;JJZ)V", nullptr, 0, $method(static_cast<void(FileLockSub::*)($AsynchronousFileChannel*,int64_t,int64_t,bool)>(&FileLockSub::init$))},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"release", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FileLockSub_ClassInfo_ = {
	$ACC_SUPER,
	"FileLockSub",
	"java.nio.channels.FileLock",
	nullptr,
	nullptr,
	_FileLockSub_MethodInfo_
};

$Object* allocate$FileLockSub($Class* clazz) {
	return $of($alloc(FileLockSub));
}

void FileLockSub::init$($FileChannel* channel, int64_t position, int64_t size, bool shared) {
	$FileLock::init$(channel, position, size, shared);
}

void FileLockSub::init$($AsynchronousFileChannel* channel, int64_t position, int64_t size, bool shared) {
	$FileLock::init$(channel, position, size, shared);
}

bool FileLockSub::isValid() {
	return false;
}

void FileLockSub::release() {
}

FileLockSub::FileLockSub() {
}

$Class* FileLockSub::load$($String* name, bool initialize) {
	$loadClass(FileLockSub, name, initialize, &_FileLockSub_ClassInfo_, allocate$FileLockSub);
	return class$;
}

$Class* FileLockSub::class$ = nullptr;