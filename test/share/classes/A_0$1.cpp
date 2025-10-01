#include <A_0$1.h>

#include <A_0.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $A_0 = ::A_0;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _A_0$1_FieldInfo_[] = {
	{"this$0", "LA_0;", nullptr, $FINAL | $SYNTHETIC, $field(A_0$1, this$0)},
	{"t", "Ljava/lang/Object;", "TT;", $PUBLIC, $field(A_0$1, t)},
	{}
};

$MethodInfo _A_0$1_MethodInfo_[] = {
	{"<init>", "(LA_0;)V", nullptr, 0, $method(static_cast<void(A_0$1::*)($A_0*)>(&A_0$1::init$))},
	{}
};

$EnclosingMethodInfo _A_0$1_EnclosingMethodInfo_ = {
	"A_0",
	nullptr,
	nullptr
};

$InnerClassInfo _A_0$1_InnerClassesInfo_[] = {
	{"A_0$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _A_0$1_ClassInfo_ = {
	$ACC_SUPER,
	"A_0$1",
	"java.lang.Object",
	nullptr,
	_A_0$1_FieldInfo_,
	_A_0$1_MethodInfo_,
	nullptr,
	&_A_0$1_EnclosingMethodInfo_,
	_A_0$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"A_0"
};

$Object* allocate$A_0$1($Class* clazz) {
	return $of($alloc(A_0$1));
}

void A_0$1::init$($A_0* this$0) {
	$set(this, this$0, this$0);
}

A_0$1::A_0$1() {
}

$Class* A_0$1::load$($String* name, bool initialize) {
	$loadClass(A_0$1, name, initialize, &_A_0$1_ClassInfo_, allocate$A_0$1);
	return class$;
}

$Class* A_0$1::class$ = nullptr;