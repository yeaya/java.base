#include <java/lang/invoke/MethodHandle.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/Constable.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/MethodHandleDesc.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/Invokers.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/LambdaFormEditor.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle$1.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandleInfo.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/WrongMethodTypeException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#include "_java_lang_invoke_MethodHandle.h"

#undef CONSTRUCTOR
#undef CUSTOMIZE_THRESHOLD
#undef DEBUG_METHOD_HANDLE_NAMES
#undef FORM_OFFSET
#undef GETTER
#undef IMPL_LOOKUP
#undef INTERFACE_SPECIAL
#undef INTERFACE_STATIC
#undef INTERFACE_VIRTUAL
#undef NONE
#undef SETTER
#undef SPECIAL
#undef STATIC
#undef STATIC_GETTER
#undef STATIC_SETTER
#undef TYPE
#undef UNSAFE
#undef UPDATE_OFFSET
#undef VIRTUAL

using $ConstableArray = $Array<::java::lang::constant::Constable>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $Constable = ::java::lang::constant::Constable;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;
using $MethodHandleDesc = ::java::lang::constant::MethodHandleDesc;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $Invokers = ::java::lang::invoke::Invokers;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaFormEditor = ::java::lang::invoke::LambdaFormEditor;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle$1 = ::java::lang::invoke::MethodHandle$1;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $MethodHandleInfo = ::java::lang::invoke::MethodHandleInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $WrongMethodTypeException = ::java::lang::invoke::WrongMethodTypeException;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _MethodHandle_MethodAnnotations_invoke25[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{}
};

$CompoundAttribute _MethodHandle_MethodAnnotations_invokeBasic26[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{}
};

$CompoundAttribute _MethodHandle_MethodAnnotations_invokeExact27[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{}
};

$CompoundAttribute _MethodHandle_MethodAnnotations_linkToInterface33[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{}
};

$CompoundAttribute _MethodHandle_MethodAnnotations_linkToNative34[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{}
};

$CompoundAttribute _MethodHandle_MethodAnnotations_linkToSpecial35[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{}
};

$CompoundAttribute _MethodHandle_MethodAnnotations_linkToStatic36[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{}
};

$CompoundAttribute _MethodHandle_MethodAnnotations_linkToVirtual37[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{}
};

