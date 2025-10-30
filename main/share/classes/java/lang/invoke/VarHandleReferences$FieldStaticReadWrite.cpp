#include <java/lang/invoke/VarHandleReferences$FieldStaticReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleReferences$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleReferences.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleReferences = ::java::lang::invoke::VarHandleReferences;
using $VarHandleReferences$FieldStaticReadOnly = ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_getAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_set9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_setOpaque10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_setRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_setVolatile12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleReferences$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleReferences$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleReferences$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;JLjava/lang/Class;)V", "(Ljava/lang/Object;JLjava/lang/Class<*>;)V", 0, $method(static_cast<void(VarHandleReferences$FieldStaticReadWrite::*)(Object$*,int64_t,$Class*)>(&VarHandleReferences$FieldStaticReadWrite::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/Class;Z)V", "(Ljava/lang/Object;JLjava/lang/Class<*>;Z)V", $PRIVATE, $method(static_cast<void(VarHandleReferences$FieldStaticReadWrite::*)(Object$*,int64_t,$Class*,bool)>(&VarHandleReferences$FieldStaticReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::getAndSet)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_getAndSet6},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire7},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease8},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::set)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_set9},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::setOpaque)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_setOpaque10},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::setRelease)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_setRelease11},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::setVolatile)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_setVolatile12},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet13},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire14},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain15},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease16},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleReferences$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleReferences$FieldStaticReadWrite", "java.lang.invoke.VarHandleReferences", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleReferences$FieldStaticReadOnly", "java.lang.invoke.VarHandleReferences", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleReferences$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleReferences$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleReferences$FieldStaticReadOnly",
	nullptr,
	_VarHandleReferences$FieldStaticReadWrite_FieldInfo_,
	_VarHandleReferences$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleReferences$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleReferences"
};

$Object* allocate$VarHandleReferences$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleReferences$FieldStaticReadWrite));
}

$VarForm* VarHandleReferences$FieldStaticReadWrite::FORM = nullptr;

void VarHandleReferences$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, $Class* fieldType) {
	VarHandleReferences$FieldStaticReadWrite::init$(base, fieldOffset, fieldType, false);
}

void VarHandleReferences$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, $Class* fieldType, bool exact) {
	$VarHandleReferences$FieldStaticReadOnly::init$(base, fieldOffset, fieldType, VarHandleReferences$FieldStaticReadWrite::FORM, exact);
}

VarHandleReferences$FieldStaticReadWrite* VarHandleReferences$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldStaticReadWrite, this->base, this->fieldOffset, this->fieldType, true);
}

VarHandleReferences$FieldStaticReadWrite* VarHandleReferences$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldStaticReadWrite, this->base, this->fieldOffset, this->fieldType, false);
}

void VarHandleReferences$FieldStaticReadWrite::set($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReference($nc(handle)->base, handle->fieldOffset, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldStaticReadWrite::setVolatile($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReferenceVolatile($nc(handle)->base, handle->fieldOffset, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldStaticReadWrite::setOpaque($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReferenceOpaque($nc(handle)->base, handle->fieldOffset, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldStaticReadWrite::setRelease($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReferenceRelease($nc(handle)->base, handle->fieldOffset, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::compareAndSet($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetReference(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

$Object* VarHandleReferences$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReference(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value))));
}

$Object* VarHandleReferences$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceAcquire(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value))));
}

$Object* VarHandleReferences$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceRelease(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value))));
}

bool VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferencePlain(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReference(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceAcquire(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceRelease(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

$Object* VarHandleReferences$FieldStaticReadWrite::getAndSet($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReference($nc(handle)->base, handle->fieldOffset, $($nc(handle->fieldType)->cast(value))));
}

$Object* VarHandleReferences$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceAcquire($nc(handle)->base, handle->fieldOffset, $($nc(handle->fieldType)->cast(value))));
}

$Object* VarHandleReferences$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceRelease($nc(handle)->base, handle->fieldOffset, $($nc(handle->fieldType)->cast(value))));
}

void clinit$VarHandleReferences$FieldStaticReadWrite($Class* class$) {
	$assignStatic(VarHandleReferences$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleReferences$FieldStaticReadWrite::class$, nullptr, $Object::class$, $$new($ClassArray, 0)));
}

VarHandleReferences$FieldStaticReadWrite::VarHandleReferences$FieldStaticReadWrite() {
}

$Class* VarHandleReferences$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleReferences$FieldStaticReadWrite, name, initialize, &_VarHandleReferences$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleReferences$FieldStaticReadWrite, allocate$VarHandleReferences$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleReferences$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java