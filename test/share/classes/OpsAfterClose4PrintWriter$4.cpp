#include <OpsAfterClose4PrintWriter$4.h>
#include <OpsAfterClose4PrintWriter.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $OpsAfterClose4PrintWriter = ::OpsAfterClose4PrintWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void OpsAfterClose4PrintWriter$4::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4PrintWriter::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4PrintWriter$4::check($PrintWriter* w) {
	$var($String, s, "abc"_s);
	$nc(w)->write(s);
	return w->checkError();
}

OpsAfterClose4PrintWriter$4::OpsAfterClose4PrintWriter$4() {
}

$Class* OpsAfterClose4PrintWriter$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4PrintWriter$4, init$, void, $String*, int32_t)},
		{"check", "(Ljava/io/PrintWriter;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4PrintWriter$4, check, bool, $PrintWriter*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OpsAfterClose4PrintWriter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OpsAfterClose4PrintWriter$4", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"OpsAfterClose4PrintWriter$4",
		"OpsAfterClose4PrintWriter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"OpsAfterClose4PrintWriter"
	};
	$loadClass(OpsAfterClose4PrintWriter$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpsAfterClose4PrintWriter$4));
	});
	return class$;
}

$Class* OpsAfterClose4PrintWriter$4::class$ = nullptr;