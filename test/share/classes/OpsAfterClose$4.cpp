#include <OpsAfterClose$4.h>

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

$MethodInfo _OpsAfterClose$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose$4, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/Reader;)Z", nullptr, 0, $virtualMethod(OpsAfterClose$4, check, bool, $Reader*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose$4_EnclosingMethodInfo_ = {
	"OpsAfterClose",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose$4_InnerClassesInfo_[] = {
	{"OpsAfterClose$4", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose$4_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose$4",
	"OpsAfterClose",
	nullptr,
	nullptr,
	_OpsAfterClose$4_MethodInfo_,
	nullptr,
	&_OpsAfterClose$4_EnclosingMethodInfo_,
	_OpsAfterClose$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose"
};

$Object* allocate$OpsAfterClose$4($Class* clazz) {
	return $of($alloc(OpsAfterClose$4));
}

void OpsAfterClose$4::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose$4::check($Reader* r) {
	try {
		$nc(r)->mark(1);
	} catch ($IOException& io) {
		return true;
	}
	return false;
}

OpsAfterClose$4::OpsAfterClose$4() {
}

$Class* OpsAfterClose$4::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose$4, name, initialize, &_OpsAfterClose$4_ClassInfo_, allocate$OpsAfterClose$4);
	return class$;
}

$Class* OpsAfterClose$4::class$ = nullptr;