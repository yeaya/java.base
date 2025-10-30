#include <sun/nio/ch/NativeDispatcher.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _NativeDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NativeDispatcher::*)()>(&NativeDispatcher::init$))},
	{"close", "(Ljava/io/FileDescriptor;)V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"dup", "(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"needsPositionLock", "()Z", nullptr, 0},
	{"preClose", "(Ljava/io/FileDescriptor;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"pread", "(Ljava/io/FileDescriptor;JIJ)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"pwrite", "(Ljava/io/FileDescriptor;JIJ)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;JI)I", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"readv", "(Ljava/io/FileDescriptor;JI)J", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;JI)I", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"writev", "(Ljava/io/FileDescriptor;JI)J", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _NativeDispatcher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.ch.NativeDispatcher",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativeDispatcher_MethodInfo_
};

$Object* allocate$NativeDispatcher($Class* clazz) {
	return $of($alloc(NativeDispatcher));
}

void NativeDispatcher::init$() {
}

bool NativeDispatcher::needsPositionLock() {
	return false;
}

int32_t NativeDispatcher::pread($FileDescriptor* fd, int64_t address, int32_t len, int64_t position) {
	$throwNew($IOException, "Operation Unsupported"_s);
	$shouldNotReachHere();
}

int32_t NativeDispatcher::pwrite($FileDescriptor* fd, int64_t address, int32_t len, int64_t position) {
	$throwNew($IOException, "Operation Unsupported"_s);
	$shouldNotReachHere();
}

void NativeDispatcher::preClose($FileDescriptor* fd) {
}

void NativeDispatcher::dup($FileDescriptor* fd1, $FileDescriptor* fd2) {
	$throwNew($UnsupportedOperationException);
}

NativeDispatcher::NativeDispatcher() {
}

$Class* NativeDispatcher::load$($String* name, bool initialize) {
	$loadClass(NativeDispatcher, name, initialize, &_NativeDispatcher_ClassInfo_, allocate$NativeDispatcher);
	return class$;
}

$Class* NativeDispatcher::class$ = nullptr;

		} // ch
	} // nio
} // sun