#include <sun/reflect/annotation/EnumConstantNotPresentExceptionProxy.h>

#include <java/lang/EnumConstantNotPresentException.h>
#include <sun/reflect/annotation/ExceptionProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnumConstantNotPresentException = ::java::lang::EnumConstantNotPresentException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ExceptionProxy = ::sun::reflect::annotation::ExceptionProxy;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _EnumConstantNotPresentExceptionProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EnumConstantNotPresentExceptionProxy, serialVersionUID)},
	{"enumType", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/Enum<*>;>;", $FINAL, $field(EnumConstantNotPresentExceptionProxy, enumType)},
	{"constName", "Ljava/lang/String;", nullptr, $FINAL, $field(EnumConstantNotPresentExceptionProxy, constName)},
	{}
};

$MethodInfo _EnumConstantNotPresentExceptionProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<+Ljava/lang/Enum<*>;>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(EnumConstantNotPresentExceptionProxy::*)($Class*,$String*)>(&EnumConstantNotPresentExceptionProxy::init$))},
	{"generateException", "()Ljava/lang/RuntimeException;", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EnumConstantNotPresentExceptionProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.annotation.EnumConstantNotPresentExceptionProxy",
	"sun.reflect.annotation.ExceptionProxy",
	nullptr,
	_EnumConstantNotPresentExceptionProxy_FieldInfo_,
	_EnumConstantNotPresentExceptionProxy_MethodInfo_
};

$Object* allocate$EnumConstantNotPresentExceptionProxy($Class* clazz) {
	return $of($alloc(EnumConstantNotPresentExceptionProxy));
}

void EnumConstantNotPresentExceptionProxy::init$($Class* enumType, $String* constName) {
	$ExceptionProxy::init$();
	$set(this, enumType, enumType);
	$set(this, constName, constName);
}

$RuntimeException* EnumConstantNotPresentExceptionProxy::generateException() {
	return $new($EnumConstantNotPresentException, this->enumType, this->constName);
}

$String* EnumConstantNotPresentExceptionProxy::toString() {
	return $str({this->constName, " /* Warning: constant not present! */"_s});
}

EnumConstantNotPresentExceptionProxy::EnumConstantNotPresentExceptionProxy() {
}

$Class* EnumConstantNotPresentExceptionProxy::load$($String* name, bool initialize) {
	$loadClass(EnumConstantNotPresentExceptionProxy, name, initialize, &_EnumConstantNotPresentExceptionProxy_ClassInfo_, allocate$EnumConstantNotPresentExceptionProxy);
	return class$;
}

$Class* EnumConstantNotPresentExceptionProxy::class$ = nullptr;

		} // annotation
	} // reflect
} // sun