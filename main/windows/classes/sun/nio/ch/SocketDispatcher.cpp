#include <sun/nio/ch/SocketDispatcher.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/NativeDispatcher.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $NativeDispatcher = ::sun::nio::ch::NativeDispatcher;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SocketDispatcher_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketDispatcher, $assertionsDisabled)},
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketDispatcher, fdAccess)},
	{}
};

$MethodInfo _SocketDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SocketDispatcher, init$, void)},
	{"close", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $virtualMethod(SocketDispatcher, close, void, $FileDescriptor*), "java.io.IOException"},
	{"close0", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketDispatcher, close0, void, int32_t), "java.io.IOException"},
	{"invalidateAndClose", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC, $staticMethod(SocketDispatcher, invalidateAndClose, void, $FileDescriptor*), "java.io.IOException"},
	{"preClose", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $virtualMethod(SocketDispatcher, preClose, void, $FileDescriptor*), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;JI)I", nullptr, 0, $virtualMethod(SocketDispatcher, read, int32_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"read0", "(Ljava/io/FileDescriptor;JI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketDispatcher, read0, int32_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"readv", "(Ljava/io/FileDescriptor;JI)J", nullptr, 0, $virtualMethod(SocketDispatcher, readv, int64_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"readv0", "(Ljava/io/FileDescriptor;JI)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketDispatcher, readv0, int64_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;JI)I", nullptr, 0, $virtualMethod(SocketDispatcher, write, int32_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"write0", "(Ljava/io/FileDescriptor;JI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketDispatcher, write0, int32_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"writev", "(Ljava/io/FileDescriptor;JI)J", nullptr, 0, $virtualMethod(SocketDispatcher, writev, int64_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{"writev0", "(Ljava/io/FileDescriptor;JI)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketDispatcher, writev0, int64_t, $FileDescriptor*, int64_t, int32_t), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_close0 2
#define _METHOD_INDEX_read0 6
#define _METHOD_INDEX_readv0 8
#define _METHOD_INDEX_write0 10
#define _METHOD_INDEX_writev0 12

$ClassInfo _SocketDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SocketDispatcher",
	"sun.nio.ch.NativeDispatcher",
	nullptr,
	_SocketDispatcher_FieldInfo_,
	_SocketDispatcher_MethodInfo_
};

$Object* allocate$SocketDispatcher($Class* clazz) {
	return $of($alloc(SocketDispatcher));
}

bool SocketDispatcher::$assertionsDisabled = false;
$JavaIOFileDescriptorAccess* SocketDispatcher::fdAccess = nullptr;

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
	return write0(fd, address, len);
}

int64_t SocketDispatcher::writev($FileDescriptor* fd, int64_t address, int32_t len) {
	return writev0(fd, address, len);
}

void SocketDispatcher::preClose($FileDescriptor* fd) {
	$throwNew($UnsupportedOperationException);
}

void SocketDispatcher::close($FileDescriptor* fd) {
	invalidateAndClose(fd);
}

void SocketDispatcher::invalidateAndClose($FileDescriptor* fd) {
	$init(SocketDispatcher);
	if (!SocketDispatcher::$assertionsDisabled && !$nc(fd)->valid()) {
		$throwNew($AssertionError);
	}
	int32_t fdVal = $nc(SocketDispatcher::fdAccess)->get(fd);
	$nc(SocketDispatcher::fdAccess)->set(fd, -1);
	close0(fdVal);
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

int32_t SocketDispatcher::write0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(SocketDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(SocketDispatcher, write0, int32_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int64_t SocketDispatcher::writev0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(SocketDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(SocketDispatcher, writev0, int64_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(fd, address, len);
	$finishNativeStatic();
	return $ret;
}

void SocketDispatcher::close0(int32_t fdVal) {
	$init(SocketDispatcher);
	$prepareNativeStatic(SocketDispatcher, close0, void, int32_t fdVal);
	$invokeNativeStatic(fdVal);
	$finishNativeStatic();
}

void clinit$SocketDispatcher($Class* class$) {
	SocketDispatcher::$assertionsDisabled = !SocketDispatcher::class$->desiredAssertionStatus();
	$assignStatic(SocketDispatcher::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
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