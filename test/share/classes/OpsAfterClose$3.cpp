#include <OpsAfterClose$3.h>

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

$MethodInfo _OpsAfterClose$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose$3, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/Reader;)Z", nullptr, 0, $virtualMethod(OpsAfterClose$3, check, bool, $Reader*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose$3_EnclosingMethodInfo_ = {
	"OpsAfterClose",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose$3_InnerClassesInfo_[] = {
	{"OpsAfterClose$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose$3",
	"OpsAfterClose",
	nullptr,
	nullptr,
	_OpsAfterClose$3_MethodInfo_,
	nullptr,
	&_OpsAfterClose$3_EnclosingMethodInfo_,
	_OpsAfterClose$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose"
};

$Object* allocate$OpsAfterClose$3($Class* clazz) {
	return $of($alloc(OpsAfterClose$3));
}

void OpsAfterClose$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose$3::check($Reader* r) {
	try {
		$nc(r)->ready();
	} catch ($IOException& io) {
		return true;
	}
	return false;
}

OpsAfterClose$3::OpsAfterClose$3() {
}

$Class* OpsAfterClose$3::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose$3, name, initialize, &_OpsAfterClose$3_ClassInfo_, allocate$OpsAfterClose$3);
	return class$;
}

$Class* OpsAfterClose$3::class$ = nullptr;