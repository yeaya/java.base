#include <sun/nio/ch/AllocatedNativeObject.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/ch/NativeObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $NativeObject = ::sun::nio::ch::NativeObject;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _AllocatedNativeObject_MethodInfo_[] = {
	{"<init>", "(IZ)V", nullptr, 0, $method(static_cast<void(AllocatedNativeObject::*)(int32_t,bool)>(&AllocatedNativeObject::init$))},
	{"free", "()V", nullptr, $SYNCHRONIZED},
	{}
};

$ClassInfo _AllocatedNativeObject_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.AllocatedNativeObject",
	"sun.nio.ch.NativeObject",
	nullptr,
	nullptr,
	_AllocatedNativeObject_MethodInfo_
};

$Object* allocate$AllocatedNativeObject($Class* clazz) {
	return $of($alloc(AllocatedNativeObject));
}

void AllocatedNativeObject::init$(int32_t size, bool pageAligned) {
	$NativeObject::init$(size, pageAligned);
}

void AllocatedNativeObject::free() {
	$synchronized(this) {
		if (this->allocationAddress$ != 0) {
			$init($NativeObject);
			$nc($NativeObject::unsafe)->freeMemory(this->allocationAddress$);
			this->allocationAddress$ = 0;
		}
	}
}

AllocatedNativeObject::AllocatedNativeObject() {
}

$Class* AllocatedNativeObject::load$($String* name, bool initialize) {
	$loadClass(AllocatedNativeObject, name, initialize, &_AllocatedNativeObject_ClassInfo_, allocate$AllocatedNativeObject);
	return class$;
}

$Class* AllocatedNativeObject::class$ = nullptr;

		} // ch
	} // nio
} // sun