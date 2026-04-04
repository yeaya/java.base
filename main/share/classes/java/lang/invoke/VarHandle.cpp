#include <java/lang/invoke/VarHandle.h>
#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$1.h>
#include <java/lang/invoke/VarHandle$AccessDescriptor.h>
#include <java/lang/invoke/VarHandle$AccessMode.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$TypesAndInvokers.h>
#include <java/lang/invoke/VarHandleGuards.h>
#include <java/lang/invoke/WrongMethodTypeException.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#include "_java_lang_invoke_VarHandle.h"

#undef AIOOBE_SUPPLIER
#undef GET
#undef SET
#undef UNSAFE
#undef VFORM_OFFSET

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle$1 = ::java::lang::invoke::VarHandle$1;
using $VarHandle$AccessDescriptor = ::java::lang::invoke::VarHandle$AccessDescriptor;
using $VarHandle$AccessMode = ::java::lang::invoke::VarHandle$AccessMode;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$TypesAndInvokers = ::java::lang::invoke::VarHandle$TypesAndInvokers;
using $VarHandleGuards = ::java::lang::invoke::VarHandleGuards;
using $WrongMethodTypeException = ::java::lang::invoke::WrongMethodTypeException;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

bool VarHandle::$assertionsDisabled = false;
$BiFunction* VarHandle::AIOOBE_SUPPLIER = nullptr;
int64_t VarHandle::VFORM_OFFSET = 0;

void VarHandle::init$($VarForm* vform) {
	VarHandle::init$(vform, false);
}

void VarHandle::init$($VarForm* vform, bool exact) {
	$set(this, vform, vform);
	this->exact = exact;
}

$RuntimeException* VarHandle::unsupported() {
	return $new($UnsupportedOperationException);
}

bool VarHandle::isDirect() {
	return true;
}

VarHandle* VarHandle::asDirect() {
	return this;
}

VarHandle* VarHandle::target() {
	return nullptr;
}

bool VarHandle::hasInvokeExactBehavior() {
	return this->exact;
}

$Object* VarHandle::get($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_get(this, args);
}

void VarHandle::set($ObjectArray* args){
	_Java_java_lang_invoke_VarHandle_set(this, args);
}

$Object* VarHandle::getVolatile($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getVolatile(this, args);
}

void VarHandle::setVolatile($ObjectArray* args){
	_Java_java_lang_invoke_VarHandle_setVolatile(this, args);
}

$Object* VarHandle::getOpaque($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getOpaque(this, args);
}

void VarHandle::setOpaque($ObjectArray* args){
	_Java_java_lang_invoke_VarHandle_setOpaque(this, args);
}

$Object* VarHandle::getAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAcquire(this, args);
}

void VarHandle::setRelease($ObjectArray* args){
	_Java_java_lang_invoke_VarHandle_setRelease(this, args);
}

bool VarHandle::compareAndSet($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_compareAndSet(this, args);
}

$Object* VarHandle::compareAndExchange($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_compareAndExchange(this, args);
}

$Object* VarHandle::compareAndExchangeAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_compareAndExchangeAcquire(this, args);
}

$Object* VarHandle::compareAndExchangeRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_compareAndExchangeRelease(this, args);
}

bool VarHandle::weakCompareAndSetPlain($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_weakCompareAndSetPlain(this, args);
}

bool VarHandle::weakCompareAndSet($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_weakCompareAndSet(this, args);
}

bool VarHandle::weakCompareAndSetAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_weakCompareAndSetAcquire(this, args);
}

bool VarHandle::weakCompareAndSetRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_weakCompareAndSetRelease(this, args);
}

$Object* VarHandle::getAndSet($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndSet(this, args);
}

$Object* VarHandle::getAndSetAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndSetAcquire(this, args);
}

$Object* VarHandle::getAndSetRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndSetRelease(this, args);
}

$Object* VarHandle::getAndAdd($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndAdd(this, args);
}

