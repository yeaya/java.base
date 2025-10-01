#include <java/lang/invoke/InnerClassLambdaMetafactory$ForwardingMethodGenerator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/InnerClassLambdaMetafactory.h>
#include <java/lang/invoke/MethodHandleInfo.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeConvertingMethodAdapter.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractValidatingLambdaMetafactory = ::java::lang::invoke::AbstractValidatingLambdaMetafactory;
using $InnerClassLambdaMetafactory = ::java::lang::invoke::InnerClassLambdaMetafactory;
using $MethodHandleInfo = ::java::lang::invoke::MethodHandleInfo;
using $MethodType = ::java::lang::invoke::MethodType;
using $TypeConvertingMethodAdapter = ::java::lang::invoke::TypeConvertingMethodAdapter;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _InnerClassLambdaMetafactory$ForwardingMethodGenerator_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/InnerClassLambdaMetafactory;", nullptr, $FINAL | $SYNTHETIC, $field(InnerClassLambdaMetafactory$ForwardingMethodGenerator, this$0)},
	{}
};

$MethodInfo _InnerClassLambdaMetafactory$ForwardingMethodGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/InnerClassLambdaMetafactory;Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, 0, $method(static_cast<void(InnerClassLambdaMetafactory$ForwardingMethodGenerator::*)($InnerClassLambdaMetafactory*,$MethodVisitor*)>(&InnerClassLambdaMetafactory$ForwardingMethodGenerator::init$))},
	{"convertArgumentTypes", "(Ljava/lang/invoke/MethodType;)V", nullptr, $PRIVATE, $method(static_cast<void(InnerClassLambdaMetafactory$ForwardingMethodGenerator::*)($MethodType*)>(&InnerClassLambdaMetafactory$ForwardingMethodGenerator::convertArgumentTypes))},
	{"generate", "(Ljava/lang/invoke/MethodType;)V", nullptr, 0},
	{"invocationOpcode", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(InnerClassLambdaMetafactory$ForwardingMethodGenerator::*)()>(&InnerClassLambdaMetafactory$ForwardingMethodGenerator::invocationOpcode)), "java.lang.InternalError"},
	{}
};

$InnerClassInfo _InnerClassLambdaMetafactory$ForwardingMethodGenerator_InnerClassesInfo_[] = {
	{"java.lang.invoke.InnerClassLambdaMetafactory$ForwardingMethodGenerator", "java.lang.invoke.InnerClassLambdaMetafactory", "ForwardingMethodGenerator", $PRIVATE},
	{}
};

$ClassInfo _InnerClassLambdaMetafactory$ForwardingMethodGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.InnerClassLambdaMetafactory$ForwardingMethodGenerator",
	"java.lang.invoke.TypeConvertingMethodAdapter",
	nullptr,
	_InnerClassLambdaMetafactory$ForwardingMethodGenerator_FieldInfo_,
	_InnerClassLambdaMetafactory$ForwardingMethodGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_InnerClassLambdaMetafactory$ForwardingMethodGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.InnerClassLambdaMetafactory"
};

$Object* allocate$InnerClassLambdaMetafactory$ForwardingMethodGenerator($Class* clazz) {
	return $of($alloc(InnerClassLambdaMetafactory$ForwardingMethodGenerator));
}

void InnerClassLambdaMetafactory$ForwardingMethodGenerator::init$($InnerClassLambdaMetafactory* this$0, $MethodVisitor* mv) {
	$set(this, this$0, this$0);
	$TypeConvertingMethodAdapter::init$(mv);
}

