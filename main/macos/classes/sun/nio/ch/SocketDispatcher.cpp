#include <sun/nio/ch/SocketDispatcher.h>

#include <java/io/FileDescriptor.h>
#include <sun/nio/ch/FileDispatcherImpl.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/NativeDispatcher.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileDispatcherImpl = ::sun::nio::ch::FileDispatcherImpl;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $NativeDispatcher = ::sun::nio::ch::NativeDispatcher;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _SocketDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SocketDispatcher, init$, void)},
	{"close", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $virtualMethod(SocketDispatcher, close, void, $FileDescriptor*), "java.io.IOException"},
	{"preClose", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $virtualMethod(SocketDispatcher, preClose, void, $FileDescriptor*), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;JI)I", nullptr, 0, $virtualMethod(SocketDispatcher, read, int32_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"read0", "(Ljava/io/FileDescriptor;JI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketDispatcher, read0, int32_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"readv", "(Ljava/io/FileDescriptor;JI)J", nullptr, 0, $virtualMethod(SocketDispatcher, readv, int64_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"readv0", "(Ljava/io/FileDescriptor;JI)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketDispatcher, readv0, int64_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;JI)I", nullptr, 0, $virtualMethod(SocketDispatcher, write, int32_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"writev", "(Ljava/io/FileDescriptor;JI)J", nullptr, 0, $virtualMethod(SocketDispatcher, writev, int64_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_read0 4
#define _METHOD_INDEX_readv0 6

$ClassInfo _SocketDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SocketDispatcher",
	"sun.nio.ch.NativeDispatcher",
	nullptr,
	nullptr,
	_SocketDispatcher_MethodInfo_
};

$Object* allocate$SocketDispatcher($Class* clazz) {
	return $of($alloc(SocketDispatcher));
}

void SocketDispatcher::init$() {
	$NativeDispatcher::init$();
}

int32_t SocketDispatcher::read($FileDescriptor* fd, int64_t address, int32_t len) {
	return read0(fd, address, len);
}

int64_t SocketDispatcher::readv($FileDescriptor* fd, int64_t address, int32_t len) {
	return readv0(fd, address, len);
}

int32_t SocketDispatcher::write($FileDescriptor* fd, int64_t address, int32_t len) {
	return $FileDispatcherImpl::write0(fd, address, len);
}

int64_t SocketDispatcher::writev($FileDescriptor* fd, int64_t address, int32_t len) {
	return $FileDispatcherImpl::writev0(fd, address, len);
}

void SocketDispatcher::close($FileDescriptor* fd) {
	$FileDispatcherImpl::close0(fd);
}

void SocketDispatcher::preClose($FileDescriptor* fd) {
	$FileDispatcherImpl::preClose0(fd);
}

int32_t SocketDispatcher::read0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(SocketDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(SocketDispatcher, read0, int32_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int64_t SocketDispatcher::readv0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(SocketDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(SocketDispatcher, readv0, int64_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(fd, address, len);
	$finishNativeStatic();
	return $ret;
}

void clinit$SocketDispatcher($Class* class$) {
	{
		$IOUtil::load();
	}
}

SocketDispatcher::SocketDispatcher() {
}

$Class* SocketDispatcher::load$($String* name, bool initialize) {
	$loadClass(SocketDispatcher, name, initialize, &_SocketDispatcher_ClassInfo_, clinit$SocketDispatcher, allocate$SocketDispatcher);
	return class$;
}

$Class* SocketDispatcher::class$ = nullptr;

		} // ch
	} // nio
} // sun