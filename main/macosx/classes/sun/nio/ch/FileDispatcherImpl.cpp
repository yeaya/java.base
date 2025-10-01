#include <sun/nio/ch/FileDispatcherImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/SelectableChannel.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/ch/FileDispatcher.h>
#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $FileDispatcher = ::sun::nio::ch::FileDispatcher;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _FileDispatcherImpl_FieldInfo_[] = {
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileDispatcherImpl, fdAccess)},
	{}
};

$MethodInfo _FileDispatcherImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileDispatcherImpl::*)()>(&FileDispatcherImpl::init$))},
	{"canTransferToDirectly", "(Ljava/nio/channels/SelectableChannel;)Z", nullptr, 0},
	{"close", "(Ljava/io/FileDescriptor;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"close0", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)($FileDescriptor*)>(&FileDispatcherImpl::close0)), "java.io.IOException"},
	{"closeIntFD", "(I)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&FileDispatcherImpl::closeIntFD)), "java.io.IOException"},
	{"dup", "(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"dup0", "(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)($FileDescriptor*,$FileDescriptor*)>(&FileDispatcherImpl::dup0)), "java.io.IOException"},
	{"duplicateForMapping", "(Ljava/io/FileDescriptor;)Ljava/io/FileDescriptor;", nullptr, 0},
	{"force", "(Ljava/io/FileDescriptor;Z)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"force0", "(Ljava/io/FileDescriptor;Z)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,bool)>(&FileDispatcherImpl::force0)), "java.io.IOException"},
	{"init", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&FileDispatcherImpl::init))},
	{"lock", "(Ljava/io/FileDescriptor;ZJJZ)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"lock0", "(Ljava/io/FileDescriptor;ZJJZ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,bool,int64_t,int64_t,bool)>(&FileDispatcherImpl::lock0)), "java.io.IOException"},
	{"preClose", "(Ljava/io/FileDescriptor;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"preClose0", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)($FileDescriptor*)>(&FileDispatcherImpl::preClose0)), "java.io.IOException"},
	{"pread", "(Ljava/io/FileDescriptor;JIJ)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"pread0", "(Ljava/io/FileDescriptor;JIJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,int64_t,int32_t,int64_t)>(&FileDispatcherImpl::pread0)), "java.io.IOException"},
	{"pwrite", "(Ljava/io/FileDescriptor;JIJ)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"pwrite0", "(Ljava/io/FileDescriptor;JIJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,int64_t,int32_t,int64_t)>(&FileDispatcherImpl::pwrite0)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;JI)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"read0", "(Ljava/io/FileDescriptor;JI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,int64_t,int32_t)>(&FileDispatcherImpl::read0)), "java.io.IOException"},
	{"readv", "(Ljava/io/FileDescriptor;JI)J", nullptr, 0, nullptr, "java.io.IOException"},
	{"readv0", "(Ljava/io/FileDescriptor;JI)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)($FileDescriptor*,int64_t,int32_t)>(&FileDispatcherImpl::readv0)), "java.io.IOException"},
	{"release", "(Ljava/io/FileDescriptor;JJ)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"release0", "(Ljava/io/FileDescriptor;JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)($FileDescriptor*,int64_t,int64_t)>(&FileDispatcherImpl::release0)), "java.io.IOException"},
	{"seek", "(Ljava/io/FileDescriptor;J)J", nullptr, 0, nullptr, "java.io.IOException"},
	{"seek0", "(Ljava/io/FileDescriptor;J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)($FileDescriptor*,int64_t)>(&FileDispatcherImpl::seek0)), "java.io.IOException"},
	{"setDirect0", "(Ljava/io/FileDescriptor;)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*)>(&FileDispatcherImpl::setDirect0)), "java.io.IOException"},
	{"setDirectIO", "(Ljava/io/FileDescriptor;Ljava/lang/String;)I", nullptr, 0},
	{"size", "(Ljava/io/FileDescriptor;)J", nullptr, 0, nullptr, "java.io.IOException"},
	{"size0", "(Ljava/io/FileDescriptor;)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)($FileDescriptor*)>(&FileDispatcherImpl::size0)), "java.io.IOException"},
	{"transferToDirectlyNeedsPositionLock", "()Z", nullptr, 0},
	{"truncate", "(Ljava/io/FileDescriptor;J)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"truncate0", "(Ljava/io/FileDescriptor;J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,int64_t)>(&FileDispatcherImpl::truncate0)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;JI)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"write0", "(Ljava/io/FileDescriptor;JI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*,int64_t,int32_t)>(&FileDispatcherImpl::write0)), "java.io.IOException"},
	{"writev", "(Ljava/io/FileDescriptor;JI)J", nullptr, 0, nullptr, "java.io.IOException"},
	{"writev0", "(Ljava/io/FileDescriptor;JI)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)($FileDescriptor*,int64_t,int32_t)>(&FileDispatcherImpl::writev0)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_close0 3
#define _METHOD_INDEX_closeIntFD 4
#define _METHOD_INDEX_dup0 6
#define _METHOD_INDEX_force0 9
#define _METHOD_INDEX_init 10
#define _METHOD_INDEX_lock0 12
#define _METHOD_INDEX_preClose0 14
#define _METHOD_INDEX_pread0 16
#define _METHOD_INDEX_pwrite0 18
#define _METHOD_INDEX_read0 20
#define _METHOD_INDEX_readv0 22
#define _METHOD_INDEX_release0 24
#define _METHOD_INDEX_seek0 26
#define _METHOD_INDEX_setDirect0 27
#define _METHOD_INDEX_size0 30
#define _METHOD_INDEX_truncate0 33
#define _METHOD_INDEX_write0 35
#define _METHOD_INDEX_writev0 37

$ClassInfo _FileDispatcherImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.FileDispatcherImpl",
	"sun.nio.ch.FileDispatcher",
	nullptr,
	_FileDispatcherImpl_FieldInfo_,
	_FileDispatcherImpl_MethodInfo_
};

$Object* allocate$FileDispatcherImpl($Class* clazz) {
	return $of($alloc(FileDispatcherImpl));
}

$JavaIOFileDescriptorAccess* FileDispatcherImpl::fdAccess = nullptr;

void FileDispatcherImpl::init$() {
	$FileDispatcher::init$();
}

int32_t FileDispatcherImpl::read($FileDescriptor* fd, int64_t address, int32_t len) {
	return read0(fd, address, len);
}

int32_t FileDispatcherImpl::pread($FileDescriptor* fd, int64_t address, int32_t len, int64_t position) {
	return pread0(fd, address, len, position);
}

int64_t FileDispatcherImpl::readv($FileDescriptor* fd, int64_t address, int32_t len) {
	return readv0(fd, address, len);
}

int32_t FileDispatcherImpl::write($FileDescriptor* fd, int64_t address, int32_t len) {
	return write0(fd, address, len);
}

int32_t FileDispatcherImpl::pwrite($FileDescriptor* fd, int64_t address, int32_t len, int64_t position) {
	return pwrite0(fd, address, len, position);
}

int64_t FileDispatcherImpl::writev($FileDescriptor* fd, int64_t address, int32_t len) {
	return writev0(fd, address, len);
}

int64_t FileDispatcherImpl::seek($FileDescriptor* fd, int64_t offset) {
	return seek0(fd, offset);
}

int32_t FileDispatcherImpl::force($FileDescriptor* fd, bool metaData) {
	return force0(fd, metaData);
}

int32_t FileDispatcherImpl::truncate($FileDescriptor* fd, int64_t size) {
	return truncate0(fd, size);
}

int64_t FileDispatcherImpl::size($FileDescriptor* fd) {
	return size0(fd);
}

int32_t FileDispatcherImpl::lock($FileDescriptor* fd, bool blocking, int64_t pos, int64_t size, bool shared) {
	return lock0(fd, blocking, pos, size, shared);
}

void FileDispatcherImpl::release($FileDescriptor* fd, int64_t pos, int64_t size) {
	release0(fd, pos, size);
}

void FileDispatcherImpl::close($FileDescriptor* fd) {
	$nc(FileDispatcherImpl::fdAccess)->close(fd);
}

void FileDispatcherImpl::preClose($FileDescriptor* fd) {
	preClose0(fd);
}

void FileDispatcherImpl::dup($FileDescriptor* fd1, $FileDescriptor* fd2) {
	dup0(fd1, fd2);
}

$FileDescriptor* FileDispatcherImpl::duplicateForMapping($FileDescriptor* fd) {
	return $new($FileDescriptor);
}

bool FileDispatcherImpl::canTransferToDirectly($SelectableChannel* sc) {
	return true;
}

bool FileDispatcherImpl::transferToDirectlyNeedsPositionLock() {
	return false;
}

int32_t FileDispatcherImpl::setDirectIO($FileDescriptor* fd, $String* path) {
	int32_t result = -1;
	try {
		result = setDirect0(fd);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($UnsupportedOperationException, "Error setting up DirectIO"_s, e);
	}
	return result;
}

int32_t FileDispatcherImpl::read0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(FileDispatcherImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, read0, int32_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(FileDispatcherImpl, read0, fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int32_t FileDispatcherImpl::pread0($FileDescriptor* fd, int64_t address, int32_t len, int64_t position) {
	$init(FileDispatcherImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, pread0, int32_t, $FileDescriptor* fd, int64_t address, int32_t len, int64_t position);
	$ret = $invokeNativeStatic(FileDispatcherImpl, pread0, fd, address, len, position);
	$finishNativeStatic();
	return $ret;
}

int64_t FileDispatcherImpl::readv0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(FileDispatcherImpl);
	int64_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, readv0, int64_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(FileDispatcherImpl, readv0, fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int32_t FileDispatcherImpl::write0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(FileDispatcherImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, write0, int32_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(FileDispatcherImpl, write0, fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int32_t FileDispatcherImpl::pwrite0($FileDescriptor* fd, int64_t address, int32_t len, int64_t position) {
	$init(FileDispatcherImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, pwrite0, int32_t, $FileDescriptor* fd, int64_t address, int32_t len, int64_t position);
	$ret = $invokeNativeStatic(FileDispatcherImpl, pwrite0, fd, address, len, position);
	$finishNativeStatic();
	return $ret;
}

int64_t FileDispatcherImpl::writev0($FileDescriptor* fd, int64_t address, int32_t len) {
	$init(FileDispatcherImpl);
	int64_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, writev0, int64_t, $FileDescriptor* fd, int64_t address, int32_t len);
	$ret = $invokeNativeStatic(FileDispatcherImpl, writev0, fd, address, len);
	$finishNativeStatic();
	return $ret;
}

int32_t FileDispatcherImpl::force0($FileDescriptor* fd, bool metaData) {
	$init(FileDispatcherImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, force0, int32_t, $FileDescriptor* fd, bool metaData);
	$ret = $invokeNativeStatic(FileDispatcherImpl, force0, fd, metaData);
	$finishNativeStatic();
	return $ret;
}

int64_t FileDispatcherImpl::seek0($FileDescriptor* fd, int64_t offset) {
	$init(FileDispatcherImpl);
	int64_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, seek0, int64_t, $FileDescriptor* fd, int64_t offset);
	$ret = $invokeNativeStatic(FileDispatcherImpl, seek0, fd, offset);
	$finishNativeStatic();
	return $ret;
}

int32_t FileDispatcherImpl::truncate0($FileDescriptor* fd, int64_t size) {
	$init(FileDispatcherImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, truncate0, int32_t, $FileDescriptor* fd, int64_t size);
	$ret = $invokeNativeStatic(FileDispatcherImpl, truncate0, fd, size);
	$finishNativeStatic();
	return $ret;
}

int64_t FileDispatcherImpl::size0($FileDescriptor* fd) {
	$init(FileDispatcherImpl);
	int64_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, size0, int64_t, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(FileDispatcherImpl, size0, fd);
	$finishNativeStatic();
	return $ret;
}

int32_t FileDispatcherImpl::lock0($FileDescriptor* fd, bool blocking, int64_t pos, int64_t size, bool shared) {
	$init(FileDispatcherImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, lock0, int32_t, $FileDescriptor* fd, bool blocking, int64_t pos, int64_t size, bool shared);
	$ret = $invokeNativeStatic(FileDispatcherImpl, lock0, fd, blocking, pos, size, shared);
	$finishNativeStatic();
	return $ret;
}

void FileDispatcherImpl::release0($FileDescriptor* fd, int64_t pos, int64_t size) {
	$init(FileDispatcherImpl);
	$prepareNativeStatic(FileDispatcherImpl, release0, void, $FileDescriptor* fd, int64_t pos, int64_t size);
	$invokeNativeStatic(FileDispatcherImpl, release0, fd, pos, size);
	$finishNativeStatic();
}

void FileDispatcherImpl::close0($FileDescriptor* fd) {
	$init(FileDispatcherImpl);
	$prepareNativeStatic(FileDispatcherImpl, close0, void, $FileDescriptor* fd);
	$invokeNativeStatic(FileDispatcherImpl, close0, fd);
	$finishNativeStatic();
}

void FileDispatcherImpl::preClose0($FileDescriptor* fd) {
	$init(FileDispatcherImpl);
	$prepareNativeStatic(FileDispatcherImpl, preClose0, void, $FileDescriptor* fd);
	$invokeNativeStatic(FileDispatcherImpl, preClose0, fd);
	$finishNativeStatic();
}

void FileDispatcherImpl::dup0($FileDescriptor* fd1, $FileDescriptor* fd2) {
	$init(FileDispatcherImpl);
	$prepareNativeStatic(FileDispatcherImpl, dup0, void, $FileDescriptor* fd1, $FileDescriptor* fd2);
	$invokeNativeStatic(FileDispatcherImpl, dup0, fd1, fd2);
	$finishNativeStatic();
}

void FileDispatcherImpl::closeIntFD(int32_t fd) {
	$init(FileDispatcherImpl);
	$prepareNativeStatic(FileDispatcherImpl, closeIntFD, void, int32_t fd);
	$invokeNativeStatic(FileDispatcherImpl, closeIntFD, fd);
	$finishNativeStatic();
}

int32_t FileDispatcherImpl::setDirect0($FileDescriptor* fd) {
	$init(FileDispatcherImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(FileDispatcherImpl, setDirect0, int32_t, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(FileDispatcherImpl, setDirect0, fd);
	$finishNativeStatic();
	return $ret;
}

void FileDispatcherImpl::init() {
	$init(FileDispatcherImpl);
	$prepareNativeStatic(FileDispatcherImpl, init, void);
	$invokeNativeStatic(FileDispatcherImpl, init);
	$finishNativeStatic();
}

void clinit$FileDispatcherImpl($Class* class$) {
	{
		$IOUtil::load();
		FileDispatcherImpl::init();
	}
	$assignStatic(FileDispatcherImpl::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
}

FileDispatcherImpl::FileDispatcherImpl() {
}

$Class* FileDispatcherImpl::load$($String* name, bool initialize) {
	$loadClass(FileDispatcherImpl, name, initialize, &_FileDispatcherImpl_ClassInfo_, clinit$FileDispatcherImpl, allocate$FileDispatcherImpl);
	return class$;
}

$Class* FileDispatcherImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun