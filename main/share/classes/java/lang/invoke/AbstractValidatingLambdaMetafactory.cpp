#include <java/lang/invoke/AbstractValidatingLambdaMetafactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaConversionException.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleInfo.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef TYPE

using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaConversionException = ::java::lang::invoke::LambdaConversionException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleInfo = ::java::lang::invoke::MethodHandleInfo;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _AbstractValidatingLambdaMetafactory_FieldInfo_[] = {
	{"caller", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, caller)},
	{"targetClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(AbstractValidatingLambdaMetafactory, targetClass)},
	{"factoryType", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, factoryType)},
	{"interfaceClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(AbstractValidatingLambdaMetafactory, interfaceClass)},
	{"interfaceMethodName", "Ljava/lang/String;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, interfaceMethodName)},
	{"interfaceMethodType", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, interfaceMethodType)},
	{"implementation", "Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, implementation)},
	{"implMethodType", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, implMethodType)},
	{"implInfo", "Ljava/lang/invoke/MethodHandleInfo;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, implInfo)},
	{"implKind", "I", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, implKind)},
	{"implIsInstanceMethod", "Z", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, implIsInstanceMethod)},
	{"implClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(AbstractValidatingLambdaMetafactory, implClass)},
	{"dynamicMethodType", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, dynamicMethodType)},
	{"isSerializable", "Z", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, isSerializable)},
	{"altInterfaces", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $FINAL, $field(AbstractValidatingLambdaMetafactory, altInterfaces)},
	{"altMethods", "[Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(AbstractValidatingLambdaMetafactory, altMethods)},
	{}
};

$MethodInfo _AbstractValidatingLambdaMetafactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MethodType;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Z[Ljava/lang/Class;[Ljava/lang/invoke/MethodType;)V", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MethodType;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Z[Ljava/lang/Class<*>;[Ljava/lang/invoke/MethodType;)V", 0, $method(static_cast<void(AbstractValidatingLambdaMetafactory::*)($MethodHandles$Lookup*,$MethodType*,$String*,$MethodType*,$MethodHandle*,$MethodType*,bool,$ClassArray*,$MethodTypeArray*)>(&AbstractValidatingLambdaMetafactory::init$)), "java.lang.invoke.LambdaConversionException"},
	{"buildCallSite", "()Ljava/lang/invoke/CallSite;", nullptr, $ABSTRACT, nullptr, "java.lang.invoke.LambdaConversionException"},
	{"checkDescriptor", "(Ljava/lang/invoke/MethodType;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractValidatingLambdaMetafactory::*)($MethodType*)>(&AbstractValidatingLambdaMetafactory::checkDescriptor)), "java.lang.invoke.LambdaConversionException"},
	{"isAdaptableTo", "(Ljava/lang/Class;Ljava/lang/Class;Z)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Z)Z", $PRIVATE, $method(static_cast<bool(AbstractValidatingLambdaMetafactory::*)($Class*,$Class*,bool)>(&AbstractValidatingLambdaMetafactory::isAdaptableTo))},
	{"isAdaptableToAsReturn", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PRIVATE, $method(static_cast<bool(AbstractValidatingLambdaMetafactory::*)($Class*,$Class*)>(&AbstractValidatingLambdaMetafactory::isAdaptableToAsReturn))},
	{"isAdaptableToAsReturnStrict", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PRIVATE, $method(static_cast<bool(AbstractValidatingLambdaMetafactory::*)($Class*,$Class*)>(&AbstractValidatingLambdaMetafactory::isAdaptableToAsReturnStrict))},
	{"validateMetafactoryArgs", "()V", nullptr, 0, nullptr, "java.lang.invoke.LambdaConversionException"},
	{}
};

$ClassInfo _AbstractValidatingLambdaMetafactory_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.AbstractValidatingLambdaMetafactory",
	"java.lang.Object",
	nullptr,
	_AbstractValidatingLambdaMetafactory_FieldInfo_,
	_AbstractValidatingLambdaMetafactory_MethodInfo_
};

$Object* allocate$AbstractValidatingLambdaMetafactory($Class* clazz) {
	return $of($alloc(AbstractValidatingLambdaMetafactory));
}

