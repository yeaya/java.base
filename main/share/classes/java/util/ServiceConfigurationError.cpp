#include <java/util/ServiceConfigurationError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _ServiceConfigurationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServiceConfigurationError, serialVersionUID)},
	{}
};

$MethodInfo _ServiceConfigurationError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceConfigurationError::*)($String*)>(&ServiceConfigurationError::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceConfigurationError::*)($String*,$Throwable*)>(&ServiceConfigurationError::init$))},
	{}
};

$ClassInfo _ServiceConfigurationError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.ServiceConfigurationError",
	"java.lang.Error",
	nullptr,
	_ServiceConfigurationError_FieldInfo_,
	_ServiceConfigurationError_MethodInfo_
};

$Object* allocate$ServiceConfigurationError($Class* clazz) {
	return $of($alloc(ServiceConfigurationError));
}

void ServiceConfigurationError::init$($String* msg) {
	$Error::init$(msg);
}

void ServiceConfigurationError::init$($String* msg, $Throwable* cause) {
	$Error::init$(msg, cause);
}

ServiceConfigurationError::ServiceConfigurationError() {
}

ServiceConfigurationError::ServiceConfigurationError(const ServiceConfigurationError& e) {
}

ServiceConfigurationError ServiceConfigurationError::wrapper$() {
	$pendingException(this);
	return *this;
}

void ServiceConfigurationError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ServiceConfigurationError::load$($String* name, bool initialize) {
	$loadClass(ServiceConfigurationError, name, initialize, &_ServiceConfigurationError_ClassInfo_, allocate$ServiceConfigurationError);
	return class$;
}

$Class* ServiceConfigurationError::class$ = nullptr;

	} // util
} // java