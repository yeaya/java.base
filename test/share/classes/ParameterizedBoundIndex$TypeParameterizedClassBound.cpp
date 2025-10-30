#include <ParameterizedBoundIndex$TypeParameterizedClassBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$TypeParameterizedClassBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$TypeParameterizedClassBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterizedBoundIndex$TypeParameterizedClassBound::*)()>(&ParameterizedBoundIndex$TypeParameterizedClassBound::init$))},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$TypeParameterizedClassBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$TypeParameterizedClassBound", "ParameterizedBoundIndex", "TypeParameterizedClassBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$TypeParameterizedClassBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$TypeParameterizedClassBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$TypeParameterizedClassBound_MethodInfo_,
	"<T:Ljava/util/ArrayList<*>;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$TypeParameterizedClassBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$TypeParameterizedClassBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$TypeParameterizedClassBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$TypeParameterizedClassBound));
}

void ParameterizedBoundIndex$TypeParameterizedClassBound::init$() {
}

ParameterizedBoundIndex$TypeParameterizedClassBound::ParameterizedBoundIndex$TypeParameterizedClassBound() {
}

$Class* ParameterizedBoundIndex$TypeParameterizedClassBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$TypeParameterizedClassBound, name, initialize, &_ParameterizedBoundIndex$TypeParameterizedClassBound_ClassInfo_, allocate$ParameterizedBoundIndex$TypeParameterizedClassBound);
	return class$;
}

$Class* ParameterizedBoundIndex$TypeParameterizedClassBound::class$ = nullptr;