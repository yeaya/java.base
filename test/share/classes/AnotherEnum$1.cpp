#include <AnotherEnum$1.h>

#include <AnotherEnum.h>
#include <jcpp.h>

using $AnotherEnum = ::AnotherEnum;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _AnotherEnum$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(AnotherEnum$1, init$, void, $String*, int32_t)},
	{}
};

$EnclosingMethodInfo _AnotherEnum$1_EnclosingMethodInfo_ = {
	"AnotherEnum",
	nullptr,
	nullptr
};

$InnerClassInfo _AnotherEnum$1_InnerClassesInfo_[] = {
	{"AnotherEnum$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _AnotherEnum$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"AnotherEnum$1",
	"AnotherEnum",
	nullptr,
	nullptr,
	_AnotherEnum$1_MethodInfo_,
	nullptr,
	&_AnotherEnum$1_EnclosingMethodInfo_,
	_AnotherEnum$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AnotherEnum"
};

$Object* allocate$AnotherEnum$1($Class* clazz) {
	return $of($alloc(AnotherEnum$1));
}

void AnotherEnum$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$AnotherEnum::init$($enum$name, $enum$ordinal);
}

AnotherEnum$1::AnotherEnum$1() {
}

$Class* AnotherEnum$1::load$($String* name, bool initialize) {
	$loadClass(AnotherEnum$1, name, initialize, &_AnotherEnum$1_ClassInfo_, allocate$AnotherEnum$1);
	return class$;
}

$Class* AnotherEnum$1::class$ = nullptr;