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

$FieldInfo _AnnotationSupport$1_FieldInfo_[] = {
	{"val$m", "Ljava/lang/reflect/Method;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationSupport$1, val$m)},
	{}
};

$MethodInfo _AnnotationSupport$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;)V", "()V", 0, $method(AnnotationSupport$1, init$, void, $Method*)},
	{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(AnnotationSupport$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _AnnotationSupport$1_EnclosingMethodInfo_ = {
	"sun.reflect.annotation.AnnotationSupport",
	"getValueArray",
	"(Ljava/lang/annotation/Annotation;)[Ljava/lang/annotation/Annotation;"
};

$InnerClassInfo _AnnotationSupport$1_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotationSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AnnotationSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.annotation.AnnotationSupport$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AnnotationSupport$1_FieldInfo_,
	_AnnotationSupport$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/reflect/Method;>;",
	&_AnnotationSupport$1_EnclosingMethodInfo_,
	_AnnotationSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotationSupport"
};

$Object* allocate$AnnotationSupport$1($Class* clazz) {
	return $of($alloc(AnnotationSupport$1));
}

void AnnotationSupport$1::init$($Method* val$m) {
	$set(this, val$m, val$m);
}

$Object* AnnotationSupport$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Method, res, $nc($($ReflectionFactory::getReflectionFactory()))->leafCopyMethod(this->val$m));
	$nc(res)->setAccessible(true);
	return $of(res);
}

AnnotationSupport$1::AnnotationSupport$1() {
}

$Class* AnnotationSupport$1::load$($String* name, bool initialize) {
	$loadClass(AnnotationSupport$1, name, initialize, &_AnnotationSupport$1_ClassInfo_, allocate$AnnotationSupport$1);
	return class$;
}

$Class* AnnotationSupport$1::class$ = nullptr;

		} // annotation
	} // reflect
} // sun