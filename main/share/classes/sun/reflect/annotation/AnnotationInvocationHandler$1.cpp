#include <sun/reflect/annotation/AnnotationInvocationHandler$1.h>

#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/annotation/AnnotationInvocationHandler.h>
#include <jcpp.h>

using $AccessibleObjectArray = $Array<::java::lang::reflect::AccessibleObject>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AnnotationInvocationHandler = ::sun::reflect::annotation::AnnotationInvocationHandler;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _AnnotationInvocationHandler$1_FieldInfo_[] = {
	{"this$0", "Lsun/reflect/annotation/AnnotationInvocationHandler;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationInvocationHandler$1, this$0)},
	{}
};

$MethodInfo _AnnotationInvocationHandler$1_MethodInfo_[] = {
	{"<init>", "(Lsun/reflect/annotation/AnnotationInvocationHandler;)V", nullptr, 0, $method(static_cast<void(AnnotationInvocationHandler$1::*)($AnnotationInvocationHandler*)>(&AnnotationInvocationHandler$1::init$))},
	{"run", "()[Ljava/lang/reflect/Method;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AnnotationInvocationHandler$1_EnclosingMethodInfo_ = {
	"sun.reflect.annotation.AnnotationInvocationHandler",
	"computeMemberMethods",
	"()[Ljava/lang/reflect/Method;"
};

$InnerClassInfo _AnnotationInvocationHandler$1_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotationInvocationHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AnnotationInvocationHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.annotation.AnnotationInvocationHandler$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AnnotationInvocationHandler$1_FieldInfo_,
	_AnnotationInvocationHandler$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/reflect/Method;>;",
	&_AnnotationInvocationHandler$1_EnclosingMethodInfo_,
	_AnnotationInvocationHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotationInvocationHandler"
};

$Object* allocate$AnnotationInvocationHandler$1($Class* clazz) {
	return $of($alloc(AnnotationInvocationHandler$1));
}

void AnnotationInvocationHandler$1::init$($AnnotationInvocationHandler* this$0) {
	$set(this, this$0, this$0);
}

$Object* AnnotationInvocationHandler$1::run() {
	$beforeCallerSensitive();
	$var($MethodArray, methods, $nc(this->this$0->type)->getDeclaredMethods());
	this->this$0->validateAnnotationMethods(methods);
	$AccessibleObject::setAccessible($fcast($AccessibleObjectArray, methods), true);
	return $of(methods);
}

AnnotationInvocationHandler$1::AnnotationInvocationHandler$1() {
}

$Class* AnnotationInvocationHandler$1::load$($String* name, bool initialize) {
	$loadClass(AnnotationInvocationHandler$1, name, initialize, &_AnnotationInvocationHandler$1_ClassInfo_, allocate$AnnotationInvocationHandler$1);
	return class$;
}

$Class* AnnotationInvocationHandler$1::class$ = nullptr;

		} // annotation
	} // reflect
} // sun