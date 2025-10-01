#include <ParameterizedBoundIndex$MethodClassBound.h>

#include <ParameterizedBoundIndex.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;
$TypeAnnotation _ParameterizedBoundIndex$MethodClassBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{}
};

$TypeAnnotation _ParameterizedBoundIndex$MethodClassBound_MethodTypeAnnotations_m1[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{}
};


$MethodInfo _ParameterizedBoundIndex$MethodClassBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterizedBoundIndex$MethodClassBound::*)()>(&ParameterizedBoundIndex$MethodClassBound::init$))},
	{"m", "()V", "<T:Ljava/lang/Void;>()V", 0, nullptr, nullptr, nullptr, nullptr, _ParameterizedBoundIndex$MethodClassBound_MethodTypeAnnotations_m1},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$MethodClassBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$MethodClassBound", "ParameterizedBoundIndex", "MethodClassBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$MethodClassBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$MethodClassBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$MethodClassBound_MethodInfo_,
	"<T:Ljava/lang/Void;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$MethodClassBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$MethodClassBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$MethodClassBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$MethodClassBound));
}

void ParameterizedBoundIndex$MethodClassBound::init$() {
}

void ParameterizedBoundIndex$MethodClassBound::m() {
}

ParameterizedBoundIndex$MethodClassBound::ParameterizedBoundIndex$MethodClassBound() {
}

$Class* ParameterizedBoundIndex$MethodClassBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$MethodClassBound, name, initialize, &_ParameterizedBoundIndex$MethodClassBound_ClassInfo_, allocate$ParameterizedBoundIndex$MethodClassBound);
	return class$;
}

$Class* ParameterizedBoundIndex$MethodClassBound::class$ = nullptr;