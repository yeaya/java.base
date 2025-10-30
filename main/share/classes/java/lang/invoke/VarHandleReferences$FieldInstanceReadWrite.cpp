#include <java/lang/invoke/VarHandleReferences$FieldInstanceReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleReferences$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleReferences.h>
#include <java/util/Objects.h>
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
using $VarHandleReferences$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_getAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_set9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_setOpaque10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_setRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_setVolatile12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleReferences$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleReferences$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleReferences$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;JLjava/lang/Class;)V", "(Ljava/lang/Class<*>;JLjava/lang/Class<*>;)V", 0, $method(static_cast<void(VarHandleReferences$FieldInstanceReadWrite::*)($Class*,int64_t,$Class*)>(&VarHandleReferences$FieldInstanceReadWrite::init$))},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/Class;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/Class<*>;Z)V", $PRIVATE, $method(static_cast<void(VarHandleReferences$FieldInstanceReadWrite::*)($Class*,int64_t,$Class*,bool)>(&VarHandleReferences$FieldInstanceReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::getAndSet)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_getAndSet6},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire7},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease8},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::set)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_set9},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::setOpaque)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_setOpaque10},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::setRelease)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_setRelease11},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::setVolatile)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_setVolatile12},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet13},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire14},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain15},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,Object$*,Object$*)>(&VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleReferences$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease16},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleReferences$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleReferences$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly",
	nullptr,
	_VarHandleReferences$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleReferences$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleReferences$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleReferences"
};

$Object* allocate$VarHandleReferences$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleReferences$FieldInstanceReadWrite));
}

$VarForm* VarHandleReferences$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleReferences$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, $Class* fieldType) {
	VarHandleReferences$FieldInstanceReadWrite::init$(receiverType, fieldOffset, fieldType, false);
}

void VarHandleReferences$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, $Class* fieldType, bool exact) {
	$VarHandleReferences$FieldInstanceReadOnly::init$(receiverType, fieldOffset, fieldType, VarHandleReferences$FieldInstanceReadWrite::FORM, exact);
}

VarHandleReferences$FieldInstanceReadWrite* VarHandleReferences$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, this->fieldType, true);
}

VarHandleReferences$FieldInstanceReadWrite* VarHandleReferences$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, this->fieldType, false);
}

void VarHandleReferences$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$nc($MethodHandleStatics::UNSAFE)->putReference(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceVolatile(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceOpaque(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceRelease(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetReference(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReference(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value))));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceAcquire(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value))));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceRelease(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value))));
}

bool VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferencePlain(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReference(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceAcquire(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceRelease(var$0, var$1, var$2, $($nc(handle->fieldType)->cast(value)));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReference(var$0, var$1, $($nc(handle->fieldType)->cast(value))));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceAcquire(var$0, var$1, $($nc(handle->fieldType)->cast(value))));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = $nc(handle)->fieldOffset;
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceRelease(var$0, var$1, $($nc(handle->fieldType)->cast(value))));
}

void clinit$VarHandleReferences$FieldInstanceReadWrite($Class* class$) {
	$assignStatic(VarHandleReferences$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleReferences$FieldInstanceReadWrite::class$, $Object::class$, $Object::class$, $$new($ClassArray, 0)));
}

VarHandleReferences$FieldInstanceReadWrite::VarHandleReferences$FieldInstanceReadWrite() {
}

$Class* VarHandleReferences$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleReferences$FieldInstanceReadWrite, name, initialize, &_VarHandleReferences$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleReferences$FieldInstanceReadWrite, allocate$VarHandleReferences$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleReferences$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java