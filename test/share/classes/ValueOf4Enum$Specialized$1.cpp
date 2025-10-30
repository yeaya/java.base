#include <ValueOf4Enum$Specialized$1.h>

#include <ValueOf4Enum$Specialized.h>
#include <jcpp.h>

using $ValueOf4Enum$Specialized = ::ValueOf4Enum$Specialized;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ValueOf4Enum$Specialized$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(ValueOf4Enum$Specialized$1::*)($String*,int32_t)>(&ValueOf4Enum$Specialized$1::init$))},
	{"foo", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ValueOf4Enum$Specialized$1_EnclosingMethodInfo_ = {
	"ValueOf4Enum$Specialized",
	nullptr,
	nullptr
};

$InnerClassInfo _ValueOf4Enum$Specialized$1_InnerClassesInfo_[] = {
	{"ValueOf4Enum$Specialized", "ValueOf4Enum", "Specialized", $STATIC | $ABSTRACT | $ENUM},
	{"ValueOf4Enum$Specialized$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _ValueOf4Enum$Specialized$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"ValueOf4Enum$Specialized$1",
	"ValueOf4Enum$Specialized",
	nullptr,
	nullptr,
	_ValueOf4Enum$Specialized$1_MethodInfo_,
	nullptr,
	&_ValueOf4Enum$Specialized$1_EnclosingMethodInfo_,
	_ValueOf4Enum$Specialized$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ValueOf4Enum"
};

$Object* allocate$ValueOf4Enum$Specialized$1($Class* clazz) {
	return $of($alloc(ValueOf4Enum$Specialized$1));
}

void ValueOf4Enum$Specialized$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$ValueOf4Enum$Specialized::init$($enum$name, $enum$ordinal);
}

void ValueOf4Enum$Specialized$1::foo() {
}

ValueOf4Enum$Specialized$1::ValueOf4Enum$Specialized$1() {
}

$Class* ValueOf4Enum$Specialized$1::load$($String* name, bool initialize) {
	$loadClass(ValueOf4Enum$Specialized$1, name, initialize, &_ValueOf4Enum$Specialized$1_ClassInfo_, allocate$ValueOf4Enum$Specialized$1);
	return class$;
}

$Class* ValueOf4Enum$Specialized$1::class$ = nullptr;