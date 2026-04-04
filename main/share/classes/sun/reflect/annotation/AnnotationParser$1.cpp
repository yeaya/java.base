#include <sun/reflect/annotation/AnnotationParser$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/annotation/Annotation.h>
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
using $Proxy = ::java::lang::reflect::Proxy;
using $Map = ::java::util::Map;
using $AnnotationInvocationHandler = ::sun::reflect::annotation::AnnotationInvocationHandler;

namespace sun {
	namespace reflect {
		namespace annotation {

void AnnotationParser$1::init$($Class* val$type, $Map* val$memberValues) {
	$set(this, val$type, val$type);
	$set(this, val$memberValues, val$memberValues);
}

$Object* AnnotationParser$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, var$0, $nc(this->val$type)->getClassLoader());
	$var($ClassArray, var$1, $new($ClassArray, {this->val$type}));
	return $cast($Annotation, $Proxy::newProxyInstance(var$0, var$1, $$new($AnnotationInvocationHandler, this->val$type, this->val$memberValues)));
}

AnnotationParser$1::AnnotationParser$1() {
}

$Class* AnnotationParser$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$memberValues", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationParser$1, val$memberValues)},
		{"val$type", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationParser$1, val$type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/util/Map;)V", "()V", 0, $method(AnnotationParser$1, init$, void, $Class*, $Map*)},
		{"run", "()Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC, $virtualMethod(AnnotationParser$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.reflect.annotation.AnnotationParser",
		"annotationForMap",
		"(Ljava/lang/Class;Ljava/util/Map;)Ljava/lang/annotation/Annotation;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.annotation.AnnotationParser$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.reflect.annotation.AnnotationParser$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/annotation/Annotation;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.reflect.annotation.AnnotationParser"
	};
	$loadClass(AnnotationParser$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationParser$1);
	});
	return class$;
}

$Class* AnnotationParser$1::class$ = nullptr;

		} // annotation
	} // reflect
} // sun