#include <GetAnnotatedNestedSuperclass$Y.h>

#include <GetAnnotatedNestedSuperclass$X.h>
#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $GetAnnotatedNestedSuperclass$X = ::GetAnnotatedNestedSuperclass$X;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _GetAnnotatedNestedSuperclass$Y_TypeAnnotations_[] = {
	{"LGetAnnotatedNestedSuperclass$A;", nullptr, "CLASS_EXTENDS, type_index = 65535"},
	{"LGetAnnotatedNestedSuperclass$B;", nullptr, "CLASS_EXTENDS, type_index = 65535, location = (TYPE_ARGUMENT(0))"},
	{"LGetAnnotatedNestedSuperclass$C;", nullptr, "CLASS_EXTENDS, type_index = 65535, location = (TYPE_ARGUMENT(1))"},
	{"LGetAnnotatedNestedSuperclass$D;", nullptr, "CLASS_EXTENDS, type_index = 65535, location = (TYPE_ARGUMENT(2))"},
	{"LGetAnnotatedNestedSuperclass$E;", nullptr, "CLASS_EXTENDS, type_index = 65535, location = (TYPE_ARGUMENT(2),TYPE_ARGUMENT(0))"},
	{}
};

$MethodInfo _GetAnnotatedNestedSuperclass$Y_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(GetAnnotatedNestedSuperclass$Y, init$, void)},
	{}
};

$InnerClassInfo _GetAnnotatedNestedSuperclass$Y_InnerClassesInfo_[] = {
	{"GetAnnotatedNestedSuperclass$Y", "GetAnnotatedNestedSuperclass", "Y", $STATIC},
	{"GetAnnotatedNestedSuperclass$X", "GetAnnotatedNestedSuperclass", "X", $STATIC},
	{}
};

$ClassInfo _GetAnnotatedNestedSuperclass$Y_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedNestedSuperclass$Y",
	"GetAnnotatedNestedSuperclass$X",
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass$Y_MethodInfo_,
	"<P1:Ljava/lang/Object;P2:Ljava/lang/Object;>LGetAnnotatedNestedSuperclass$X<TP1;TP2;Ljava/lang/Class<TP1;>;>;",
	nullptr,
	_GetAnnotatedNestedSuperclass$Y_InnerClassesInfo_,
	nullptr,
	_GetAnnotatedNestedSuperclass$Y_TypeAnnotations_,
	nullptr,
	"GetAnnotatedNestedSuperclass"
};

$Object* allocate$GetAnnotatedNestedSuperclass$Y($Class* clazz) {
	return $of($alloc(GetAnnotatedNestedSuperclass$Y));
}

void GetAnnotatedNestedSuperclass$Y::init$() {
	$GetAnnotatedNestedSuperclass$X::init$();
}

GetAnnotatedNestedSuperclass$Y::GetAnnotatedNestedSuperclass$Y() {
}

$Class* GetAnnotatedNestedSuperclass$Y::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedNestedSuperclass$Y, name, initialize, &_GetAnnotatedNestedSuperclass$Y_ClassInfo_, allocate$GetAnnotatedNestedSuperclass$Y);
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$Y::class$ = nullptr;