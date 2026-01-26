#include <OpsAfterClose$7.h>

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

$MethodInfo _OpsAfterClose$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose$7, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/Reader;)Z", nullptr, 0, $virtualMethod(OpsAfterClose$7, check, bool, $Reader*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose$7_EnclosingMethodInfo_ = {
	"OpsAfterClose",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose$7_InnerClassesInfo_[] = {
	{"OpsAfterClose$7", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose$7_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose$7",
	"OpsAfterClose",
	nullptr,
	nullptr,
	_OpsAfterClose$7_MethodInfo_,
	nullptr,
	&_OpsAfterClose$7_EnclosingMethodInfo_,
	_OpsAfterClose$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose"
};

$Object* allocate$OpsAfterClose$7($Class* clazz) {
	return $of($alloc(OpsAfterClose$7));
}

void OpsAfterClose$7::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose$7::check($Reader* r) {
	try {
		$nc(r)->close();
	} catch ($IOException& io) {
		return false;
	}
	return true;
}

OpsAfterClose$7::OpsAfterClose$7() {
}

$Class* OpsAfterClose$7::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose$7, name, initialize, &_OpsAfterClose$7_ClassInfo_, allocate$OpsAfterClose$7);
	return class$;
}

$Class* OpsAfterClose$7::class$ = nullptr;