$FieldInfo _MethodHandle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandle, $assertionsDisabled)},
	{"type", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $FINAL, $field(MethodHandle, type$)},
	{"form", "Ljava/lang/invoke/LambdaForm;", nullptr, $FINAL, $field(MethodHandle, form)},
	{"asTypeCache", "Ljava/lang/invoke/MethodHandle;", nullptr, 0, $field(MethodHandle, asTypeCache)},
	{"customizationCount", "B", nullptr, $PRIVATE, $field(MethodHandle, customizationCount)},
	{"updateInProgress", "Z", nullptr, $PRIVATE | $VOLATILE, $field(MethodHandle, updateInProgress)},
	{"FORM_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodHandle, FORM_OFFSET)},
	{"UPDATE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodHandle, UPDATE_OFFSET)},
	{}
};

$MethodInfo _MethodHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)V", nullptr, 0, $method(static_cast<void(MethodHandle::*)($MethodType*,$LambdaForm*)>(&MethodHandle::init$))},
	{"asCollector", "(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;I)Ljava/lang/invoke/MethodHandle;", $PUBLIC},
	{"asCollector", "(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;", "(ILjava/lang/Class<*>;I)Ljava/lang/invoke/MethodHandle;", $PUBLIC},
	{"asCollectorChecks", "(Ljava/lang/Class;II)Z", "(Ljava/lang/Class<*>;II)Z", 0},
	{"asFixedArity", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"asSpreader", "(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;I)Ljava/lang/invoke/MethodHandle;", $PUBLIC},
	{"asSpreader", "(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;", "(ILjava/lang/Class<*>;I)Ljava/lang/invoke/MethodHandle;", $PUBLIC},
	{"asSpreaderChecks", "(Ljava/lang/Class;II)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;II)Ljava/lang/invoke/MethodType;", $PRIVATE, $method(static_cast<$MethodType*(MethodHandle::*)($Class*,int32_t,int32_t)>(&MethodHandle::asSpreaderChecks))},
	{"asType", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"asTypeCached", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE, $method(static_cast<MethodHandle*(MethodHandle::*)($MethodType*)>(&MethodHandle::asTypeCached))},
	{"asTypeUncached", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"asVarargsCollector", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC},
	{"bindArgumentL", "(ILjava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{"bindTo", "(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/MethodHandle;", nullptr, $ABSTRACT},
	{"customize", "()V", nullptr, 0},
	{"debugString", "()Ljava/lang/String;", nullptr, 0},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/constant/MethodHandleDesc;>;", $PUBLIC},
	{"internalCallerClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0},
	{"internalForm", "()Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"internalMemberName", "()Ljava/lang/invoke/MemberName;", nullptr, 0},
	{"internalProperties", "()Ljava/lang/Object;", nullptr, 0},
	{"internalValues", "()Ljava/lang/Object;", nullptr, 0},
	{"intrinsicData", "()Ljava/lang/Object;", nullptr, 0},
	{"intrinsicName", "()Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, 0},
	{"invoke", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(MethodHandle::*)($ObjectArray*)>(&MethodHandle::invoke)), "java.lang.Throwable", nullptr, _MethodHandle_MethodAnnotations_invoke25},
	{"invokeBasic", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(MethodHandle::*)($ObjectArray*)>(&MethodHandle::invokeBasic)), "java.lang.Throwable", nullptr, _MethodHandle_MethodAnnotations_invokeBasic26},
	{"invokeExact", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(MethodHandle::*)($ObjectArray*)>(&MethodHandle::invokeExact)), "java.lang.Throwable", nullptr, _MethodHandle_MethodAnnotations_invokeExact27},
	{"invokeWithArguments", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.lang.Throwable"},
	{"invokeWithArguments", "(Ljava/util/List;)Ljava/lang/Object;", "(Ljava/util/List<*>;)Ljava/lang/Object;", $PUBLIC, nullptr, "java.lang.Throwable"},
	{"isCrackable", "()Z", nullptr, 0},
	{"isInvokeSpecial", "()Z", nullptr, 0},
	{"isVarargsCollector", "()Z", nullptr, $PUBLIC},
	{"linkToInterface", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(*)($ObjectArray*)>(&MethodHandle::linkToInterface)), "java.lang.Throwable", nullptr, _MethodHandle_MethodAnnotations_linkToInterface33},
	{"linkToNative", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(*)($ObjectArray*)>(&MethodHandle::linkToNative)), "java.lang.Throwable", nullptr, _MethodHandle_MethodAnnotations_linkToNative34},
	{"linkToSpecial", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(*)($ObjectArray*)>(&MethodHandle::linkToSpecial)), "java.lang.Throwable", nullptr, _MethodHandle_MethodAnnotations_linkToSpecial35},
	{"linkToStatic", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(*)($ObjectArray*)>(&MethodHandle::linkToStatic)), "java.lang.Throwable", nullptr, _MethodHandle_MethodAnnotations_linkToStatic36},
	{"linkToVirtual", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(*)($ObjectArray*)>(&MethodHandle::linkToVirtual)), "java.lang.Throwable", nullptr, _MethodHandle_MethodAnnotations_linkToVirtual37},
	{"maybeCustomize", "()V", nullptr, 0},
	{"rebind", "()Ljava/lang/invoke/BoundMethodHandle;", nullptr, $ABSTRACT},
	{"setVarargs", "(Ljava/lang/invoke/MemberName;)Ljava/lang/invoke/MethodHandle;", nullptr, 0, nullptr, "java.lang.IllegalAccessException"},
	{"spreadArrayChecks", "(Ljava/lang/Class;I)V", "(Ljava/lang/Class<*>;I)V", $PRIVATE, $method(static_cast<void(MethodHandle::*)($Class*,int32_t)>(&MethodHandle::spreadArrayChecks))},
	{"standardString", "()Ljava/lang/String;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC},
	{"updateForm", "(Ljava/util/function/Function;)V", "(Ljava/util/function/Function<Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/LambdaForm;>;)V", 0},
	{"viewAsType", "(Ljava/lang/invoke/MethodType;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"viewAsTypeChecks", "(Ljava/lang/invoke/MethodType;Z)Z", nullptr, 0},
	{"withInternalMemberName", "(Ljava/lang/invoke/MemberName;Z)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"withVarargs", "(Z)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_invoke 25
#define _METHOD_INDEX_invokeBasic 26
#define _METHOD_INDEX_invokeExact 27
#define _METHOD_INDEX_linkToInterface 33
#define _METHOD_INDEX_linkToNative 34
#define _METHOD_INDEX_linkToSpecial 35
#define _METHOD_INDEX_linkToStatic 36
#define _METHOD_INDEX_linkToVirtual 37

$InnerClassInfo _MethodHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandle$PolymorphicSignature", "java.lang.invoke.MethodHandle", "PolymorphicSignature", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"java.lang.invoke.MethodHandle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.MethodHandle",
	"java.lang.Object",
	"java.lang.constant.Constable",
	_MethodHandle_FieldInfo_,
	_MethodHandle_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandle$PolymorphicSignature,java.lang.invoke.MethodHandle$1"
};

$Object* allocate$MethodHandle($Class* clazz) {
	return $of($alloc(MethodHandle));
}

bool MethodHandle::$assertionsDisabled = false;
int64_t MethodHandle::FORM_OFFSET = 0;
int64_t MethodHandle::UPDATE_OFFSET = 0;

$MethodType* MethodHandle::type() {
	return this->type$;
}

void MethodHandle::init$($MethodType* type, $LambdaForm* form) {
	$set(this, type$, $cast($MethodType, $Objects::requireNonNull(type)));
	$set(this, form, $nc(($cast($LambdaForm, $Objects::requireNonNull(form))))->uncustomize());
	$nc(this->form)->prepare();
}

$Object* MethodHandle::invokeExact($ObjectArray* args) {
	return _Java_java_lang_invoke_MethodHandle_invokeExact(this, args);
}

$Object* MethodHandle::invoke($ObjectArray* args) {
	return _Java_java_lang_invoke_MethodHandle_invoke(this, args);
}

$Object* MethodHandle::invokeBasic($ObjectArray* args) {
	return _Java_java_lang_invoke_MethodHandle_invokeBasic(this, args);
}

$Object* MethodHandle::linkToVirtual($ObjectArray* args) {
	return _Java_java_lang_invoke_MethodHandle_linkToVirtual(args);
}

$Object* MethodHandle::linkToStatic($ObjectArray* args) {
	return _Java_java_lang_invoke_MethodHandle_linkToStatic(args);
}

$Object* MethodHandle::linkToSpecial($ObjectArray* args) {
	return _Java_java_lang_invoke_MethodHandle_linkToSpecial(args);
}

$Object* MethodHandle::linkToInterface($ObjectArray* args) {
	return _Java_java_lang_invoke_MethodHandle_linkToInterface(args);
}

$Object* MethodHandle::linkToNative($ObjectArray* args) {
	return _Java_java_lang_invoke_MethodHandle_linkToNative(args);
}

$Object* MethodHandle::invokeWithArguments($ObjectArray* arguments) {
	return this->invoke(arguments);
}

$Object* MethodHandle::invokeWithArguments($List* arguments) {
	return $of(invokeWithArguments($($nc(arguments)->toArray())));
}

MethodHandle* MethodHandle::asType($MethodType* newType) {
	if (newType == this->type$) {
		return this;
	}
	$var(MethodHandle, atc, asTypeCached(newType));
	if (atc != nullptr) {
		return atc;
	}
	return asTypeUncached(newType);
}

MethodHandle* MethodHandle::asTypeCached($MethodType* newType) {
	$var(MethodHandle, atc, this->asTypeCache);
	if (atc != nullptr && newType == atc->type$) {
		return atc;
	}
	return nullptr;
}

MethodHandle* MethodHandle::asTypeUncached($MethodType* newType) {
	if (!$nc(this->type$)->isConvertibleTo(newType)) {
		$throwNew($WrongMethodTypeException, $$str({"cannot convert "_s, this, " to "_s, newType}));
	}
	return $assignField(this, asTypeCache, $MethodHandleImpl::makePairwiseConvert(this, newType, true));
}

MethodHandle* MethodHandle::asSpreader($Class* arrayType, int32_t arrayLength) {
	return asSpreader($nc($(type()))->parameterCount() - arrayLength, arrayType, arrayLength);
}

MethodHandle* MethodHandle::asSpreader(int32_t spreadArgPos, $Class* arrayType, int32_t arrayLength) {
	$var($MethodType, postSpreadType, asSpreaderChecks(arrayType, spreadArgPos, arrayLength));
	$var(MethodHandle, afterSpread, this->asType(postSpreadType));
	$var($BoundMethodHandle, mh, $nc(afterSpread)->rebind());
	$var($LambdaForm, lform, $nc($($nc(mh)->editor()))->spreadArgumentsForm(1 + spreadArgPos, arrayType, arrayLength));
	$var($MethodType, preSpreadType, $nc(postSpreadType)->replaceParameterTypes(spreadArgPos, spreadArgPos + arrayLength, $$new($ClassArray, {arrayType})));
	return mh->copyWith(preSpreadType, lform);
}

$MethodType* MethodHandle::asSpreaderChecks($Class* arrayType, int32_t pos, int32_t arrayLength) {
	spreadArrayChecks(arrayType, arrayLength);
	int32_t nargs = $nc($(type()))->parameterCount();
	if (nargs < arrayLength || arrayLength < 0) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("bad spread array length"_s)));
	}
	if (pos < 0 || pos + arrayLength > nargs) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("bad spread position"_s)));
	}
	$Class* arrayElement = $nc(arrayType)->getComponentType();
	$var($MethodType, mtype, type());
	bool match = true;
	bool fail = false;
	for (int32_t i = pos; i < pos + arrayLength; ++i) {
		$Class* ptype = $cast($Class, $nc(mtype)->parameterType(i));
		if (ptype != arrayElement) {
			match = false;
			if (!$MethodType::canConvert(arrayElement, ptype)) {
				fail = true;
				break;
			}
		}
	}
	if (match) {
		return mtype;
	}
	$var($MethodType, needType, $nc(mtype)->asSpreaderType(arrayType, pos, arrayLength));
	if (!fail) {
		return needType;
	}
	this->asType(needType);
	$throw($($MethodHandleStatics::newInternalError("should not return"_s)));
}

