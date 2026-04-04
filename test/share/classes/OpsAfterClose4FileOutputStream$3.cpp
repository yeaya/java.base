#include <OpsAfterClose4FileOutputStream$3.h>
#include <OpsAfterClose4FileOutputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $OpsAfterClose4FileOutputStream = ::OpsAfterClose4FileOutputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void OpsAfterClose4FileOutputStream$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4FileOutputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4FileOutputStream$3::check($FileOutputStream* r) {
	$useLocalObjectStack();
	try {
		$var($bytes, buf, $new($bytes, 2));
		int32_t len = 1;
		$nc(r)->write(buf, 0, len);
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4FileOutputStream$3::OpsAfterClose4FileOutputStream$3() {
}

$Class* OpsAfterClose4FileOutputStream$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4FileOutputStream$3, init$, void, $String*, int32_t)},
		{"check", "(Ljava/io/FileOutputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4FileOutputStream$3, check, bool, $FileOutputStream*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OpsAfterClose4FileOutputStream",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OpsAfterClose4FileOutputStream$3", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"OpsAfterClose4FileOutputStream$3",
		"OpsAfterClose4FileOutputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"OpsAfterClose4FileOutputStream"
	};
	$loadClass(OpsAfterClose4FileOutputStream$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpsAfterClose4FileOutputStream$3));
	});
	return class$;
}

$Class* OpsAfterClose4FileOutputStream$3::class$ = nullptr;