#include <ParameterizedBoundIndex$TypeParameterizedInterfaceBound.h>

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
$TypeAnnotation _ParameterizedBoundIndex$TypeParameterizedInterfaceBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};


$MethodInfo _ParameterizedBoundIndex$TypeParameterizedInterfaceBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterizedBoundIndex$TypeParameterizedInterfaceBound::*)()>(&ParameterizedBoundIndex$TypeParameterizedInterfaceBound::init$))},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$TypeParameterizedInterfaceBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$TypeParameterizedInterfaceBound", "ParameterizedBoundIndex", "TypeParameterizedInterfaceBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$TypeParameterizedInterfaceBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$TypeParameterizedInterfaceBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$TypeParameterizedInterfaceBound_MethodInfo_,
	"<T::Ljava/util/List<*>;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$TypeParameterizedInterfaceBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$TypeParameterizedInterfaceBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$TypeParameterizedInterfaceBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$TypeParameterizedInterfaceBound));
}

void ParameterizedBoundIndex$TypeParameterizedInterfaceBound::init$() {
}

ParameterizedBoundIndex$TypeParameterizedInterfaceBound::ParameterizedBoundIndex$TypeParameterizedInterfaceBound() {
}

$Class* ParameterizedBoundIndex$TypeParameterizedInterfaceBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$TypeParameterizedInterfaceBound, name, initialize, &_ParameterizedBoundIndex$TypeParameterizedInterfaceBound_ClassInfo_, allocate$ParameterizedBoundIndex$TypeParameterizedInterfaceBound);
	return class$;
}

$Class* ParameterizedBoundIndex$TypeParameterizedInterfaceBound::class$ = nullptr;