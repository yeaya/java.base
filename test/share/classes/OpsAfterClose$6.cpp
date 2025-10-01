#include <OpsAfterClose$6.h>

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

$MethodInfo _OpsAfterClose$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose$6::*)($String*,int32_t)>(&OpsAfterClose$6::init$))},
	{"check", "(Ljava/io/Reader;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose$6_EnclosingMethodInfo_ = {
	"OpsAfterClose",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose$6_InnerClassesInfo_[] = {
	{"OpsAfterClose$6", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose$6_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose$6",
	"OpsAfterClose",
	nullptr,
	nullptr,
	_OpsAfterClose$6_MethodInfo_,
	nullptr,
	&_OpsAfterClose$6_EnclosingMethodInfo_,
	_OpsAfterClose$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose"
};

$Object* allocate$OpsAfterClose$6($Class* clazz) {
	return $of($alloc(OpsAfterClose$6));
}

void OpsAfterClose$6::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose$6::check($Reader* r) {
	try {
		$nc(r)->reset();
	} catch ($IOException&) {
		$var($IOException, io, $catch());
		return true;
	}
	return false;
}

OpsAfterClose$6::OpsAfterClose$6() {
}

$Class* OpsAfterClose$6::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose$6, name, initialize, &_OpsAfterClose$6_ClassInfo_, allocate$OpsAfterClose$6);
	return class$;
}

$Class* OpsAfterClose$6::class$ = nullptr;