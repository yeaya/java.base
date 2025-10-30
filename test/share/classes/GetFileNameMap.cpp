#include <GetFileNameMap.h>

#include <java/net/FileNameMap.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileNameMap = ::java::net::FileNameMap;
using $URLConnection = ::java::net::URLConnection;

$MethodInfo _GetFileNameMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetFileNameMap::*)()>(&GetFileNameMap::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetFileNameMap::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _GetFileNameMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetFileNameMap",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetFileNameMap_MethodInfo_
};

$Object* allocate$GetFileNameMap($Class* clazz) {
	return $of($alloc(GetFileNameMap));
}

void GetFileNameMap::init$() {
}

void GetFileNameMap::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($FileNameMap, map, $URLConnection::getFileNameMap());
	$var($String, s, $nc(map)->getContentTypeFor("test.pdf"_s));
}

GetFileNameMap::GetFileNameMap() {
}

$Class* GetFileNameMap::load$($String* name, bool initialize) {
	$loadClass(GetFileNameMap, name, initialize, &_GetFileNameMap_ClassInfo_, allocate$GetFileNameMap);
	return class$;
}

$Class* GetFileNameMap::class$ = nullptr;