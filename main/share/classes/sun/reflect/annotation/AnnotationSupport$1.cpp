#include <sun/reflect/annotation/AnnotationSupport$1.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/reflect/ReflectionFactory.h>
#include <sun/reflect/annotation/AnnotationSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;

namespace sun {
	namespace reflect {
		namespace annotation {

void AnnotationSupport$1::init$($Method* val$m) {
	$set(this, val$m, val$m);
}

$Object* AnnotationSupport$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Method, res, $$nc($ReflectionFactory::getReflectionFactory())->leafCopyMethod(this->val$m));
	$nc(res)->setAccessible(true);
	return $of(res);
}

AnnotationSupport$1::AnnotationSupport$1() {
}

$Class* AnnotationSupport$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$m", "Ljava/lang/reflect/Method;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationSupport$1, val$m)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;)V", "()V", 0, $method(AnnotationSupport$1, init$, void, $Method*)},
		{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(AnnotationSupport$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.reflect.annotation.AnnotationSupport",
		"getValueArray",
		"(Ljava/lang/annotation/Annotation;)[Ljava/lang/annotation/Annotation;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.annotation.AnnotationSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.reflect.annotation.AnnotationSupport$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.reflect.annotation.AnnotationSupport"
	};
	$loadClass(AnnotationSupport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationSupport$1);
	});
	return class$;
}

$Class* AnnotationSupport$1::class$ = nullptr;

		} // annotation
	} // reflect
} // sun