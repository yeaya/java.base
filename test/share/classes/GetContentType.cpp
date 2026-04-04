#include <GetContentType.h>
#include <java/io/File.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

#undef GIF_MIME_TYPE
#undef JAR_MIME_TYPE

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

$String* GetContentType::JAR_MIME_TYPE = nullptr;
$String* GetContentType::GIF_MIME_TYPE = nullptr;

void GetContentType::init$() {
}

void GetContentType::main($StringArray* args) {
	$init(GetContentType);
	$useLocalObjectStack();
	$var($URL, url, $new($URL, $(getSpec())));
	$var($URLConnection, connection, url->openConnection());
	$var($String, contentType, $nc(connection)->getContentType());
	$nc($System::out)->println($$str({url, " jar content type: "_s, contentType}));
	if (!$nc(contentType)->equals(GetContentType::JAR_MIME_TYPE)) {
		$throwNew($RuntimeException, "invalid MIME type for JAR archive"_s);
	}
	$assign(url, $new($URL, url, "image.gif"_s));
	$assign(connection, url->openConnection());
	$assign(contentType, $nc(connection)->getContentType());
	$System::out->println($$str({url, " img content type: "_s, contentType}));
	if (!$nc(contentType)->equals(GetContentType::GIF_MIME_TYPE)) {
		$throwNew($RuntimeException, "invalid MIME type for JAR entry"_s);
	}
}

$String* GetContentType::getSpec() {
	$init(GetContentType);
	$useLocalObjectStack();
	$var($File, file, $new($File, "."_s));
	return $str({"jar:file:"_s, $(file->getCanonicalPath()), $File::separator, "jars"_s, $File::separator, "test.jar!/"_s});
}

GetContentType::GetContentType() {
}

void GetContentType::clinit$($Class* clazz) {
	$assignStatic(GetContentType::JAR_MIME_TYPE, "x-java/jar"_s);
	$assignStatic(GetContentType::GIF_MIME_TYPE, "image/gif"_s);
}

$Class* GetContentType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JAR_MIME_TYPE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GetContentType, JAR_MIME_TYPE)},
		{"GIF_MIME_TYPE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GetContentType, GIF_MIME_TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetContentType, init$, void)},
		{"getSpec", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(GetContentType, getSpec, $String*), "java.io.IOException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetContentType, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetContentType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GetContentType, name, initialize, &classInfo$$, GetContentType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetContentType);
	});
	return class$;
}

$Class* GetContentType::class$ = nullptr;