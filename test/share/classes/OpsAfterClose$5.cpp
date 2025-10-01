#include <OpsAfterClose$5.h>

#include <OpsAfterClose.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OpsAfterClose = ::OpsAfterClose;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose$5::*)($String*,int32_t)>(&OpsAfterClose$5::init$))},
	{"check", "(Ljava/io/Reader;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose$5_EnclosingMethodInfo_ = {
	"OpsAfterClose",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose$5_InnerClassesInfo_[] = {
	{"OpsAfterClose$5", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose$5_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose$5",
	"OpsAfterClose",
	nullptr,
	nullptr,
	_OpsAfterClose$5_MethodInfo_,
	nullptr,
	&_OpsAfterClose$5_EnclosingMethodInfo_,
	_OpsAfterClose$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose"
};

$Object* allocate$OpsAfterClose$5($Class* clazz) {
	return $of($alloc(OpsAfterClose$5));
}

void OpsAfterClose$5::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose$5::check($Reader* r) {
	try {
		$nc(r)->skip(1);
	} catch ($IOException&) {
		$var($IOException, io, $catch());
		return true;
	}
	return false;
}

OpsAfterClose$5::OpsAfterClose$5() {
}

$Class* OpsAfterClose$5::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose$5, name, initialize, &_OpsAfterClose$5_ClassInfo_, allocate$OpsAfterClose$5);
	return class$;
}

$Class* OpsAfterClose$5::class$ = nullptr;