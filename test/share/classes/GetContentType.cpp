#include <GetContentType.h>

#include <java/io/File.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

#undef GIF_MIME_TYPE
#undef JAR_MIME_TYPE

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

$FieldInfo _GetContentType_FieldInfo_[] = {
	{"JAR_MIME_TYPE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GetContentType, JAR_MIME_TYPE)},
	{"GIF_MIME_TYPE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GetContentType, GIF_MIME_TYPE)},
	{}
};

$MethodInfo _GetContentType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetContentType::*)()>(&GetContentType::init$))},
	{"getSpec", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&GetContentType::getSpec)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetContentType::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _GetContentType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetContentType",
	"java.lang.Object",
	nullptr,
	_GetContentType_FieldInfo_,
	_GetContentType_MethodInfo_
};

$Object* allocate$GetContentType($Class* clazz) {
	return $of($alloc(GetContentType));
}

$String* GetContentType::JAR_MIME_TYPE = nullptr;
$String* GetContentType::GIF_MIME_TYPE = nullptr;

void GetContentType::init$() {
}

void GetContentType::main($StringArray* args) {
	$init(GetContentType);
	$useLocalCurrentObjectStackCache();
	$var($URL, url, $new($URL, $(getSpec())));
	$var($URLConnection, connection, url->openConnection());
	$var($String, contentType, $nc(connection)->getContentType());
	$nc($System::out)->println($$str({url, " jar content type: "_s, contentType}));
	if (!$nc(contentType)->equals(GetContentType::JAR_MIME_TYPE)) {
		$throwNew($RuntimeException, "invalid MIME type for JAR archive"_s);
	}
	$assign(url, $new($URL, url, "image.gif"_s));
	$assign(connection, url->openConnection());
	$assign(contentType, connection->getContentType());
	$nc($System::out)->println($$str({url, " img content type: "_s, contentType}));
	if (!$nc(contentType)->equals(GetContentType::GIF_MIME_TYPE)) {
		$throwNew($RuntimeException, "invalid MIME type for JAR entry"_s);
	}
}

$String* GetContentType::getSpec() {
	$init(GetContentType);
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, "."_s));
	$init($File);
	return $str({"jar:file:"_s, $(file->getCanonicalPath()), $File::separator, "jars"_s, $File::separator, "test.jar!/"_s});
}

GetContentType::GetContentType() {
}

void clinit$GetContentType($Class* class$) {
	$assignStatic(GetContentType::JAR_MIME_TYPE, "x-java/jar"_s);
	$assignStatic(GetContentType::GIF_MIME_TYPE, "image/gif"_s);
}

$Class* GetContentType::load$($String* name, bool initialize) {
	$loadClass(GetContentType, name, initialize, &_GetContentType_ClassInfo_, clinit$GetContentType, allocate$GetContentType);
	return class$;
}

$Class* GetContentType::class$ = nullptr;