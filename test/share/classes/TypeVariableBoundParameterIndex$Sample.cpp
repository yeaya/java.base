#include <TypeVariableBoundParameterIndex$Sample.h>

#include <TypeVariableBoundParameterIndex.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TypeVariableBoundParameterIndex = ::TypeVariableBoundParameterIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;
$TypeAnnotation _TypeVariableBoundParameterIndex$Sample_TypeAnnotations_[] = {
	{"LTypeVariableBoundParameterIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1, location = (TYPE_ARGUMENT(0))"},
	{"LTypeVariableBoundParameterIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 1, location = (TYPE_ARGUMENT(0))"},
	{}
};


$MethodInfo _TypeVariableBoundParameterIndex$Sample_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TypeVariableBoundParameterIndex$Sample::*)()>(&TypeVariableBoundParameterIndex$Sample::init$))},
	{}
};

$InnerClassInfo _TypeVariableBoundParameterIndex$Sample_InnerClassesInfo_[] = {
	{"TypeVariableBoundParameterIndex$Sample", "TypeVariableBoundParameterIndex", "Sample", $STATIC},
	{}
};

$ClassInfo _TypeVariableBoundParameterIndex$Sample_ClassInfo_ = {
	$ACC_SUPER,
	"TypeVariableBoundParameterIndex$Sample",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeVariableBoundParameterIndex$Sample_MethodInfo_,
	"<T::Ljava/util/concurrent/Callable<*>;S::Ljava/util/concurrent/Callable<*>;U::Ljava/util/concurrent/Callable<*>;>Ljava/lang/Object;",
	nullptr,
	_TypeVariableBoundParameterIndex$Sample_InnerClassesInfo_,
	nullptr,
	_TypeVariableBoundParameterIndex$Sample_TypeAnnotations_,
	nullptr,
	"TypeVariableBoundParameterIndex"
};

$Object* allocate$TypeVariableBoundParameterIndex$Sample($Class* clazz) {
	return $of($alloc(TypeVariableBoundParameterIndex$Sample));
}

void TypeVariableBoundParameterIndex$Sample::init$() {
}

TypeVariableBoundParameterIndex$Sample::TypeVariableBoundParameterIndex$Sample() {
}

$Class* TypeVariableBoundParameterIndex$Sample::load$($String* name, bool initialize) {
	$loadClass(TypeVariableBoundParameterIndex$Sample, name, initialize, &_TypeVariableBoundParameterIndex$Sample_ClassInfo_, allocate$TypeVariableBoundParameterIndex$Sample);
	return class$;
}

$Class* TypeVariableBoundParameterIndex$Sample::class$ = nullptr;