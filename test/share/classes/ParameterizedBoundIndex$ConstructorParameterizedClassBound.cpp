#include <ParameterizedBoundIndex$ConstructorParameterizedClassBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$ConstructorParameterizedClassBound_MethodTypeAnnotations_init$0[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$ConstructorParameterizedClassBound_MethodInfo_[] = {
	{"<init>", "()V", "<T:Ljava/util/ArrayList<*>;>()V", 0, $method(static_cast<void(ParameterizedBoundIndex$ConstructorParameterizedClassBound::*)()>(&ParameterizedBoundIndex$ConstructorParameterizedClassBound::init$)), nullptr, nullptr, nullptr, _ParameterizedBoundIndex$ConstructorParameterizedClassBound_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$ConstructorParameterizedClassBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$ConstructorParameterizedClassBound", "ParameterizedBoundIndex", "ConstructorParameterizedClassBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$ConstructorParameterizedClassBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$ConstructorParameterizedClassBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$ConstructorParameterizedClassBound_MethodInfo_,
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$ConstructorParameterizedClassBound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$ConstructorParameterizedClassBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$ConstructorParameterizedClassBound));
}

void ParameterizedBoundIndex$ConstructorParameterizedClassBound::init$() {
}

ParameterizedBoundIndex$ConstructorParameterizedClassBound::ParameterizedBoundIndex$ConstructorParameterizedClassBound() {
}

$Class* ParameterizedBoundIndex$ConstructorParameterizedClassBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$ConstructorParameterizedClassBound, name, initialize, &_ParameterizedBoundIndex$ConstructorParameterizedClassBound_ClassInfo_, allocate$ParameterizedBoundIndex$ConstructorParameterizedClassBound);
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorParameterizedClassBound::class$ = nullptr;