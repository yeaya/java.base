#include <BadDriveLetter.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void BadDriveLetter::init$() {
}

void BadDriveLetter::main($StringArray* args) {
	$useLocalObjectStack();
	$nc($System::err)->println($($$new($File, ".:"_s)->getAbsolutePath()));
}

BadDriveLetter::BadDriveLetter() {
}

$Class* BadDriveLetter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BadDriveLetter, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BadDriveLetter, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BadDriveLetter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BadDriveLetter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadDriveLetter);
	});
	return class$;
}

$Class* BadDriveLetter::class$ = nullptr;