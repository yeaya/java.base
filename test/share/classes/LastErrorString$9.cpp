#include <LastErrorString$9.h>
#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

#undef UNREADABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$9::init$($String* name) {
	$LastErrorString$Test::init$(name);
}

void LastErrorString$9::run() {
	$init($LastErrorString);
	$new($FileOutputStream, $LastErrorString::UNREADABLE_FILE);
}

LastErrorString$9::LastErrorString$9() {
}

$Class* LastErrorString$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$9, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$9, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$9", nullptr, nullptr, 0},
		{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$9",
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
	$loadClass(LastErrorString$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$9);
	});
	return class$;
}

$Class* LastErrorString$9::class$ = nullptr;