#include <GetFileNameMap.h>
#include <java/net/FileNameMap.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileNameMap = ::java::net::FileNameMap;
using $URLConnection = ::java::net::URLConnection;

void GetFileNameMap::init$() {
}

void GetFileNameMap::main($StringArray* args) {
	$useLocalObjectStack();
	$var($FileNameMap, map, $URLConnection::getFileNameMap());
	$var($String, s, $nc(map)->getContentTypeFor("test.pdf"_s));
}

GetFileNameMap::GetFileNameMap() {
}

$Class* GetFileNameMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetFileNameMap, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetFileNameMap, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetFileNameMap",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetFileNameMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetFileNameMap);
	});
	return class$;
}

$Class* GetFileNameMap::class$ = nullptr;