void AbstractValidatingLambdaMetafactory::init$($MethodHandles$Lookup* caller, $MethodType* factoryType, $String* interfaceMethodName, $MethodType* interfaceMethodType, $MethodHandle* implementation, $MethodType* dynamicMethodType, bool isSerializable, $ClassArray* altInterfaces, $MethodTypeArray* altMethods) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(caller)->hasFullPrivilegeAccess()) {
		$throwNew($LambdaConversionException, $($String::format("Invalid caller: %s"_s, $$new($ObjectArray, {$($of($nc(caller->lookupClass())->getName()))}))));
	}
	$set(this, caller, caller);
	$set(this, targetClass, $nc(caller)->lookupClass());
	$set(this, factoryType, factoryType);
	$set(this, interfaceClass, $cast($Class, $nc(factoryType)->returnType()));
	$set(this, interfaceMethodName, interfaceMethodName);
	$set(this, interfaceMethodType, interfaceMethodType);
	$set(this, implementation, implementation);
	$set(this, implMethodType, $nc(implementation)->type());
	try {
		$set(this, implInfo, caller->revealDirect(implementation));
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($LambdaConversionException, $$str({implementation, " is not direct or cannot be cracked"_s}));
	}
	switch ($nc(this->implInfo)->getReferenceKind()) {
	case 5:
		{}
	case 9:
		{
			$set(this, implClass, $cast($Class, $nc(this->implMethodType)->parameterType(0)));
			this->implKind = $nc(this->implClass)->isInterface() ? 9 : 5;
			this->implIsInstanceMethod = true;
			break;
		}
	case 7:
		{
			$set(this, implClass, $nc(this->implInfo)->getDeclaringClass());
			this->implIsInstanceMethod = true;
			if (this->targetClass == this->implClass) {
				this->implKind = $nc(this->implClass)->isInterface() ? 9 : 5;
			} else {
				this->implKind = 7;
			}
			break;
		}
	case 6:
		{}
	case 8:
		{
			$set(this, implClass, $nc(this->implInfo)->getDeclaringClass());
			this->implKind = $nc(this->implInfo)->getReferenceKind();
			this->implIsInstanceMethod = false;
			break;
		}
	default:
		{
			$throwNew($LambdaConversionException, $($String::format("Unsupported MethodHandle kind: %s"_s, $$new($ObjectArray, {$of(this->implInfo)}))));
		}
	}
	$set(this, dynamicMethodType, dynamicMethodType);
	this->isSerializable = isSerializable;
	$set(this, altInterfaces, altInterfaces);
	$set(this, altMethods, altMethods);
	bool var$5 = $nc(interfaceMethodName)->isEmpty();
	bool var$4 = var$5 || $nc(interfaceMethodName)->indexOf((int32_t)u'.') >= 0;
	bool var$3 = var$4 || $nc(interfaceMethodName)->indexOf((int32_t)u';') >= 0;
	bool var$2 = var$3 || $nc(interfaceMethodName)->indexOf((int32_t)u'[') >= 0;
	bool var$1 = var$2 || $nc(interfaceMethodName)->indexOf((int32_t)u'/') >= 0;
	bool var$0 = var$1 || $nc(interfaceMethodName)->indexOf((int32_t)u'<') >= 0;
	if (var$0 || $nc(interfaceMethodName)->indexOf((int32_t)u'>') >= 0) {
		$throwNew($LambdaConversionException, $($String::format("Method name \'%s\' is not legal"_s, $$new($ObjectArray, {$of(interfaceMethodName)}))));
	}
	if (!$nc(this->interfaceClass)->isInterface()) {
		$throwNew($LambdaConversionException, $($String::format("%s is not an interface"_s, $$new($ObjectArray, {$($of($nc(this->interfaceClass)->getName()))}))));
	}
	{
		$var($ClassArray, arr$, altInterfaces);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* c = arr$->get(i$);
			{
				if (!$nc(c)->isInterface()) {
					$throwNew($LambdaConversionException, $($String::format("%s is not an interface"_s, $$new($ObjectArray, {$($of(c->getName()))}))));
				}
			}
		}
	}
}

