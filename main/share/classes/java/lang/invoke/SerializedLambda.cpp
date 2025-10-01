#include <java/lang/invoke/SerializedLambda.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectStreamException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandleInfo.h>
#include <java/lang/invoke/SerializedLambda$1.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectStreamException = ::java::io::ObjectStreamException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandleInfo = ::java::lang::invoke::MethodHandleInfo;
using $SerializedLambda$1 = ::java::lang::invoke::SerializedLambda$1;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _SerializedLambda_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SerializedLambda, serialVersionUID)},
	{"capturingClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(SerializedLambda, capturingClass)},
	{"functionalInterfaceClass", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, functionalInterfaceClass)},
	{"functionalInterfaceMethodName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, functionalInterfaceMethodName)},
	{"functionalInterfaceMethodSignature", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, functionalInterfaceMethodSignature)},
	{"implClass", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, implClass)},
	{"implMethodName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, implMethodName)},
	{"implMethodSignature", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, implMethodSignature)},
	{"implMethodKind", "I", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, implMethodKind)},
	{"instantiatedMethodType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, instantiatedMethodType)},
	{"capturedArgs", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SerializedLambda, capturedArgs)},
	{}
};

$MethodInfo _SerializedLambda_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", $PUBLIC, $method(static_cast<void(SerializedLambda::*)($Class*,$String*,$String*,$String*,int32_t,$String*,$String*,$String*,$String*,$ObjectArray*)>(&SerializedLambda::init$))},
	{"getCapturedArg", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(SerializedLambda::*)(int32_t)>(&SerializedLambda::getCapturedArg))},
	{"getCapturedArgCount", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SerializedLambda::*)()>(&SerializedLambda::getCapturedArgCount))},
	{"getCapturingClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SerializedLambda::*)()>(&SerializedLambda::getCapturingClass))},
	{"getFunctionalInterfaceClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SerializedLambda::*)()>(&SerializedLambda::getFunctionalInterfaceClass))},
	{"getFunctionalInterfaceMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SerializedLambda::*)()>(&SerializedLambda::getFunctionalInterfaceMethodName))},
	{"getFunctionalInterfaceMethodSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SerializedLambda::*)()>(&SerializedLambda::getFunctionalInterfaceMethodSignature))},
	{"getImplClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SerializedLambda::*)()>(&SerializedLambda::getImplClass))},
	{"getImplMethodKind", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SerializedLambda::*)()>(&SerializedLambda::getImplMethodKind))},
	{"getImplMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SerializedLambda::*)()>(&SerializedLambda::getImplMethodName))},
	{"getImplMethodSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SerializedLambda::*)()>(&SerializedLambda::getImplMethodSignature))},
	{"getInstantiatedMethodType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(SerializedLambda::*)()>(&SerializedLambda::getInstantiatedMethodType))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(SerializedLambda::*)()>(&SerializedLambda::readResolve)), "java.io.ObjectStreamException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SerializedLambda_InnerClassesInfo_[] = {
	{"java.lang.invoke.SerializedLambda$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SerializedLambda_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.invoke.SerializedLambda",
	"java.lang.Object",
	"java.io.Serializable",
	_SerializedLambda_FieldInfo_,
	_SerializedLambda_MethodInfo_,
	nullptr,
	nullptr,
	_SerializedLambda_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.SerializedLambda$1"
};

$Object* allocate$SerializedLambda($Class* clazz) {
	return $of($alloc(SerializedLambda));
}

void SerializedLambda::init$($Class* capturingClass, $String* functionalInterfaceClass, $String* functionalInterfaceMethodName, $String* functionalInterfaceMethodSignature, int32_t implMethodKind, $String* implClass, $String* implMethodName, $String* implMethodSignature, $String* instantiatedMethodType, $ObjectArray* capturedArgs) {
	$set(this, capturingClass, capturingClass);
	$set(this, functionalInterfaceClass, functionalInterfaceClass);
	$set(this, functionalInterfaceMethodName, functionalInterfaceMethodName);
	$set(this, functionalInterfaceMethodSignature, functionalInterfaceMethodSignature);
	this->implMethodKind = implMethodKind;
	$set(this, implClass, implClass);
	$set(this, implMethodName, implMethodName);
	$set(this, implMethodSignature, implMethodSignature);
	$set(this, instantiatedMethodType, instantiatedMethodType);
	$set(this, capturedArgs, $cast($ObjectArray, $nc(($cast($ObjectArray, $Objects::requireNonNull(capturedArgs))))->clone()));
}

$String* SerializedLambda::getCapturingClass() {
	return $nc($($nc(this->capturingClass)->getName()))->replace(u'.', u'/');
}

$String* SerializedLambda::getFunctionalInterfaceClass() {
	return this->functionalInterfaceClass;
}

$String* SerializedLambda::getFunctionalInterfaceMethodName() {
	return this->functionalInterfaceMethodName;
}

$String* SerializedLambda::getFunctionalInterfaceMethodSignature() {
	return this->functionalInterfaceMethodSignature;
}

$String* SerializedLambda::getImplClass() {
	return this->implClass;
}

$String* SerializedLambda::getImplMethodName() {
	return this->implMethodName;
}

$String* SerializedLambda::getImplMethodSignature() {
	return this->implMethodSignature;
}

int32_t SerializedLambda::getImplMethodKind() {
	return this->implMethodKind;
}

$String* SerializedLambda::getInstantiatedMethodType() {
	return this->instantiatedMethodType;
}

int32_t SerializedLambda::getCapturedArgCount() {
	return $nc(this->capturedArgs)->length;
}

$Object* SerializedLambda::getCapturedArg(int32_t i) {
	return $of($nc(this->capturedArgs)->get(i));
}

$Object* SerializedLambda::readResolve() {
	$beforeCallerSensitive();
	try {
		$var($Method, deserialize, $cast($Method, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($SerializedLambda$1, this)))));
		return $of($nc(deserialize)->invoke(nullptr, $$new($ObjectArray, {$of(this)})));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, roe, $catch());
		$var($ObjectStreamException, ose, $new($InvalidObjectException, "ReflectiveOperationException during deserialization"_s));
		ose->initCause(roe);
		$throw(ose);
	} catch ($PrivilegedActionException&) {
		$var($PrivilegedActionException, e, $catch());
		$var($Exception, cause, e->getException());
		if ($instanceOf($RuntimeException, cause)) {
			$throw($cast($RuntimeException, cause));
		} else {
			$throwNew($RuntimeException, "Exception in SerializedLambda.readResolve"_s, e);
		}
	}
	$shouldNotReachHere();
}

$String* SerializedLambda::toString() {
	$var($String, implKind, $MethodHandleInfo::referenceKindToString(this->implMethodKind));
	return $String::format("SerializedLambda[%s=%s, %s=%s.%s:%s, %s=%s %s.%s:%s, %s=%s, %s=%d]"_s, $$new($ObjectArray, {
		$of("capturingClass"_s),
		$of(this->capturingClass),
		$of("functionalInterfaceMethod"_s),
		$of(this->functionalInterfaceClass),
		$of(this->functionalInterfaceMethodName),
		$of(this->functionalInterfaceMethodSignature),
		$of("implementation"_s),
		$of(implKind),
		$of(this->implClass),
		$of(this->implMethodName),
		$of(this->implMethodSignature),
		$of("instantiatedMethodType"_s),
		$of(this->instantiatedMethodType),
		$of("numCaptured"_s),
		$($of($Integer::valueOf($nc(this->capturedArgs)->length)))
	}));
}

SerializedLambda::SerializedLambda() {
}

$Class* SerializedLambda::load$($String* name, bool initialize) {
	$loadClass(SerializedLambda, name, initialize, &_SerializedLambda_ClassInfo_, allocate$SerializedLambda);
	return class$;
}

$Class* SerializedLambda::class$ = nullptr;

		} // invoke
	} // lang
} // java