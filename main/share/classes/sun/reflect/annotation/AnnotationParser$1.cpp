#include <sun/reflect/annotation/AnnotationParser$1.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Map.h>
#include <sun/reflect/annotation/AnnotationInvocationHandler.h>
#include <sun/reflect/annotation/AnnotationParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
using $Map = ::java::util::Map;
using $AnnotationInvocationHandler = ::sun::reflect::annotation::AnnotationInvocationHandler;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _AnnotationParser$1_FieldInfo_[] = {
	{"val$memberValues", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationParser$1, val$memberValues)},
	{"val$type", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationParser$1, val$type)},
	{}
};

$MethodInfo _AnnotationParser$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/util/Map;)V", "()V", 0, $method(static_cast<void(AnnotationParser$1::*)($Class*,$Map*)>(&AnnotationParser$1::init$))},
	{"run", "()Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AnnotationParser$1_EnclosingMethodInfo_ = {
	"sun.reflect.annotation.AnnotationParser",
	"annotationForMap",
	"(Ljava/lang/Class;Ljava/util/Map;)Ljava/lang/annotation/Annotation;"
};

$InnerClassInfo _AnnotationParser$1_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotationParser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AnnotationParser$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.annotation.AnnotationParser$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AnnotationParser$1_FieldInfo_,
	_AnnotationParser$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/annotation/Annotation;>;",
	&_AnnotationParser$1_EnclosingMethodInfo_,
	_AnnotationParser$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotationParser"
};

$Object* allocate$AnnotationParser$1($Class* clazz) {
	return $of($alloc(AnnotationParser$1));
}

void AnnotationParser$1::init$($Class* val$type, $Map* val$memberValues) {
	$set(this, val$type, val$type);
	$set(this, val$memberValues, val$memberValues);
}

$Object* AnnotationParser$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, var$0, $nc(this->val$type)->getClassLoader());
	$var($ClassArray, var$1, $new($ClassArray, {this->val$type}));
	return $of($cast($Annotation, $Proxy::newProxyInstance(var$0, var$1, static_cast<$InvocationHandler*>($$new($AnnotationInvocationHandler, this->val$type, this->val$memberValues)))));
}

AnnotationParser$1::AnnotationParser$1() {
}

$Class* AnnotationParser$1::load$($String* name, bool initialize) {
	$loadClass(AnnotationParser$1, name, initialize, &_AnnotationParser$1_ClassInfo_, allocate$AnnotationParser$1);
	return class$;
}

$Class* AnnotationParser$1::class$ = nullptr;

		} // annotation
	} // reflect
} // sun