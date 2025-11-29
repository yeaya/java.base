#include <Test8076596$1.h>

#include <Test8076596.h>
#include <jcpp.h>

using $Test8076596 = ::Test8076596;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Test8076596$1_FieldInfo_[] = {
	{"this$0", "LTest8076596;", nullptr, $FINAL | $SYNTHETIC, $field(Test8076596$1, this$0)},
	{}
};

$MethodInfo _Test8076596$1_MethodInfo_[] = {
	{"<init>", "(LTest8076596;)V", nullptr, 0, $method(static_cast<void(Test8076596$1::*)($Test8076596*)>(&Test8076596$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test8076596$1_EnclosingMethodInfo_ = {
	"Test8076596",
	"<init>",
	"()V"
};

$InnerClassInfo _Test8076596$1_InnerClassesInfo_[] = {
	{"Test8076596$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8076596$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test8076596$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Test8076596$1_FieldInfo_,
	_Test8076596$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Test8076596$1_EnclosingMethodInfo_,
	_Test8076596$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test8076596"
};

$Object* allocate$Test8076596$1($Class* clazz) {
	return $of($alloc(Test8076596$1));
}

void Test8076596$1::init$($Test8076596* this$0) {
	$set(this, this$0, this$0);
}

$Object* Test8076596$1::run() {
	return $of(nullptr);
}

Test8076596$1::Test8076596$1() {
}

$Class* Test8076596$1::load$($String* name, bool initialize) {
	$loadClass(Test8076596$1, name, initialize, &_Test8076596$1_ClassInfo_, allocate$Test8076596$1);
	return class$;
}

$Class* Test8076596$1::class$ = nullptr;