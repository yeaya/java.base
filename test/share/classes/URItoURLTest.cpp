#include <URItoURLTest.h>

#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;

$MethodInfo _URItoURLTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(URItoURLTest::*)()>(&URItoURLTest::init$))},
	{"equalsComponents", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*,$String*,$String*)>(&URItoURLTest::equalsComponents))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&URItoURLTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _URItoURLTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"URItoURLTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_URItoURLTest_MethodInfo_
};

$Object* allocate$URItoURLTest($Class* clazz) {
	return $of($alloc(URItoURLTest));
}

void URItoURLTest::init$() {
}

void URItoURLTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URL, classUrl, $new($URL, "jrt:/java.base/java/lang/Object.class"_s));
	$var($StringArray, uris, $new($StringArray, {
		"mailto:xyz@abc.de"_s,
		"file:xyz#ab"_s,
		"http:abc/xyz/pqr"_s,
		"http:abc/xyz/pqr?id=x%0a&ca=true"_s,
		"file:/C:/v700/dev/unitTesting/tests/apiUtil/uri"_s,
		"http:///p"_s,
		"file:/C:/v700/dev/unitTesting/tests/apiUtil/uri"_s,
		"file:/C:/v700/dev%20src/unitTesting/tests/apiUtil/uri"_s,
		"file:/C:/v700/dev%20src/./unitTesting/./tests/apiUtil/uri"_s,
		"http://localhost:80/abc/./xyz/../pqr?id=x%0a&ca=true"_s,
		"file:./test/./x"_s,
		"file:./././%20#i=3"_s,
		"file:?hmm"_s,
		"file:.#hmm"_s,
		$(classUrl->toExternalForm())
	}));
	$var($StringArray, malformedUrls, $new($StringArray, {
		"test:/test"_s,
		"fiel:test"_s
	}));
	$var($StringArray, illegalUris, $new($StringArray, {
		"./test"_s,
		"/test"_s
	}));
	bool isTestFailed = false;
	bool isURLFailed = false;
	{
		$var($StringArray, arr$, uris);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, uriString, arr$->get(i$));
			{
				$var($URI, uri, $URI::create(uriString));
				$var($URL, url1, $new($URL, $($nc(uri)->toString())));
				$var($URL, url2, $nc(uri)->toURL());
				$nc($System::out)->println($$str({"Testing URI "_s, uri}));
				if (!url1->equals(url2)) {
					$nc($System::out)->println("equals() FAILED"_s);
					isURLFailed = true;
				}
				int32_t var$0 = url1->hashCode();
				if (var$0 != $nc(url2)->hashCode()) {
					$nc($System::out)->println("hashCode() DIDN\'T MATCH"_s);
					isURLFailed = true;
				}
				if (!url1->sameFile(url2)) {
					$nc($System::out)->println("sameFile() FAILED"_s);
					isURLFailed = true;
				}
				$var($String, var$1, "getPath()"_s);
				$var($String, var$2, url1->getPath());
				if (!equalsComponents(var$1, var$2, $($nc(url2)->getPath()))) {
					isURLFailed = true;
				}
				$var($String, var$3, "getFile()"_s);
				$var($String, var$4, url1->getFile());
				if (!equalsComponents(var$3, var$4, $($nc(url2)->getFile()))) {
					isURLFailed = true;
				}
				$var($String, var$5, "getHost()"_s);
				$var($String, var$6, url1->getHost());
				if (!equalsComponents(var$5, var$6, $($nc(url2)->getHost()))) {
					isURLFailed = true;
				}
				$var($String, var$7, "getAuthority()"_s);
				$var($String, var$8, url1->getAuthority());
				if (!equalsComponents(var$7, var$8, $($nc(url2)->getAuthority()))) {
					isURLFailed = true;
				}
				$var($String, var$9, "getRef()"_s);
				$var($String, var$10, url1->getRef());
				if (!equalsComponents(var$9, var$10, $($nc(url2)->getRef()))) {
					isURLFailed = true;
				}
				$var($String, var$11, "getUserInfo()"_s);
				$var($String, var$12, url1->getUserInfo());
				if (!equalsComponents(var$11, var$12, $($nc(url2)->getUserInfo()))) {
					isURLFailed = true;
				}
				$var($String, var$13, "toString()"_s);
				$var($String, var$14, url1->toString());
				if (!equalsComponents(var$13, var$14, $($nc(url2)->toString()))) {
					isURLFailed = true;
				}
				if (isURLFailed) {
					isTestFailed = true;
				} else {
					$nc($System::out)->println("PASSED .."_s);
				}
				$nc($System::out)->println();
				isURLFailed = false;
			}
		}
	}
	{
		$var($StringArray, arr$, malformedUrls);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, malformedUrl, arr$->get(i$));
			{
				$var($Exception, toURLEx, nullptr);
				$var($Exception, newURLEx, nullptr);
				try {
					$$new($URI, malformedUrl)->toURL();
				} catch ($Exception& e) {
					$assign(toURLEx, e);
				}
				try {
					$new($URL, $($$new($URI, malformedUrl)->toString()));
				} catch ($Exception& e) {
					$assign(newURLEx, e);
				}
				if (!($instanceOf($MalformedURLException, toURLEx)) || !($instanceOf($MalformedURLException, newURLEx)) || !$nc($($nc(toURLEx)->getMessage()))->equals($($nc(newURLEx)->getMessage()))) {
					isTestFailed = true;
					$nc($System::out)->println($$str({"Expected the same MalformedURLException: "_s, newURLEx, " vs "_s, toURLEx}));
				}
			}
		}
	}
	{
		$var($StringArray, arr$, illegalUris);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, illegalUri, arr$->get(i$));
			{
				try {
					$$new($URI, illegalUri)->toURL();
				} catch ($IllegalArgumentException& e) {
				}
				try {
					$new($URL, illegalUri);
				} catch ($MalformedURLException& e) {
				}
			}
		}
	}
	if (isTestFailed) {
		$throwNew($Exception, "URI.toURL() test failed"_s);
	}
}

bool URItoURLTest::equalsComponents($String* method, $String* comp1, $String* comp2) {
	$useLocalCurrentObjectStackCache();
	if ((comp1 != nullptr) && (!comp1->equals(comp2))) {
		$nc($System::out)->println($$str({method, " DIDN\'T MATCH  ===>"_s}));
		$nc($System::out)->println($$str({"    URL(URI.toString()) returns:"_s, comp1}));
		$nc($System::out)->println($$str({"    URI.toURL() returns:"_s, comp2}));
		return false;
	}
	return true;
}

URItoURLTest::URItoURLTest() {
}

$Class* URItoURLTest::load$($String* name, bool initialize) {
	$loadClass(URItoURLTest, name, initialize, &_URItoURLTest_ClassInfo_, allocate$URItoURLTest);
	return class$;
}

$Class* URItoURLTest::class$ = nullptr;