void AbstractValidatingLambdaMetafactory::validateMetafactoryArgs() {
	$useLocalCurrentObjectStackCache();
	int32_t implArity = $nc(this->implMethodType)->parameterCount();
	int32_t capturedArity = $nc(this->factoryType)->parameterCount();
	int32_t samArity = $nc(this->interfaceMethodType)->parameterCount();
	int32_t dynamicArity = $nc(this->dynamicMethodType)->parameterCount();
	if (implArity != capturedArity + samArity) {
		$throwNew($LambdaConversionException, $($String::format("Incorrect number of parameters for %s method %s; %d captured parameters, %d functional interface method parameters, %d implementation parameters"_s, $$new($ObjectArray, {
			this->implIsInstanceMethod ? $of("instance"_s) : $of("static"_s),
			$of(this->implInfo),
			$($of($Integer::valueOf(capturedArity))),
			$($of($Integer::valueOf(samArity))),
			$($of($Integer::valueOf(implArity)))
		}))));
	}
	if (dynamicArity != samArity) {
		$throwNew($LambdaConversionException, $($String::format("Incorrect number of parameters for %s method %s; %d dynamic parameters, %d functional interface method parameters"_s, $$new($ObjectArray, {
			this->implIsInstanceMethod ? $of("instance"_s) : $of("static"_s),
			$of(this->implInfo),
			$($of($Integer::valueOf(dynamicArity))),
			$($of($Integer::valueOf(samArity)))
		}))));
	}
	{
		$var($MethodTypeArray, arr$, this->altMethods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MethodType, bridgeMT, arr$->get(i$));
			{
				if ($nc(bridgeMT)->parameterCount() != samArity) {
					$throwNew($LambdaConversionException, $($String::format("Incorrect number of parameters for bridge signature %s; incompatible with %s"_s, $$new($ObjectArray, {
						$of(bridgeMT),
						$of(this->interfaceMethodType)
					}))));
				}
			}
		}
	}
	int32_t capturedStart = 0;
	int32_t samStart = 0;
	if (this->implIsInstanceMethod) {
		$Class* receiverClass = nullptr;
		if (capturedArity == 0) {
			capturedStart = 0;
			samStart = 1;
			receiverClass = $cast($Class, $nc(this->dynamicMethodType)->parameterType(0));
		} else {
			capturedStart = 1;
			samStart = capturedArity;
			receiverClass = $cast($Class, $nc(this->factoryType)->parameterType(0));
		}
		if (!$nc(this->implClass)->isAssignableFrom(receiverClass)) {
			$throwNew($LambdaConversionException, $($String::format("Invalid receiver type %s; not a subtype of implementation type %s"_s, $$new($ObjectArray, {
				$of(receiverClass),
				$of(this->implClass)
			}))));
		}
	} else {
		capturedStart = 0;
		samStart = capturedArity;
	}
	for (int32_t i = capturedStart; i < capturedArity; ++i) {
		$Class* implParamType = $cast($Class, $nc(this->implMethodType)->parameterType(i));
		$Class* capturedParamType = $cast($Class, $nc(this->factoryType)->parameterType(i));
		if (!$nc($of(capturedParamType))->equals(implParamType)) {
			$throwNew($LambdaConversionException, $($String::format("Type mismatch in captured lambda parameter %d: expecting %s, found %s"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$of(capturedParamType),
				$of(implParamType)
			}))));
		}
	}
	for (int32_t i = samStart; i < implArity; ++i) {
		$Class* implParamType = $cast($Class, $nc(this->implMethodType)->parameterType(i));
		$Class* dynamicParamType = $cast($Class, $nc(this->dynamicMethodType)->parameterType(i - capturedArity));
		if (!isAdaptableTo(dynamicParamType, implParamType, true)) {
			$throwNew($LambdaConversionException, $($String::format("Type mismatch for lambda argument %d: %s is not convertible to %s"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$of(dynamicParamType),
				$of(implParamType)
			}))));
		}
	}
	$Class* expectedType = $cast($Class, $nc(this->dynamicMethodType)->returnType());
	$Class* actualReturnType = $cast($Class, $nc(this->implMethodType)->returnType());
	if (!isAdaptableToAsReturn(actualReturnType, expectedType)) {
		$throwNew($LambdaConversionException, $($String::format("Type mismatch for lambda return: %s is not convertible to %s"_s, $$new($ObjectArray, {
			$of(actualReturnType),
			$of(expectedType)
		}))));
	}
	checkDescriptor(this->interfaceMethodType);
	{
		$var($MethodTypeArray, arr$, this->altMethods);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MethodType, bridgeMT, arr$->get(i$));
			{
				checkDescriptor(bridgeMT);
			}
		}
	}
}

