#include <OpsAfterClose$1.h>

#include <OpsAfterClose.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $OpsAfterClose = ::OpsAfterClose;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose$1::*)($String*,int32_t)>(&OpsAfterClose$1::init$))},
	{"check", "(Ljava/io/Reader;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose$1_EnclosingMethodInfo_ = {
	"OpsAfterClose",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose$1_InnerClassesInfo_[] = {
	{"OpsAfterClose$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose$1",
	"OpsAfterClose",
	nullptr,
	nullptr,
	_OpsAfterClose$1_MethodInfo_,
	nullptr,
	&_OpsAfterClose$1_EnclosingMethodInfo_,
	_OpsAfterClose$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose"
};

$Object* allocate$OpsAfterClose$1($Class* clazz) {
	return $of($alloc(OpsAfterClose$1));
}

void OpsAfterClose$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose$1::check($Reader* r) {
	try {
		$nc(r)->read();
	} catch ($IOException& io) {
		return true;
	}
	return false;
}

OpsAfterClose$1::OpsAfterClose$1() {
}

$Class* OpsAfterClose$1::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose$1, name, initialize, &_OpsAfterClose$1_ClassInfo_, allocate$OpsAfterClose$1);
	return class$;
}

$Class* OpsAfterClose$1::class$ = nullptr;