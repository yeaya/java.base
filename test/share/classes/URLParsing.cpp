#include <URLParsing.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

$MethodInfo _URLParsing_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(URLParsing::*)()>(&URLParsing::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&URLParsing::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _URLParsing_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"URLParsing",
	"java.lang.Object",
	nullptr,
	nullptr,
	_URLParsing_MethodInfo_
};

$Object* allocate$URLParsing($Class* clazz) {
	return $of($alloc(URLParsing));
}

void URLParsing::init$() {
}

void URLParsing::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, local, $new($File, $($System::getProperty("test.src"_s, "."_s)), "jars"_s));
	$var($String, path, $str({"jar:file:"_s, $(local->getPath()), "/class_path_test.jar!/Foo.java"_s}));
	$var($URL, aURL, $new($URL, path));
	$var($URL, testURL, $new($URL, aURL, "foo/../Foo.java"_s));
	$var($InputStream, in, testURL->openStream());
	$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, in)));
	$var($String, firstLine, reader->readLine());
	if (!$nc(firstLine)->startsWith("public class Foo {"_s)) {
		$throwNew($RuntimeException, "Jar or File parsing failure."_s);
	}
}

URLParsing::URLParsing() {
}

$Class* URLParsing::load$($String* name, bool initialize) {
	$loadClass(URLParsing, name, initialize, &_URLParsing_ClassInfo_, allocate$URLParsing);
	return class$;
}

$Class* URLParsing::class$ = nullptr;