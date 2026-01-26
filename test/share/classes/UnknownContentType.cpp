#include <UnknownContentType.h>

#include <java/io/File.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

$MethodInfo _UnknownContentType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnknownContentType, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UnknownContentType, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _UnknownContentType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UnknownContentType",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UnknownContentType_MethodInfo_
};

$Object* allocate$UnknownContentType($Class* clazz) {
	return $of($alloc(UnknownContentType));
}

void UnknownContentType::init$() {
}

void UnknownContentType::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, tmp, $File::createTempFile("bug4975103"_s, nullptr));
	$nc(tmp)->deleteOnExit();
	$var($URL, url, tmp->toURL());
	$var($URLConnection, conn, $nc(url)->openConnection());
	$nc(conn)->connect();
	$var($String, s1, conn->getContentType());
	$var($String, s2, conn->getHeaderField("content-type"_s));
	if (!$nc(s1)->equals(s2)) {
		$throwNew($RuntimeException, "getContentType() differs from getHeaderField(\"content-type\")"_s);
	}
}

UnknownContentType::UnknownContentType() {
}

$Class* UnknownContentType::load$($String* name, bool initialize) {
	$loadClass(UnknownContentType, name, initialize, &_UnknownContentType_ClassInfo_, allocate$UnknownContentType);
	return class$;
}

$Class* UnknownContentType::class$ = nullptr;