void MethodHandle::spreadArrayChecks($Class* arrayType, int32_t arrayLength) {
	$Class* arrayElement = $nc(arrayType)->getComponentType();
	if (arrayElement == nullptr) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("not an array type"_s, arrayType)));
	}
	if (((int32_t)(arrayLength & (uint32_t)127)) != arrayLength) {
		if (((int32_t)(arrayLength & (uint32_t)255)) != arrayLength) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("array length is not legal"_s, $($Integer::valueOf(arrayLength)))));
		}
		if (!MethodHandle::$assertionsDisabled && !(arrayLength >= 128)) {
			$throwNew($AssertionError);
		}
		$init($Long);
		$init($Double);
		if (arrayElement == $Long::TYPE || arrayElement == $Double::TYPE) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("array length is not legal for long[] or double[]"_s, $($Integer::valueOf(arrayLength)))));
		}
	}
}

MethodHandle* MethodHandle::withVarargs(bool makeVarargs) {
	if (!MethodHandle::$assertionsDisabled && !(!isVarargsCollector())) {
		$throwNew($AssertionError);
	}
	if (makeVarargs) {
		return asVarargsCollector($nc($(type()))->lastParameterType());
	} else {
		return this;
	}
}

MethodHandle* MethodHandle::asCollector($Class* arrayType, int32_t arrayLength) {
	return asCollector($nc($(type()))->parameterCount() - 1, arrayType, arrayLength);
}

