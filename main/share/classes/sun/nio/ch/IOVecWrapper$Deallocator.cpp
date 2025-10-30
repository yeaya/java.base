#include <sun/nio/ch/IOVecWrapper$Deallocator.h>

#include <sun/nio/ch/AllocatedNativeObject.h>
#include <sun/nio/ch/IOVecWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AllocatedNativeObject = ::sun::nio::ch::AllocatedNativeObject;
using $IOVecWrapper = ::sun::nio::ch::IOVecWrapper;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _IOVecWrapper$Deallocator_FieldInfo_[] = {
	{"obj", "Lsun/nio/ch/AllocatedNativeObject;", nullptr, $PRIVATE | $FINAL, $field(IOVecWrapper$Deallocator, obj)},
	{}
};

$MethodInfo _IOVecWrapper$Deallocator_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/AllocatedNativeObject;)V", nullptr, 0, $method(static_cast<void(IOVecWrapper$Deallocator::*)($AllocatedNativeObject*)>(&IOVecWrapper$Deallocator::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IOVecWrapper$Deallocator_InnerClassesInfo_[] = {
	{"sun.nio.ch.IOVecWrapper$Deallocator", "sun.nio.ch.IOVecWrapper", "Deallocator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IOVecWrapper$Deallocator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.IOVecWrapper$Deallocator",
	"java.lang.Object",
	"java.lang.Runnable",
	_IOVecWrapper$Deallocator_FieldInfo_,
	_IOVecWrapper$Deallocator_MethodInfo_,
	nullptr,
	nullptr,
	_IOVecWrapper$Deallocator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.IOVecWrapper"
};

$Object* allocate$IOVecWrapper$Deallocator($Class* clazz) {
	return $of($alloc(IOVecWrapper$Deallocator));
}

void IOVecWrapper$Deallocator::init$($AllocatedNativeObject* obj) {
	$set(this, obj, obj);
}

void IOVecWrapper$Deallocator::run() {
	$nc(this->obj)->free();
}

IOVecWrapper$Deallocator::IOVecWrapper$Deallocator() {
}

$Class* IOVecWrapper$Deallocator::load$($String* name, bool initialize) {
	$loadClass(IOVecWrapper$Deallocator, name, initialize, &_IOVecWrapper$Deallocator_ClassInfo_, allocate$IOVecWrapper$Deallocator);
	return class$;
}

$Class* IOVecWrapper$Deallocator::class$ = nullptr;

		} // ch
	} // nio
} // sun