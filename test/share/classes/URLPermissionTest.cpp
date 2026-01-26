#include <URLPermissionTest.h>

#include <URLPermissionTest$ActionImpliesTest.h>
#include <URLPermissionTest$ActionsStringTest.h>
#include <URLPermissionTest$CreateTest.h>
#include <URLPermissionTest$ExTest.h>
#include <URLPermissionTest$HashCodeTest.h>
#include <URLPermissionTest$Test.h>
#include <URLPermissionTest$URLEqualityTest.h>
#include <URLPermissionTest$URLImpliesTest.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/URLPermission.h>
#include <jcpp.h>

#undef BAR_URL
#undef FOO_URL

using $URLPermissionTest$ActionImpliesTest = ::URLPermissionTest$ActionImpliesTest;
using $URLPermissionTest$ActionsStringTest = ::URLPermissionTest$ActionsStringTest;
using $URLPermissionTest$CreateTest = ::URLPermissionTest$CreateTest;
using $URLPermissionTest$ExTest = ::URLPermissionTest$ExTest;
using $URLPermissionTest$HashCodeTest = ::URLPermissionTest$HashCodeTest;
using $URLPermissionTest$Test = ::URLPermissionTest$Test;
using $URLPermissionTest$URLEqualityTest = ::URLPermissionTest$URLEqualityTest;
using $URLPermissionTest$URLImpliesTest = ::URLPermissionTest$URLImpliesTest;
using $URLPermissionTest$TestArray = $Array<URLPermissionTest$Test>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URLPermission = ::java::net::URLPermission;

