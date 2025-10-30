#include <EnclosingMethodTests$1Local.h>

#include <EnclosingMethodTests.h>
#include <jcpp.h>

using $EnclosingMethodTests = ::EnclosingMethodTests;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _EnclosingMethodTests$1Local_FieldInfo_[] = {
	{"this$0", "LEnclosingMethodTests;", nullptr, $FINAL | $SYNTHETIC, $field(EnclosingMethodTests$1Local, this$0)},
	{}
};

$MethodInfo _EnclosingMethodTests$1Local_MethodInfo_[] = {
	{"<init>", "(LEnclosingMethodTests;)V", nullptr, 0, $method(static_cast<void(EnclosingMethodTests$1Local::*)($EnclosingMethodTests*)>(&EnclosingMethodTests$1Local::init$))},
	{}
};

$EnclosingMethodInfo _EnclosingMethodTests$1Local_EnclosingMethodInfo_ = {
	"EnclosingMethodTests",
	"getLocalClass",
	"(Ljava/lang/Object;)Ljava/lang/Class;"
};

$InnerClassInfo _EnclosingMethodTests$1Local_InnerClassesInfo_[] = {
	{"EnclosingMethodTests$1Local", nullptr, "Local", 0},
	{}
};

$ClassInfo _EnclosingMethodTests$1Local_ClassInfo_ = {
	$ACC_SUPER,
	"EnclosingMethodTests$1Local",
	"java.lang.Object",
	nullptr,
	_EnclosingMethodTests$1Local_FieldInfo_,
	_EnclosingMethodTests$1Local_MethodInfo_,
	nullptr,
	&_EnclosingMethodTests$1Local_EnclosingMethodInfo_,
	_EnclosingMethodTests$1Local_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingMethodTests"
};

$Object* allocate$EnclosingMethodTests$1Local($Class* clazz) {
	return $of($alloc(EnclosingMethodTests$1Local));
}

void EnclosingMethodTests$1Local::init$($EnclosingMethodTests* this$0) {
	$set(this, this$0, this$0);
}

EnclosingMethodTests$1Local::EnclosingMethodTests$1Local() {
}

$Class* EnclosingMethodTests$1Local::load$($String* name, bool initialize) {
	$loadClass(EnclosingMethodTests$1Local, name, initialize, &_EnclosingMethodTests$1Local_ClassInfo_, allocate$EnclosingMethodTests$1Local);
	return class$;
}

$Class* EnclosingMethodTests$1Local::class$ = nullptr;