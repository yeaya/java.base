#include <java/lang/invoke/ConstantCallSite.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _ConstantCallSite_FieldAnnotations_isFrozen[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _ConstantCallSite_FieldInfo_[] = {
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConstantCallSite, UNSAFE)},
	{"isFrozen", "Z", nullptr, $PRIVATE, $field(ConstantCallSite, isFrozen), _ConstantCallSite_FieldAnnotations_isFrozen},
	{}
};

$MethodInfo _ConstantCallSite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $method(ConstantCallSite, init$, void, $MethodHandle*)},
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;)V", nullptr, $PROTECTED, $method(ConstantCallSite, init$, void, $MethodType*, $MethodHandle*), "java.lang.Throwable"},
	{"dynamicInvoker", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConstantCallSite, dynamicInvoker, $MethodHandle*)},
	{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConstantCallSite, getTarget, $MethodHandle*)},
	{"setTarget", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConstantCallSite, setTarget, void, $MethodHandle*)},
	{}
};

$ClassInfo _ConstantCallSite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.invoke.ConstantCallSite",
	"java.lang.invoke.CallSite",
	nullptr,
	_ConstantCallSite_FieldInfo_,
	_ConstantCallSite_MethodInfo_
};

$Object* allocate$ConstantCallSite($Class* clazz) {
	return $of($alloc(ConstantCallSite));
}

$Unsafe* ConstantCallSite::UNSAFE = nullptr;

void ConstantCallSite::init$($MethodHandle* target) {
	$CallSite::init$(target);
	this->isFrozen = true;
	$nc(ConstantCallSite::UNSAFE)->storeStoreFence();
}

void ConstantCallSite::init$($MethodType* targetType, $MethodHandle* createTargetHook) {
	$CallSite::init$(targetType, createTargetHook);
	this->isFrozen = true;
	$nc(ConstantCallSite::UNSAFE)->storeStoreFence();
}

$MethodHandle* ConstantCallSite::getTarget() {
	if (!this->isFrozen) {
		$throwNew($IllegalStateException);
	}
	return this->target;
}

void ConstantCallSite::setTarget($MethodHandle* ignore) {
	$throwNew($UnsupportedOperationException);
}

$MethodHandle* ConstantCallSite::dynamicInvoker() {
	return getTarget();
}

void clinit$ConstantCallSite($Class* class$) {
	$assignStatic(ConstantCallSite::UNSAFE, $Unsafe::getUnsafe());
}

ConstantCallSite::ConstantCallSite() {
}

$Class* ConstantCallSite::load$($String* name, bool initialize) {
	$loadClass(ConstantCallSite, name, initialize, &_ConstantCallSite_ClassInfo_, clinit$ConstantCallSite, allocate$ConstantCallSite);
	return class$;
}

$Class* ConstantCallSite::class$ = nullptr;

		} // invoke
	} // lang
} // java