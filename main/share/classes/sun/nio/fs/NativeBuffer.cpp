#include <sun/nio/fs/NativeBuffer.h>

#include <java/lang/Runnable.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <sun/nio/fs/NativeBuffer$Deallocator.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <jcpp.h>

using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;
using $NativeBuffer$Deallocator = ::sun::nio::fs::NativeBuffer$Deallocator;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _NativeBuffer_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeBuffer, unsafe)},
	{"address", "J", nullptr, $PRIVATE | $FINAL, $field(NativeBuffer, address$)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(NativeBuffer, size$)},
	{"cleanable", "Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PRIVATE | $FINAL, $field(NativeBuffer, cleanable)},
	{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(NativeBuffer, owner$)},
	{}
};

$MethodInfo _NativeBuffer_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(NativeBuffer::*)(int32_t)>(&NativeBuffer::init$))},
	{"address", "()J", nullptr, 0},
	{"close", "()V", nullptr, $PUBLIC},
	{"free", "()V", nullptr, 0},
	{"owner", "()Ljava/lang/Object;", nullptr, 0},
	{"release", "()V", nullptr, 0},
	{"setOwner", "(Ljava/lang/Object;)V", nullptr, 0},
	{"size", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _NativeBuffer_InnerClassesInfo_[] = {
	{"sun.nio.fs.NativeBuffer$Deallocator", "sun.nio.fs.NativeBuffer", "Deallocator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NativeBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.NativeBuffer",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_NativeBuffer_FieldInfo_,
	_NativeBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_NativeBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.NativeBuffer$Deallocator"
};

$Object* allocate$NativeBuffer($Class* clazz) {
	return $of($alloc(NativeBuffer));
}

$Unsafe* NativeBuffer::unsafe = nullptr;

void NativeBuffer::init$(int32_t size) {
	$useLocalCurrentObjectStackCache();
	this->address$ = $nc(NativeBuffer::unsafe)->allocateMemory(size);
	this->size$ = size;
	$set(this, cleanable, $nc($($CleanerFactory::cleaner()))->register$(this, $$new($NativeBuffer$Deallocator, this->address$)));
}

void NativeBuffer::close() {
	release();
}

void NativeBuffer::release() {
	$NativeBuffers::releaseNativeBuffer(this);
}

int64_t NativeBuffer::address() {
	return this->address$;
}

int32_t NativeBuffer::size() {
	return this->size$;
}

void NativeBuffer::free() {
	$nc(this->cleanable)->clean();
}

void NativeBuffer::setOwner(Object$* owner) {
	$set(this, owner$, owner);
}

$Object* NativeBuffer::owner() {
	return $of(this->owner$);
}

void clinit$NativeBuffer($Class* class$) {
	$assignStatic(NativeBuffer::unsafe, $Unsafe::getUnsafe());
}

NativeBuffer::NativeBuffer() {
}

$Class* NativeBuffer::load$($String* name, bool initialize) {
	$loadClass(NativeBuffer, name, initialize, &_NativeBuffer_ClassInfo_, clinit$NativeBuffer, allocate$NativeBuffer);
	return class$;
}

$Class* NativeBuffer::class$ = nullptr;

		} // fs
	} // nio
} // sun