$Object* VarHandle::getAndAddAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndAddAcquire(this, args);
}

$Object* VarHandle::getAndAddRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndAddRelease(this, args);
}

$Object* VarHandle::getAndBitwiseOr($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseOr(this, args);
}

$Object* VarHandle::getAndBitwiseOrAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseOrAcquire(this, args);
}

$Object* VarHandle::getAndBitwiseOrRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseOrRelease(this, args);
}

$Object* VarHandle::getAndBitwiseAnd($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseAnd(this, args);
}

$Object* VarHandle::getAndBitwiseAndAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseAndAcquire(this, args);
}

$Object* VarHandle::getAndBitwiseAndRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseAndRelease(this, args);
}

$Object* VarHandle::getAndBitwiseXor($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseXor(this, args);
}

$Object* VarHandle::getAndBitwiseXorAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseXorAcquire(this, args);
}

$Object* VarHandle::getAndBitwiseXorRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseXorRelease(this, args);
}

$String* VarHandle::toString() {
	$useLocalObjectStack();
	return $String::format("VarHandle[varType=%s, coord=%s]"_s, $$new($ObjectArray, {
		$($nc(varType())->getName()),
		$(coordinateTypes())
	}));
}

$Class* VarHandle::varType() {
	$init($VarHandle$AccessMode);
	$var($MethodType, typeSet, accessModeType($VarHandle$AccessMode::SET));
	return $cast($Class, $nc(typeSet)->parameterType($nc(typeSet)->parameterCount() - 1));
}

$List* VarHandle::coordinateTypes() {
	$init($VarHandle$AccessMode);
	$var($MethodType, typeGet, accessModeType($VarHandle$AccessMode::GET));
	return $nc(typeGet)->parameterList();
}

$MethodType* VarHandle::accessModeType($VarHandle$AccessMode* accessMode) {
	return accessModeType($nc(accessMode)->at->ordinal());
}

void VarHandle::checkExactAccessMode($VarHandle$AccessDescriptor* ad) {
	if (this->exact && accessModeType($nc(ad)->type) != $nc(ad)->symbolicMethodTypeExact) {
		throwWrongMethodTypeException(ad);
	}
}

void VarHandle::throwWrongMethodTypeException($VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$throwNew($WrongMethodTypeException, $$str({"expected "_s, $(accessModeType($nc(ad)->type)), " but found "_s, $nc(ad)->symbolicMethodTypeExact}));
}

$MethodType* VarHandle::accessModeType(int32_t accessTypeOrdinal) {
	$useLocalObjectStack();
	$var($VarHandle$TypesAndInvokers, tis, getTypesAndInvokers());
	$var($MethodType, mt, $nc($nc(tis)->methodType_table)->get(accessTypeOrdinal));
	if (mt == nullptr) {
		$assign(mt, tis->methodType_table->set(accessTypeOrdinal, $(accessModeTypeUncached(accessTypeOrdinal))));
	}
	return mt;
}

$MethodType* VarHandle::accessModeTypeUncached(int32_t accessTypeOrdinal) {
	return accessModeTypeUncached($($VarHandle$AccessType::values())->get(accessTypeOrdinal));
}

bool VarHandle::isAccessModeSupported($VarHandle$AccessMode* accessMode) {
	return $nc(this->vform)->getMemberNameOrNull($nc(accessMode)->ordinal()) != nullptr;
}

$MethodHandle* VarHandle::toMethodHandle($VarHandle$AccessMode* accessMode) {
	$useLocalObjectStack();
	if (isAccessModeSupported(accessMode)) {
		$var($MethodHandle, mh, getMethodHandle($nc(accessMode)->ordinal()));
		return $nc(mh)->bindTo(this);
	} else {
		return $$nc($MethodHandles::varHandleInvoker(accessMode, $(accessModeType(accessMode))))->bindTo(this);
	}
}

$Optional* VarHandle::describeConstable() {
	return $Optional::empty();
}