$FieldInfo _URLPermissionTest_FieldInfo_[] = {
	{"pathImplies", "[LURLPermissionTest$Test;", nullptr, $STATIC, $staticField(URLPermissionTest, pathImplies)},
	{"exceptionTests", "[LURLPermissionTest$Test;", nullptr, $STATIC, $staticField(URLPermissionTest, exceptionTests)},
	{"hashTests", "[LURLPermissionTest$Test;", nullptr, $STATIC, $staticField(URLPermissionTest, hashTests)},
	{"pathImplies2", "[LURLPermissionTest$Test;", nullptr, $STATIC, $staticField(URLPermissionTest, pathImplies2)},
	{"FOO_URL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(URLPermissionTest, FOO_URL)},
	{"BAR_URL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(URLPermissionTest, BAR_URL)},
	{"actionImplies", "[LURLPermissionTest$Test;", nullptr, $STATIC, $staticField(URLPermissionTest, actionImplies)},
	{"actionsStringTest", "[LURLPermissionTest$Test;", nullptr, $STATIC, $staticField(URLPermissionTest, actionsStringTest)},
	{"equalityTests", "[LURLPermissionTest$Test;", nullptr, $STATIC, $staticField(URLPermissionTest, equalityTests)},
	{"createTests", "[LURLPermissionTest$Test;", nullptr, $STATIC, $staticField(URLPermissionTest, createTests)},
	{"failed", "Z", nullptr, $STATIC, $staticField(URLPermissionTest, failed)},
	{}
};

$MethodInfo _URLPermissionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(URLPermissionTest, init$, void)},
	{"actest", "(Ljava/lang/String;Ljava/lang/String;Z)LURLPermissionTest$ActionImpliesTest;", nullptr, $STATIC, $staticMethod(URLPermissionTest, actest, $URLPermissionTest$ActionImpliesTest*, $String*, $String*, bool)},
	{"actest", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)LURLPermissionTest$ActionImpliesTest;", nullptr, $STATIC, $staticMethod(URLPermissionTest, actest, $URLPermissionTest$ActionImpliesTest*, $String*, $String*, $String*, $String*, bool)},
	{"actionstest", "(Ljava/lang/String;Ljava/lang/String;)LURLPermissionTest$ActionsStringTest;", nullptr, $STATIC, $staticMethod(URLPermissionTest, actionstest, $URLPermissionTest$ActionsStringTest*, $String*, $String*)},
	{"createtest", "(Ljava/lang/String;)LURLPermissionTest$CreateTest;", nullptr, $STATIC, $staticMethod(URLPermissionTest, createtest, $URLPermissionTest$CreateTest*, $String*)},
	{"eqtest", "(Ljava/lang/String;Ljava/lang/String;Z)LURLPermissionTest$URLEqualityTest;", nullptr, $STATIC, $staticMethod(URLPermissionTest, eqtest, $URLPermissionTest$URLEqualityTest*, $String*, $String*, bool)},
	{"extest", "(Ljava/lang/String;)LURLPermissionTest$ExTest;", nullptr, $STATIC, $staticMethod(URLPermissionTest, extest, $URLPermissionTest$ExTest*, $String*)},
	{"hashtest", "(Ljava/lang/String;Ljava/lang/String;I)LURLPermissionTest$HashCodeTest;", nullptr, $STATIC, $staticMethod(URLPermissionTest, hashtest, $URLPermissionTest$HashCodeTest*, $String*, $String*, int32_t)},
	{"imtest", "(Ljava/lang/String;Ljava/lang/String;Z)LURLPermissionTest$URLImpliesTest;", nullptr, $STATIC, $staticMethod(URLPermissionTest, imtest, $URLPermissionTest$URLImpliesTest*, $String*, $String*, bool)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(URLPermissionTest, main, void, $StringArray*), "java.lang.Exception"},
	{"serializationTest", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(URLPermissionTest, serializationTest, void, $String*, $String*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _URLPermissionTest_InnerClassesInfo_[] = {
	{"URLPermissionTest$URLEqualityTest", "URLPermissionTest", "URLEqualityTest", $STATIC},
	{"URLPermissionTest$HashCodeTest", "URLPermissionTest", "HashCodeTest", $STATIC},
	{"URLPermissionTest$ActionsStringTest", "URLPermissionTest", "ActionsStringTest", $STATIC},
	{"URLPermissionTest$ActionImpliesTest", "URLPermissionTest", "ActionImpliesTest", $STATIC},
	{"URLPermissionTest$URLImpliesTest", "URLPermissionTest", "URLImpliesTest", $STATIC},
	{"URLPermissionTest$ExTest", "URLPermissionTest", "ExTest", $STATIC},
	{"URLPermissionTest$CreateTest", "URLPermissionTest", "CreateTest", $STATIC},
	{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _URLPermissionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"URLPermissionTest",
	"java.lang.Object",
	nullptr,
	_URLPermissionTest_FieldInfo_,
	_URLPermissionTest_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermissionTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"URLPermissionTest$URLEqualityTest,URLPermissionTest$HashCodeTest,URLPermissionTest$ActionsStringTest,URLPermissionTest$ActionImpliesTest,URLPermissionTest$URLImpliesTest,URLPermissionTest$ExTest,URLPermissionTest$CreateTest,URLPermissionTest$Test"
};

$Object* allocate$URLPermissionTest($Class* clazz) {
	return $of($alloc(URLPermissionTest));
}

$URLPermissionTest$TestArray* URLPermissionTest::pathImplies = nullptr;
$URLPermissionTest$TestArray* URLPermissionTest::exceptionTests = nullptr;
$URLPermissionTest$TestArray* URLPermissionTest::hashTests = nullptr;
$URLPermissionTest$TestArray* URLPermissionTest::pathImplies2 = nullptr;
$String* URLPermissionTest::FOO_URL = nullptr;
$String* URLPermissionTest::BAR_URL = nullptr;
$URLPermissionTest$TestArray* URLPermissionTest::actionImplies = nullptr;
$URLPermissionTest$TestArray* URLPermissionTest::actionsStringTest = nullptr;
$URLPermissionTest$TestArray* URLPermissionTest::equalityTests = nullptr;
$URLPermissionTest$TestArray* URLPermissionTest::createTests = nullptr;
bool URLPermissionTest::failed = false;

void URLPermissionTest::init$() {
}

$URLPermissionTest$CreateTest* URLPermissionTest::createtest($String* arg) {
	$init(URLPermissionTest);
	return $new($URLPermissionTest$CreateTest, arg);
}

$URLPermissionTest$ExTest* URLPermissionTest::extest($String* arg) {
	$init(URLPermissionTest);
	return $new($URLPermissionTest$ExTest, arg);
}

$URLPermissionTest$URLImpliesTest* URLPermissionTest::imtest($String* arg1, $String* arg2, bool expected) {
	$init(URLPermissionTest);
	return $new($URLPermissionTest$URLImpliesTest, arg1, arg2, expected);
}

$URLPermissionTest$ActionsStringTest* URLPermissionTest::actionstest($String* arg, $String* expectedActions) {
	$init(URLPermissionTest);
	return $new($URLPermissionTest$ActionsStringTest, arg, expectedActions);
}

$URLPermissionTest$ActionImpliesTest* URLPermissionTest::actest($String* arg1, $String* arg2, bool expected) {
	$init(URLPermissionTest);
	return $new($URLPermissionTest$ActionImpliesTest, arg1, arg2, expected);
}

$URLPermissionTest$ActionImpliesTest* URLPermissionTest::actest($String* url1, $String* url2, $String* arg1, $String* arg2, bool expected) {
	$init(URLPermissionTest);
	return $new($URLPermissionTest$ActionImpliesTest, url1, url2, arg1, arg2, expected);
}

$URLPermissionTest$HashCodeTest* URLPermissionTest::hashtest($String* arg1, $String* arg2, int32_t expected) {
	$init(URLPermissionTest);
	return $new($URLPermissionTest$HashCodeTest, arg1, arg2, expected);
}

$URLPermissionTest$URLEqualityTest* URLPermissionTest::eqtest($String* arg1, $String* arg2, bool expected) {
	$init(URLPermissionTest);
	return $new($URLPermissionTest$URLEqualityTest, arg1, arg2, expected);
}

void URLPermissionTest::main($StringArray* args) {
	$init(URLPermissionTest);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(URLPermissionTest::pathImplies)->length; ++i) {
		$var($URLPermissionTest$URLImpliesTest, test, $cast($URLPermissionTest$URLImpliesTest, $nc(URLPermissionTest::pathImplies)->get(i)));
		$var($Exception, caught, nullptr);
		bool result = false;
		try {
			result = $nc(test)->execute();
		} catch ($Exception& e) {
			$assign(caught, e);
			e->printStackTrace();
		}
		if (!result) {
			URLPermissionTest::failed = true;
			$nc($System::out)->printf("path test %d failed: %s : %s\n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$of($nc(test)->arg1),
				$of(test->arg2)
			}));
		} else {
			$nc($System::out)->println($$str({"path test "_s, $$str(i), " OK"_s}));
		}
	}
	for (int32_t i = 0; i < $nc(URLPermissionTest::pathImplies2)->length; ++i) {
		$var($URLPermissionTest$URLImpliesTest, test, $cast($URLPermissionTest$URLImpliesTest, $nc(URLPermissionTest::pathImplies2)->get(i)));
		$var($Exception, caught, nullptr);
		bool result = false;
		try {
			result = $nc(test)->execute();
		} catch ($Exception& e) {
			$assign(caught, e);
			e->printStackTrace();
		}
		if (!result) {
			URLPermissionTest::failed = true;
			$nc($System::out)->printf("path2 test %d failed: %s : %s\n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$of($nc(test)->arg1),
				$of(test->arg2)
			}));
		} else {
			$nc($System::out)->println($$str({"path2 test "_s, $$str(i), " OK"_s}));
		}
	}
	for (int32_t i = 0; i < $nc(URLPermissionTest::equalityTests)->length; ++i) {
		$var($URLPermissionTest$URLEqualityTest, test, $cast($URLPermissionTest$URLEqualityTest, $nc(URLPermissionTest::equalityTests)->get(i)));
		$var($Exception, caught, nullptr);
		bool result = false;
		try {
			result = $nc(test)->execute();
		} catch ($Exception& e) {
			$assign(caught, e);
			e->printStackTrace();
		}
		if (!result) {
			URLPermissionTest::failed = true;
			$nc($System::out)->printf("equality test %d failed: %s : %s\n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$of($nc(test)->arg1),
				$of(test->arg2)
			}));
		} else {
			$nc($System::out)->println($$str({"equality test "_s, $$str(i), " OK"_s}));
		}
	}
	for (int32_t i = 0; i < $nc(URLPermissionTest::hashTests)->length; ++i) {
		$var($URLPermissionTest$HashCodeTest, test, $cast($URLPermissionTest$HashCodeTest, $nc(URLPermissionTest::hashTests)->get(i)));
		bool result = $nc(test)->execute();
		if (!result) {
			$nc($System::out)->printf("test failed: %s %s %d\n"_s, $$new($ObjectArray, {
				$of(test->arg1),
				$of(test->arg2),
				$($of($Integer::valueOf(test->hash)))
			}));
			URLPermissionTest::failed = true;
		} else {
			$nc($System::out)->println($$str({"hash test "_s, $$str(i), " OK"_s}));
		}
	}
	for (int32_t i = 0; i < $nc(URLPermissionTest::exceptionTests)->length; ++i) {
		$var($URLPermissionTest$ExTest, test, $cast($URLPermissionTest$ExTest, $nc(URLPermissionTest::exceptionTests)->get(i)));
		bool result = $nc(test)->execute();
		if (!result) {
			$nc($System::out)->println($$str({"test failed: "_s, test->arg}));
			URLPermissionTest::failed = true;
		} else {
			$nc($System::out)->println($$str({"exception test "_s, $$str(i), " OK"_s}));
		}
	}
	for (int32_t i = 0; i < $nc(URLPermissionTest::createTests)->length; ++i) {
		$var($URLPermissionTest$CreateTest, test, $cast($URLPermissionTest$CreateTest, $nc(URLPermissionTest::createTests)->get(i)));
		bool result = $nc(test)->execute();
		if (!result) {
			$nc($System::out)->println($$str({"test failed: "_s, test->arg}));
			URLPermissionTest::failed = true;
		} else {
			$nc($System::out)->println($$str({"create test "_s, $$str(i), " OK"_s}));
		}
	}
	for (int32_t i = 0; i < $nc(URLPermissionTest::actionImplies)->length; ++i) {
		$var($URLPermissionTest$ActionImpliesTest, test, $cast($URLPermissionTest$ActionImpliesTest, $nc(URLPermissionTest::actionImplies)->get(i)));
		$var($Exception, caught, nullptr);
		bool result = false;
		try {
			result = $nc(test)->execute();
		} catch ($Exception& e) {
			$assign(caught, e);
			e->printStackTrace();
		}
		if (!result) {
			URLPermissionTest::failed = true;
			$nc($System::out)->println($$str({"test failed: "_s, $nc(test)->arg1, ": "_s, test->arg2, " Exception: "_s, caught}));
		}
		$nc($System::out)->println($$str({"action test "_s, $$str(i), " OK"_s}));
	}
	for (int32_t i = 0; i < $nc(URLPermissionTest::actionsStringTest)->length; ++i) {
		$var($URLPermissionTest$ActionsStringTest, test, $cast($URLPermissionTest$ActionsStringTest, $nc(URLPermissionTest::actionsStringTest)->get(i)));
		$var($Exception, caught, nullptr);
		bool result = false;
		try {
			result = $nc(test)->execute();
		} catch ($Exception& e) {
			$assign(caught, e);
		}
		if (!result) {
			URLPermissionTest::failed = true;
			$nc($System::out)->println($$str({"test failed: "_s, $nc(test)->arg, ": "_s, test->expectedActions, " Exception: "_s, caught}));
		}
		$nc($System::out)->println($$str({"Actions String test "_s, $$str(i), " OK"_s}));
	}
	serializationTest("http://www.foo.com/-"_s, "GET,DELETE:*"_s);
	serializationTest("https://www.foo.com/-"_s, "POST:X-Foo"_s);
	serializationTest("https:*"_s, "*:*"_s);
	serializationTest("http://www.foo.com/a/b/s/"_s, "POST:X-Foo"_s);
	serializationTest("http://www.foo.com/a/b/s/*"_s, "POST:X-Foo"_s);
	if (URLPermissionTest::failed) {
		$throwNew($RuntimeException, "some tests failed"_s);
	}
}