void InnerClassLambdaMetafactory$ForwardingMethodGenerator::generate($MethodType* methodType) {
	visitCode();
	if (this->this$0->implKind == $MethodHandleInfo::REF_newInvokeSpecial) {
		visitTypeInsn(187, this->this$0->implMethodClassName);
		visitInsn(89);
	}
	if (this->this$0->useImplMethodHandle) {
		$init($InnerClassLambdaMetafactory);
		visitLdcInsn($InnerClassLambdaMetafactory::implMethodCondy);
	}
	for (int32_t i = 0; i < $nc(this->this$0->argNames)->length; ++i) {
		visitVarInsn(25, 0);
		visitFieldInsn(180, this->this$0->lambdaClassName$, $nc(this->this$0->argNames)->get(i), $nc(this->this$0->argDescs)->get(i));
	}
	convertArgumentTypes(methodType);
	if (this->this$0->useImplMethodHandle) {
		$var($MethodType, mtype, $nc(this->this$0->implInfo)->getMethodType());
		if (this->this$0->implKind != $MethodHandleInfo::REF_invokeStatic) {
			$assign(mtype, $nc(mtype)->insertParameterTypes(0, $$new($ClassArray, {this->this$0->implClass})));
		}
		visitMethodInsn(182, "java/lang/invoke/MethodHandle"_s, "invokeExact"_s, $($nc(mtype)->descriptorString()), false);
	} else {
		int32_t var$0 = invocationOpcode();
		$var($String, var$1, this->this$0->implMethodClassName);
		$var($String, var$2, this->this$0->implMethodName);
		$var($String, var$3, this->this$0->implMethodDesc);
		visitMethodInsn(var$0, var$1, var$2, var$3, $nc(this->this$0->implClass)->isInterface());
	}
	$Class* implReturnClass = $cast($Class, $nc(this->this$0->implMethodType)->returnType());
	$Class* samReturnClass = $cast($Class, $nc(methodType)->returnType());
	convertType(implReturnClass, samReturnClass, samReturnClass);
	visitInsn($InnerClassLambdaMetafactory::getReturnOpcode(samReturnClass));
	visitMaxs(-1, -1);
	visitEnd();
}

void InnerClassLambdaMetafactory$ForwardingMethodGenerator::convertArgumentTypes($MethodType* samType) {
	int32_t lvIndex = 0;
	int32_t samParametersLength = $nc(samType)->parameterCount();
	int32_t captureArity = $nc(this->this$0->factoryType)->parameterCount();
	for (int32_t i = 0; i < samParametersLength; ++i) {
		$Class* argType = $cast($Class, samType->parameterType(i));
		visitVarInsn($InnerClassLambdaMetafactory::getLoadOpcode(argType), lvIndex + 1);
		lvIndex += $InnerClassLambdaMetafactory::getParameterSize(argType);
		$Class* var$0 = argType;
		$Class* var$1 = $cast($Class, $nc(this->this$0->implMethodType)->parameterType(captureArity + i));
		convertType(var$0, var$1, $($cast($Class, $nc(this->this$0->dynamicMethodType)->parameterType(i))));
	}
}

int32_t InnerClassLambdaMetafactory$ForwardingMethodGenerator::invocationOpcode() {

	int32_t var$0 = 0;
	switch (this->this$0->implKind) {
	case $MethodHandleInfo::REF_invokeStatic:
		{
			var$0 = 184;
			break;
		}
	case $MethodHandleInfo::REF_newInvokeSpecial:
		{
			var$0 = 183;
			break;
		}
	case $MethodHandleInfo::REF_invokeVirtual:
		{
			var$0 = 182;
			break;
		}
	case $MethodHandleInfo::REF_invokeInterface:
		{
			var$0 = 185;
			break;
		}
	case $MethodHandleInfo::REF_invokeSpecial:
		{
			var$0 = 183;
			break;
		}
	default:
		{
			$throwNew($InternalError, $$str({"Unexpected invocation kind: "_s, $$str(this->this$0->implKind)}));
		}
	}
	return var$0;
}

InnerClassLambdaMetafactory$ForwardingMethodGenerator::InnerClassLambdaMetafactory$ForwardingMethodGenerator() {
}

$Class* InnerClassLambdaMetafactory$ForwardingMethodGenerator::load$($String* name, bool initialize) {
	$loadClass(InnerClassLambdaMetafactory$ForwardingMethodGenerator, name, initialize, &_InnerClassLambdaMetafactory$ForwardingMethodGenerator_ClassInfo_, allocate$InnerClassLambdaMetafactory$ForwardingMethodGenerator);
	return class$;
}

$Class* InnerClassLambdaMetafactory$ForwardingMethodGenerator::class$ = nullptr;

		} // invoke
	} // lang
} // java