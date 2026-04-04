#include <sun/nio/ch/IOVecWrapper$Deallocator.h>
#include <sun/nio/ch/AllocatedNativeObject.h>
#include <sun/nio/ch/IOVecWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AllocatedNativeObject = ::sun::nio::ch::AllocatedNativeObject;

namespace sun {
	namespace nio {
		namespace ch {

void IOVecWrapper$Deallocator::init$($AllocatedNativeObject* obj) {
	$set(this, obj, obj);
}

void IOVecWrapper$Deallocator::run() {
	$nc(this->obj)->free();
}

IOVecWrapper$Deallocator::IOVecWrapper$Deallocator() {
}

$Class* IOVecWrapper$Deallocator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Lsun/nio/ch/AllocatedNativeObject;", nullptr, $PRIVATE | $FINAL, $field(IOVecWrapper$Deallocator, obj)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/AllocatedNativeObject;)V", nullptr, 0, $method(IOVecWrapper$Deallocator, init$, void, $AllocatedNativeObject*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(IOVecWrapper$Deallocator, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.IOVecWrapper$Deallocator", "sun.nio.ch.IOVecWrapper", "Deallocator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.IOVecWrapper$Deallocator",
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
		"sun.nio.ch.IOVecWrapper"
	};
	$loadClass(IOVecWrapper$Deallocator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IOVecWrapper$Deallocator);
	});
	return class$;
}

$Class* IOVecWrapper$Deallocator::class$ = nullptr;

		} // ch
	} // nio
} // sun