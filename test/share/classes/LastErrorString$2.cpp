#include <LastErrorString$2.h>
#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/File.h>
#include <jcpp.h>

#undef INVALID_PATH

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$2::init$($String* name) {
	$LastErrorString$Test::init$(name);
}

void LastErrorString$2::run() {
	$init($LastErrorString);
	$$new($File, $LastErrorString::INVALID_PATH)->getCanonicalPath();
}

LastErrorString$2::LastErrorString$2() {
}

$Class* LastErrorString$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$2, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$2, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$2", nullptr, nullptr, 0},
		{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$2",
		"LastErrorString$Test",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LastErrorString"
	};
	$loadClass(LastErrorString$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$2);
	});
	return class$;
}

$Class* LastErrorString$2::class$ = nullptr;