MethodHandle* MethodHandle::asCollector(int32_t collectArgPos, $Class* arrayType, int32_t arrayLength) {
	asCollectorChecks(arrayType, collectArgPos, arrayLength);
	$var($BoundMethodHandle, mh, rebind());
	$var($MethodType, resultType, $nc($(type()))->asCollectorType(arrayType, collectArgPos, arrayLength));
	$var(MethodHandle, collector, $MethodHandleImpl::varargsArray(arrayType, arrayLength));
	$var($LambdaForm, lform, $nc($($nc(mh)->editor()))->collectArgumentsForm(1 + collectArgPos, $($nc($($nc(collector)->type()))->basicType())));
	return mh->copyWithExtendL(resultType, lform, collector);
}

bool MethodHandle::asCollectorChecks($Class* arrayType, int32_t pos, int32_t arrayLength) {
	spreadArrayChecks(arrayType, arrayLength);
	int32_t nargs = $nc($(type()))->parameterCount();
	if (pos < 0 || pos >= nargs) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("bad collect position"_s)));
	}
	if (nargs != 0) {
		$Class* param = $cast($Class, $nc($(type()))->parameterType(pos));
		if (param == arrayType) {
			return true;
		}
		if ($nc(param)->isAssignableFrom(arrayType)) {
			return false;
		}
	}
	$throw($($MethodHandleStatics::newIllegalArgumentException("array type not assignable to argument"_s, this, arrayType)));
}

