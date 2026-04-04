#include <OpsAfterClose4DataInputStream$22.h>
#include <OpsAfterClose4DataInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $OpsAfterClose4DataInputStream = ::OpsAfterClose4DataInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void OpsAfterClose4DataInputStream$22::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4DataInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4DataInputStream$22::check($DataInputStream* is) {
	$useLocalObjectStack();
	try {
		$nc(is)->readFully($$new($bytes, 1), 0, 1);
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4DataInputStream$22::OpsAfterClose4DataInputStream$22() {
}

$Class* OpsAfterClose4DataInputStream$22::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4DataInputStream$22, init$, void, $String*, int32_t)},
		{"check", "(Ljava/io/DataInputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4DataInputStream$22, check, bool, $DataInputStream*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OpsAfterClose4DataInputStream",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OpsAfterClose4DataInputStream$22", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"OpsAfterClose4DataInputStream$22",
		"OpsAfterClose4DataInputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"OpsAfterClose4DataInputStream"
	};
	$loadClass(OpsAfterClose4DataInputStream$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpsAfterClose4DataInputStream$22));
	});
	return class$;
}

$Class* OpsAfterClose4DataInputStream$22::class$ = nullptr;