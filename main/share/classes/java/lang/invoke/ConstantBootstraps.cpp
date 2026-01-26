#include <java/lang/invoke/ConstantBootstraps.h>

#include <java/lang/AssertionError.h>
#include <java/lang/BootstrapMethodError.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Enum.h>
#include <java/lang/Error.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/InternalError.h>
#include <java/lang/LinkageError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/BootstrapMethodInvoker.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/Objects.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef TYPE

using $AssertionError = ::java::lang::AssertionError;
using $BootstrapMethodError = ::java::lang::BootstrapMethodError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $InternalError = ::java::lang::InternalError;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $BootstrapMethodInvoker = ::java::lang::invoke::BootstrapMethodInvoker;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $Objects = ::java::util::Objects;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _ConstantBootstraps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ConstantBootstraps, init$, void)},
	{"arrayVarHandle", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<Ljava/lang/invoke/VarHandle;>;Ljava/lang/Class<*>;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, arrayVarHandle, $VarHandle*, $MethodHandles$Lookup*, $String*, $Class*, $Class*)},
	{"enumConstant", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Enum;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<TE;>;)TE;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, enumConstant, $Enum*, $MethodHandles$Lookup*, $String*, $Class*)},
	{"explicitCast", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/Object;)Ljava/lang/Object;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, explicitCast, $Object*, $MethodHandles$Lookup*, $String*, $Class*, Object$*), "java.lang.ClassCastException"},
	{"fieldVarHandle", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<Ljava/lang/invoke/VarHandle;>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, fieldVarHandle, $VarHandle*, $MethodHandles$Lookup*, $String*, $Class*, $Class*, $Class*)},
	{"getStaticFinal", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, getStaticFinal, $Object*, $MethodHandles$Lookup*, $String*, $Class*, $Class*)},
	{"getStaticFinal", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, getStaticFinal, $Object*, $MethodHandles$Lookup*, $String*, $Class*)},
	{"invoke", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;[Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;[Ljava/lang/Object;)Ljava/lang/Object;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ConstantBootstraps, invoke, $Object*, $MethodHandles$Lookup*, $String*, $Class*, $MethodHandle*, $ObjectArray*), "java.lang.Throwable"},
	{"makeConstant", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Class<*>;)Ljava/lang/Object;", $STATIC, $staticMethod(ConstantBootstraps, makeConstant, $Object*, $MethodHandle*, $String*, $Class*, Object$*, $Class*)},
	{"nullConstant", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, nullConstant, $Object*, $MethodHandles$Lookup*, $String*, $Class*)},
	{"primitiveClass", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, primitiveClass, $Class*, $MethodHandles$Lookup*, $String*, $Class*)},
	{"staticFieldVarHandle", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<Ljava/lang/invoke/VarHandle;>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $STATIC, $staticMethod(ConstantBootstraps, staticFieldVarHandle, $VarHandle*, $MethodHandles$Lookup*, $String*, $Class*, $Class*, $Class*)},
	{"validateClassAccess", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/Class;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/Class<TT;>;)Ljava/lang/Class<TT;>;", $PRIVATE | $STATIC, $staticMethod(ConstantBootstraps, validateClassAccess, $Class*, $MethodHandles$Lookup*, $Class*)},
	{}
};

$ClassInfo _ConstantBootstraps_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.invoke.ConstantBootstraps",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ConstantBootstraps_MethodInfo_
};

$Object* allocate$ConstantBootstraps($Class* clazz) {
	return $of($alloc(ConstantBootstraps));
}

void ConstantBootstraps::init$() {
	$throwNew($AssertionError);
}

$Object* ConstantBootstraps::makeConstant($MethodHandle* bootstrapMethod, $String* name, $Class* type, Object$* info, $Class* callerClass) {
	$useLocalCurrentObjectStackCache();
	$var($MethodType, mt, $nc(bootstrapMethod)->type());
	bool var$0 = $nc(mt)->parameterCount() < 2;
	$load($MethodHandles$Lookup);
	if (var$0 || !$MethodHandles$Lookup::class$->isAssignableFrom($($cast($Class, $nc(mt)->parameterType(0))))) {
		$throwNew($BootstrapMethodError, $$str({"Invalid bootstrap method declared for resolving a dynamic constant: "_s, bootstrapMethod}));
	}
	return $of($BootstrapMethodInvoker::invoke(type, bootstrapMethod, name, type, info, callerClass));
}

$Object* ConstantBootstraps::nullConstant($MethodHandles$Lookup* lookup, $String* name, $Class* type) {
	$useLocalCurrentObjectStackCache();
	if ($nc(($cast($Class, $Objects::requireNonNull(type))))->isPrimitive()) {
		$throwNew($IllegalArgumentException, $($String::format("not reference: %s"_s, $$new($ObjectArray, {$of(type)}))));
	}
	return $of(nullptr);
}

$Class* ConstantBootstraps::primitiveClass($MethodHandles$Lookup* lookup, $String* name, $Class* type) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(type);
	if (type != $Class::class$) {
		$throwNew($IllegalArgumentException);
	}
	if (name->length() != 1) {
		$throwNew($IllegalArgumentException, $($String::format("not primitive: %s"_s, $$new($ObjectArray, {$of(name)}))));
	}
	return $nc($($Wrapper::forPrimitiveType(name->charAt(0))))->primitiveType();
}

$Enum* ConstantBootstraps::enumConstant($MethodHandles$Lookup* lookup, $String* name, $Class* type) {
	$Objects::requireNonNull(lookup);
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(type);
	validateClassAccess(lookup, type);
	return $Enum::valueOf(type, name);
}

