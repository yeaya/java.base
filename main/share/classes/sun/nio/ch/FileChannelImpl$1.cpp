#include <sun/nio/ch/FileChannelImpl$1.h>

#include <sun/nio/ch/FileChannelImpl$DefaultUnmapper.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VM$BufferPool = ::jdk::internal::misc::VM$BufferPool;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;
using $FileChannelImpl$DefaultUnmapper = ::sun::nio::ch::FileChannelImpl$DefaultUnmapper;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _FileChannelImpl$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileChannelImpl$1::*)()>(&FileChannelImpl$1::init$))},
	{"getCount", "()J", nullptr, $PUBLIC},
	{"getMemoryUsed", "()J", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTotalCapacity", "()J", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileChannelImpl$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.FileChannelImpl",
	"getMappedBufferPool",
	"()Ljdk/internal/misc/VM$BufferPool;"
};

$InnerClassInfo _FileChannelImpl$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.FileChannelImpl$1", nullptr, nullptr, 0},
	{"jdk.internal.misc.VM$BufferPool", "jdk.internal.misc.VM", "BufferPool", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FileChannelImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.FileChannelImpl$1",
	"java.lang.Object",
	"jdk.internal.misc.VM$BufferPool",
	nullptr,
	_FileChannelImpl$1_MethodInfo_,
	nullptr,
	&_FileChannelImpl$1_EnclosingMethodInfo_,
	_FileChannelImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.FileChannelImpl"
};

$Object* allocate$FileChannelImpl$1($Class* clazz) {
	return $of($alloc(FileChannelImpl$1));
}

void FileChannelImpl$1::init$() {
}

$String* FileChannelImpl$1::getName() {
	return "mapped"_s;
}

int64_t FileChannelImpl$1::getCount() {
	$init($FileChannelImpl$DefaultUnmapper);
	return $FileChannelImpl$DefaultUnmapper::count;
}

int64_t FileChannelImpl$1::getTotalCapacity() {
	$init($FileChannelImpl$DefaultUnmapper);
	return $FileChannelImpl$DefaultUnmapper::totalCapacity;
}

int64_t FileChannelImpl$1::getMemoryUsed() {
	$init($FileChannelImpl$DefaultUnmapper);
	return $FileChannelImpl$DefaultUnmapper::totalSize;
}

FileChannelImpl$1::FileChannelImpl$1() {
}

$Class* FileChannelImpl$1::load$($String* name, bool initialize) {
	$loadClass(FileChannelImpl$1, name, initialize, &_FileChannelImpl$1_ClassInfo_, allocate$FileChannelImpl$1);
	return class$;
}

$Class* FileChannelImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun