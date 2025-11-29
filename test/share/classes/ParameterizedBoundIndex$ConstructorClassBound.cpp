#include <ParameterizedBoundIndex$ConstructorClassBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$ConstructorClassBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{}
};

$TypeAnnotation _ParameterizedBoundIndex$ConstructorClassBound_MethodTypeAnnotations_init$0[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$ConstructorClassBound_MethodInfo_[] = {
	{"<init>", "()V", "<T:Ljava/lang/Void;>()V", 0, $method(static_cast<void(ParameterizedBoundIndex$ConstructorClassBound::*)()>(&ParameterizedBoundIndex$ConstructorClassBound::init$)), nullptr, nullptr, nullptr, _ParameterizedBoundIndex$ConstructorClassBound_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$ConstructorClassBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$ConstructorClassBound", "ParameterizedBoundIndex", "ConstructorClassBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$ConstructorClassBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$ConstructorClassBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$ConstructorClassBound_MethodInfo_,
	"<T:Ljava/lang/Void;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$ConstructorClassBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$ConstructorClassBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$ConstructorClassBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$ConstructorClassBound));
}

void ParameterizedBoundIndex$ConstructorClassBound::init$() {
}

ParameterizedBoundIndex$ConstructorClassBound::ParameterizedBoundIndex$ConstructorClassBound() {
}

$Class* ParameterizedBoundIndex$ConstructorClassBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$ConstructorClassBound, name, initialize, &_ParameterizedBoundIndex$ConstructorClassBound_ClassInfo_, allocate$ParameterizedBoundIndex$ConstructorClassBound);
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorClassBound::class$ = nullptr;