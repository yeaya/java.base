#include <java/lang/invoke/CallSite.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/BootstrapMethodError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/BootstrapMethodInvoker.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/ConstantCallSite.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleNatives$CallSiteContext.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/WrongMethodTypeException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef THROW_UCS
#undef IMPL_LOOKUP
#undef MH_UNINIT_CS
#undef TARGET_OFFSET
#undef UNSAFE
#undef GET_TARGET

using $AssertionError = ::java::lang::AssertionError;
using $BootstrapMethodError = ::java::lang::BootstrapMethodError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $BootstrapMethodInvoker = ::java::lang::invoke::BootstrapMethodInvoker;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $ConstantCallSite = ::java::lang::invoke::ConstantCallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodHandleNatives$CallSiteContext = ::java::lang::invoke::MethodHandleNatives$CallSiteContext;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $WrongMethodTypeException = ::java::lang::invoke::WrongMethodTypeException;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _CallSite_FieldAnnotations_GET_TARGET[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _CallSite_FieldAnnotations_THROW_UCS[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _CallSite_FieldAnnotations_TARGET_OFFSET[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _CallSite_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CallSite, $assertionsDisabled)},
	{"target", "Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(CallSite, target)},
	{"context", "Ljava/lang/invoke/MethodHandleNatives$CallSiteContext;", nullptr, $PRIVATE | $FINAL, $field(CallSite, context)},
	{"GET_TARGET", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(CallSite, GET_TARGET), _CallSite_FieldAnnotations_GET_TARGET},
	{"THROW_UCS", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticField(CallSite, THROW_UCS), _CallSite_FieldAnnotations_THROW_UCS},
	{"TARGET_OFFSET", "J", nullptr, $PRIVATE | $STATIC, $staticField(CallSite, TARGET_OFFSET), _CallSite_FieldAnnotations_TARGET_OFFSET},
	{}
};

$MethodInfo _CallSite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;)V", nullptr, 0, $method(static_cast<void(CallSite::*)($MethodType*)>(&CallSite::init$))},
	{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(static_cast<void(CallSite::*)($MethodHandle*)>(&CallSite::init$))},
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(static_cast<void(CallSite::*)($MethodType*,$MethodHandle*)>(&CallSite::init$)), "java.lang.Throwable"},
	{"checkTargetChange", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE, $method(static_cast<void(CallSite::*)($MethodHandle*)>(&CallSite::checkTargetChange))},
	{"dynamicInvoker", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTargetHandle", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&CallSite::getTargetHandle))},
	{"getTargetOffset", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&CallSite::getTargetOffset))},
	{"getTargetVolatile", "()Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $method(static_cast<$MethodHandle*(CallSite::*)()>(&CallSite::getTargetVolatile))},
	{"makeDynamicInvoker", "()Ljava/lang/invoke/MethodHandle;", nullptr, 0},
	{"makeSite", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/invoke/CallSite;", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Object;Ljava/lang/Class<*>;)Ljava/lang/invoke/CallSite;", $STATIC, $method(static_cast<CallSite*(*)($MethodHandle*,$String*,$MethodType*,Object$*,$Class*)>(&CallSite::makeSite))},
	{"makeUninitializedCallSite", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE, $method(static_cast<$MethodHandle*(CallSite::*)($MethodType*)>(&CallSite::makeUninitializedCallSite))},
	{"setTarget", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTargetNormal", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $FINAL, $method(static_cast<void(CallSite::*)($MethodHandle*)>(&CallSite::setTargetNormal))},
	{"setTargetVolatile", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $FINAL, $method(static_cast<void(CallSite::*)($MethodHandle*)>(&CallSite::setTargetVolatile))},
	{"type", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC},
	{"uninitializedCallSite", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($ObjectArray*)>(&CallSite::uninitializedCallSite))},
	{"uninitializedCallSiteHandle", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&CallSite::uninitializedCallSiteHandle))},
	{"wrongTargetType", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/WrongMethodTypeException;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$WrongMethodTypeException*(*)($MethodHandle*,$MethodType*)>(&CallSite::wrongTargetType))},
	{}
};

$ClassInfo _CallSite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.CallSite",
	"java.lang.Object",
	nullptr,
	_CallSite_FieldInfo_,
	_CallSite_MethodInfo_
};

$Object* allocate$CallSite($Class* clazz) {
	return $of($alloc(CallSite));
}

bool CallSite::$assertionsDisabled = false;
$MethodHandle* CallSite::GET_TARGET = nullptr;
$MethodHandle* CallSite::THROW_UCS = nullptr;
int64_t CallSite::TARGET_OFFSET = 0;

void CallSite::init$($MethodType* type) {
	$set(this, context, $MethodHandleNatives$CallSiteContext::make(this));
	$set(this, target, makeUninitializedCallSite(type));
}

void CallSite::init$($MethodHandle* target) {
	$set(this, context, $MethodHandleNatives$CallSiteContext::make(this));
	$nc(target)->type();
	$set(this, target, target);
}

void CallSite::init$($MethodType* targetType, $MethodHandle* createTargetHook) {
	CallSite::init$(targetType);
	$var($ConstantCallSite, selfCCS, $cast($ConstantCallSite, this));
	$var($MethodHandle, boundTarget, $cast($MethodHandle, $nc(createTargetHook)->invokeWithArguments($$new($ObjectArray, {$of(selfCCS)}))));
	setTargetNormal(boundTarget);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->storeStoreFence();
}

$MethodType* CallSite::type() {
	return $nc(this->target)->type();
}

