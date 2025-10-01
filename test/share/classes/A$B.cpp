#include <A$B.h>

#include <A.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $A = ::A;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _A$B_FieldInfo_[] = {
	{"this$0", "LA;", nullptr, $FINAL | $SYNTHETIC, $field(A$B, this$0)},
	{}
};

$MethodInfo _A$B_MethodInfo_[] = {
	{"<init>", "(LA;)V", nullptr, 0, $method(static_cast<void(A$B::*)($A*)>(&A$B::init$))},
	{}
};

$InnerClassInfo _A$B_InnerClassesInfo_[] = {
	{"A$B", "A", "B", 0},
	{}
};

$ClassInfo _A$B_ClassInfo_ = {
	$ACC_SUPER,
	"A$B",
	"java.lang.Object",
	nullptr,
	_A$B_FieldInfo_,
	_A$B_MethodInfo_,
	"<U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_A$B_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"A"
};

$Object* allocate$A$B($Class* clazz) {
	return $of($alloc(A$B));
}

void A$B::init$($A* this$0) {
	$set(this, this$0, this$0);
}

A$B::A$B() {
}

$Class* A$B::load$($String* name, bool initialize) {
	$loadClass(A$B, name, initialize, &_A$B_ClassInfo_, allocate$A$B);
	return class$;
}

$Class* A$B::class$ = nullptr;