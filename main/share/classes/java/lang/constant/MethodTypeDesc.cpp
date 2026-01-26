#include <java/lang/constant/MethodTypeDesc.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/MethodTypeDescImpl.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassDescArray = $Array<::java::lang::constant::ClassDesc>;
using $TypeDescriptor$OfFieldArray = $Array<::java::lang::invoke::TypeDescriptor$OfField>;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $MethodTypeDescImpl = ::java::lang::constant::MethodTypeDescImpl;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $TypeDescriptor$OfField = ::java::lang::invoke::TypeDescriptor$OfField;
using $TypeDescriptor$OfMethod = ::java::lang::invoke::TypeDescriptor$OfMethod;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {
		namespace constant {

class MethodTypeDesc$$Lambda$descriptorString : public $Function {
	$class(MethodTypeDesc$$Lambda$descriptorString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ClassDesc, inst$)->descriptorString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodTypeDesc$$Lambda$descriptorString>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodTypeDesc$$Lambda$descriptorString::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MethodTypeDesc$$Lambda$descriptorString, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDesc$$Lambda$descriptorString, apply, $Object*, Object$*)},
	{}
};
$ClassInfo MethodTypeDesc$$Lambda$descriptorString::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.MethodTypeDesc$$Lambda$descriptorString",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodTypeDesc$$Lambda$descriptorString::load$($String* name, bool initialize) {
	$loadClass(MethodTypeDesc$$Lambda$descriptorString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodTypeDesc$$Lambda$descriptorString::class$ = nullptr;

class MethodTypeDesc$$Lambda$displayName$1 : public $Function {
	$class(MethodTypeDesc$$Lambda$displayName$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ClassDesc, inst$)->displayName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodTypeDesc$$Lambda$displayName$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodTypeDesc$$Lambda$displayName$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MethodTypeDesc$$Lambda$displayName$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDesc$$Lambda$displayName$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo MethodTypeDesc$$Lambda$displayName$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.MethodTypeDesc$$Lambda$displayName$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodTypeDesc$$Lambda$displayName$1::load$($String* name, bool initialize) {
	$loadClass(MethodTypeDesc$$Lambda$displayName$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodTypeDesc$$Lambda$displayName$1::class$ = nullptr;

$MethodInfo _MethodTypeDesc_MethodInfo_[] = {
	{"changeParameterType", "(ILjava/lang/constant/ClassDesc;)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodTypeDesc, changeParameterType, MethodTypeDesc*, int32_t, $ClassDesc*)},
	{"changeParameterType", "(ILjava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodTypeDesc, changeParameterType, $TypeDescriptor$OfMethod*, int32_t, $TypeDescriptor$OfField*)},
	{"changeReturnType", "(Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodTypeDesc, changeReturnType, MethodTypeDesc*, $ClassDesc*)},
	{"changeReturnType", "(Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodTypeDesc, changeReturnType, $TypeDescriptor$OfMethod*, $TypeDescriptor$OfField*)},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"descriptorString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDesc, descriptorString, $String*)},
	{"displayDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDesc, displayDescriptor, $String*)},
	{"dropParameterTypes", "(II)Ljava/lang/invoke/TypeDescriptor$OfMethod;", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"insertParameterTypes", "(I[Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(MethodTypeDesc, insertParameterTypes, MethodTypeDesc*, int32_t, $ClassDescArray*)},
	{"insertParameterTypes", "(I[Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodTypeDesc, insertParameterTypes, $TypeDescriptor$OfMethod*, int32_t, $TypeDescriptor$OfFieldArray*)},
	{"of", "(Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(MethodTypeDesc, of, MethodTypeDesc*, $ClassDesc*, $ClassDescArray*)},
	{"ofDescriptor", "(Ljava/lang/String;)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodTypeDesc, ofDescriptor, MethodTypeDesc*, $String*)},
	{"returnType", "()Ljava/lang/invoke/TypeDescriptor$OfField;", nullptr, $PUBLIC | $ABSTRACT},
	{"parameterCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"parameterType", "(I)Ljava/lang/invoke/TypeDescriptor$OfField;", nullptr, $PUBLIC | $ABSTRACT},
	{"parameterList", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"parameterArray", "()[Ljava/lang/invoke/TypeDescriptor$OfField;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MethodTypeDesc_InnerClassesInfo_[] = {
	{"java.lang.invoke.TypeDescriptor$OfMethod", "java.lang.invoke.TypeDescriptor", "OfMethod", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MethodTypeDesc_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.constant.MethodTypeDesc",
	nullptr,
	"java.lang.constant.ConstantDesc,java.lang.invoke.TypeDescriptor$OfMethod",
	nullptr,
	_MethodTypeDesc_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/constant/ConstantDesc;Ljava/lang/invoke/TypeDescriptor$OfMethod<Ljava/lang/constant/ClassDesc;Ljava/lang/constant/MethodTypeDesc;>;",
	nullptr,
	_MethodTypeDesc_InnerClassesInfo_
};

$Object* allocate$MethodTypeDesc($Class* clazz) {
	return $of($alloc(MethodTypeDesc));
}

bool MethodTypeDesc::equals(Object$* o) {
	 return this->$ConstantDesc::equals(o);
}

int32_t MethodTypeDesc::hashCode() {
	 return this->$ConstantDesc::hashCode();
}

$Object* MethodTypeDesc::clone() {
	 return this->$ConstantDesc::clone();
}

$String* MethodTypeDesc::toString() {
	 return this->$ConstantDesc::toString();
}

void MethodTypeDesc::finalize() {
	this->$ConstantDesc::finalize();
}

MethodTypeDesc* MethodTypeDesc::ofDescriptor($String* descriptor) {
	$init(MethodTypeDesc);
	return $MethodTypeDescImpl::ofDescriptor(descriptor);
}

MethodTypeDesc* MethodTypeDesc::of($ClassDesc* returnDesc, $ClassDescArray* paramDescs) {
	$init(MethodTypeDesc);
	return $new($MethodTypeDescImpl, returnDesc, paramDescs);
}

$String* MethodTypeDesc::descriptorString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("(%s)%s"_s, $$new($ObjectArray, {
		$($nc($($nc($($Stream::of($(parameterArray()))))->map(static_cast<$Function*>($$new(MethodTypeDesc$$Lambda$descriptorString)))))->collect($($Collectors::joining()))),
		$($of($nc($($cast($ClassDesc, returnType())))->descriptorString()))
	}));
}

$String* MethodTypeDesc::displayDescriptor() {
	$useLocalCurrentObjectStackCache();
	return $String::format("(%s)%s"_s, $$new($ObjectArray, {
		$($nc($($nc($($Stream::of($(parameterArray()))))->map(static_cast<$Function*>($$new(MethodTypeDesc$$Lambda$displayName$1)))))->collect($($Collectors::joining(","_s)))),
		$($of($nc($($cast($ClassDesc, returnType())))->displayName()))
	}));
}

$TypeDescriptor$OfMethod* MethodTypeDesc::insertParameterTypes(int32_t pos, $TypeDescriptor$OfFieldArray* paramTypes) {
	return this->insertParameterTypes(pos, $fcast($ClassDescArray, paramTypes));
}

$TypeDescriptor$OfMethod* MethodTypeDesc::changeParameterType(int32_t index, $TypeDescriptor$OfField* paramType) {
	return this->changeParameterType(index, $cast($ClassDesc, paramType));
}

$TypeDescriptor$OfMethod* MethodTypeDesc::changeReturnType($TypeDescriptor$OfField* returnType) {
	return this->changeReturnType($cast($ClassDesc, returnType));
}

$Class* MethodTypeDesc::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MethodTypeDesc$$Lambda$descriptorString::classInfo$.name)) {
			return MethodTypeDesc$$Lambda$descriptorString::load$(name, initialize);
		}
		if (name->equals(MethodTypeDesc$$Lambda$displayName$1::classInfo$.name)) {
			return MethodTypeDesc$$Lambda$displayName$1::load$(name, initialize);
		}
	}
	$loadClass(MethodTypeDesc, name, initialize, &_MethodTypeDesc_ClassInfo_, allocate$MethodTypeDesc);
	return class$;
}

$Class* MethodTypeDesc::class$ = nullptr;

		} // constant
	} // lang
} // java