MethodHandle* MethodHandle::asVarargsCollector($Class* arrayType) {
	$Objects::requireNonNull(arrayType);
	bool lastMatch = asCollectorChecks(arrayType, $nc($(type()))->parameterCount() - 1, 0);
	if (isVarargsCollector() && lastMatch) {
		return this;
	}
	return $MethodHandleImpl::makeVarargsCollector(this, arrayType);
}

bool MethodHandle::isVarargsCollector() {
	return false;
}

MethodHandle* MethodHandle::asFixedArity() {
	if (!MethodHandle::$assertionsDisabled && !(!isVarargsCollector())) {
		$throwNew($AssertionError);
	}
	return this;
}

MethodHandle* MethodHandle::bindTo(Object$* x$renamed) {
	$var($Object, x, x$renamed);
	$assign(x, $nc($nc(this->type$)->leadingReferenceParameter())->cast(x));
	return bindArgumentL(0, x);
}

$Optional* MethodHandle::describeConstable() {
	$var($MethodHandleInfo, info, nullptr);
	$var($ClassDesc, owner, nullptr);
	$var($String, name, nullptr);
	$var($MethodTypeDesc, type, nullptr);
	bool isInterface = false;
	try {
		$init($MethodHandles$Lookup);
		$assign(info, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->revealDirect(this));
		isInterface = $nc($nc(info)->getDeclaringClass())->isInterface();
		$assign(owner, $cast($ClassDesc, $nc($($nc(info->getDeclaringClass())->describeConstable()))->orElseThrow()));
		$assign(type, $cast($MethodTypeDesc, $nc($($nc($(info->getMethodType()))->describeConstable()))->orElseThrow()));
		$assign(name, info->getName());
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return $Optional::empty();
	}

	$var($Optional, var$0, nullptr)
	switch ($nc(info)->getReferenceKind()) {
	case 1:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, $Optional::of($($MethodHandleDesc::ofField($DirectMethodHandleDesc$Kind::GETTER, owner, name, $($cast($ClassDesc, $nc(type)->returnType()))))));
			break;
		}
	case 3:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, $Optional::of($($MethodHandleDesc::ofField($DirectMethodHandleDesc$Kind::SETTER, owner, name, $($cast($ClassDesc, $nc(type)->parameterType(0)))))));
			break;
		}
	case 2:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, $Optional::of($($MethodHandleDesc::ofField($DirectMethodHandleDesc$Kind::STATIC_GETTER, owner, name, $($cast($ClassDesc, $nc(type)->returnType()))))));
			break;
		}
	case 4:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, $Optional::of($($MethodHandleDesc::ofField($DirectMethodHandleDesc$Kind::STATIC_SETTER, owner, name, $($cast($ClassDesc, $nc(type)->parameterType(0)))))));
			break;
		}
	case 5:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, $Optional::of($($MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::VIRTUAL, owner, name, type))));
			break;
		}
	case 6:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, isInterface ? $Optional::of($($MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::INTERFACE_STATIC, owner, name, type))) : $Optional::of($($MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::STATIC, owner, name, type))));
			break;
		}
	case 7:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, isInterface ? $Optional::of($($MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::INTERFACE_SPECIAL, owner, name, type))) : $Optional::of($($MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::SPECIAL, owner, name, type))));
			break;
		}
	case 9:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, $Optional::of($($MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::INTERFACE_VIRTUAL, owner, name, type))));
			break;
		}
	case 8:
		{
			$init($DirectMethodHandleDesc$Kind);
			$assign(var$0, $Optional::of($($MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::CONSTRUCTOR, owner, name, type))));
			break;
		}
	default:
		{
			$assign(var$0, $Optional::empty());
			break;
		}
	}
	return var$0;
}

