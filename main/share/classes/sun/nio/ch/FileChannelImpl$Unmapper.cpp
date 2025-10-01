#include <sun/nio/ch/FileChannelImpl$Unmapper.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <sun/nio/ch/FileDispatcher.h>
#include <sun/nio/ch/FileDispatcherImpl.h>
#include <sun/nio/ch/NativeDispatcher.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UnmapperProxy = ::jdk::internal::access::foreign::UnmapperProxy;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;
using $FileDispatcher = ::sun::nio::ch::FileDispatcher;
using $FileDispatcherImpl = ::sun::nio::ch::FileDispatcherImpl;
using $NativeDispatcher = ::sun::nio::ch::NativeDispatcher;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _FileChannelImpl$Unmapper_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileChannelImpl$Unmapper, $assertionsDisabled)},
	{"nd", "Lsun/nio/ch/NativeDispatcher;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileChannelImpl$Unmapper, nd)},
	{"address", "J", nullptr, $PRIVATE | $VOLATILE, $field(FileChannelImpl$Unmapper, address$)},
	{"size", "J", nullptr, $PROTECTED | $FINAL, $field(FileChannelImpl$Unmapper, size)},
	{"cap", "J", nullptr, $PROTECTED | $FINAL, $field(FileChannelImpl$Unmapper, cap)},
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(FileChannelImpl$Unmapper, fd)},
	{"pagePosition", "I", nullptr, $PRIVATE | $FINAL, $field(FileChannelImpl$Unmapper, pagePosition)},
	{}
};

$MethodInfo _FileChannelImpl$Unmapper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JJJLjava/io/FileDescriptor;I)V", nullptr, $PRIVATE, $method(static_cast<void(FileChannelImpl$Unmapper::*)(int64_t,int64_t,int64_t,$FileDescriptor*,int32_t)>(&FileChannelImpl$Unmapper::init$))},
	{"address", "()J", nullptr, $PUBLIC},
	{"decrementStats", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"fileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC},
	{"incrementStats", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unmap", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FileChannelImpl$Unmapper_InnerClassesInfo_[] = {
	{"sun.nio.ch.FileChannelImpl$Unmapper", "sun.nio.ch.FileChannelImpl", "Unmapper", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FileChannelImpl$Unmapper_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.ch.FileChannelImpl$Unmapper",
	"java.lang.Object",
	"java.lang.Runnable,jdk.internal.access.foreign.UnmapperProxy",
	_FileChannelImpl$Unmapper_FieldInfo_,
	_FileChannelImpl$Unmapper_MethodInfo_,
	nullptr,
	nullptr,
	_FileChannelImpl$Unmapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.FileChannelImpl"
};

$Object* allocate$FileChannelImpl$Unmapper($Class* clazz) {
	return $of($alloc(FileChannelImpl$Unmapper));
}

int32_t FileChannelImpl$Unmapper::hashCode() {
	 return this->$Runnable::hashCode();
}

bool FileChannelImpl$Unmapper::equals(Object$* obj) {
	 return this->$Runnable::equals(obj);
}

$Object* FileChannelImpl$Unmapper::clone() {
	 return this->$Runnable::clone();
}

$String* FileChannelImpl$Unmapper::toString() {
	 return this->$Runnable::toString();
}

void FileChannelImpl$Unmapper::finalize() {
	this->$Runnable::finalize();
}

bool FileChannelImpl$Unmapper::$assertionsDisabled = false;
$NativeDispatcher* FileChannelImpl$Unmapper::nd = nullptr;

void FileChannelImpl$Unmapper::init$(int64_t address, int64_t size, int64_t cap, $FileDescriptor* fd, int32_t pagePosition) {
	if (!FileChannelImpl$Unmapper::$assertionsDisabled && !(address != 0)) {
		$throwNew($AssertionError);
	}
	this->address$ = address;
	this->size = size;
	this->cap = cap;
	$set(this, fd, fd);
	this->pagePosition = pagePosition;
}

int64_t FileChannelImpl$Unmapper::address() {
	return this->address$ + this->pagePosition;
}

$FileDescriptor* FileChannelImpl$Unmapper::fileDescriptor() {
	return this->fd;
}

void FileChannelImpl$Unmapper::run() {
	unmap();
}

void FileChannelImpl$Unmapper::unmap() {
	if (this->address$ == 0) {
		return;
	}
	$FileChannelImpl::unmap0(this->address$, this->size);
	this->address$ = 0;
	if ($nc(this->fd)->valid()) {
		try {
			$nc(FileChannelImpl$Unmapper::nd)->close(this->fd);
		} catch ($IOException&) {
			$catch();
		}
	}
	decrementStats();
}

void clinit$FileChannelImpl$Unmapper($Class* class$) {
	$load($FileChannelImpl);
	FileChannelImpl$Unmapper::$assertionsDisabled = !$FileChannelImpl::class$->desiredAssertionStatus();
	$assignStatic(FileChannelImpl$Unmapper::nd, $new($FileDispatcherImpl));
}

FileChannelImpl$Unmapper::FileChannelImpl$Unmapper() {
}

$Class* FileChannelImpl$Unmapper::load$($String* name, bool initialize) {
	$loadClass(FileChannelImpl$Unmapper, name, initialize, &_FileChannelImpl$Unmapper_ClassInfo_, clinit$FileChannelImpl$Unmapper, allocate$FileChannelImpl$Unmapper);
	return class$;
}

$Class* FileChannelImpl$Unmapper::class$ = nullptr;

		} // ch
	} // nio
} // sun