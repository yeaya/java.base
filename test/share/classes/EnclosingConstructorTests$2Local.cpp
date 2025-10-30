#include <EnclosingConstructorTests$2Local.h>

#include <EnclosingConstructorTests.h>
#include <jcpp.h>

using $EnclosingConstructorTests = ::EnclosingConstructorTests;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _EnclosingConstructorTests$2Local_FieldInfo_[] = {
	{"this$0", "LEnclosingConstructorTests;", nullptr, $FINAL | $SYNTHETIC, $field(EnclosingConstructorTests$2Local, this$0)},
	{}
};

$MethodInfo _EnclosingConstructorTests$2Local_MethodInfo_[] = {
	{"<init>", "(LEnclosingConstructorTests;)V", nullptr, 0, $method(static_cast<void(EnclosingConstructorTests$2Local::*)($EnclosingConstructorTests*)>(&EnclosingConstructorTests$2Local::init$))},
	{}
};

$EnclosingMethodInfo _EnclosingConstructorTests$2Local_EnclosingMethodInfo_ = {
	"EnclosingConstructorTests",
	"<init>",
	"(I)V"
};

$InnerClassInfo _EnclosingConstructorTests$2Local_InnerClassesInfo_[] = {
	{"EnclosingConstructorTests$2Local", nullptr, "Local", 0},
	{}
};

$ClassInfo _EnclosingConstructorTests$2Local_ClassInfo_ = {
	$ACC_SUPER,
	"EnclosingConstructorTests$2Local",
	"java.lang.Object",
	nullptr,
	_EnclosingConstructorTests$2Local_FieldInfo_,
	_EnclosingConstructorTests$2Local_MethodInfo_,
	nullptr,
	&_EnclosingConstructorTests$2Local_EnclosingMethodInfo_,
	_EnclosingConstructorTests$2Local_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingConstructorTests"
};

$Object* allocate$EnclosingConstructorTests$2Local($Class* clazz) {
	return $of($alloc(EnclosingConstructorTests$2Local));
}

void EnclosingConstructorTests$2Local::init$($EnclosingConstructorTests* this$0) {
	$set(this, this$0, this$0);
}

EnclosingConstructorTests$2Local::EnclosingConstructorTests$2Local() {
}

$Class* EnclosingConstructorTests$2Local::load$($String* name, bool initialize) {
	$loadClass(EnclosingConstructorTests$2Local, name, initialize, &_EnclosingConstructorTests$2Local_ClassInfo_, allocate$EnclosingConstructorTests$2Local);
	return class$;
}

$Class* EnclosingConstructorTests$2Local::class$ = nullptr;