#include <sun/reflect/annotation/AnnotationType$1.h>

#include <java/lang/reflect/Method.h>
#include <sun/reflect/annotation/AnnotationType.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AnnotationType = ::sun::reflect::annotation::AnnotationType;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _AnnotationType$1_FieldInfo_[] = {
	{"this$0", "Lsun/reflect/annotation/AnnotationType;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationType$1, this$0)},
	{"val$annotationClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationType$1, val$annotationClass)},
	{}
};

$MethodInfo _AnnotationType$1_MethodInfo_[] = {
	{"<init>", "(Lsun/reflect/annotation/AnnotationType;Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(AnnotationType$1::*)($AnnotationType*,$Class*)>(&AnnotationType$1::init$))},
	{"run", "()[Ljava/lang/reflect/Method;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AnnotationType$1_EnclosingMethodInfo_ = {
	"sun.reflect.annotation.AnnotationType",
	"<init>",
	"(Ljava/lang/Class;)V"
};

$InnerClassInfo _AnnotationType$1_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotationType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AnnotationType$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.annotation.AnnotationType$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AnnotationType$1_FieldInfo_,
	_AnnotationType$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/reflect/Method;>;",
	&_AnnotationType$1_EnclosingMethodInfo_,
	_AnnotationType$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotationType"
};

$Object* allocate$AnnotationType$1($Class* clazz) {
	return $of($alloc(AnnotationType$1));
}

void AnnotationType$1::init$($AnnotationType* this$0, $Class* val$annotationClass) {
	$set(this, this$0, this$0);
	$set(this, val$annotationClass, val$annotationClass);
}

$Object* AnnotationType$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$annotationClass)->getDeclaredMethods());
}

AnnotationType$1::AnnotationType$1() {
}

$Class* AnnotationType$1::load$($String* name, bool initialize) {
	$loadClass(AnnotationType$1, name, initialize, &_AnnotationType$1_ClassInfo_, allocate$AnnotationType$1);
	return class$;
}

$Class* AnnotationType$1::class$ = nullptr;

		} // annotation
	} // reflect
} // sun