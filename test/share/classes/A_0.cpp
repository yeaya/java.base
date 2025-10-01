#include <A_0.h>

#include <A_0$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $A_0$1 = ::A_0$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _A_0_FieldInfo_[] = {
	{"o", "Ljava/lang/Object;", nullptr, 0, $field(A_0, o)},
	{}
};

$MethodInfo _A_0_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(A_0::*)()>(&A_0::init$))},
	{}
};

$InnerClassInfo _A_0_InnerClassesInfo_[] = {
	{"A_0$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _A_0_ClassInfo_ = {
	$ACC_SUPER,
	"A_0",
	"java.lang.Object",
	nullptr,
	_A_0_FieldInfo_,
	_A_0_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_A_0_InnerClassesInfo_,
	nullptr,
	nullptr,
	"A_0$1"
};

$Object* allocate$A_0($Class* clazz) {
	return $of($alloc(A_0));
}

void A_0::init$() {
	$set(this, o, $new($A_0$1, this));
}

A_0::A_0() {
}

$Class* A_0::load$($String* name, bool initialize) {
	$loadClass(A_0, name, initialize, &_A_0_ClassInfo_, allocate$A_0);
	return class$;
}

$Class* A_0::class$ = nullptr;