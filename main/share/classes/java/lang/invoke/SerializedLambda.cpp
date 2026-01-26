#include <java/lang/invoke/SerializedLambda.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectStreamException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandleInfo.h>
#include <java/lang/invoke/SerializedLambda$1.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
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
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", $PUBLIC, $method(SerializedLambda, init$, void, $Class*, $String*, $String*, $String*, int32_t, $String*, $String*, $String*, $String*, $ObjectArray*)},
	{"getCapturedArg", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $method(SerializedLambda, getCapturedArg, $Object*, int32_t)},
	{"getCapturedArgCount", "()I", nullptr, $PUBLIC, $method(SerializedLambda, getCapturedArgCount, int32_t)},
	{"getCapturingClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SerializedLambda, getCapturingClass, $String*)},
	{"getFunctionalInterfaceClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SerializedLambda, getFunctionalInterfaceClass, $String*)},
	{"getFunctionalInterfaceMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SerializedLambda, getFunctionalInterfaceMethodName, $String*)},
	{"getFunctionalInterfaceMethodSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SerializedLambda, getFunctionalInterfaceMethodSignature, $String*)},
	{"getImplClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SerializedLambda, getImplClass, $String*)},
	{"getImplMethodKind", "()I", nullptr, $PUBLIC, $method(SerializedLambda, getImplMethodKind, int32_t)},
	{"getImplMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SerializedLambda, getImplMethodName, $String*)},
	{"getImplMethodSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SerializedLambda, getImplMethodSignature, $String*)},
	{"getInstantiatedMethodType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(SerializedLambda, getInstantiatedMethodType, $String*)},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(SerializedLambda, readResolve, $Object*), "java.io.ObjectStreamException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializedLambda, toString, $String*)},
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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Method, deserialize, $cast($Method, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($SerializedLambda$1, this)))));
		return $of($nc(deserialize)->invoke(nullptr, $$new($ObjectArray, {$of(this)})));
	} catch ($ReflectiveOperationException& roe) {
		$var($ObjectStreamException, ose, $new($InvalidObjectException, "ReflectiveOperationException during deserialization"_s));
		ose->initCause(roe);
		$throw(ose);
	} catch ($PrivilegedActionException& e) {
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
	$useLocalCurrentObjectStackCache();
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