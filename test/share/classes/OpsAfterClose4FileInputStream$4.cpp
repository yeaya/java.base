#include <OpsAfterClose4FileInputStream$4.h>
#include <OpsAfterClose4FileInputStream.h>
#include <java/io/FileInputStream.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $OpsAfterClose4FileInputStream = ::OpsAfterClose4FileInputStream;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void OpsAfterClose4FileInputStream$4::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4FileInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4FileInputStream$4::check($FileInputStream* r) {
	$nc(r)->getChannel();
	return true;
}

OpsAfterClose4FileInputStream$4::OpsAfterClose4FileInputStream$4() {
}

$Class* OpsAfterClose4FileInputStream$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4FileInputStream$4, init$, void, $String*, int32_t)},
		{"check", "(Ljava/io/FileInputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4FileInputStream$4, check, bool, $FileInputStream*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OpsAfterClose4FileInputStream",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OpsAfterClose4FileInputStream$4", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"OpsAfterClose4FileInputStream$4",
		"OpsAfterClose4FileInputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"OpsAfterClose4FileInputStream"
	};
	$loadClass(OpsAfterClose4FileInputStream$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpsAfterClose4FileInputStream$4));
	});
	return class$;
}

$Class* OpsAfterClose4FileInputStream$4::class$ = nullptr;