$String* MethodHandle::toString() {
	$init($MethodHandleStatics);
	if ($MethodHandleStatics::DEBUG_METHOD_HANDLE_NAMES) {
		return $str({"MethodHandle"_s, $(debugString())});
	}
	return standardString();
}

$String* MethodHandle::standardString() {
	return $str({"MethodHandle"_s, this->type$});
}

$String* MethodHandle::debugString() {
	$var($String, var$1, $$str({this->type$, " : "_s}));
	$var($String, var$0, $$concat(var$1, $(internalForm())));
	return $concat(var$0, $(internalProperties()));
}

$BoundMethodHandle* MethodHandle::bindArgumentL(int32_t pos, Object$* value) {
	return $nc($(rebind()))->bindArgumentL(pos, value);
}

MethodHandle* MethodHandle::setVarargs($MemberName* member) {
	if (!$nc(member)->isVarargs()) {
		return this;
	}
	try {
		return this->withVarargs(true);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, ex, $catch());
		$throw($($nc(member)->makeAccessException("cannot make variable arity"_s, nullptr)));
	}
	$shouldNotReachHere();
}

MethodHandle* MethodHandle::viewAsType($MethodType* newType, bool strict) {
	if (!MethodHandle::$assertionsDisabled && !(viewAsTypeChecks(newType, strict))) {
		$throwNew($AssertionError);
	}
	return copyWith(newType, this->form);
}