$Object* ConstantBootstraps::getStaticFinal($MethodHandles$Lookup* lookup, $String* name, $Class* type, $Class* declaringClass) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(lookup);
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(type);
	$Objects::requireNonNull(declaringClass);
	$var($MethodHandle, mh, nullptr);
	try {
		$assign(mh, lookup->findStaticGetter(declaringClass, name, type));
		$var($MemberName, member, $nc(mh)->internalMemberName());
		if (!$nc(member)->isFinal()) {
			$throwNew($IncompatibleClassChangeError, $$str({"not a final field: "_s, name}));
		}
	} catch ($ReflectiveOperationException& ex) {
		$throw($($MethodHandleNatives::mapLookupExceptionToError(ex)));
	}
	try {
		return $of($nc(mh)->invoke($$new($ObjectArray, 0)));
	} catch ($RuntimeException& e) {
		$throw(e);
	} catch ($Error& e) {
		$throw(e);
	} catch ($Throwable& e) {
		$throwNew($LinkageError, "Unexpected throwable"_s, e);
	}
	$shouldNotReachHere();
}

$Object* ConstantBootstraps::getStaticFinal($MethodHandles$Lookup* lookup, $String* name, $Class* type) {
	$Objects::requireNonNull(type);
	$Class* declaring = type->isPrimitive() ? $nc($($Wrapper::forPrimitiveType(type)))->wrapperType() : type;
	return $of(getStaticFinal(lookup, name, type, declaring));
}

$Object* ConstantBootstraps::invoke($MethodHandles$Lookup* lookup, $String* name, $Class* type, $MethodHandle* handle$renamed, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($MethodHandle, handle, handle$renamed);
	$Objects::requireNonNull(type);
	$Objects::requireNonNull(handle);
	$Objects::requireNonNull(args);
	if (type != $cast($Class, $nc($(handle->type()))->returnType())) {
		$assign(handle, $nc($(handle->asType($($nc($(handle->type()))->changeReturnType(type)))))->withVarargs(handle->isVarargsCollector()));
	}
	return $of(handle->invokeWithArguments(args));
}

$VarHandle* ConstantBootstraps::fieldVarHandle($MethodHandles$Lookup* lookup, $String* name, $Class* type, $Class* declaringClass, $Class* fieldType) {
	$Objects::requireNonNull(lookup);
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(type);
	$Objects::requireNonNull(declaringClass);
	$Objects::requireNonNull(fieldType);
	$load($VarHandle);
	if (type != $VarHandle::class$) {
		$throwNew($IllegalArgumentException);
	}
	try {
		return lookup->findVarHandle(declaringClass, name, fieldType);
	} catch ($ReflectiveOperationException& e) {
		$throw($($MethodHandleNatives::mapLookupExceptionToError(e)));
	}
	$shouldNotReachHere();
}

$VarHandle* ConstantBootstraps::staticFieldVarHandle($MethodHandles$Lookup* lookup, $String* name, $Class* type, $Class* declaringClass, $Class* fieldType) {
	$Objects::requireNonNull(lookup);
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(type);
	$Objects::requireNonNull(declaringClass);
	$Objects::requireNonNull(fieldType);
	$load($VarHandle);
	if (type != $VarHandle::class$) {
		$throwNew($IllegalArgumentException);
	}
	try {
		return lookup->findStaticVarHandle(declaringClass, name, fieldType);
	} catch ($ReflectiveOperationException& e) {
		$throw($($MethodHandleNatives::mapLookupExceptionToError(e)));
	}
	$shouldNotReachHere();
}

$VarHandle* ConstantBootstraps::arrayVarHandle($MethodHandles$Lookup* lookup, $String* name, $Class* type, $Class* arrayClass) {
	$Objects::requireNonNull(lookup);
	$Objects::requireNonNull(type);
	$Objects::requireNonNull(arrayClass);
	$load($VarHandle);
	if (type != $VarHandle::class$) {
		$throwNew($IllegalArgumentException);
	}
	return $MethodHandles::arrayElementVarHandle(validateClassAccess(lookup, arrayClass));
}

$Object* ConstantBootstraps::explicitCast($MethodHandles$Lookup* lookup, $String* name, $Class* dstType, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$init($Void);
	if (dstType == $Void::TYPE) {
		$throwNew($ClassCastException, "Can not convert to void"_s);
	}
	if (dstType == $Object::class$) {
		return $of(value);
	}
	$var($MethodHandle, id, $MethodHandles::identity(dstType));
	$var($MethodType, mt, $MethodType::methodType(dstType, $Object::class$));
	$var($MethodHandle, conv, $MethodHandles::explicitCastArguments(id, mt));
	try {
		return $of($nc(conv)->invoke($$new($ObjectArray, {value})));
	} catch ($RuntimeException& e) {
		$throw(e);
	} catch ($Error& e) {
		$throw(e);
	} catch ($Throwable& throwable) {
		$throwNew($InternalError, $cast($Throwable, throwable));
	}
	$shouldNotReachHere();
}

$Class* ConstantBootstraps::validateClassAccess($MethodHandles$Lookup* lookup, $Class* type) {
	try {
		$nc(lookup)->accessClass(type);
		return type;
	} catch ($ReflectiveOperationException& ex) {
		$throw($($MethodHandleNatives::mapLookupExceptionToError(ex)));
	}
	$shouldNotReachHere();
}

ConstantBootstraps::ConstantBootstraps() {
}

$Class* ConstantBootstraps::load$($String* name, bool initialize) {
	$loadClass(ConstantBootstraps, name, initialize, &_ConstantBootstraps_ClassInfo_, allocate$ConstantBootstraps);
	return class$;
}

$Class* ConstantBootstraps::class$ = nullptr;

		} // invoke
	} // lang
} // java