void URLPermissionTest::serializationTest($String* name, $String* actions) {
	$init(URLPermissionTest);
	$useLocalCurrentObjectStackCache();
	$var($URLPermission, out, $new($URLPermission, name, actions));
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, o, $new($ObjectOutputStream, baos));
	o->writeObject(out);
	$var($ByteArrayInputStream, bain, $new($ByteArrayInputStream, $(baos->toByteArray())));
	$var($ObjectInputStream, i, $new($ObjectInputStream, bain));
	$var($URLPermission, in, $cast($URLPermission, i->readObject()));
	if (!$nc(in)->equals(out)) {
		$nc($System::out)->println("FAIL"_s);
		$nc($System::out)->println($$str({"in = "_s, in}));
		$nc($System::out)->println($$str({"out = "_s, out}));
		URLPermissionTest::failed = true;
	}
}

void clinit$URLPermissionTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(URLPermissionTest::FOO_URL, "http://www.foo.com/"_s);
	$assignStatic(URLPermissionTest::BAR_URL, "http://www.bar.com/"_s);
	$assignStatic(URLPermissionTest::pathImplies, $new($URLPermissionTest$TestArray, {
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/"_s, "http://www.foo.com/"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.bar.com/"_s, "http://www.foo.com/"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b"_s, "http://www.foo.com/"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b"_s, "http://www.foo.com/a/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/*"_s, "http://www.foo.com/a/b/c"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/*"_s, "http://www.foo.com/a/b/*"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/*"_s, "http://www.foo.com/a/b/c#frag"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/*"_s, "http://www.foo.com/a/b/c#frag?foo=foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/*"_s, "http://www.foo.com/b/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/*"_s, "http://www.foo.com/a/b/c.html"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/*"_s, "http://www.foo.com/a/b/c.html"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/*"_s, "https://www.foo.com/a/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/-"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c#frag"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c#frag?foo=foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/b/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c.html"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c.html"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c/d/e.html"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("https://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c/d/e.html"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c/d/e#frag"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/b/-"_s, "https://www.foo.com/a/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http:*"_s, "https://www.foo.com/a/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http:*"_s, "http://www.foo.com/a/b/c"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http:*"_s, "http://foo/bar"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://WWW.foO.cOM/a/b/*"_s, "http://wwW.foo.com/a/b/c"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://wWw.fOo.cOm/a/b/*"_s, "http://Www.foo.com/a/b/*"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.FOO.com/"_s, "http://www.foo.COM/"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://66ww-w.F-O012O.com/"_s, "http://66ww-w.f-o012o.COM/"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://xn--ire-9la.com/"_s, "http://xn--ire-9la.COM/"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://x/"_s, "http://X/"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://x/"_s, "http://x/"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://X/"_s, "http://X/"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://foo/bar"_s, "https://foo/bar"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/*"_s, "http://www.foo.com/#foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/*#foo"_s, "http://www.foo.com/a/b#foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/a/-"_s, "http://www.foo.com/a/b#foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/?q1=1&q2=2#foo"_s, "http://www.foo.com/?q1=1&q2=2#bar"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/"_s, "http://www.foo.com/?q1=1&q2=2#bar"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com/"_s, "http://www.foo.com?q1=1&q2=2#bar"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com"_s, "http://www.foo.com?q1=1&q2=2#bar"_s, true)))
	}));
	$assignStatic(URLPermissionTest::exceptionTests, $new($URLPermissionTest$TestArray, {
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http://1.2.3.4.5/a/b/c"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http://www.*.com"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http://[foo.com]:99"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http://[fec0::X]:99"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http:\\www.foo.com"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http://w_09ww.foo.com"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http://w&09ww.foo.com/p"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http://www+foo.com"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::extest("http:"_s)))
	}));
	$assignStatic(URLPermissionTest::hashTests, $new($URLPermissionTest$TestArray, {
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::hashtest("http://www.foo.com/path"_s, "GET:X-Foo"_s, 0x172A3D6B))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::hashtest("http:*"_s, "*:*"_s, 0x0031AE02)))
	}));
	$assignStatic(URLPermissionTest::pathImplies2, $new($URLPermissionTest$TestArray, {
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://[FE80::]:99"_s, "http://[fe80:0::]:99"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com/a/b/-"_s, "http://www.foo.com/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com/a/b/-"_s, "http://www.bar.com/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com/a/b/-"_s, "http://www.biz.bar.foo.com/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com/a/b/-"_s, "http://www.biz.bar.foo.como/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*/a/b/-"_s, "http://www.biz.bar.foo.fuzz/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*/a/b/-"_s, "http://*/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com/a/b/-"_s, "http://*/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http:*"_s, "http://*/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://1.2.3.4/a/b/-"_s, "http://www.biz.bar.foo.com/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://1.2.3.4/a/b/-"_s, "http://1.2.3.4/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://1.2.3.4/a/b/-"_s, "http://1.2.88.4/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http:*"_s, "http://1.2.88.4/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://[fe80::]/a/b/-"_s, "http://[fe80::0]/a/b/c"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://[fe80::]/a/b/-"_s, "http://[fe80::3]/a/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://[1:2:3:4:5:6:7:8]/a/b/-"_s, "http://[1:002:03:4:0005:6:07:8]/a/b/c"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://[1:2:3:4:5:6:7:8]/a/b/-"_s, "http://[1:002:03:4:0033:6:07:8]/a/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://[1::2]/a/b/-"_s, "http://[1:0:0:0::2]/a/b/c"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://[1::2]/a/b/-"_s, "http://[1:0:0:0::3]/a/b/c"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://[FE80::]:99"_s, "http://[fe80:0::]:99"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http:*"_s, "http://[fe80:0::]:99"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:1-2/a/b/-"_s, "http://www.foo.com:1/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:1-2/a/b/-"_s, "http://www.foo.com:3/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:3-/a/b/-"_s, "http://www.foo.com:1/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:3-/a/b/-"_s, "http://www.foo.com:4-5/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:3-/a/b/-"_s, "http://www.foo.com:3-3/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:3-99/a/b/-"_s, "http://www.foo.com:55-100/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:-44/a/b/-"_s, "http://www.foo.com:1/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:-44/a/b/-"_s, "http://www.foo.com:1-10/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:-44/a/b/-"_s, "http://www.foo.com:44/a/b/c/d"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://*.foo.com:-44/a/b/-"_s, "http://www.foo.com:45/a/b/c/d"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com:70-90/a/b"_s, "http://www.foo.com/a/b"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("https://www.foo.com/a/b"_s, "https://www.foo.com:80/a/b"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("https://www.foo.com:70-90/a/b"_s, "https://www.foo.com/a/b"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("https://www.foo.com/a/b"_s, "https://www.foo.com:443/a/b"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("https://www.foo.com:200-500/a/b"_s, "https://www.foo.com/a/b"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://www.foo.com:*/a/b"_s, "http://www.foo.com:1-12345/a/b"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("http://host/a/b"_s, "http://HOST/a/b"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("https:*"_s, "http://www.foo.com"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::imtest("https:*"_s, "http:*"_s, false)))
	}));
	$assignStatic(URLPermissionTest::actionImplies, $new($URLPermissionTest$TestArray, {
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET"_s, "GET"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET"_s, "POST"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:"_s, "PUT"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:"_s, "GET"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET,POST"_s, "GET"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET,POST:"_s, "GET"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:X-Foo"_s, "GET:x-foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:X-Foo,X-bar"_s, "GET:x-foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:X-Foo"_s, "GET:x-boo"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:X-Foo,X-Bar"_s, "GET:x-bar,x-foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:X-Bar,X-Foo,X-Bar,Y-Foo"_s, "GET:x-bar,x-foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:*"_s, "GET:x-bar,x-foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("*:*"_s, "GET:x-bar,x-foo"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest(""_s, "GET:x-bar,x-foo"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET:x-bar,x-foo"_s, ""_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest(""_s, ""_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest("GET,DELETE"_s, "GET,DELETE:x-foo"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest(URLPermissionTest::FOO_URL, URLPermissionTest::BAR_URL, ""_s, "GET:x-bar,x-foo"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest(URLPermissionTest::FOO_URL, URLPermissionTest::BAR_URL, "GET:x-bar,x-foo"_s, ""_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actest(URLPermissionTest::FOO_URL, URLPermissionTest::BAR_URL, ""_s, ""_s, false)))
	}));
	$assignStatic(URLPermissionTest::actionsStringTest, $new($URLPermissionTest$TestArray, {
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest(""_s, ":"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest(":"_s, ":"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest(":X-Bar"_s, ":X-Bar"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("GET"_s, "GET:"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("get"_s, "GET:"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("GET,POST"_s, "GET,POST:"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("GET,post"_s, "GET,POST:"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("get,post"_s, "GET,POST:"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("get,post,DELETE"_s, "DELETE,GET,POST:"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("GET,POST:"_s, "GET,POST:"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("GET:X-Foo,X-bar"_s, "GET:X-Bar,X-Foo"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::actionstest("GET,POST,DELETE:X-Bar,X-Foo,X-Bar,Y-Foo"_s, "DELETE,GET,POST:X-Bar,X-Bar,X-Foo,Y-Foo"_s)))
	}));
	$assignStatic(URLPermissionTest::equalityTests, $new($URLPermissionTest$TestArray, {
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://www.foo.com"_s, "http://www.FOO.CoM"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://[fe80:0:0::]:1-2"_s, "HTTP://[FE80::]:1-2"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("HTTP://1.2.3.5/A/B/C"_s, "http://1.2.3.5/A/b/C"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("HTTP://1.2.3.5/A/B/C"_s, "HTTP://1.2.3.5/A/b/C"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http:*"_s, "http:*"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://www.foo.com/a/b"_s, "https://www.foo.com/a/b"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://w.foo.com"_s, "http://w.foo.com/"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://*.foo.com"_s, "http://*.foo.com"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://www.foo.com/a/b"_s, "http://www.foo.com:80/a/b"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://www.foo.com/a/b"_s, "http://www.foo.com:82/a/b"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("https://www.foo.com/a/b"_s, "https://www.foo.com:443/a/b"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("https://www.foo.com/a/b"_s, "https://www.foo.com:444/a/b"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://michael@foo.com/bar"_s, "http://michael@foo.com/bar"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://Michael@foo.com/bar"_s, "http://michael@goo.com/bar"_s, false))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://michael@foo.com/bar"_s, "http://george@foo.com/bar"_s, true))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::eqtest("http://@foo.com/bar"_s, "http://foo.com/bar"_s, true)))
	}));
	$assignStatic(URLPermissionTest::createTests, $new($URLPermissionTest$TestArray, {
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::createtest("http://user@foo.com/a/b/c"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::createtest("http://user:pass@foo.com/a/b/c"_s))),
		$(static_cast<$URLPermissionTest$Test*>(URLPermissionTest::createtest("http://user:@foo.com/a/b/c"_s)))
	}));
	URLPermissionTest::failed = false;
}

URLPermissionTest::URLPermissionTest() {
}

$Class* URLPermissionTest::load$($String* name, bool initialize) {
	$loadClass(URLPermissionTest, name, initialize, &_URLPermissionTest_ClassInfo_, clinit$URLPermissionTest, allocate$URLPermissionTest);
	return class$;
}

$Class* URLPermissionTest::class$ = nullptr;