#include <sun/nio/fs/NativeBuffer.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <sun/nio/fs/NativeBuffer$Deallocator.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;
using $NativeBuffer$Deallocator = ::sun::nio::fs::NativeBuffer$Deallocator;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;

namespace sun {
	namespace nio {
		namespace fs {

$Unsafe* NativeBuffer::unsafe = nullptr;

void NativeBuffer::init$(int32_t size) {
	$useLocalObjectStack();
	this->address$ = $nc(NativeBuffer::unsafe)->allocateMemory(size);
	this->size$ = size;
	$set(this, cleanable, $$nc($CleanerFactory::cleaner())->register$(this, $$new($NativeBuffer$Deallocator, this->address$)));
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
	return this->owner$;
}

void NativeBuffer::clinit$($Class* clazz) {
	$assignStatic(NativeBuffer::unsafe, $Unsafe::getUnsafe());
}

NativeBuffer::NativeBuffer() {
}

$Class* NativeBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeBuffer, unsafe)},
		{"address", "J", nullptr, $PRIVATE | $FINAL, $field(NativeBuffer, address$)},
		{"size", "I", nullptr, $PRIVATE | $FINAL, $field(NativeBuffer, size$)},
		{"cleanable", "Ljava/lang/ref/Cleaner$Cleanable;", nullptr, $PRIVATE | $FINAL, $field(NativeBuffer, cleanable)},
		{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(NativeBuffer, owner$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(NativeBuffer, init$, void, int32_t)},
		{"address", "()J", nullptr, 0, $virtualMethod(NativeBuffer, address, int64_t)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(NativeBuffer, close, void)},
		{"free", "()V", nullptr, 0, $virtualMethod(NativeBuffer, free, void)},
		{"owner", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(NativeBuffer, owner, $Object*)},
		{"release", "()V", nullptr, 0, $virtualMethod(NativeBuffer, release, void)},
		{"setOwner", "(Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(NativeBuffer, setOwner, void, Object$*)},
		{"size", "()I", nullptr, 0, $virtualMethod(NativeBuffer, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.NativeBuffer$Deallocator", "sun.nio.fs.NativeBuffer", "Deallocator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.NativeBuffer",
		"java.lang.Object",
		"java.lang.AutoCloseable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.fs.NativeBuffer$Deallocator"
	};
	$loadClass(NativeBuffer, name, initialize, &classInfo$$, NativeBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativeBuffer);
	});
	return class$;
}

$Class* NativeBuffer::class$ = nullptr;

		} // fs
	} // nio
} // sun