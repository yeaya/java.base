#include <UriImportExport.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

$PrintStream* UriImportExport::log = nullptr;
int32_t UriImportExport::failures = 0;

void UriImportExport::init$() {
}

void UriImportExport::testPath($String* s) {
	$init(UriImportExport);
	$useLocalObjectStack();
	$var($Path, path, $Paths::get(s, $$new($StringArray, 0)));
	$nc(UriImportExport::log)->println(path);
	$var($URI, uri, $nc(path)->toUri());
	UriImportExport::log->println($$str({"  --> "_s, uri}));
	$var($Path, result, $Paths::get(uri));
	UriImportExport::log->println($$str({"  --> "_s, result}));
	if (!$nc(result)->equals($(path->toAbsolutePath()))) {
		UriImportExport::log->println($$str({"FAIL: Expected "_s, path, ", got "_s, result}));
		++UriImportExport::failures;
	}
	UriImportExport::log->println();
}

void UriImportExport::testPath($String* s, $String* expectedUri) {
	$init(UriImportExport);
	$useLocalObjectStack();
	$var($Path, path, $Paths::get(s, $$new($StringArray, 0)));
	$nc(UriImportExport::log)->println(path);
	$var($URI, uri, $nc(path)->toUri());
	UriImportExport::log->println($$str({"  --> "_s, uri}));
	if (!$$nc($nc(uri)->toString())->equals(expectedUri)) {
		UriImportExport::log->println($$str({"FAILED: Expected "_s, expectedUri, ", got "_s, uri}));
		++UriImportExport::failures;
		return;
	}
	$var($Path, result, $Paths::get(uri));
	UriImportExport::log->println($$str({"  --> "_s, result}));
	if (!$nc(result)->equals($(path->toAbsolutePath()))) {
		UriImportExport::log->println($$str({"FAIL: Expected "_s, path, ", got "_s, result}));
		++UriImportExport::failures;
	}
	UriImportExport::log->println();
}

void UriImportExport::testUri($String* s) {
	$init(UriImportExport);
	$useLocalObjectStack();
	$var($URI, uri, $URI::create(s));
	$nc(UriImportExport::log)->println(uri);
	$var($Path, path, $Paths::get(uri));
	UriImportExport::log->println($$str({"  --> "_s, path}));
	$var($URI, result, $nc(path)->toUri());
	UriImportExport::log->println($$str({"  --> "_s, result}));
	if (!$nc(result)->equals(uri)) {
		UriImportExport::log->println($$str({"FAIL: Expected "_s, uri, ", got "_s, result}));
		++UriImportExport::failures;
	}
	UriImportExport::log->println();
}

void UriImportExport::testBadUri($String* s) {
	$init(UriImportExport);
	$useLocalObjectStack();
	$var($URI, uri, $URI::create(s));
	$nc(UriImportExport::log)->println(uri);
	try {
		$var($Path, path, $Paths::get(uri));
		UriImportExport::log->format(" --> %s  FAIL: Expected IllegalArgumentException\n"_s, $$new($ObjectArray, {path}));
		++UriImportExport::failures;
	} catch ($IllegalArgumentException& expected) {
		UriImportExport::log->println("  --> IllegalArgumentException (expected)"_s);
	}
	UriImportExport::log->println();
}

void UriImportExport::main($StringArray* args) {
	$init(UriImportExport);
	$useLocalObjectStack();
	testBadUri("file:foo"_s);
	testBadUri("file:/foo?q"_s);
	testBadUri("file:/foo#f"_s);
	$var($String, osname, $System::getProperty("os.name"_s));
	if ($nc(osname)->startsWith("Windows"_s)) {
		testPath("C:\\doesnotexist"_s);
		testPath("C:doesnotexist"_s);
		testPath("\\\\server.nowhere.oracle.com\\share\\"_s);
		testPath("\\\\fe80--203-baff-fe5a-749ds1.ipv6-literal.net\\share\\missing"_s, "file://[fe80::203:baff:fe5a:749d%1]/share/missing"_s);
	} else {
		testPath("doesnotexist"_s);
		testPath("/doesnotexist"_s);
		testPath("/does not exist"_s);
		testUri("file:///"_s);
		testUri("file:///foo/bar/doesnotexist"_s);
		testUri("file:/foo/bar/doesnotexist"_s);
		testUri("file:///foo/bar/%D1%80%D1%83%D1%81%D1%81%D0%BA%D0%B8%D0%B9"_s);
		testBadUri("file:foo"_s);
		testBadUri("file://server/foo"_s);
		testBadUri("file:///foo%00"_s);
	}
	if (UriImportExport::failures > 0) {
		$throwNew($RuntimeException, $$str({$$str(UriImportExport::failures), " test(s) failed"_s}));
	}
}

void UriImportExport::clinit$($Class* clazz) {
	$assignStatic(UriImportExport::log, $System::out);
	UriImportExport::failures = 0;
}

UriImportExport::UriImportExport() {
}

$Class* UriImportExport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Ljava/io/PrintStream;", nullptr, $STATIC | $FINAL, $staticField(UriImportExport, log)},
		{"failures", "I", nullptr, $STATIC, $staticField(UriImportExport, failures)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UriImportExport, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UriImportExport, main, void, $StringArray*), "java.lang.Exception"},
		{"testBadUri", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(UriImportExport, testBadUri, void, $String*), "java.lang.Exception"},
		{"testPath", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(UriImportExport, testPath, void, $String*)},
		{"testPath", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(UriImportExport, testPath, void, $String*, $String*)},
		{"testUri", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(UriImportExport, testUri, void, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UriImportExport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UriImportExport, name, initialize, &classInfo$$, UriImportExport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UriImportExport);
	});
	return class$;
}

$Class* UriImportExport::class$ = nullptr;