$VarHandle$TypesAndInvokers* VarHandle::getTypesAndInvokers() {
	$var($VarHandle$TypesAndInvokers, tis, this->typesAndInvokers);
	if (tis == nullptr) {
		$assign(tis, $set(this, typesAndInvokers, $new($VarHandle$TypesAndInvokers)));
	}
	return tis;
}

$MethodHandle* VarHandle::getMethodHandle(int32_t mode) {
	$useLocalObjectStack();
	$var($VarHandle$TypesAndInvokers, tis, getTypesAndInvokers());
	$var($MethodHandle, mh, $nc($nc(tis)->methodHandle_table)->get(mode));
	if (mh == nullptr) {
		$assign(mh, tis->methodHandle_table->set(mode, $(getMethodHandleUncached(mode))));
	}
	return mh;
}

$MethodHandle* VarHandle::getMethodHandleUncached(int32_t mode) {
	$useLocalObjectStack();
	$var($MethodType, mt, $$nc(accessModeType($($VarHandle$AccessMode::values())->get(mode)))->insertParameterTypes(0, $$new($ClassArray, {VarHandle::class$})));
	$var($MemberName, mn, $nc(this->vform)->getMemberName(mode));
	$var($DirectMethodHandle, dmh, $DirectMethodHandle::make(mn));
	$var($MethodHandle, mh, $nc(dmh)->copyWith(mt, $nc(dmh)->form));
	bool var$0 = !VarHandle::$assertionsDisabled;
	if (var$0) {
		var$0 = !($$nc($nc(mh)->type())->erase() == $$nc($nc(mn)->getMethodType())->erase());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return mh;
}

void VarHandle::updateVarForm($VarForm* newVForm) {
	if (this->vform == newVForm) {
		return;
	}
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReference(this, VarHandle::VFORM_OFFSET, newVForm);
	$MethodHandleStatics::UNSAFE->fullFence();
}

void VarHandle::fullFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->fullFence();
}

void VarHandle::acquireFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->loadFence();
}

void VarHandle::releaseFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->storeFence();
}

void VarHandle::loadLoadFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->loadLoadFence();
}

void VarHandle::storeStoreFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->storeStoreFence();
}

void VarHandle::clinit$($Class* clazz) {
	VarHandle::$assertionsDisabled = !VarHandle::class$->desiredAssertionStatus();
	$assignStatic(VarHandle::AIOOBE_SUPPLIER, $Preconditions::outOfBoundsExceptionFormatter($$new($VarHandle$1)));
	{
		$init($MethodHandleStatics);
		VarHandle::VFORM_OFFSET = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset(VarHandle::class$, "vform"_s);
		$load($VarHandleGuards);
		$MethodHandleStatics::UNSAFE->ensureClassInitialized($VarHandleGuards::class$);
	}
}

VarHandle::VarHandle() {
}

