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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose$4, init$, void, $String*, int32_t)},
		{"check", "(Ljava/io/Reader;)Z", nullptr, 0, $virtualMethod(OpsAfterClose$4, check, bool, $Reader*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OpsAfterClose",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OpsAfterClose$4", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"OpsAfterClose$4",
		"OpsAfterClose",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"OpsAfterClose"
	};
	$loadClass(OpsAfterClose$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpsAfterClose$4));
	});
	return class$;
}

$Class* OpsAfterClose$4::class$ = nullptr;