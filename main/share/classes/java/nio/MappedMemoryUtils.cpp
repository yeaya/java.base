#include <java/nio/MappedMemoryUtils.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Bits.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bits = ::java::nio::Bits;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _MappedMemoryUtils_FieldInfo_[] = {
	{"unused", "B", nullptr, $PRIVATE | $STATIC, $staticField(MappedMemoryUtils, unused)},
	{}
};

$MethodInfo _MappedMemoryUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MappedMemoryUtils::*)()>(&MappedMemoryUtils::init$))},
	{"alignDown", "(JI)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&MappedMemoryUtils::alignDown))},
	{"force", "(Ljava/io/FileDescriptor;JZJJ)V", nullptr, $STATIC, $method(static_cast<void(*)($FileDescriptor*,int64_t,bool,int64_t,int64_t)>(&MappedMemoryUtils::force))},
	{"force0", "(Ljava/io/FileDescriptor;JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($FileDescriptor*,int64_t,int64_t)>(&MappedMemoryUtils::force0)), "java.io.IOException"},
	{"isLoaded", "(JZJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t,bool,int64_t)>(&MappedMemoryUtils::isLoaded))},
	{"isLoaded0", "(JJJ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t,int64_t)>(&MappedMemoryUtils::isLoaded0))},
	{"load", "(JZJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,bool,int64_t)>(&MappedMemoryUtils::load))},
	{"load0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&MappedMemoryUtils::load0))},
	{"mappingAddress", "(JJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&MappedMemoryUtils::mappingAddress))},
	{"mappingAddress", "(JJJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&MappedMemoryUtils::mappingAddress))},
	{"mappingLength", "(JJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&MappedMemoryUtils::mappingLength))},
	{"mappingOffset", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&MappedMemoryUtils::mappingOffset))},
	{"mappingOffset", "(JJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&MappedMemoryUtils::mappingOffset))},
	{"unload", "(JZJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,bool,int64_t)>(&MappedMemoryUtils::unload))},
	{"unload0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&MappedMemoryUtils::unload0))},
	{}
};

#define _METHOD_INDEX_force0 3
#define _METHOD_INDEX_isLoaded0 5
#define _METHOD_INDEX_load0 7
#define _METHOD_INDEX_unload0 14

$ClassInfo _MappedMemoryUtils_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.MappedMemoryUtils",
	"java.lang.Object",
	nullptr,
	_MappedMemoryUtils_FieldInfo_,
	_MappedMemoryUtils_MethodInfo_
};

$Object* allocate$MappedMemoryUtils($Class* clazz) {
	return $of($alloc(MappedMemoryUtils));
}

int8_t MappedMemoryUtils::unused = 0;

void MappedMemoryUtils::init$() {
}

bool MappedMemoryUtils::isLoaded(int64_t address, bool isSync, int64_t size) {
	if (isSync) {
		return true;
	}
	if ((address == 0) || (size == 0)) {
		return true;
	}
	int64_t offset = mappingOffset(address);
	int64_t length = mappingLength(offset, size);
	int64_t var$0 = mappingAddress(address, offset);
	int64_t var$1 = length;
	return isLoaded0(var$0, var$1, $Bits::pageCount(length));
}

void MappedMemoryUtils::load(int64_t address, bool isSync, int64_t size) {
	if (isSync) {
		return;
	}
	if ((address == 0) || (size == 0)) {
		return;
	}
	int64_t offset = mappingOffset(address);
	int64_t length = mappingLength(offset, size);
	load0(mappingAddress(address, offset), length);
	$var($Unsafe, unsafe, $Unsafe::getUnsafe());
	int32_t ps = $Bits::pageSize();
	int64_t count = $Bits::pageCount(length);
	int64_t a = mappingAddress(address, offset);
	int8_t x = (int8_t)0;
	for (int64_t i = 0; i < count; ++i) {
		x ^= $nc(unsafe)->getByte(a);
		a += ps;
	}
	$init(MappedMemoryUtils);
	if (MappedMemoryUtils::unused != 0) {
		MappedMemoryUtils::unused = x;
	}
}

void MappedMemoryUtils::unload(int64_t address, bool isSync, int64_t size) {
	if (isSync) {
		return;
	}
	if ((address == 0) || (size == 0)) {
		return;
	}
	int64_t offset = mappingOffset(address);
	int64_t length = mappingLength(offset, size);
	unload0(mappingAddress(address, offset), length);
}

void MappedMemoryUtils::force($FileDescriptor* fd, int64_t address, bool isSync, int64_t index, int64_t length) {
	$useLocalCurrentObjectStackCache();
	if (isSync) {
		$nc($($Unsafe::getUnsafe()))->writebackMemory(address + index, length);
	} else {
		int64_t offset = mappingOffset(address, index);
		try {
			$var($FileDescriptor, var$0, fd);
			int64_t var$1 = mappingAddress(address, offset, index);
			force0(var$0, var$1, mappingLength(offset, length));
		} catch ($IOException&) {
			$var($IOException, cause, $catch());
			$throwNew($UncheckedIOException, cause);
		}
	}
}

bool MappedMemoryUtils::isLoaded0(int64_t address, int64_t length, int64_t pageCount) {
	$init(MappedMemoryUtils);
	bool $ret = false;
	$prepareNativeStatic(MappedMemoryUtils, isLoaded0, bool, int64_t address, int64_t length, int64_t pageCount);
	$ret = $invokeNativeStatic(MappedMemoryUtils, isLoaded0, address, length, pageCount);
	$finishNativeStatic();
	return $ret;
}

void MappedMemoryUtils::load0(int64_t address, int64_t length) {
	$init(MappedMemoryUtils);
	$prepareNativeStatic(MappedMemoryUtils, load0, void, int64_t address, int64_t length);
	$invokeNativeStatic(MappedMemoryUtils, load0, address, length);
	$finishNativeStatic();
}

void MappedMemoryUtils::unload0(int64_t address, int64_t length) {
	$init(MappedMemoryUtils);
	$prepareNativeStatic(MappedMemoryUtils, unload0, void, int64_t address, int64_t length);
	$invokeNativeStatic(MappedMemoryUtils, unload0, address, length);
	$finishNativeStatic();
}

void MappedMemoryUtils::force0($FileDescriptor* fd, int64_t address, int64_t length) {
	$init(MappedMemoryUtils);
	$prepareNativeStatic(MappedMemoryUtils, force0, void, $FileDescriptor* fd, int64_t address, int64_t length);
	$invokeNativeStatic(MappedMemoryUtils, force0, fd, address, length);
	$finishNativeStatic();
}

int64_t MappedMemoryUtils::mappingOffset(int64_t address) {
	return mappingOffset(address, 0);
}

int64_t MappedMemoryUtils::mappingOffset(int64_t address, int64_t index) {
	int32_t ps = $Bits::pageSize();
	int64_t indexAddress = address + index;
	int64_t baseAddress = alignDown(indexAddress, ps);
	return indexAddress - baseAddress;
}

int64_t MappedMemoryUtils::mappingAddress(int64_t address, int64_t mappingOffset) {
	return mappingAddress(address, mappingOffset, 0);
}

int64_t MappedMemoryUtils::mappingAddress(int64_t address, int64_t mappingOffset, int64_t index) {
	int64_t indexAddress = address + index;
	return indexAddress - mappingOffset;
}

int64_t MappedMemoryUtils::mappingLength(int64_t mappingOffset, int64_t length) {
	return length + mappingOffset;
}

int64_t MappedMemoryUtils::alignDown(int64_t address, int32_t pageSize) {
	return (int64_t)(address & (uint64_t)(int64_t)~(pageSize - 1));
}

MappedMemoryUtils::MappedMemoryUtils() {
}

$Class* MappedMemoryUtils::load$($String* name, bool initialize) {
	$loadClass(MappedMemoryUtils, name, initialize, &_MappedMemoryUtils_ClassInfo_, allocate$MappedMemoryUtils);
	return class$;
}

$Class* MappedMemoryUtils::class$ = nullptr;

	} // nio
} // java