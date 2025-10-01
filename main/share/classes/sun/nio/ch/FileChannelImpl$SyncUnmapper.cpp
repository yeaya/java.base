#include <sun/nio/ch/FileChannelImpl$SyncUnmapper.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/FileChannelImpl$Unmapper.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;
using $FileChannelImpl$Unmapper = ::sun::nio::ch::FileChannelImpl$Unmapper;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _FileChannelImpl$SyncUnmapper_FieldInfo_[] = {
	{"count", "I", nullptr, $STATIC | $VOLATILE, $staticField(FileChannelImpl$SyncUnmapper, count)},
	{"totalSize", "J", nullptr, $STATIC | $VOLATILE, $staticField(FileChannelImpl$SyncUnmapper, totalSize)},
	{"totalCapacity", "J", nullptr, $STATIC | $VOLATILE, $staticField(FileChannelImpl$SyncUnmapper, totalCapacity)},
	{}
};

$MethodInfo _FileChannelImpl$SyncUnmapper_MethodInfo_[] = {
	{"<init>", "(JJJLjava/io/FileDescriptor;I)V", nullptr, $PUBLIC, $method(static_cast<void(FileChannelImpl$SyncUnmapper::*)(int64_t,int64_t,int64_t,$FileDescriptor*,int32_t)>(&FileChannelImpl$SyncUnmapper::init$))},
	{"decrementStats", "()V", nullptr, $PROTECTED},
	{"incrementStats", "()V", nullptr, $PROTECTED},
	{"isSync", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FileChannelImpl$SyncUnmapper_InnerClassesInfo_[] = {
	{"sun.nio.ch.FileChannelImpl$SyncUnmapper", "sun.nio.ch.FileChannelImpl", "SyncUnmapper", $PRIVATE | $STATIC},
	{"sun.nio.ch.FileChannelImpl$Unmapper", "sun.nio.ch.FileChannelImpl", "Unmapper", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FileChannelImpl$SyncUnmapper_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.FileChannelImpl$SyncUnmapper",
	"sun.nio.ch.FileChannelImpl$Unmapper",
	nullptr,
	_FileChannelImpl$SyncUnmapper_FieldInfo_,
	_FileChannelImpl$SyncUnmapper_MethodInfo_,
	nullptr,
	nullptr,
	_FileChannelImpl$SyncUnmapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.FileChannelImpl"
};

$Object* allocate$FileChannelImpl$SyncUnmapper($Class* clazz) {
	return $of($alloc(FileChannelImpl$SyncUnmapper));
}

$volatile(int32_t) FileChannelImpl$SyncUnmapper::count = 0;
$volatile(int64_t) FileChannelImpl$SyncUnmapper::totalSize = 0;
$volatile(int64_t) FileChannelImpl$SyncUnmapper::totalCapacity = 0;

void FileChannelImpl$SyncUnmapper::init$(int64_t address, int64_t size, int64_t cap, $FileDescriptor* fd, int32_t pagePosition) {
	$FileChannelImpl$Unmapper::init$(address, size, cap, fd, pagePosition);
	incrementStats();
}

void FileChannelImpl$SyncUnmapper::incrementStats() {
	$synchronized(FileChannelImpl$SyncUnmapper::class$) {
		++FileChannelImpl$SyncUnmapper::count;
		FileChannelImpl$SyncUnmapper::totalSize += this->size;
		FileChannelImpl$SyncUnmapper::totalCapacity += this->cap;
	}
}

void FileChannelImpl$SyncUnmapper::decrementStats() {
	$synchronized(FileChannelImpl$SyncUnmapper::class$) {
		--FileChannelImpl$SyncUnmapper::count;
		FileChannelImpl$SyncUnmapper::totalSize -= this->size;
		FileChannelImpl$SyncUnmapper::totalCapacity -= this->cap;
	}
}

bool FileChannelImpl$SyncUnmapper::isSync() {
	return true;
}

FileChannelImpl$SyncUnmapper::FileChannelImpl$SyncUnmapper() {
}

$Class* FileChannelImpl$SyncUnmapper::load$($String* name, bool initialize) {
	$loadClass(FileChannelImpl$SyncUnmapper, name, initialize, &_FileChannelImpl$SyncUnmapper_ClassInfo_, allocate$FileChannelImpl$SyncUnmapper);
	return class$;
}

$Class* FileChannelImpl$SyncUnmapper::class$ = nullptr;

		} // ch
	} // nio
} // sun