#include <sun/nio/ch/DatagramDispatcher.h>

#include <java/io/FileDescriptor.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/NativeDispatcher.h>
#include <sun/nio/ch/SocketDispatcher.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $NativeDispatcher = ::sun::nio::ch::NativeDispatcher;
using $SocketDispatcher = ::sun::nio::ch::SocketDispatcher;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _DatagramDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DatagramDispatcher::*)()>(&DatagramDispatcher::init$))},
	{"close", "(Ljava/io/FileDescriptor;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;JI)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"read0", "(Ljava/io/FileDescriptor;JI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,int64_t,int32_t)>(&DatagramDispatcher::read0)), "java.io.IOException"},
	{"readv", "(Ljava/io/FileDescriptor;JI)J", nullptr, 0, nullptr, "java.io.IOException"},
	{"readv0", "(Ljava/io/FileDescriptor;JI)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($FileDescriptor*,int64_t,int32_t)>(&DatagramDispatcher::readv0)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;JI)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"write0", "(Ljava/io/FileDescriptor;JI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,int64_t,int32_t)>(&DatagramDispatcher::write0)), "java.io.IOException"},
	{"writev", "(Ljava/io/FileDescriptor;JI)J", nullptr, 0, nullptr, "java.io.IOException"},
	{"writev0", "(Ljava/io/FileDescriptor;JI)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($FileDescriptor*,int64_t,int32_t)>(&DatagramDispatcher::writev0)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_read0 3
#define _METHOD_INDEX_readv0 5
#define _METHOD_INDEX_write0 7
#define _METHOD_INDEX_writev0 9

$ClassInfo _DatagramDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.DatagramDispatcher",
	"sun.nio.ch.NativeDispatcher",
	nullptr,
	nullptr,
	_DatagramDispatcher_MethodInfo_
};

$Object* allocate$DatagramDispatcher($Class* clazz) {
	return $of($alloc(DatagramDispatcher));
}

void DatagramDispatcher::init$() {
	$NativeDispatcher::init$();
}

int32_t DatagramDispatcher::read($FileDescriptor* fd, int64_t address, int32_t len) {
	return read0(fd, address, len);
}

int64_t DatagramDispatcher::readv($FileDescriptor* fd, int64_t address, int32_t len) {
	return readv0(fd, address, len);
}

int32_t DatagramDispatcher::write($FileDescriptor* fd, int64_t address, int32_t len) {
	return write0(fd, address, len);
}

int64_t DatagramDispatcher::writev($FileDescriptor* fd, int64_t address, int32_t len) {
	return writev0(fd, address, len);
}

void DatagramDispatcher::close($FileDescriptor* fd) {
	$SocketDispatcher::invalidateAndClose(fd);
}

int32_t DatagramDispatcher::read0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(DatagramDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(DatagramDispatcher, read0, int32_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(DatagramDispatcher, read0, fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int64_t DatagramDispatcher::readv0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(DatagramDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(DatagramDispatcher, readv0, int64_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(DatagramDispatcher, readv0, fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int32_t DatagramDispatcher::write0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(DatagramDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(DatagramDispatcher, write0, int32_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(DatagramDispatcher, write0, fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int64_t DatagramDispatcher::writev0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(DatagramDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(DatagramDispatcher, writev0, int64_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(DatagramDispatcher, writev0, fd, address, len);
	$finishNativeStatic();
	return $ret;
}

void clinit$DatagramDispatcher($Class* class$) {
	{
		$IOUtil::load();
	}
}

DatagramDispatcher::DatagramDispatcher() {
}

$Class* DatagramDispatcher::load$($String* name, bool initialize) {
	$loadClass(DatagramDispatcher, name, initialize, &_DatagramDispatcher_ClassInfo_, clinit$DatagramDispatcher, allocate$DatagramDispatcher);
	return class$;
}

$Class* DatagramDispatcher::class$ = nullptr;

		} // ch
	} // nio
} // sun