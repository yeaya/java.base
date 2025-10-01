#include <sun/nio/ch/IOVecWrapper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <sun/nio/ch/AllocatedNativeObject.h>
#include <sun/nio/ch/IOVecWrapper$Deallocator.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

#undef SIZE_IOVEC
#undef BASE_OFFSET
#undef LEN_OFFSET

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;
using $AllocatedNativeObject = ::sun::nio::ch::AllocatedNativeObject;
using $IOVecWrapper$Deallocator = ::sun::nio::ch::IOVecWrapper$Deallocator;
using $NativeObject = ::sun::nio::ch::NativeObject;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _IOVecWrapper_FieldInfo_[] = {
	{"BASE_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IOVecWrapper, BASE_OFFSET)},
	{"LEN_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IOVecWrapper, LEN_OFFSET)},
	{"SIZE_IOVEC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IOVecWrapper, SIZE_IOVEC)},
	{"vecArray", "Lsun/nio/ch/AllocatedNativeObject;", nullptr, $PRIVATE | $FINAL, $field(IOVecWrapper, vecArray)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(IOVecWrapper, size)},
	{"buf", "[Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(IOVecWrapper, buf)},
	{"position", "[I", nullptr, $PRIVATE | $FINAL, $field(IOVecWrapper, position)},
	{"remaining", "[I", nullptr, $PRIVATE | $FINAL, $field(IOVecWrapper, remaining)},
	{"shadow", "[Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(IOVecWrapper, shadow)},
	{"address", "J", nullptr, $FINAL, $field(IOVecWrapper, address)},
	{"addressSize", "I", nullptr, $STATIC, $staticField(IOVecWrapper, addressSize)},
	{"cached", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lsun/nio/ch/IOVecWrapper;>;", $PRIVATE | $STATIC | $FINAL, $staticField(IOVecWrapper, cached)},
	{}
};

$MethodInfo _IOVecWrapper_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(IOVecWrapper::*)(int32_t)>(&IOVecWrapper::init$))},
	{"clearRefs", "(I)V", nullptr, 0},
	{"get", "(I)Lsun/nio/ch/IOVecWrapper;", nullptr, $STATIC, $method(static_cast<IOVecWrapper*(*)(int32_t)>(&IOVecWrapper::get))},
	{"getBuffer", "(I)Ljava/nio/ByteBuffer;", nullptr, 0},
	{"getPosition", "(I)I", nullptr, 0},
	{"getRemaining", "(I)I", nullptr, 0},
	{"getShadow", "(I)Ljava/nio/ByteBuffer;", nullptr, 0},
	{"putBase", "(IJ)V", nullptr, 0},
	{"putLen", "(IJ)V", nullptr, 0},
	{"setBuffer", "(ILjava/nio/ByteBuffer;II)V", nullptr, 0},
	{"setShadow", "(ILjava/nio/ByteBuffer;)V", nullptr, 0},
	{}
};

$InnerClassInfo _IOVecWrapper_InnerClassesInfo_[] = {
	{"sun.nio.ch.IOVecWrapper$Deallocator", "sun.nio.ch.IOVecWrapper", "Deallocator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IOVecWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.IOVecWrapper",
	"java.lang.Object",
	nullptr,
	_IOVecWrapper_FieldInfo_,
	_IOVecWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_IOVecWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.IOVecWrapper$Deallocator"
};

$Object* allocate$IOVecWrapper($Class* clazz) {
	return $of($alloc(IOVecWrapper));
}

int32_t IOVecWrapper::LEN_OFFSET = 0;
int32_t IOVecWrapper::SIZE_IOVEC = 0;
int32_t IOVecWrapper::addressSize = 0;
$ThreadLocal* IOVecWrapper::cached = nullptr;

void IOVecWrapper::init$(int32_t size) {
	this->size = size;
	$set(this, buf, $new($ByteBufferArray, size));
	$set(this, position, $new($ints, size));
	$set(this, remaining, $new($ints, size));
	$set(this, shadow, $new($ByteBufferArray, size));
	$set(this, vecArray, $new($AllocatedNativeObject, size * IOVecWrapper::SIZE_IOVEC, false));
	this->address = $nc(this->vecArray)->address();
}

IOVecWrapper* IOVecWrapper::get(int32_t size) {
	$init(IOVecWrapper);
	$var(IOVecWrapper, wrapper, $cast(IOVecWrapper, $nc(IOVecWrapper::cached)->get()));
	if (wrapper != nullptr && wrapper->size < size) {
		$nc(wrapper->vecArray)->free();
		$assign(wrapper, nullptr);
	}
	if (wrapper == nullptr) {
		$assign(wrapper, $new(IOVecWrapper, size));
		$nc($($CleanerFactory::cleaner()))->register$(wrapper, $$new($IOVecWrapper$Deallocator, wrapper->vecArray));
		$nc(IOVecWrapper::cached)->set(wrapper);
	}
	return wrapper;
}

void IOVecWrapper::setBuffer(int32_t i, $ByteBuffer* buf, int32_t pos, int32_t rem) {
	$nc(this->buf)->set(i, buf);
	$nc(this->position)->set(i, pos);
	$nc(this->remaining)->set(i, rem);
}

void IOVecWrapper::setShadow(int32_t i, $ByteBuffer* buf) {
	$nc(this->shadow)->set(i, buf);
}

$ByteBuffer* IOVecWrapper::getBuffer(int32_t i) {
	return $nc(this->buf)->get(i);
}

int32_t IOVecWrapper::getPosition(int32_t i) {
	return $nc(this->position)->get(i);
}

int32_t IOVecWrapper::getRemaining(int32_t i) {
	return $nc(this->remaining)->get(i);
}

$ByteBuffer* IOVecWrapper::getShadow(int32_t i) {
	return $nc(this->shadow)->get(i);
}

void IOVecWrapper::clearRefs(int32_t i) {
	$nc(this->buf)->set(i, nullptr);
	$nc(this->shadow)->set(i, nullptr);
}

void IOVecWrapper::putBase(int32_t i, int64_t base) {
	int32_t offset = IOVecWrapper::SIZE_IOVEC * i + IOVecWrapper::BASE_OFFSET;
	if (IOVecWrapper::addressSize == 4) {
		$nc(this->vecArray)->putInt(offset, (int32_t)base);
	} else {
		$nc(this->vecArray)->putLong(offset, base);
	}
}

void IOVecWrapper::putLen(int32_t i, int64_t len) {
	int32_t offset = IOVecWrapper::SIZE_IOVEC * i + IOVecWrapper::LEN_OFFSET;
	if (IOVecWrapper::addressSize == 4) {
		$nc(this->vecArray)->putInt(offset, (int32_t)len);
	} else {
		$nc(this->vecArray)->putLong(offset, len);
	}
}

void clinit$IOVecWrapper($Class* class$) {
	$assignStatic(IOVecWrapper::cached, $new($ThreadLocal));
	{
		IOVecWrapper::addressSize = $nc($($Util::unsafe()))->addressSize();
		IOVecWrapper::LEN_OFFSET = IOVecWrapper::addressSize;
		IOVecWrapper::SIZE_IOVEC = (int16_t)(IOVecWrapper::addressSize * 2);
	}
}

IOVecWrapper::IOVecWrapper() {
}

$Class* IOVecWrapper::load$($String* name, bool initialize) {
	$loadClass(IOVecWrapper, name, initialize, &_IOVecWrapper_ClassInfo_, clinit$IOVecWrapper, allocate$IOVecWrapper);
	return class$;
}

$Class* IOVecWrapper::class$ = nullptr;

		} // ch
	} // nio
} // sun