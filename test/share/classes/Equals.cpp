#include <Equals.h>

#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

#undef FILE_URL1A
#undef FILE_URL1B
#undef HTTP_URL1A
#undef HTTP_URL1B

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

$FieldInfo _Equals_FieldInfo_[] = {
	{"HTTP_URL1A", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Equals, HTTP_URL1A)},
	{"HTTP_URL1B", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Equals, HTTP_URL1B)},
	{"FILE_URL1A", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Equals, FILE_URL1A)},
	{"FILE_URL1B", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Equals, FILE_URL1B)},
	{}
};

$MethodInfo _Equals_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Equals, init$, void)},
	{"anchors", "()V", nullptr, $STATIC, $staticMethod(Equals, anchors, void), "java.lang.Exception"},
	{"compareJarURLS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)I", nullptr, $STATIC, $staticMethod(Equals, compareJarURLS, int32_t, $String*, $String*, $String*, $String*, bool), "java.lang.Exception"},
	{"jarURLs", "()V", nullptr, $STATIC, $staticMethod(Equals, jarURLs, void), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Equals, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Equals_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Equals",
	"java.lang.Object",
	nullptr,
	_Equals_FieldInfo_,
	_Equals_MethodInfo_
};

$Object* allocate$Equals($Class* clazz) {
	return $of($alloc(Equals));
}

$String* Equals::HTTP_URL1A = nullptr;
$String* Equals::HTTP_URL1B = nullptr;
$String* Equals::FILE_URL1A = nullptr;
$String* Equals::FILE_URL1B = nullptr;

void Equals::init$() {
}

void Equals::main($StringArray* args) {
	$init(Equals);
	anchors();
	jarURLs();
}

void Equals::anchors() {
	$init(Equals);
	$useLocalCurrentObjectStackCache();
	$var($URL, url1, nullptr);
	$var($URL, url2, nullptr);
	$assign(url1, $new($URL, nullptr, "http://JavaSoft/Test#bar"_s));
	$assign(url2, $new($URL, nullptr, "http://JavaSoft/Test"_s));
	if (url1->equals(url2)) {
		$throwNew($RuntimeException, "URL.equals fails with anchors"_s);
	}
	if (url2->equals(url1)) {
		$throwNew($RuntimeException, "URL.equals fails with anchors"_s);
	}
	if (url1->equals(nullptr)) {
		$throwNew($RuntimeException, "URL.equals fails given null"_s);
	}
}

void Equals::jarURLs() {
	$init(Equals);
	$useLocalCurrentObjectStackCache();
	int32_t failed = 0;
	failed = compareJarURLS(Equals::HTTP_URL1A, Equals::HTTP_URL1A, "!/abc"_s, "!/abc"_s, true);
	failed = compareJarURLS(Equals::HTTP_URL1A, Equals::HTTP_URL1B, "!/abc"_s, "!/abc"_s, true);
	failed = compareJarURLS(Equals::HTTP_URL1B, Equals::HTTP_URL1A, "!/"_s, "!/"_s, true);
	failed = compareJarURLS(Equals::HTTP_URL1A, Equals::HTTP_URL1B, "!/abc"_s, "!/"_s, false);
	failed = compareJarURLS(Equals::HTTP_URL1A, Equals::HTTP_URL1B, "!/abc"_s, "!/xy"_s, false);
	failed = compareJarURLS(Equals::FILE_URL1A, Equals::FILE_URL1A, "!/abc"_s, "!/abc"_s, true);
	failed = compareJarURLS(Equals::FILE_URL1A, Equals::FILE_URL1B, "!/abc"_s, "!/abc"_s, true);
	failed = compareJarURLS(Equals::FILE_URL1A, Equals::FILE_URL1B, "!/"_s, "!/"_s, true);
	failed = compareJarURLS(Equals::FILE_URL1A, Equals::FILE_URL1B, "!/abc"_s, "!/"_s, false);
	failed = compareJarURLS(Equals::FILE_URL1A, Equals::FILE_URL1B, "!/abc"_s, "!/xy"_s, false);
	failed = ($$new($URL, "jar:file://xzy!/abc"_s))->equals($$new($URL, "file://xzy!/abc"_s)) ? 1 : 0;
	if (failed > 0) {
		$throwNew($RuntimeException, "Some jar URL tests failed. Check output"_s);
	}
}

int32_t Equals::compareJarURLS($String* urlStr1, $String* urlStr2, $String* entry1, $String* entry2, bool expectEqual) {
	$init(Equals);
	$useLocalCurrentObjectStackCache();
	int32_t failed = 0;
	$var($URL, url1, $new($URL, urlStr1));
	$var($URL, url2, $new($URL, urlStr2));
	if (!url1->equals(url2)) {
		$nc($System::out)->println("Urls are not equal, so the test cannot run."_s);
		$nc($System::out)->println($$str({"url1: "_s, url1, ", url2:"_s, url2}));
		return 1;
	}
	$var($URL, jarUrl1, $new($URL, $$str({"jar:"_s, urlStr1, entry1})));
	$var($URL, jarUrl2, $new($URL, $$str({"jar:"_s, urlStr2, entry2})));
	jarUrl2->openConnection();
	bool equal = jarUrl1->equals(jarUrl2);
	if (expectEqual && !equal) {
		$nc($System::out)->println($$str({"URLs should be equal, but are not. "_s, jarUrl1, ", "_s, jarUrl2}));
		++failed;
	} else if (!expectEqual && equal) {
		$nc($System::out)->println($$str({"URLs should NOT be equal, but are. "_s, jarUrl1, ", "_s, jarUrl2}));
		++failed;
	}
	if (expectEqual) {
		int32_t hash1 = jarUrl1->hashCode();
		int32_t hash2 = jarUrl2->hashCode();
		if (hash1 != hash2) {
			$nc($System::out)->println($$str({"jarUrl1.hashCode = "_s, $$str(hash1)}));
			$nc($System::out)->println($$str({"jarUrl2.hashCode = "_s, $$str(hash2)}));
			$nc($System::out)->println($$str({"Equal urls should have same hashCode. "_s, jarUrl1, ", "_s, jarUrl2}));
			++failed;
		}
	}
	return failed;
}

Equals::Equals() {
}

void clinit$Equals($Class* class$) {
	$assignStatic(Equals::HTTP_URL1A, "http://localhost/xyz"_s);
	$assignStatic(Equals::HTTP_URL1B, "http://LOCALHOST/xyz"_s);
	$assignStatic(Equals::FILE_URL1A, "file:///c:/foo/xyz"_s);
	$assignStatic(Equals::FILE_URL1B, "file:/c:/foo/xyz"_s);
}

$Class* Equals::load$($String* name, bool initialize) {
	$loadClass(Equals, name, initialize, &_Equals_ClassInfo_, clinit$Equals, allocate$Equals);
	return class$;
}

$Class* Equals::class$ = nullptr;