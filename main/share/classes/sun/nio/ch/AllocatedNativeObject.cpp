#include <sun/nio/ch/AllocatedNativeObject.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/ch/NativeObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NativeObject = ::sun::nio::ch::NativeObject;

namespace sun {
	namespace nio {
		namespace ch {

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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IZ)V", nullptr, 0, $method(AllocatedNativeObject, init$, void, int32_t, bool)},
		{"free", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(AllocatedNativeObject, free, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.AllocatedNativeObject",
		"sun.nio.ch.NativeObject",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AllocatedNativeObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AllocatedNativeObject);
	});
	return class$;
}

$Class* AllocatedNativeObject::class$ = nullptr;

		} // ch
	} // nio
} // sun