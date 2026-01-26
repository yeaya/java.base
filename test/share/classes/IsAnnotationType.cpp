#include <IsAnnotationType.h>

#include <IsAnnotationType$AnnotationPoseur.h>
#include <java/lang/Enum.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/Retention.h>
#include <java/lang/annotation/RetentionPolicy.h>
#include <java/lang/annotation/Target.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

using $IsAnnotationType$AnnotationPoseur = ::IsAnnotationType$AnnotationPoseur;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Retention = ::java::lang::annotation::Retention;
using $RetentionPolicy = ::java::lang::annotation::RetentionPolicy;
using $Target = ::java::lang::annotation::Target;
using $RoundingMode = ::java::math::RoundingMode;

$MethodInfo _IsAnnotationType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IsAnnotationType, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IsAnnotationType, main, void, $StringArray*)},
	{"test", "(Ljava/lang/Class;Z)I", nullptr, $STATIC, $staticMethod(IsAnnotationType, test, int32_t, $Class*, bool)},
	{}
};

$InnerClassInfo _IsAnnotationType_InnerClassesInfo_[] = {
	{"IsAnnotationType$AnnotationPoseur", "IsAnnotationType", "AnnotationPoseur", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _IsAnnotationType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsAnnotationType",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsAnnotationType_MethodInfo_,
	nullptr,
	nullptr,
	_IsAnnotationType_InnerClassesInfo_,
	nullptr,
	nullptr,
	"IsAnnotationType$AnnotationPoseur"
};

$Object* allocate$IsAnnotationType($Class* clazz) {
	return $of($alloc(IsAnnotationType));
}

void IsAnnotationType::init$() {
}

int32_t IsAnnotationType::test($Class* clazz, bool expected) {
	int32_t status = ($nc(clazz)->isAnnotation() == expected) ? 0 : 1;
	if (status == 1) {
		$nc($System::err)->println($$str({"Unexpected annotation status for "_s, clazz}));
	}
	return status;
}

void IsAnnotationType::main($StringArray* argv) {
	int32_t failures = 0;
	failures += test($String::class$, false);
	$load($Enum);
	failures += test($Enum::class$, false);
	$load($RoundingMode);
	failures += test($RoundingMode::class$, false);
	$load($Annotation);
	failures += test($Annotation::class$, false);
	$load($Retention);
	failures += test($Retention::class$, true);
	$load($RetentionPolicy);
	failures += test($RetentionPolicy::class$, false);
	$load($Target);
	failures += test($Target::class$, true);
	$load($IsAnnotationType$AnnotationPoseur);
	failures += test($IsAnnotationType$AnnotationPoseur::class$, false);
	if (failures > 0) {
		$throwNew($RuntimeException, "Unexpected annotation status detected."_s);
	}
}

IsAnnotationType::IsAnnotationType() {
}

$Class* IsAnnotationType::load$($String* name, bool initialize) {
	$loadClass(IsAnnotationType, name, initialize, &_IsAnnotationType_ClassInfo_, allocate$IsAnnotationType);
	return class$;
}

$Class* IsAnnotationType::class$ = nullptr;