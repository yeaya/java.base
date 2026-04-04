#include <UNCTest.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

void UNCTest::init$() {
}

void UNCTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($URL, url, $new($URL, $nc(args)->get(0)));
	$var($URLConnection, conn, url->openConnection());
	$nc(conn)->setRequestProperty("User-Agent"_s, "Java"_s);
}

UNCTest::UNCTest() {
}

$Class* UNCTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UNCTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UNCTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UNCTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UNCTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UNCTest);
	});
	return class$;
}

$Class* UNCTest::class$ = nullptr;