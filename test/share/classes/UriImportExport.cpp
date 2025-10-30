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

$FieldInfo _UriImportExport_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC | $FINAL, $staticField(UriImportExport, log)},
	{"failures", "I", nullptr, $STATIC, $staticField(UriImportExport, failures)},
	{}
};

$MethodInfo _UriImportExport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UriImportExport::*)()>(&UriImportExport::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UriImportExport::main)), "java.lang.Exception"},
	{"testBadUri", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&UriImportExport::testBadUri)), "java.lang.Exception"},
	{"testPath", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&UriImportExport::testPath))},
	{"testPath", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&UriImportExport::testPath))},
	{"testUri", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&UriImportExport::testUri)), "java.lang.Exception"},
	{}
};

$ClassInfo _UriImportExport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UriImportExport",
	"java.lang.Object",
	nullptr,
	_UriImportExport_FieldInfo_,
	_UriImportExport_MethodInfo_
};

$Object* allocate$UriImportExport($Class* clazz) {
	return $of($alloc(UriImportExport));
}

$PrintStream* UriImportExport::log = nullptr;
int32_t UriImportExport::failures = 0;

void UriImportExport::init$() {
}

void UriImportExport::testPath($String* s) {
	$init(UriImportExport);
	$useLocalCurrentObjectStackCache();
	$var($Path, path, $Paths::get(s, $$new($StringArray, 0)));
	$nc(UriImportExport::log)->println($of(path));
	$var($URI, uri, $nc(path)->toUri());
	$nc(UriImportExport::log)->println($$str({"  --> "_s, uri}));
	$var($Path, result, $Paths::get(uri));
	$nc(UriImportExport::log)->println($$str({"  --> "_s, result}));
	if (!$nc(result)->equals($(path->toAbsolutePath()))) {
		$nc(UriImportExport::log)->println($$str({"FAIL: Expected "_s, path, ", got "_s, result}));
		++UriImportExport::failures;
	}
	$nc(UriImportExport::log)->println();
}

void UriImportExport::testPath($String* s, $String* expectedUri) {
	$init(UriImportExport);
	$useLocalCurrentObjectStackCache();
	$var($Path, path, $Paths::get(s, $$new($StringArray, 0)));
	$nc(UriImportExport::log)->println($of(path));
	$var($URI, uri, $nc(path)->toUri());
	$nc(UriImportExport::log)->println($$str({"  --> "_s, uri}));
	if (!$nc($($nc(uri)->toString()))->equals(expectedUri)) {
		$nc(UriImportExport::log)->println($$str({"FAILED: Expected "_s, expectedUri, ", got "_s, uri}));
		++UriImportExport::failures;
		return;
	}
	$var($Path, result, $Paths::get(uri));
	$nc(UriImportExport::log)->println($$str({"  --> "_s, result}));
	if (!$nc(result)->equals($(path->toAbsolutePath()))) {
		$nc(UriImportExport::log)->println($$str({"FAIL: Expected "_s, path, ", got "_s, result}));
		++UriImportExport::failures;
	}
	$nc(UriImportExport::log)->println();
}

void UriImportExport::testUri($String* s) {
	$init(UriImportExport);
	$useLocalCurrentObjectStackCache();
	$var($URI, uri, $URI::create(s));
	$nc(UriImportExport::log)->println($of(uri));
	$var($Path, path, $Paths::get(uri));
	$nc(UriImportExport::log)->println($$str({"  --> "_s, path}));
	$var($URI, result, $nc(path)->toUri());
	$nc(UriImportExport::log)->println($$str({"  --> "_s, result}));
	if (!$nc(result)->equals(uri)) {
		$nc(UriImportExport::log)->println($$str({"FAIL: Expected "_s, uri, ", got "_s, result}));
		++UriImportExport::failures;
	}
	$nc(UriImportExport::log)->println();
}

void UriImportExport::testBadUri($String* s) {
	$init(UriImportExport);
	$useLocalCurrentObjectStackCache();
	$var($URI, uri, $URI::create(s));
	$nc(UriImportExport::log)->println($of(uri));
	try {
		$var($Path, path, $Paths::get(uri));
		$nc(UriImportExport::log)->format(" --> %s  FAIL: Expected IllegalArgumentException\n"_s, $$new($ObjectArray, {$of(path)}));
		++UriImportExport::failures;
	} catch ($IllegalArgumentException& expected) {
		$nc(UriImportExport::log)->println("  --> IllegalArgumentException (expected)"_s);
	}
	$nc(UriImportExport::log)->println();
}

void UriImportExport::main($StringArray* args) {
	$init(UriImportExport);
	$useLocalCurrentObjectStackCache();
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

void clinit$UriImportExport($Class* class$) {
	$assignStatic(UriImportExport::log, $System::out);
	UriImportExport::failures = 0;
}

UriImportExport::UriImportExport() {
}

$Class* UriImportExport::load$($String* name, bool initialize) {
	$loadClass(UriImportExport, name, initialize, &_UriImportExport_ClassInfo_, clinit$UriImportExport, allocate$UriImportExport);
	return class$;
}

$Class* UriImportExport::class$ = nullptr;