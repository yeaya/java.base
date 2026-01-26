#include <sun/reflect/annotation/AnnotationTypeMismatchExceptionProxy.h>

#include <java/lang/annotation/AnnotationTypeMismatchException.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/annotation/ExceptionProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotationTypeMismatchException = ::java::lang::annotation::AnnotationTypeMismatchException;
using $Method = ::java::lang::reflect::Method;
using $ExceptionProxy = ::sun::reflect::annotation::ExceptionProxy;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _AnnotationTypeMismatchExceptionProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AnnotationTypeMismatchExceptionProxy, serialVersionUID)},
	{"member", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(AnnotationTypeMismatchExceptionProxy, member)},
	{"foundType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AnnotationTypeMismatchExceptionProxy, foundType)},
	{}
};

$MethodInfo _AnnotationTypeMismatchExceptionProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(AnnotationTypeMismatchExceptionProxy, init$, void, $String*)},
	{"generateException", "()Ljava/lang/RuntimeException;", nullptr, $PROTECTED, $virtualMethod(AnnotationTypeMismatchExceptionProxy, generateException, $RuntimeException*)},
	{"setMember", "(Ljava/lang/reflect/Method;)Lsun/reflect/annotation/AnnotationTypeMismatchExceptionProxy;", nullptr, 0, $virtualMethod(AnnotationTypeMismatchExceptionProxy, setMember, AnnotationTypeMismatchExceptionProxy*, $Method*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationTypeMismatchExceptionProxy, toString, $String*)},
	{}
};

$ClassInfo _AnnotationTypeMismatchExceptionProxy_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.annotation.AnnotationTypeMismatchExceptionProxy",
	"sun.reflect.annotation.ExceptionProxy",
	nullptr,
	_AnnotationTypeMismatchExceptionProxy_FieldInfo_,
	_AnnotationTypeMismatchExceptionProxy_MethodInfo_
};

$Object* allocate$AnnotationTypeMismatchExceptionProxy($Class* clazz) {
	return $of($alloc(AnnotationTypeMismatchExceptionProxy));
}

void AnnotationTypeMismatchExceptionProxy::init$($String* foundType) {
	$ExceptionProxy::init$();
	$set(this, foundType, foundType);
}

AnnotationTypeMismatchExceptionProxy* AnnotationTypeMismatchExceptionProxy::setMember($Method* member) {
	$set(this, member, member);
	return this;
}

$RuntimeException* AnnotationTypeMismatchExceptionProxy::generateException() {
	return $new($AnnotationTypeMismatchException, this->member, this->foundType);
}

$String* AnnotationTypeMismatchExceptionProxy::toString() {
	return $str({"/* Warning type mismatch! \""_s, this->foundType, "\" */"_s});
}

AnnotationTypeMismatchExceptionProxy::AnnotationTypeMismatchExceptionProxy() {
}

$Class* AnnotationTypeMismatchExceptionProxy::load$($String* name, bool initialize) {
	$loadClass(AnnotationTypeMismatchExceptionProxy, name, initialize, &_AnnotationTypeMismatchExceptionProxy_ClassInfo_, allocate$AnnotationTypeMismatchExceptionProxy);
	return class$;
}

$Class* AnnotationTypeMismatchExceptionProxy::class$ = nullptr;

		} // annotation
	} // reflect
} // sun