#include <OpsAfterClose$2.h>

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

$MethodInfo _OpsAfterClose$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose$2, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/Reader;)Z", nullptr, 0, $virtualMethod(OpsAfterClose$2, check, bool, $Reader*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose$2_EnclosingMethodInfo_ = {
	"OpsAfterClose",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose$2_InnerClassesInfo_[] = {
	{"OpsAfterClose$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose$2",
	"OpsAfterClose",
	nullptr,
	nullptr,
	_OpsAfterClose$2_MethodInfo_,
	nullptr,
	&_OpsAfterClose$2_EnclosingMethodInfo_,
	_OpsAfterClose$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose"
};

$Object* allocate$OpsAfterClose$2($Class* clazz) {
	return $of($alloc(OpsAfterClose$2));
}

void OpsAfterClose$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose$2::check($Reader* r) {
	try {
		$var($chars, buf, $new($chars, 2));
		int32_t len = 1;
		$nc(r)->read(buf, 0, len);
	} catch ($IOException& io) {
		return true;
	}
	return false;
}

OpsAfterClose$2::OpsAfterClose$2() {
}

$Class* OpsAfterClose$2::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose$2, name, initialize, &_OpsAfterClose$2_ClassInfo_, allocate$OpsAfterClose$2);
	return class$;
}

$Class* OpsAfterClose$2::class$ = nullptr;