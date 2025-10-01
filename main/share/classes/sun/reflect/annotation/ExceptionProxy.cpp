#include <sun/reflect/annotation/ExceptionProxy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _ExceptionProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExceptionProxy, serialVersionUID)},
	{}
};

$MethodInfo _ExceptionProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExceptionProxy::*)()>(&ExceptionProxy::init$))},
	{"generateException", "()Ljava/lang/RuntimeException;", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ExceptionProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.reflect.annotation.ExceptionProxy",
	"java.lang.Object",
	"java.io.Serializable",
	_ExceptionProxy_FieldInfo_,
	_ExceptionProxy_MethodInfo_
};

$Object* allocate$ExceptionProxy($Class* clazz) {
	return $of($alloc(ExceptionProxy));
}

void ExceptionProxy::init$() {
}

ExceptionProxy::ExceptionProxy() {
}

$Class* ExceptionProxy::load$($String* name, bool initialize) {
	$loadClass(ExceptionProxy, name, initialize, &_ExceptionProxy_ClassInfo_, allocate$ExceptionProxy);
	return class$;
}

$Class* ExceptionProxy::class$ = nullptr;

		} // annotation
	} // reflect
} // sun