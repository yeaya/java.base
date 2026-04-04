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
using $AnnotationInvocationHandler = ::sun::reflect::annotation::AnnotationInvocationHandler;

namespace sun {
	namespace reflect {
		namespace annotation {

void AnnotationInvocationHandler$1::init$($AnnotationInvocationHandler* this$0) {
	$set(this, this$0, this$0);
}

$Object* AnnotationInvocationHandler$1::run() {
	$beforeCallerSensitive();
	$var($MethodArray, methods, $nc(this->this$0->type)->getDeclaredMethods());
	this->this$0->validateAnnotationMethods(methods);
	$AccessibleObject::setAccessible($cast($AccessibleObjectArray, methods), true);
	return methods;
}

AnnotationInvocationHandler$1::AnnotationInvocationHandler$1() {
}

$Class* AnnotationInvocationHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/reflect/annotation/AnnotationInvocationHandler;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationInvocationHandler$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/reflect/annotation/AnnotationInvocationHandler;)V", nullptr, 0, $method(AnnotationInvocationHandler$1, init$, void, $AnnotationInvocationHandler*)},
		{"run", "()[Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(AnnotationInvocationHandler$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.reflect.annotation.AnnotationInvocationHandler",
		"computeMemberMethods",
		"()[Ljava/lang/reflect/Method;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.annotation.AnnotationInvocationHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.reflect.annotation.AnnotationInvocationHandler$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.reflect.annotation.AnnotationInvocationHandler"
	};
	$loadClass(AnnotationInvocationHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationInvocationHandler$1);
	});
	return class$;
}

$Class* AnnotationInvocationHandler$1::class$ = nullptr;

		} // annotation
	} // reflect
} // sun