void CallSite::checkTargetChange($MethodHandle* newTarget) {
	$var($MethodType, oldType, $nc(this->target)->type());
	$var($MethodType, newType, $nc(newTarget)->type());
	if (newType != oldType) {
		$throw($(wrongTargetType(newTarget, oldType)));
	}
}

$WrongMethodTypeException* CallSite::wrongTargetType($MethodHandle* target, $MethodType* type) {
	$init(CallSite);
	return $new($WrongMethodTypeException, $$str({$($String::valueOf($of(target))), " should be of type "_s, type}));
}

$MethodHandle* CallSite::makeDynamicInvoker() {
	$var($MethodHandle, getTarget, $nc($(getTargetHandle()))->bindArgumentL(0, this));
	$var($MethodHandle, invoker, $MethodHandles::exactInvoker($(this->type())));
	return $MethodHandles::foldArguments(invoker, getTarget);
}

$MethodHandle* CallSite::getTargetHandle() {
	$init(CallSite);
	$var($MethodHandle, handle, CallSite::GET_TARGET);
	if (handle != nullptr) {
		return handle;
	}
	try {
		$init($MethodHandles$Lookup);
		$load($MethodHandle);
		return $assignStatic(CallSite::GET_TARGET, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findVirtual(CallSite::class$, "getTarget"_s, $($MethodType::methodType($MethodHandle::class$))));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(e))));
	}
	$shouldNotReachHere();
}

$MethodHandle* CallSite::uninitializedCallSiteHandle() {
	$init(CallSite);
	$var($MethodHandle, handle, CallSite::THROW_UCS);
	if (handle != nullptr) {
		return handle;
	}
	try {
		$init($MethodHandles$Lookup);
		$load($Object);
		$load($ObjectArray);
		return $assignStatic(CallSite::THROW_UCS, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findStatic(CallSite::class$, "uninitializedCallSite"_s, $($MethodType::methodType($Object::class$, $getClass($ObjectArray)))));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(e))));
	}
	$shouldNotReachHere();
}

$Object* CallSite::uninitializedCallSite($ObjectArray* ignore) {
	$init(CallSite);
	$throwNew($IllegalStateException, "uninitialized call site"_s);
	$shouldNotReachHere();
}

$MethodHandle* CallSite::makeUninitializedCallSite($MethodType* targetType) {
	$var($MethodType, basicType, $nc(targetType)->basicType());
	$var($MethodHandle, invoker, $nc($($nc(basicType)->form()))->cachedMethodHandle($MethodTypeForm::MH_UNINIT_CS));
	if (invoker == nullptr) {
		$assign(invoker, $nc($(uninitializedCallSiteHandle()))->asType(basicType));
		$assign(invoker, $nc($(basicType->form()))->setCachedMethodHandle($MethodTypeForm::MH_UNINIT_CS, invoker));
	}
	return $nc(invoker)->viewAsType(targetType, false);
}

int64_t CallSite::getTargetOffset() {
	$init(CallSite);
	int64_t offset = CallSite::TARGET_OFFSET;
	if (offset > 0) {
		return offset;
	}
	$init($MethodHandleStatics);
	offset = (CallSite::TARGET_OFFSET = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset(CallSite::class$, "target"_s));
	if (!CallSite::$assertionsDisabled && !(offset > 0)) {
		$throwNew($AssertionError);
	}
	return offset;
}

void CallSite::setTargetNormal($MethodHandle* newTarget) {
	checkTargetChange(newTarget);
	$MethodHandleNatives::setCallSiteTargetNormal(this, newTarget);
}

$MethodHandle* CallSite::getTargetVolatile() {
	$init($MethodHandleStatics);
	return $cast($MethodHandle, $nc($MethodHandleStatics::UNSAFE)->getReferenceVolatile(this, getTargetOffset()));
}

void CallSite::setTargetVolatile($MethodHandle* newTarget) {
	checkTargetChange(newTarget);
	$MethodHandleNatives::setCallSiteTargetVolatile(this, newTarget);
}

CallSite* CallSite::makeSite($MethodHandle* bootstrapMethod, $String* name, $MethodType* type, Object$* info, $Class* callerClass) {
	$init(CallSite);
	$var(CallSite, site, nullptr);
	try {
		$var($Object, binding, $BootstrapMethodInvoker::invoke(CallSite::class$, bootstrapMethod, name, type, info, callerClass));
		if ($instanceOf(CallSite, binding)) {
			$assign(site, $cast(CallSite, binding));
		} else {
			$throwNew($ClassCastException, "CallSite bootstrap method failed to produce an instance of CallSite"_s);
		}
		if (!$nc($($nc($($nc(site)->getTarget()))->type()))->equals($of(type))) {
			$throw($(wrongTargetType($(site->getTarget()), type)));
		}
	} catch ($Error&) {
		$var($Error, e, $catch());
		$throw(e);
	} catch ($Throwable&) {
		$var($Throwable, ex, $catch());
		$throwNew($BootstrapMethodError, "CallSite bootstrap method initialization exception"_s, ex);
	}
	return site;
}

void clinit$CallSite($Class* class$) {
	CallSite::$assertionsDisabled = !CallSite::class$->desiredAssertionStatus();
}

CallSite::CallSite() {
}

$Class* CallSite::load$($String* name, bool initialize) {
	$loadClass(CallSite, name, initialize, &_CallSite_ClassInfo_, clinit$CallSite, allocate$CallSite);
	return class$;
}

$Class* CallSite::class$ = nullptr;

		} // invoke
	} // lang
} // java