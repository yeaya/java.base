#include <sun/nio/ch/FileChannelImpl$DefaultUnmapper.h>

#include <java/io/FileDescriptor.h>
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

$FieldInfo _FileChannelImpl$DefaultUnmapper_FieldInfo_[] = {
	{"count", "I", nullptr, $STATIC | $VOLATILE, $staticField(FileChannelImpl$DefaultUnmapper, count)},
	{"totalSize", "J", nullptr, $STATIC | $VOLATILE, $staticField(FileChannelImpl$DefaultUnmapper, totalSize)},
	{"totalCapacity", "J", nullptr, $STATIC | $VOLATILE, $staticField(FileChannelImpl$DefaultUnmapper, totalCapacity)},
	{}
};

$MethodInfo _FileChannelImpl$DefaultUnmapper_MethodInfo_[] = {
	{"<init>", "(JJJLjava/io/FileDescriptor;I)V", nullptr, $PUBLIC, $method(static_cast<void(FileChannelImpl$DefaultUnmapper::*)(int64_t,int64_t,int64_t,$FileDescriptor*,int32_t)>(&FileChannelImpl$DefaultUnmapper::init$))},
	{"decrementStats", "()V", nullptr, $PROTECTED},
	{"incrementStats", "()V", nullptr, $PROTECTED},
	{"isSync", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FileChannelImpl$DefaultUnmapper_InnerClassesInfo_[] = {
	{"sun.nio.ch.FileChannelImpl$DefaultUnmapper", "sun.nio.ch.FileChannelImpl", "DefaultUnmapper", $PRIVATE | $STATIC},
	{"sun.nio.ch.FileChannelImpl$Unmapper", "sun.nio.ch.FileChannelImpl", "Unmapper", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FileChannelImpl$DefaultUnmapper_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.FileChannelImpl$DefaultUnmapper",
	"sun.nio.ch.FileChannelImpl$Unmapper",
	nullptr,
	_FileChannelImpl$DefaultUnmapper_FieldInfo_,
	_FileChannelImpl$DefaultUnmapper_MethodInfo_,
	nullptr,
	nullptr,
	_FileChannelImpl$DefaultUnmapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.FileChannelImpl"
};

$Object* allocate$FileChannelImpl$DefaultUnmapper($Class* clazz) {
	return $of($alloc(FileChannelImpl$DefaultUnmapper));
}

$volatile(int32_t) FileChannelImpl$DefaultUnmapper::count = 0;
$volatile(int64_t) FileChannelImpl$DefaultUnmapper::totalSize = 0;
$volatile(int64_t) FileChannelImpl$DefaultUnmapper::totalCapacity = 0;

void FileChannelImpl$DefaultUnmapper::init$(int64_t address, int64_t size, int64_t cap, $FileDescriptor* fd, int32_t pagePosition) {
	$FileChannelImpl$Unmapper::init$(address, size, cap, fd, pagePosition);
	incrementStats();
}

void FileChannelImpl$DefaultUnmapper::incrementStats() {
	$synchronized(FileChannelImpl$DefaultUnmapper::class$) {
		++FileChannelImpl$DefaultUnmapper::count;
		FileChannelImpl$DefaultUnmapper::totalSize += this->size;
		FileChannelImpl$DefaultUnmapper::totalCapacity += this->cap;
	}
}

void FileChannelImpl$DefaultUnmapper::decrementStats() {
	$synchronized(FileChannelImpl$DefaultUnmapper::class$) {
		--FileChannelImpl$DefaultUnmapper::count;
		FileChannelImpl$DefaultUnmapper::totalSize -= this->size;
		FileChannelImpl$DefaultUnmapper::totalCapacity -= this->cap;
	}
}

bool FileChannelImpl$DefaultUnmapper::isSync() {
	return false;
}

FileChannelImpl$DefaultUnmapper::FileChannelImpl$DefaultUnmapper() {
}

$Class* FileChannelImpl$DefaultUnmapper::load$($String* name, bool initialize) {
	$loadClass(FileChannelImpl$DefaultUnmapper, name, initialize, &_FileChannelImpl$DefaultUnmapper_ClassInfo_, allocate$FileChannelImpl$DefaultUnmapper);
	return class$;
}

$Class* FileChannelImpl$DefaultUnmapper::class$ = nullptr;

		} // ch
	} // nio
} // sun