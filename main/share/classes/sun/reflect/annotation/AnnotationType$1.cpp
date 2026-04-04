#include <sun/reflect/annotation/AnnotationType$1.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/annotation/AnnotationType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationType = ::sun::reflect::annotation::AnnotationType;

namespace sun {
	namespace reflect {
		namespace annotation {

void AnnotationType$1::init$($AnnotationType* this$0, $Class* val$annotationClass) {
	$set(this, this$0, this$0);
	$set(this, val$annotationClass, val$annotationClass);
}

$Object* AnnotationType$1::run() {
	$beforeCallerSensitive();
	return $nc(this->val$annotationClass)->getDeclaredMethods();
}

AnnotationType$1::AnnotationType$1() {
}

$Class* AnnotationType$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/reflect/annotation/AnnotationType;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationType$1, this$0)},
		{"val$annotationClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationType$1, val$annotationClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/reflect/annotation/AnnotationType;Ljava/lang/Class;)V", nullptr, 0, $method(AnnotationType$1, init$, void, $AnnotationType*, $Class*)},
		{"run", "()[Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(AnnotationType$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.reflect.annotation.AnnotationType",
		"<init>",
		"(Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.annotation.AnnotationType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.reflect.annotation.AnnotationType$1",
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
		"sun.reflect.annotation.AnnotationType"
	};
	$loadClass(AnnotationType$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationType$1);
	});
	return class$;
}

$Class* AnnotationType$1::class$ = nullptr;

		} // annotation
	} // reflect
} // sun