#include <sun/nio/fs/NativeBuffer$Deallocator.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _NativeBuffer$Deallocator_FieldInfo_[] = {
	{"address", "J", nullptr, $PRIVATE | $FINAL, $field(NativeBuffer$Deallocator, address)},
	{}
};

$MethodInfo _NativeBuffer$Deallocator_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(NativeBuffer$Deallocator, init$, void, int64_t)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NativeBuffer$Deallocator, run, void)},
	{}
};

$InnerClassInfo _NativeBuffer$Deallocator_InnerClassesInfo_[] = {
	{"sun.nio.fs.NativeBuffer$Deallocator", "sun.nio.fs.NativeBuffer", "Deallocator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NativeBuffer$Deallocator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.NativeBuffer$Deallocator",
	"java.lang.Object",
	"java.lang.Runnable",
	_NativeBuffer$Deallocator_FieldInfo_,
	_NativeBuffer$Deallocator_MethodInfo_,
	nullptr,
	nullptr,
	_NativeBuffer$Deallocator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.NativeBuffer"
};

$Object* allocate$NativeBuffer$Deallocator($Class* clazz) {
	return $of($alloc(NativeBuffer$Deallocator));
}

void NativeBuffer$Deallocator::init$(int64_t address) {
	this->address = address;
}

void NativeBuffer$Deallocator::run() {
	$init($NativeBuffer);
	$nc($NativeBuffer::unsafe)->freeMemory(this->address);
}

NativeBuffer$Deallocator::NativeBuffer$Deallocator() {
}

$Class* NativeBuffer$Deallocator::load$($String* name, bool initialize) {
	$loadClass(NativeBuffer$Deallocator, name, initialize, &_NativeBuffer$Deallocator_ClassInfo_, allocate$NativeBuffer$Deallocator);
	return class$;
}

$Class* NativeBuffer$Deallocator::class$ = nullptr;

		} // fs
	} // nio
} // sun