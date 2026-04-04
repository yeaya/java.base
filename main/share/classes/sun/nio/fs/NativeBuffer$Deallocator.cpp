#include <sun/nio/fs/NativeBuffer$Deallocator.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;

namespace sun {
	namespace nio {
		namespace fs {

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
	$FieldInfo fieldInfos$$[] = {
		{"address", "J", nullptr, $PRIVATE | $FINAL, $field(NativeBuffer$Deallocator, address)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, 0, $method(NativeBuffer$Deallocator, init$, void, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NativeBuffer$Deallocator, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.NativeBuffer$Deallocator", "sun.nio.fs.NativeBuffer", "Deallocator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.NativeBuffer$Deallocator",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.NativeBuffer"
	};
	$loadClass(NativeBuffer$Deallocator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeBuffer$Deallocator);
	});
	return class$;
}

$Class* NativeBuffer$Deallocator::class$ = nullptr;

		} // fs
	} // nio
} // sun