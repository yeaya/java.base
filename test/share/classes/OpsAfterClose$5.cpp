#include <OpsAfterClose$5.h>
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

void OpsAfterClose$5::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose$5::check($Reader* r) {
	try {
		$nc(r)->skip(1);
	} catch ($IOException& io) {
		return true;
	}
	return false;
}

OpsAfterClose$5::OpsAfterClose$5() {
}

$Class* OpsAfterClose$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose$5, init$, void, $String*, int32_t)},
		{"check", "(Ljava/io/Reader;)Z", nullptr, 0, $virtualMethod(OpsAfterClose$5, check, bool, $Reader*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OpsAfterClose",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OpsAfterClose$5", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"OpsAfterClose$5",
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
	$loadClass(OpsAfterClose$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpsAfterClose$5));
	});
	return class$;
}

$Class* OpsAfterClose$5::class$ = nullptr;