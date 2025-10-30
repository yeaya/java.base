#include <GetAnnotatedNestedSuperclass$X.h>

#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $GetAnnotatedNestedSuperclass = ::GetAnnotatedNestedSuperclass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetAnnotatedNestedSuperclass$X_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetAnnotatedNestedSuperclass$X::*)()>(&GetAnnotatedNestedSuperclass$X::init$))},
	{}
};

$InnerClassInfo _GetAnnotatedNestedSuperclass$X_InnerClassesInfo_[] = {
	{"GetAnnotatedNestedSuperclass$X", "GetAnnotatedNestedSuperclass", "X", $STATIC},
	{}
};

$ClassInfo _GetAnnotatedNestedSuperclass$X_ClassInfo_ = {
	$ACC_SUPER,
	"GetAnnotatedNestedSuperclass$X",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAnnotatedNestedSuperclass$X_MethodInfo_,
	"<P1:Ljava/lang/Object;P2:Ljava/lang/Object;P3:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_GetAnnotatedNestedSuperclass$X_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAnnotatedNestedSuperclass"
};

$Object* allocate$GetAnnotatedNestedSuperclass$X($Class* clazz) {
	return $of($alloc(GetAnnotatedNestedSuperclass$X));
}

void GetAnnotatedNestedSuperclass$X::init$() {
}

GetAnnotatedNestedSuperclass$X::GetAnnotatedNestedSuperclass$X() {
}

$Class* GetAnnotatedNestedSuperclass$X::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedNestedSuperclass$X, name, initialize, &_GetAnnotatedNestedSuperclass$X_ClassInfo_, allocate$GetAnnotatedNestedSuperclass$X);
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$X::class$ = nullptr;