bool MethodHandle::viewAsTypeChecks($MethodType* newType, bool strict) {
	if (strict) {
		if (!MethodHandle::$assertionsDisabled && !($nc($(type()))->isViewableAs(newType, true))) {
			$throwNew($AssertionError, $($of($Arrays::asList($$new($ConstableArray, {
				static_cast<$Constable*>(this),
				static_cast<$Constable*>(newType)
			})))));
		}
	} else if (!MethodHandle::$assertionsDisabled && !($nc($($nc($(type()))->basicType()))->isViewableAs($($nc(newType)->basicType()), true))) {
		$throwNew($AssertionError, $($of($Arrays::asList($$new($ConstableArray, {
			static_cast<$Constable*>(this),
			static_cast<$Constable*>(newType)
		})))));
	}
	return true;
}

$LambdaForm* MethodHandle::internalForm() {
	return this->form;
}

$MemberName* MethodHandle::internalMemberName() {
	return nullptr;
}

$Class* MethodHandle::internalCallerClass() {
	return nullptr;
}

$MethodHandleImpl$Intrinsic* MethodHandle::intrinsicName() {
	$init($MethodHandleImpl$Intrinsic);
	return $MethodHandleImpl$Intrinsic::NONE;
}

$Object* MethodHandle::intrinsicData() {
	return $of(nullptr);
}

MethodHandle* MethodHandle::withInternalMemberName($MemberName* member, bool isInvokeSpecial) {
	if (member != nullptr) {
		return $MethodHandleImpl::makeWrappedMember(this, member, isInvokeSpecial);
	} else if (internalMemberName() == nullptr) {
		return this;
	} else {
		$var(MethodHandle, result, rebind());
		if (!MethodHandle::$assertionsDisabled && !($nc(result)->internalMemberName() == nullptr)) {
			$throwNew($AssertionError);
		}
		return result;
	}
}

bool MethodHandle::isInvokeSpecial() {
	return false;
}

bool MethodHandle::isCrackable() {
	return false;
}

$Object* MethodHandle::internalValues() {
	return $of(nullptr);
}

$Object* MethodHandle::internalProperties() {
	return $of(""_s);
}

void MethodHandle::maybeCustomize() {
	if ($nc(this->form)->customized == nullptr) {
		int8_t count = this->customizationCount;
		$init($MethodHandleStatics);
		if (count >= $MethodHandleStatics::CUSTOMIZE_THRESHOLD) {
			customize();
		} else {
			this->customizationCount = (int8_t)(count + 1);
		}
	}
}

void MethodHandle::customize() {
	updateForm($$new($MethodHandle$1, this));
}

void MethodHandle::updateForm($Function* updater) {
	$init($MethodHandleStatics);
	if ($nc($MethodHandleStatics::UNSAFE)->compareAndSetBoolean(this, MethodHandle::UPDATE_OFFSET, false, true)) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($LambdaForm, oldForm, this->form);
				$var($LambdaForm, newForm, $cast($LambdaForm, $nc(updater)->apply(oldForm)));
				if (oldForm != newForm) {
					if (!MethodHandle::$assertionsDisabled && !($nc(newForm)->customized == nullptr || $nc(newForm)->customized == this)) {
						$throwNew($AssertionError);
					}
					$nc(newForm)->prepare();
					$nc($MethodHandleStatics::UNSAFE)->putReference(this, MethodHandle::FORM_OFFSET, newForm);
					$nc($MethodHandleStatics::UNSAFE)->fullFence();
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				this->updateInProgress = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
	}
}

void clinit$MethodHandle($Class* class$) {
	MethodHandle::$assertionsDisabled = !MethodHandle::class$->desiredAssertionStatus();
	$init($MethodHandleStatics);
	MethodHandle::FORM_OFFSET = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset(MethodHandle::class$, "form"_s);
	MethodHandle::UPDATE_OFFSET = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset(MethodHandle::class$, "updateInProgress"_s);
}

MethodHandle::MethodHandle() {
}

$Class* MethodHandle::load$($String* name, bool initialize) {
	$loadClass(MethodHandle, name, initialize, &_MethodHandle_ClassInfo_, clinit$MethodHandle, allocate$MethodHandle);
	return class$;
}

$Class* MethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java