#include <RecursiveAnnotation.h>

#include <Rat.h>
#include <jcpp.h>

using $Rat = ::Rat;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$CompoundAttribute _RecursiveAnnotation_Annotations_[] = {
	{"LRat;", nullptr},
	{}
};

$MethodInfo _RecursiveAnnotation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RecursiveAnnotation, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RecursiveAnnotation, main, void, $StringArray*)},
	{}
};

$ClassInfo _RecursiveAnnotation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RecursiveAnnotation",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RecursiveAnnotation_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_RecursiveAnnotation_Annotations_
};

$Object* allocate$RecursiveAnnotation($Class* clazz) {
	return $of($alloc(RecursiveAnnotation));
}

void RecursiveAnnotation::init$() {
}

void RecursiveAnnotation::main($StringArray* args) {
	$load(RecursiveAnnotation);
	$load($Rat);
	if (!RecursiveAnnotation::class$->isAnnotationPresent($Rat::class$)) {
		$throwNew($RuntimeException, "RecursiveAnnotation"_s);
	}
	if (!$Rat::class$->isAnnotationPresent($Rat::class$)) {
		$throwNew($RuntimeException, "Rat"_s);
	}
}

RecursiveAnnotation::RecursiveAnnotation() {
}

$Class* RecursiveAnnotation::load$($String* name, bool initialize) {
	$loadClass(RecursiveAnnotation, name, initialize, &_RecursiveAnnotation_ClassInfo_, allocate$RecursiveAnnotation);
	return class$;
}

$Class* RecursiveAnnotation::class$ = nullptr;