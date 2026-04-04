#include <B5086147.h>
#include <java/io/File.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;

void B5086147::init$() {
}

void B5086147::main($StringArray* aaParamters) {
	$useLocalObjectStack();
	$var($File, file, $new($File, "\\\\somehost\\someshare\\somefile.ext"_s));
	$var($URI, uri, file->toURI());
	if (!($$nc($$nc($nc(uri)->toURL())->toURI())->equals(uri))) {
		$throwNew($RuntimeException, "Test failed : (uri.toURL().toURI().equals(uri)) isn\'t hold"_s);
	}
}

B5086147::B5086147() {
}

$Class* B5086147::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B5086147, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(B5086147, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B5086147",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B5086147, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B5086147);
	});
	return class$;
}

$Class* B5086147::class$ = nullptr;