void AbstractValidatingLambdaMetafactory::checkDescriptor($MethodType* descriptor) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->dynamicMethodType)->parameterCount(); ++i) {
		$Class* dynamicParamType = $cast($Class, $nc(this->dynamicMethodType)->parameterType(i));
		$Class* descriptorParamType = $cast($Class, $nc(descriptor)->parameterType(i));
		if (!$nc(descriptorParamType)->isAssignableFrom(dynamicParamType)) {
			$var($String, msg, $String::format("Type mismatch for dynamic parameter %d: %s is not a subtype of %s"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$of(dynamicParamType),
				$of(descriptorParamType)
			})));
			$throwNew($LambdaConversionException, msg);
		}
	}
	$Class* dynamicReturnType = $cast($Class, $nc(this->dynamicMethodType)->returnType());
	$Class* descriptorReturnType = $cast($Class, $nc(descriptor)->returnType());
	if (!isAdaptableToAsReturnStrict(dynamicReturnType, descriptorReturnType)) {
		$var($String, msg, $String::format("Type mismatch for lambda expected return: %s is not convertible to %s"_s, $$new($ObjectArray, {
			$of(dynamicReturnType),
			$of(descriptorReturnType)
		})));
		$throwNew($LambdaConversionException, msg);
	}
}

bool AbstractValidatingLambdaMetafactory::isAdaptableTo($Class* fromType, $Class* toType, bool strict) {
	if ($nc($of(fromType))->equals(toType)) {
		return true;
	}
	if ($nc(fromType)->isPrimitive()) {
		$Wrapper* wfrom = $Wrapper::forPrimitiveType(fromType);
		if ($nc(toType)->isPrimitive()) {
			$Wrapper* wto = $Wrapper::forPrimitiveType(toType);
			return $nc(wto)->isConvertibleFrom(wfrom);
		} else {
			return toType->isAssignableFrom($nc(wfrom)->wrapperType());
		}
	} else if ($nc(toType)->isPrimitive()) {
		$Wrapper* wfrom = nullptr;
		bool var$0 = $Wrapper::isWrapperType(fromType);
		if (var$0 && $nc($nc((wfrom = $Wrapper::forWrapperType(fromType)))->primitiveType())->isPrimitive()) {
			$Wrapper* wto = $Wrapper::forPrimitiveType(toType);
			return $nc(wto)->isConvertibleFrom(wfrom);
		} else {
			return !strict;
		}
	} else {
		return !strict || toType->isAssignableFrom(fromType);
	}
}

bool AbstractValidatingLambdaMetafactory::isAdaptableToAsReturn($Class* fromType, $Class* toType) {
	$init($Void);
	bool var$0 = $nc($of(toType))->equals($Void::TYPE);
	if (!var$0) {
		bool var$1 = !$nc($of(fromType))->equals($Void::TYPE);
		var$0 = var$1 && isAdaptableTo(fromType, toType, false);
	}
	return var$0;
}

bool AbstractValidatingLambdaMetafactory::isAdaptableToAsReturnStrict($Class* fromType, $Class* toType) {
	$init($Void);
	bool var$0 = $nc($of(fromType))->equals($Void::TYPE);
	if (var$0 || $nc($of(toType))->equals($Void::TYPE)) {
		return $nc($of(fromType))->equals(toType);
	} else {
		return isAdaptableTo(fromType, toType, true);
	}
}

AbstractValidatingLambdaMetafactory::AbstractValidatingLambdaMetafactory() {
}

$Class* AbstractValidatingLambdaMetafactory::load$($String* name, bool initialize) {
	$loadClass(AbstractValidatingLambdaMetafactory, name, initialize, &_AbstractValidatingLambdaMetafactory_ClassInfo_, allocate$AbstractValidatingLambdaMetafactory);
	return class$;
}

$Class* AbstractValidatingLambdaMetafactory::class$ = nullptr;

		} // invoke
	} // lang
} // java