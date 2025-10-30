#include <ParameterizedBoundIndex$TypeClassBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$TypeClassBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$TypeClassBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterizedBoundIndex$TypeClassBound::*)()>(&ParameterizedBoundIndex$TypeClassBound::init$))},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$TypeClassBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$TypeClassBound", "ParameterizedBoundIndex", "TypeClassBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$TypeClassBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$TypeClassBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$TypeClassBound_MethodInfo_,
	"<T:Ljava/lang/Void;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$TypeClassBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$TypeClassBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$TypeClassBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$TypeClassBound));
}

void ParameterizedBoundIndex$TypeClassBound::init$() {
}

ParameterizedBoundIndex$TypeClassBound::ParameterizedBoundIndex$TypeClassBound() {
}

$Class* ParameterizedBoundIndex$TypeClassBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$TypeClassBound, name, initialize, &_ParameterizedBoundIndex$TypeClassBound_ClassInfo_, allocate$ParameterizedBoundIndex$TypeClassBound);
	return class$;
}

$Class* ParameterizedBoundIndex$TypeClassBound::class$ = nullptr;