#include <java/lang/invoke/MethodHandleImpl$AsVarargsCollector.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayStoreException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/constant/Constable.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/WrongMethodTypeException.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MAX_SAFE

using $ConstableArray = $Array<::java::lang::constant::Constable>;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constable = ::java::lang::constant::Constable;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;
using $WrongMethodTypeException = ::java::lang::invoke::WrongMethodTypeException;
using $1Array = ::java::lang::reflect::Array;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _MethodHandleImpl$AsVarargsCollector_FieldAnnotations_asCollectorCache[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _MethodHandleImpl$AsVarargsCollector_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleImpl$AsVarargsCollector, $assertionsDisabled)},
	{"target", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$AsVarargsCollector, target)},
	{"arrayType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MethodHandleImpl$AsVarargsCollector, arrayType)},
	{"asCollectorCache", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE, $field(MethodHandleImpl$AsVarargsCollector, asCollectorCache), _MethodHandleImpl$AsVarargsCollector_FieldAnnotations_asCollectorCache},
	{}
};

$MethodInfo _MethodHandleImpl$AsVarargsCollector_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;)V", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(MethodHandleImpl$AsVarargsCollector::*)($MethodHandle*,$Class*)>(&MethodHandleImpl$AsVarargsCollector::init$))},
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;)V", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(MethodHandleImpl$AsVarargsCollector::*)($MethodType*,$MethodHandle*,$Class*)>(&MethodHandleImpl$AsVarargsCollector::init$))},
	{"asFixedArity", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"asTypeUncached", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PROTECTED},
	{"invokeWithArguments", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.lang.Throwable"},
	{"isVarargsCollector", "()Z", nullptr, $PUBLIC},
	{"setVarargs", "(Ljava/lang/invoke/MemberName;)Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"viewAsTypeChecks", "(Ljava/lang/invoke/MethodType;Z)Z", nullptr, 0},
	{"withVarargs", "(Z)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MethodHandleImpl$AsVarargsCollector_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$AsVarargsCollector", "java.lang.invoke.MethodHandleImpl", "AsVarargsCollector", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodHandleImpl$AsVarargsCollector_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$AsVarargsCollector",
	"java.lang.invoke.DelegatingMethodHandle",
	nullptr,
	_MethodHandleImpl$AsVarargsCollector_FieldInfo_,
	_MethodHandleImpl$AsVarargsCollector_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$AsVarargsCollector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$AsVarargsCollector($Class* clazz) {
	return $of($alloc(MethodHandleImpl$AsVarargsCollector));
}

bool MethodHandleImpl$AsVarargsCollector::$assertionsDisabled = false;

void MethodHandleImpl$AsVarargsCollector::init$($MethodHandle* target, $Class* arrayType) {
	MethodHandleImpl$AsVarargsCollector::init$($($nc(target)->type()), target, arrayType);
}

void MethodHandleImpl$AsVarargsCollector::init$($MethodType* type, $MethodHandle* target, $Class* arrayType) {
	$DelegatingMethodHandle::init$(type, target);
	$set(this, target, target);
	$set(this, arrayType, arrayType);
}

bool MethodHandleImpl$AsVarargsCollector::isVarargsCollector() {
	return true;
}

$MethodHandle* MethodHandleImpl$AsVarargsCollector::getTarget() {
	return this->target;
}

$MethodHandle* MethodHandleImpl$AsVarargsCollector::asFixedArity() {
	return this->target;
}

$MethodHandle* MethodHandleImpl$AsVarargsCollector::setVarargs($MemberName* member) {
	if ($nc(member)->isVarargs()) {
		return this;
	}
	return asFixedArity();
}

$MethodHandle* MethodHandleImpl$AsVarargsCollector::withVarargs(bool makeVarargs) {
	if (makeVarargs) {
		return this;
	}
	return asFixedArity();
}

$MethodHandle* MethodHandleImpl$AsVarargsCollector::asTypeUncached($MethodType* newType) {
	$var($MethodType, type, this->type());
	int32_t collectArg = $nc(type)->parameterCount() - 1;
	int32_t newArity = $nc(newType)->parameterCount();
	if (newArity == collectArg + 1 && $nc($($cast($Class, type->parameterType(collectArg))))->isAssignableFrom($($cast($Class, newType->parameterType(collectArg))))) {
		return $assignField(this, asTypeCache, $nc($(asFixedArity()))->asType(newType));
	}
	$var($MethodHandle, acc, this->asCollectorCache);
	if (acc != nullptr && $nc($(acc->type()))->parameterCount() == newArity) {
		return $assignField(this, asTypeCache, acc->asType(newType));
	}
	int32_t arrayLength = newArity - collectArg;
	$var($MethodHandle, collector, nullptr);
	try {
		$assign(collector, $nc($(asFixedArity()))->asCollector(this->arrayType, arrayLength));
		if (!MethodHandleImpl$AsVarargsCollector::$assertionsDisabled && !($nc($($nc(collector)->type()))->parameterCount() == newArity)) {
			$throwNew($AssertionError, $of($$str({"newArity="_s, $$str(newArity), " but collector="_s, collector})));
		}
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, ex, $catch());
		$throwNew($WrongMethodTypeException, "cannot build collector"_s, ex);
	}
	$set(this, asCollectorCache, collector);
	return $assignField(this, asTypeCache, $nc(collector)->asType(newType));
}

bool MethodHandleImpl$AsVarargsCollector::viewAsTypeChecks($MethodType* newType, bool strict) {
	$DelegatingMethodHandle::viewAsTypeChecks(newType, true);
	if (strict) {
		return true;
	}
	if (!MethodHandleImpl$AsVarargsCollector::$assertionsDisabled && !($nc($nc($nc($(type()))->lastParameterType())->getComponentType())->isAssignableFrom($nc($nc(newType)->lastParameterType())->getComponentType()))) {
		$throwNew($AssertionError, $($of($Arrays::asList($$new($ConstableArray, {
			static_cast<$Constable*>(this),
			static_cast<$Constable*>(newType)
		})))));
	}
	return true;
}

$Object* MethodHandleImpl$AsVarargsCollector::invokeWithArguments($ObjectArray* arguments) {
	$var($MethodType, type, this->type());
	int32_t argc = 0;
	int32_t MAX_SAFE = 127;
	bool var$0 = arguments == nullptr || (argc = $nc(arguments)->length) <= MAX_SAFE;
	if (var$0 || argc < $nc(type)->parameterCount()) {
		return $of($DelegatingMethodHandle::invokeWithArguments(arguments));
	}
	int32_t uncollected = $nc(type)->parameterCount() - 1;
	$Class* elemType = $nc(this->arrayType)->getComponentType();
	int32_t collected = argc - uncollected;
	$load($Object);
	$var($Object, collArgs, (elemType == $Object::class$) ? $of($new($ObjectArray, collected)) : $1Array::newInstance(elemType, collected));
	if (!$nc(elemType)->isPrimitive()) {
		try {
			$System::arraycopy(arguments, uncollected, collArgs, 0, collected);
		} catch ($ArrayStoreException&) {
			$var($ArrayStoreException, ex, $catch());
			return $of($DelegatingMethodHandle::invokeWithArguments(arguments));
		}
	} else {
		$var($MethodHandle, arraySetter, $MethodHandles::arrayElementSetter(this->arrayType));
		try {
			for (int32_t i = 0; i < collected; ++i) {
				$nc(arraySetter)->invoke($$new($ObjectArray, {collArgs, $$of(i), $nc(arguments)->get(uncollected + i)}));
			}
		} catch ($WrongMethodTypeException&) {
			$var($RuntimeException, ex, $catch());
			return $of($DelegatingMethodHandle::invokeWithArguments(arguments));
		} catch ($ClassCastException&) {
			$var($RuntimeException, ex, $catch());
			return $of($DelegatingMethodHandle::invokeWithArguments(arguments));
		}
	}
	$var($ObjectArray, newArgs, $new($ObjectArray, uncollected + 1));
	$System::arraycopy(arguments, 0, newArgs, 0, uncollected);
	newArgs->set(uncollected, collArgs);
	return $of($nc($(asFixedArity()))->invokeWithArguments(newArgs));
}

void clinit$MethodHandleImpl$AsVarargsCollector($Class* class$) {
	$load($MethodHandleImpl);
	MethodHandleImpl$AsVarargsCollector::$assertionsDisabled = !$MethodHandleImpl::class$->desiredAssertionStatus();
}

MethodHandleImpl$AsVarargsCollector::MethodHandleImpl$AsVarargsCollector() {
}

$Class* MethodHandleImpl$AsVarargsCollector::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$AsVarargsCollector, name, initialize, &_MethodHandleImpl$AsVarargsCollector_ClassInfo_, clinit$MethodHandleImpl$AsVarargsCollector, allocate$MethodHandleImpl$AsVarargsCollector);
	return class$;
}

$Class* MethodHandleImpl$AsVarargsCollector::class$ = nullptr;

		} // invoke
	} // lang
} // java