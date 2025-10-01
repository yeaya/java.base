#include <EnclosingConstructorTests$1Local.h>

#include <EnclosingConstructorTests.h>
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

using $EnclosingConstructorTests = ::EnclosingConstructorTests;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _EnclosingConstructorTests$1Local_FieldInfo_[] = {
	{"this$0", "LEnclosingConstructorTests;", nullptr, $FINAL | $SYNTHETIC, $field(EnclosingConstructorTests$1Local, this$0)},
	{}
};

$MethodInfo _EnclosingConstructorTests$1Local_MethodInfo_[] = {
	{"<init>", "(LEnclosingConstructorTests;)V", nullptr, 0, $method(static_cast<void(EnclosingConstructorTests$1Local::*)($EnclosingConstructorTests*)>(&EnclosingConstructorTests$1Local::init$))},
	{}
};

$EnclosingMethodInfo _EnclosingConstructorTests$1Local_EnclosingMethodInfo_ = {
	"EnclosingConstructorTests",
	"<init>",
	"()V"
};

$InnerClassInfo _EnclosingConstructorTests$1Local_InnerClassesInfo_[] = {
	{"EnclosingConstructorTests$1Local", nullptr, "Local", 0},
	{}
};

$ClassInfo _EnclosingConstructorTests$1Local_ClassInfo_ = {
	$ACC_SUPER,
	"EnclosingConstructorTests$1Local",
	"java.lang.Object",
	nullptr,
	_EnclosingConstructorTests$1Local_FieldInfo_,
	_EnclosingConstructorTests$1Local_MethodInfo_,
	nullptr,
	&_EnclosingConstructorTests$1Local_EnclosingMethodInfo_,
	_EnclosingConstructorTests$1Local_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingConstructorTests"
};

$Object* allocate$EnclosingConstructorTests$1Local($Class* clazz) {
	return $of($alloc(EnclosingConstructorTests$1Local));
}

void EnclosingConstructorTests$1Local::init$($EnclosingConstructorTests* this$0) {
	$set(this, this$0, this$0);
}

EnclosingConstructorTests$1Local::EnclosingConstructorTests$1Local() {
}

$Class* EnclosingConstructorTests$1Local::load$($String* name, bool initialize) {
	$loadClass(EnclosingConstructorTests$1Local, name, initialize, &_EnclosingConstructorTests$1Local_ClassInfo_, allocate$EnclosingConstructorTests$1Local);
	return class$;
}

$Class* EnclosingConstructorTests$1Local::class$ = nullptr;