$Class* VarHandle::load$($String* name, bool initialize) {
	$CompoundAttribute typesAndInvokersfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle, $assertionsDisabled)},
		{"vform", "Ljava/lang/invoke/VarForm;", nullptr, $FINAL, $field(VarHandle, vform)},
		{"exact", "Z", nullptr, $FINAL, $field(VarHandle, exact)},
		{"typesAndInvokers", "Ljava/lang/invoke/VarHandle$TypesAndInvokers;", nullptr, 0, $field(VarHandle, typesAndInvokers), typesAndInvokersfieldAnnotations$$},
		{"AIOOBE_SUPPLIER", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $STATIC | $FINAL, $staticField(VarHandle, AIOOBE_SUPPLIER)},
		{"VFORM_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VarHandle, VFORM_OFFSET)},
		{}
	};
	$CompoundAttribute accessModeTypemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute acquireFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute checkExactAccessModemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeReleasemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute fullFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddReleasemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndReleasemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrReleasemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXormethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorReleasemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetReleasemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getMethodHandlemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getOpaquemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getTypesAndInvokersmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getVolatilemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute loadLoadFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute releaseFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute setOpaquemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute setReleasemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute setVolatilemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute storeStoreFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute throwWrongMethodTypeExceptionmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/DontInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetPlainmethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetReleasemethodAnnotations$$[] = {
		{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/VarForm;)V", nullptr, 0, $method(VarHandle, init$, void, $VarForm*)},
		{"<init>", "(Ljava/lang/invoke/VarForm;Z)V", nullptr, 0, $method(VarHandle, init$, void, $VarForm*, bool)},
		{"accessModeType", "(Ljava/lang/invoke/VarHandle$AccessMode;)Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC | $FINAL, $method(VarHandle, accessModeType, $MethodType*, $VarHandle$AccessMode*)},
		{"accessModeType", "(I)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $method(VarHandle, accessModeType, $MethodType*, int32_t), nullptr, nullptr, accessModeTypemethodAnnotations$$$1},
		{"accessModeTypeUncached", "(I)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $method(VarHandle, accessModeTypeUncached, $MethodType*, int32_t)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $ABSTRACT, $virtualMethod(VarHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"acquireFence", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(VarHandle, acquireFence, void), nullptr, nullptr, acquireFencemethodAnnotations$$},
		{"asDirect", "()Ljava/lang/invoke/VarHandle;", nullptr, 0, $virtualMethod(VarHandle, asDirect, VarHandle*)},
		{"checkExactAccessMode", "(Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $FINAL, $method(VarHandle, checkExactAccessMode, void, $VarHandle$AccessDescriptor*), nullptr, nullptr, checkExactAccessModemethodAnnotations$$},
		{"compareAndExchange", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, compareAndExchange, $Object*, $ObjectArray*), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, compareAndExchangeAcquire, $Object*, $ObjectArray*), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, compareAndExchangeRelease, $Object*, $ObjectArray*), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, compareAndSet, bool, $ObjectArray*), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"coordinateTypes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Class<*>;>;", $PUBLIC, $virtualMethod(VarHandle, coordinateTypes, $List*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandle, describeConstable, $Optional*)},
		{"fullFence", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(VarHandle, fullFence, void), nullptr, nullptr, fullFencemethodAnnotations$$},
		{"get", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, get, $Object*, $ObjectArray*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAcquire, $Object*, $ObjectArray*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndAdd, $Object*, $ObjectArray*), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndAddAcquire, $Object*, $ObjectArray*), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndAddRelease, $Object*, $ObjectArray*), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseAnd, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseAndAcquire, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseAndRelease, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseOr, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseOrAcquire, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseOrRelease, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseXor, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseXorAcquire, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndBitwiseXorRelease, $Object*, $ObjectArray*), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndSet, $Object*, $ObjectArray*), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndSetAcquire, $Object*, $ObjectArray*), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getAndSetRelease, $Object*, $ObjectArray*), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getMethodHandle", "(I)Ljava/lang/invoke/MethodHandle;", nullptr, 0, $virtualMethod(VarHandle, getMethodHandle, $MethodHandle*, int32_t), nullptr, nullptr, getMethodHandlemethodAnnotations$$},
		{"getMethodHandleUncached", "(I)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $method(VarHandle, getMethodHandleUncached, $MethodHandle*, int32_t)},
		{"getOpaque", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getOpaque, $Object*, $ObjectArray*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getTypesAndInvokers", "()Ljava/lang/invoke/VarHandle$TypesAndInvokers;", nullptr, $PRIVATE | $FINAL, $method(VarHandle, getTypesAndInvokers, $VarHandle$TypesAndInvokers*), nullptr, nullptr, getTypesAndInvokersmethodAnnotations$$},
		{"getVolatile", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, getVolatile, $Object*, $ObjectArray*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"hasInvokeExactBehavior", "()Z", nullptr, $PUBLIC, $virtualMethod(VarHandle, hasInvokeExactBehavior, bool)},
		{"isAccessModeSupported", "(Ljava/lang/invoke/VarHandle$AccessMode;)Z", nullptr, $PUBLIC | $FINAL, $method(VarHandle, isAccessModeSupported, bool, $VarHandle$AccessMode*)},
		{"isDirect", "()Z", nullptr, 0, $virtualMethod(VarHandle, isDirect, bool)},
		{"loadLoadFence", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(VarHandle, loadLoadFence, void), nullptr, nullptr, loadLoadFencemethodAnnotations$$},
		{"releaseFence", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(VarHandle, releaseFence, void), nullptr, nullptr, releaseFencemethodAnnotations$$},
		{"set", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, set, void, $ObjectArray*), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, setOpaque, void, $ObjectArray*), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, setRelease, void, $ObjectArray*), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, setVolatile, void, $ObjectArray*), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"storeStoreFence", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(VarHandle, storeStoreFence, void), nullptr, nullptr, storeStoreFencemethodAnnotations$$},
		{"target", "()Ljava/lang/invoke/VarHandle;", nullptr, 0, $virtualMethod(VarHandle, target, VarHandle*)},
		{"throwWrongMethodTypeException", "(Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $PRIVATE | $FINAL, $method(VarHandle, throwWrongMethodTypeException, void, $VarHandle$AccessDescriptor*), nullptr, nullptr, throwWrongMethodTypeExceptionmethodAnnotations$$},
		{"toMethodHandle", "(Ljava/lang/invoke/VarHandle$AccessMode;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandle, toMethodHandle, $MethodHandle*, $VarHandle$AccessMode*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(VarHandle, toString, $String*)},
		{"unsupported", "()Ljava/lang/RuntimeException;", nullptr, 0, $virtualMethod(VarHandle, unsupported, $RuntimeException*)},
		{"updateVarForm", "(Ljava/lang/invoke/VarForm;)V", nullptr, $FINAL, $method(VarHandle, updateVarForm, void, $VarForm*)},
		{"varType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(VarHandle, varType, $Class*)},
		{"weakCompareAndSet", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, weakCompareAndSet, bool, $ObjectArray*), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, weakCompareAndSetAcquire, bool, $ObjectArray*), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, weakCompareAndSetPlain, bool, $ObjectArray*), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(VarHandle, weakCompareAndSetRelease, bool, $ObjectArray*), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VarHandle, withInvokeBehavior, VarHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VarHandle, withInvokeExactBehavior, VarHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandle$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"java.lang.invoke.VarHandle$VarHandleDesc", "java.lang.invoke.VarHandle", "VarHandleDesc", $PUBLIC | $STATIC | $FINAL},
		{"java.lang.invoke.VarHandle$TypesAndInvokers", "java.lang.invoke.VarHandle", "TypesAndInvokers", $STATIC},
		{"java.lang.invoke.VarHandle$AccessDescriptor", "java.lang.invoke.VarHandle", "AccessDescriptor", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandle$AccessMode", "java.lang.invoke.VarHandle", "AccessMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"java.lang.invoke.VarHandle$AccessType", "java.lang.invoke.VarHandle", "AccessType", $STATIC | $FINAL | $ENUM},
		{"java.lang.invoke.VarHandle$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.lang.invoke.VarHandle",
		"java.lang.Object",
		"java.lang.constant.Constable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandle$2,java.lang.invoke.VarHandle$VarHandleDesc,java.lang.invoke.VarHandle$VarHandleDesc$Kind,java.lang.invoke.VarHandle$TypesAndInvokers,java.lang.invoke.VarHandle$AccessDescriptor,java.lang.invoke.VarHandle$AccessMode,java.lang.invoke.VarHandle$AccessType,java.lang.invoke.VarHandle$1"
	};
	$loadClass(VarHandle, name, initialize, &classInfo$$, VarHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandle);
	});
	return class$;
}

$Class* VarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java