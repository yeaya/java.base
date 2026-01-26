#include <Test4URI.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/StringBuffer.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef FRAGMENT
#undef FRAGMENT_D
#undef HOST
#undef IDENT_STR
#undef IDENT_URI1
#undef IDENT_URI3
#undef IDENT_URI5
#undef IDENT_URI7
#undef OPAQUEPART
#undef PARSEFAIL
#undef PATH
#undef PATH_D
#undef PORT
#undef QUERY
#undef QUERY_D
#undef REGISTRY
#undef REGISTRY_D
#undef SCHEME
#undef SSP
#undef SSP_D
#undef TOASCII
#undef TOSTRING
#undef USERINFO
#undef USERINFO_D

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;

$FieldInfo _Test4URI_FieldInfo_[] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Test4URI, out)},
	{"testCount", "I", nullptr, $STATIC, $staticField(Test4URI, testCount)},
	{"PARSEFAIL", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, PARSEFAIL)},
	{"SCHEME", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, SCHEME)},
	{"SSP", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, SSP)},
	{"SSP_D", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, SSP_D)},
	{"OPAQUEPART", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, OPAQUEPART)},
	{"USERINFO", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, USERINFO)},
	{"USERINFO_D", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, USERINFO_D)},
	{"HOST", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, HOST)},
	{"PORT", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, PORT)},
	{"REGISTRY", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, REGISTRY)},
	{"REGISTRY_D", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, REGISTRY_D)},
	{"PATH", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, PATH)},
	{"PATH_D", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, PATH_D)},
	{"QUERY", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, QUERY)},
	{"QUERY_D", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, QUERY_D)},
	{"FRAGMENT", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, FRAGMENT)},
	{"FRAGMENT_D", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, FRAGMENT_D)},
	{"TOASCII", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, TOASCII)},
	{"IDENT_STR", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, IDENT_STR)},
	{"IDENT_URI1", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, IDENT_URI1)},
	{"IDENT_URI3", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, IDENT_URI3)},
	{"IDENT_URI5", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, IDENT_URI5)},
	{"IDENT_URI7", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, IDENT_URI7)},
	{"TOSTRING", "I", nullptr, $STATIC | $FINAL, $constField(Test4URI, TOSTRING)},
	{"input", "Ljava/lang/String;", nullptr, 0, $field(Test4URI, input)},
	{"uri", "Ljava/net/URI;", nullptr, 0, $field(Test4URI, uri$)},
	{"originalURI", "Ljava/net/URI;", nullptr, 0, $field(Test4URI, originalURI)},
	{"base", "Ljava/net/URI;", nullptr, 0, $field(Test4URI, base)},
	{"op", "Ljava/lang/String;", nullptr, 0, $field(Test4URI, op)},
	{"checked", "I", nullptr, 0, $field(Test4URI, checked)},
	{"failed", "I", nullptr, 0, $field(Test4URI, failed)},
	{"exc", "Ljava/lang/Exception;", nullptr, 0, $field(Test4URI, exc)},
	{}
};

$MethodInfo _Test4URI_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Test4URI, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Test4URI, init$, void, $String*, $String*, $String*, int32_t, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Test4URI, init$, void, $String*, $String*, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Test4URI, init$, void, $String*, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Test4URI, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(Test4URI, init$, void, $String*, bool)},
	{"b6339649", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test4URI, b6339649, void)},
	{"b6933879", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test4URI, b6933879, void)},
	{"b8037396", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test4URI, b8037396, void)},
	{"bugs", "()V", nullptr, $STATIC, $staticMethod(Test4URI, bugs, void)},
	{"chars", "()V", nullptr, $STATIC, $staticMethod(Test4URI, chars, void), "java.net.URISyntaxException"},
	{"check1", "(I)Z", nullptr, $PRIVATE, $method(Test4URI, check1, bool, int32_t)},
	{"check2", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Test4URI, check2, void, $String*, $String*, int32_t)},
	{"checkEmpty", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Test4URI, checkEmpty, void, $String*, int32_t)},
	{"checkIdentities", "()V", nullptr, 0, $virtualMethod(Test4URI, checkIdentities, void)},
	{"checkURI3", "()V", nullptr, 0, $virtualMethod(Test4URI, checkURI3, void)},
	{"checkURI5", "()V", nullptr, 0, $virtualMethod(Test4URI, checkURI5, void)},
	{"checkURI7", "()V", nullptr, 0, $virtualMethod(Test4URI, checkURI7, void)},
	{"clargs", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Test4URI, clargs, void, $String*, $String*)},
	{"cmp0", "(Ljava/net/URI;Ljava/net/URI;Z)V", nullptr, $STATIC, $staticMethod(Test4URI, cmp0, void, $URI*, $URI*, bool), "java.net.URISyntaxException"},
	{"eq", "(Ljava/net/URI;Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, eq, void, $URI*, $URI*), "java.net.URISyntaxException"},
	{"eq", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Test4URI, eq, void, $String*, $String*)},
	{"eq0", "(Ljava/net/URI;Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, eq0, void, $URI*, $URI*), "java.net.URISyntaxException"},
	{"eqHashComp", "()V", nullptr, $STATIC, $staticMethod(Test4URI, eqHashComp, void), "java.net.URISyntaxException"},
	{"eqeq", "(Ljava/net/URI;Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, eqeq, void, $URI*, $URI*)},
	{"f", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, f, Test4URI*, $String*)},
	{"fd", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, fd, Test4URI*, $String*)},
	{"g", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, g, Test4URI*, $String*)},
	{"gd", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, gd, Test4URI*, $String*)},
	{"gt", "(Ljava/net/URI;Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, gt, void, $URI*, $URI*), "java.net.URISyntaxException"},
	{"gt0", "(Ljava/net/URI;Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, gt0, void, $URI*, $URI*), "java.net.URISyntaxException"},
	{"h", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, h, Test4URI*, $String*)},
	{"header", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Test4URI, header, void, $String*)},
	{"ip", "()V", nullptr, $STATIC, $staticMethod(Test4URI, ip, void)},
	{"lt", "(Ljava/net/URI;Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, lt, void, $URI*, $URI*), "java.net.URISyntaxException"},
	{"lt", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Test4URI, lt, void, $String*, $String*), "java.net.URISyntaxException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4URI, main, void, $StringArray*), "java.lang.Exception"},
	{"misc", "()V", nullptr, $STATIC, $staticMethod(Test4URI, misc, void), "java.net.URISyntaxException"},
	{"n", "(I)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, n, Test4URI*, int32_t)},
	{"ne", "(Ljava/net/URI;Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, ne, void, $URI*, $URI*), "java.net.URISyntaxException"},
	{"ne0", "(Ljava/net/URI;Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, ne0, void, $URI*, $URI*), "java.net.URISyntaxException"},
	{"norm", "()LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, norm, Test4URI*)},
	{"npes", "()V", nullptr, $STATIC, $staticMethod(Test4URI, npes, void), "java.net.URISyntaxException"},
	{"o", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, o, Test4URI*, $String*)},
	{"p", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, p, Test4URI*, $String*)},
	{"parsed", "()Z", nullptr, 0, $virtualMethod(Test4URI, parsed, bool)},
	{"pd", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, pd, Test4URI*, $String*)},
	{"psa", "()LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, psa, Test4URI*)},
	{"q", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, q, Test4URI*, $String*)},
	{"qd", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, qd, Test4URI*, $String*)},
	{"report", "()V", nullptr, $PRIVATE, $method(Test4URI, report, void)},
	{"resolved", "()Z", nullptr, 0, $virtualMethod(Test4URI, resolved, bool)},
	{"rfc2396", "()V", nullptr, $STATIC, $staticMethod(Test4URI, rfc2396, void)},
	{"rslv", "(Ljava/net/URI;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, rslv, Test4URI*, $URI*)},
	{"rtvz", "(Ljava/net/URI;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, rtvz, Test4URI*, $URI*)},
	{"s", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, s, Test4URI*, $String*)},
	{"serial", "(Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Test4URI, serial, void, $URI*), "java.io.IOException,java.net.URISyntaxException"},
	{"serial", "()V", nullptr, $STATIC, $staticMethod(Test4URI, serial, void), "java.io.IOException,java.net.URISyntaxException"},
	{"show", "(Ljava/lang/String;Ljava/net/URISyntaxException;)V", nullptr, $STATIC, $staticMethod(Test4URI, show, void, $String*, $URISyntaxException*)},
	{"show", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Test4URI, show, void, $String*, $String*)},
	{"show", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Test4URI, show, void, $String*, $String*, $String*)},
	{"show", "(Ljava/net/URI;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4URI, show, void, $URI*)},
	{"sp", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, sp, Test4URI*, $String*)},
	{"spd", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, spd, Test4URI*, $String*)},
	{"summarize", "()V", nullptr, $PRIVATE, $method(Test4URI, summarize, void)},
	{"ta", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, ta, Test4URI*, $String*)},
	{"test", "(Ljava/lang/String;)LTest4URI;", nullptr, $STATIC, $staticMethod(Test4URI, test, Test4URI*, $String*)},
	{"test", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)LTest4URI;", nullptr, $STATIC, $staticMethod(Test4URI, test, Test4URI*, $String*, $String*, $String*, int32_t, $String*, $String*, $String*)},
	{"test", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)LTest4URI;", nullptr, $STATIC, $staticMethod(Test4URI, test, Test4URI*, $String*, $String*, $String*, $String*, $String*)},
	{"test", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)LTest4URI;", nullptr, $STATIC, $staticMethod(Test4URI, test, Test4URI*, $String*, $String*, $String*, $String*)},
	{"test", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)LTest4URI;", nullptr, $STATIC, $staticMethod(Test4URI, test, Test4URI*, $String*, $String*, $String*)},
	{"testCreate", "(Ljava/lang/String;)LTest4URI;", nullptr, $STATIC, $staticMethod(Test4URI, testCreate, Test4URI*, $String*)},
	{"tests", "()V", nullptr, $STATIC, $staticMethod(Test4URI, tests, void), "java.io.IOException,java.net.URISyntaxException"},
	{"ts", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, ts, Test4URI*, $String*)},
	{"u", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, u, Test4URI*, $String*)},
	{"ud", "(Ljava/lang/String;)LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, ud, Test4URI*, $String*)},
	{"uquote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4URI, uquote, $String*, $String*)},
	{"uri", "()Ljava/net/URI;", nullptr, 0, $virtualMethod(Test4URI, uri, $URI*)},
	{"urls", "()V", nullptr, $STATIC, $staticMethod(Test4URI, urls, void), "java.net.URISyntaxException"},
	{"usage", "()V", nullptr, $STATIC, $staticMethod(Test4URI, usage, void)},
	{"x", "()LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, x, Test4URI*)},
	{"z", "()LTest4URI;", nullptr, 0, $virtualMethod(Test4URI, z, Test4URI*)},
	{}
};

$ClassInfo _Test4URI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4URI",
	"java.lang.Object",
	nullptr,
	_Test4URI_FieldInfo_,
	_Test4URI_MethodInfo_
};

$Object* allocate$Test4URI($Class* clazz) {
	return $of($alloc(Test4URI));
}

$PrintStream* Test4URI::out = nullptr;
int32_t Test4URI::testCount = 0;

void Test4URI::init$($String* s) {
	$set(this, uri$, nullptr);
	$set(this, base, nullptr);
	$set(this, op, nullptr);
	this->checked = 0;
	this->failed = 0;
	$set(this, exc, nullptr);
	++Test4URI::testCount;
	$set(this, input, s);
	try {
		$set(this, uri$, $new($URI, s));
	} catch ($URISyntaxException& x) {
		$set(this, exc, x);
	}
	$set(this, originalURI, this->uri$);
}

Test4URI* Test4URI::test($String* s) {
	$init(Test4URI);
	return $new(Test4URI, s);
}

void Test4URI::init$($String* s, $String* u, $String* h, int32_t n, $String* p, $String* q, $String* f) {
	$set(this, uri$, nullptr);
	$set(this, base, nullptr);
	$set(this, op, nullptr);
	this->checked = 0;
	this->failed = 0;
	$set(this, exc, nullptr);
	++Test4URI::testCount;
	try {
		$set(this, uri$, $new($URI, s, u, h, n, p, q, f));
	} catch ($URISyntaxException& x) {
		$set(this, exc, x);
		$set(this, input, x->getInput());
	}
	if (this->uri$ != nullptr) {
		$set(this, input, $nc(this->uri$)->toString());
	}
	$set(this, originalURI, this->uri$);
}

Test4URI* Test4URI::test($String* s, $String* u, $String* h, int32_t n, $String* p, $String* q, $String* f) {
	$init(Test4URI);
	return $new(Test4URI, s, u, h, n, p, q, f);
}

void Test4URI::init$($String* s, $String* a, $String* p, $String* q, $String* f) {
	$set(this, uri$, nullptr);
	$set(this, base, nullptr);
	$set(this, op, nullptr);
	this->checked = 0;
	this->failed = 0;
	$set(this, exc, nullptr);
	++Test4URI::testCount;
	try {
		$set(this, uri$, $new($URI, s, a, p, q, f));
	} catch ($URISyntaxException& x) {
		$set(this, exc, x);
		$set(this, input, x->getInput());
	}
	if (this->uri$ != nullptr) {
		$set(this, input, $nc(this->uri$)->toString());
	}
	$set(this, originalURI, this->uri$);
}

Test4URI* Test4URI::test($String* s, $String* a, $String* p, $String* q, $String* f) {
	$init(Test4URI);
	return $new(Test4URI, s, a, p, q, f);
}

void Test4URI::init$($String* s, $String* h, $String* p, $String* f) {
	$set(this, uri$, nullptr);
	$set(this, base, nullptr);
	$set(this, op, nullptr);
	this->checked = 0;
	this->failed = 0;
	$set(this, exc, nullptr);
	++Test4URI::testCount;
	try {
		$set(this, uri$, $new($URI, s, h, p, f));
	} catch ($URISyntaxException& x) {
		$set(this, exc, x);
		$set(this, input, x->getInput());
	}
	if (this->uri$ != nullptr) {
		$set(this, input, $nc(this->uri$)->toString());
	}
	$set(this, originalURI, this->uri$);
}

Test4URI* Test4URI::test($String* s, $String* h, $String* p, $String* f) {
	$init(Test4URI);
	return $new(Test4URI, s, h, p, f);
}

void Test4URI::init$($String* s, $String* ssp, $String* f) {
	$set(this, uri$, nullptr);
	$set(this, base, nullptr);
	$set(this, op, nullptr);
	this->checked = 0;
	this->failed = 0;
	$set(this, exc, nullptr);
	++Test4URI::testCount;
	try {
		$set(this, uri$, $new($URI, s, ssp, f));
	} catch ($URISyntaxException& x) {
		$set(this, exc, x);
		$set(this, input, x->getInput());
	}
	if (this->uri$ != nullptr) {
		$set(this, input, $nc(this->uri$)->toString());
	}
	$set(this, originalURI, this->uri$);
}

Test4URI* Test4URI::test($String* s, $String* ssp, $String* f) {
	$init(Test4URI);
	return $new(Test4URI, s, ssp, f);
}

void Test4URI::init$($String* s, bool xxx) {
	$set(this, uri$, nullptr);
	$set(this, base, nullptr);
	$set(this, op, nullptr);
	this->checked = 0;
	this->failed = 0;
	$set(this, exc, nullptr);
	++Test4URI::testCount;
	try {
		$set(this, uri$, $URI::create(s));
	} catch ($IllegalArgumentException& x) {
		$set(this, exc, x);
	}
	if (this->uri$ != nullptr) {
		$set(this, input, $nc(this->uri$)->toString());
	}
	$set(this, originalURI, this->uri$);
}

Test4URI* Test4URI::testCreate($String* s) {
	$init(Test4URI);
	return $new(Test4URI, s, false);
}

bool Test4URI::parsed() {
	return this->uri$ != nullptr;
}

bool Test4URI::resolved() {
	return this->base != nullptr;
}

$URI* Test4URI::uri() {
	return this->uri$;
}

bool Test4URI::check1(int32_t prop) {
	this->checked |= prop;
	if (!parsed()) {
		this->failed |= prop;
		return false;
	}
	return true;
}

void Test4URI::check2($String* s, $String* ans, int32_t prop) {
	if ((s == nullptr) || !$nc(s)->equals(ans)) {
		this->failed |= prop;
	}
}

Test4URI* Test4URI::s($String* s) {
	if (check1(Test4URI::SCHEME)) {
		check2($($nc(this->uri$)->getScheme()), s, Test4URI::SCHEME);
	}
	return this;
}

Test4URI* Test4URI::u($String* s) {
	if (check1(Test4URI::USERINFO)) {
		check2($($nc(this->uri$)->getRawUserInfo()), s, Test4URI::USERINFO);
	}
	return this;
}

Test4URI* Test4URI::ud($String* s) {
	if (check1(Test4URI::USERINFO_D)) {
		check2($($nc(this->uri$)->getUserInfo()), s, Test4URI::USERINFO_D);
	}
	return this;
}

Test4URI* Test4URI::h($String* s) {
	if (check1(Test4URI::HOST)) {
		check2($($nc(this->uri$)->getHost()), s, Test4URI::HOST);
	}
	return this;
}

Test4URI* Test4URI::g($String* s) {
	if (check1(Test4URI::REGISTRY)) {
		if ($nc(this->uri$)->getHost() != nullptr) {
			this->failed |= Test4URI::REGISTRY;
		} else {
			check2($($nc(this->uri$)->getRawAuthority()), s, Test4URI::REGISTRY);
		}
	}
	return this;
}

Test4URI* Test4URI::gd($String* s) {
	if (check1(Test4URI::REGISTRY_D)) {
		if ($nc(this->uri$)->getHost() != nullptr) {
			this->failed |= Test4URI::REGISTRY_D;
		} else {
			check2($($nc(this->uri$)->getAuthority()), s, Test4URI::REGISTRY_D);
		}
	}
	return this;
}

Test4URI* Test4URI::n(int32_t n) {
	this->checked |= Test4URI::PORT;
	bool var$0 = !parsed();
	if (var$0 || ($nc(this->uri$)->getPort() != n)) {
		this->failed |= Test4URI::PORT;
	}
	return this;
}

Test4URI* Test4URI::p($String* s) {
	if (check1(Test4URI::PATH)) {
		check2($($nc(this->uri$)->getRawPath()), s, Test4URI::PATH);
	}
	return this;
}

Test4URI* Test4URI::pd($String* s) {
	if (check1(Test4URI::PATH_D)) {
		check2($($nc(this->uri$)->getPath()), s, Test4URI::PATH_D);
	}
	return this;
}

Test4URI* Test4URI::o($String* s) {
	if (check1(Test4URI::OPAQUEPART)) {
		if (!$nc(this->uri$)->isOpaque()) {
			this->failed |= Test4URI::OPAQUEPART;
		} else {
			check2($($nc(this->uri$)->getSchemeSpecificPart()), s, Test4URI::OPAQUEPART);
		}
	}
	return this;
}

Test4URI* Test4URI::sp($String* s) {
	if (check1(Test4URI::SSP)) {
		check2($($nc(this->uri$)->getRawSchemeSpecificPart()), s, Test4URI::SSP);
	}
	return this;
}

Test4URI* Test4URI::spd($String* s) {
	if (check1(Test4URI::SSP_D)) {
		check2($($nc(this->uri$)->getSchemeSpecificPart()), s, Test4URI::SSP_D);
	}
	return this;
}

Test4URI* Test4URI::q($String* s) {
	if (check1(Test4URI::QUERY)) {
		check2($($nc(this->uri$)->getRawQuery()), s, Test4URI::QUERY);
	}
	return this;
}

Test4URI* Test4URI::qd($String* s) {
	if (check1(Test4URI::QUERY_D)) {
		check2($($nc(this->uri$)->getQuery()), s, Test4URI::QUERY_D);
	}
	return this;
}

Test4URI* Test4URI::f($String* s) {
	if (check1(Test4URI::FRAGMENT)) {
		check2($($nc(this->uri$)->getRawFragment()), s, Test4URI::FRAGMENT);
	}
	return this;
}

Test4URI* Test4URI::fd($String* s) {
	if (check1(Test4URI::FRAGMENT_D)) {
		check2($($nc(this->uri$)->getFragment()), s, Test4URI::FRAGMENT_D);
	}
	return this;
}

Test4URI* Test4URI::ta($String* s) {
	if (check1(Test4URI::TOASCII)) {
		check2($($nc(this->uri$)->toASCIIString()), s, Test4URI::TOASCII);
	}
	return this;
}

Test4URI* Test4URI::ts($String* s) {
	if (check1(Test4URI::TOSTRING)) {
		check2($($nc(this->uri$)->toString()), s, Test4URI::TOSTRING);
	}
	return this;
}

Test4URI* Test4URI::x() {
	this->checked |= Test4URI::PARSEFAIL;
	if (parsed()) {
		this->failed |= Test4URI::PARSEFAIL;
	}
	return this;
}

Test4URI* Test4URI::rslv($URI* base) {
	if (!parsed()) {
		return this;
	}
	$set(this, base, base);
	$set(this, op, "rslv"_s);
	$var($URI, u, this->uri$);
	$set(this, uri$, nullptr);
	try {
		$set(this, uri$, $nc(base)->resolve(u));
	} catch ($IllegalArgumentException& x) {
		$set(this, exc, x);
	}
	this->checked = 0;
	this->failed = 0;
	return this;
}

Test4URI* Test4URI::norm() {
	if (!parsed()) {
		return this;
	}
	$set(this, op, "norm"_s);
	$set(this, uri$, $nc(this->uri$)->normalize());
	return this;
}

Test4URI* Test4URI::rtvz($URI* base) {
	if (!parsed()) {
		return this;
	}
	$set(this, base, base);
	$set(this, op, "rtvz"_s);
	$set(this, uri$, $nc(base)->relativize(this->uri$));
	this->checked = 0;
	this->failed = 0;
	return this;
}

Test4URI* Test4URI::psa() {
	try {
		$nc(this->uri$)->parseServerAuthority();
	} catch ($URISyntaxException& x) {
		$set(this, exc, x);
		$set(this, uri$, nullptr);
	}
	this->checked = 0;
	this->failed = 0;
	return this;
}

void Test4URI::checkEmpty($String* s, int32_t prop) {
	if ((((int32_t)(this->checked & (uint32_t)prop)) == 0) && (s != nullptr)) {
		this->failed |= prop;
	}
}

void Test4URI::checkURI7() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->uri$)->isOpaque()) {
		return;
	}
	bool var$0 = ($nc(this->uri$)->getAuthority() == nullptr);
	bool var$2 = ($nc(this->uri$)->getUserInfo() == nullptr);
	bool var$1 = (var$2 && ($nc(this->uri$)->getHost() == nullptr));
	if (var$0 != var$1) {
		return;
	}
	if ($nc($($nc(this->uri$)->getPath()))->indexOf((int32_t)(char16_t)0x20AC) >= 0) {
		return;
	}
	try {
		$var($String, var$3, $nc(this->uri$)->getScheme());
		$var($String, var$4, $nc(this->uri$)->getUserInfo());
		$var($String, var$5, $nc(this->uri$)->getHost());
		int32_t var$6 = $nc(this->uri$)->getPort();
		$var($String, var$7, $nc(this->uri$)->getPath());
		$var($String, var$8, $nc(this->uri$)->getQuery());
		$var($URI, u2, $new($URI, var$3, var$4, var$5, var$6, var$7, var$8, $($nc(this->uri$)->getFragment())));
		if (!$nc(this->uri$)->equals(u2)) {
			this->failed |= Test4URI::IDENT_URI7;
		}
	} catch ($URISyntaxException& x) {
		this->failed |= Test4URI::IDENT_URI7;
	}
}

void Test4URI::checkURI5() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->uri$)->isOpaque()) {
		return;
	}
	try {
		$var($String, var$0, $nc(this->uri$)->getScheme());
		$var($String, var$1, $nc(this->uri$)->getAuthority());
		$var($String, var$2, $nc(this->uri$)->getPath());
		$var($String, var$3, $nc(this->uri$)->getQuery());
		$var($URI, u2, $new($URI, var$0, var$1, var$2, var$3, $($nc(this->uri$)->getFragment())));
		if (!$nc(this->uri$)->equals(u2)) {
			this->failed |= Test4URI::IDENT_URI5;
		}
	} catch ($URISyntaxException& x) {
		this->failed |= Test4URI::IDENT_URI5;
	}
}

void Test4URI::checkURI3() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$0, $nc(this->uri$)->getScheme());
		$var($String, var$1, $nc(this->uri$)->getSchemeSpecificPart());
		$var($URI, u2, $new($URI, var$0, var$1, $($nc(this->uri$)->getFragment())));
		if (!$nc(this->uri$)->equals(u2)) {
			this->failed |= Test4URI::IDENT_URI3;
		}
	} catch ($URISyntaxException& x) {
		this->failed |= Test4URI::IDENT_URI3;
	}
}

void Test4URI::checkIdentities() {
	$useLocalCurrentObjectStackCache();
	if (this->input != nullptr) {
		if (!$nc($($nc(this->uri$)->toString()))->equals(this->input)) {
			this->failed |= Test4URI::IDENT_STR;
		}
	}
	try {
		if (!($$new($URI, $($nc(this->uri$)->toString())))->equals(this->uri$)) {
			this->failed |= Test4URI::IDENT_URI1;
		}
	} catch ($URISyntaxException& x) {
		this->failed |= Test4URI::IDENT_URI1;
	}
	bool var$1 = ($nc(this->uri$)->getAuthority() == nullptr);
	bool var$0 = var$1 && ($nc(this->uri$)->getSchemeSpecificPart() != nullptr);
	if (var$0) {
		bool var$3 = $nc($($nc(this->uri$)->getSchemeSpecificPart()))->startsWith("///"_s);
		bool var$2 = var$3 || $nc($($nc(this->uri$)->getSchemeSpecificPart()))->startsWith("//?"_s);
		var$0 = (var$2 || $nc($($nc(this->uri$)->getSchemeSpecificPart()))->equals("//"_s));
	}
	if (var$0) {
		return;
	}
	bool var$5 = ($nc(this->uri$)->getHost() != nullptr);
	bool var$4 = var$5 && ($nc(this->uri$)->getAuthority() != nullptr);
	if (var$4 && ($nc($($nc(this->uri$)->getAuthority()))->equals($$str({$($nc(this->uri$)->getHost()), ":"_s})))) {
		return;
	}
	bool var$6 = ($nc(this->uri$)->getPath() != nullptr);
	if (var$6 && $nc($($nc(this->uri$)->getPath()))->indexOf((int32_t)(char16_t)0x20AC) >= 0) {
		return;
	}
	checkURI3();
	checkURI5();
	checkURI7();
}

Test4URI* Test4URI::z() {
	$useLocalCurrentObjectStackCache();
	if (!parsed()) {
		report();
		return this;
	}
	if (this->op == nullptr) {
		checkIdentities();
	}
	checkEmpty($($nc(this->uri$)->getScheme()), Test4URI::SCHEME);
	checkEmpty($($nc(this->uri$)->getUserInfo()), Test4URI::USERINFO);
	checkEmpty($($nc(this->uri$)->getHost()), Test4URI::HOST);
	if ((((int32_t)(this->checked & (uint32_t)Test4URI::PORT)) == 0) && ($nc(this->uri$)->getPort() != -1)) {
		this->failed |= Test4URI::PORT;
	}
	checkEmpty($($nc(this->uri$)->getPath()), Test4URI::PATH);
	checkEmpty($($nc(this->uri$)->getQuery()), Test4URI::QUERY);
	checkEmpty($($nc(this->uri$)->getFragment()), Test4URI::FRAGMENT);
	report();
	return this;
}

void Test4URI::header($String* s) {
	$init(Test4URI);
	$nc(Test4URI::out)->println();
	$nc(Test4URI::out)->println();
	$nc(Test4URI::out)->println($$str({"-- "_s, s, " --"_s}));
}

void Test4URI::show($String* prefix, $URISyntaxException* x) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	$nc(Test4URI::out)->println($(uquote($($nc(x)->getInput()))));
	if ($nc(x)->getIndex() >= 0) {
		for (int32_t i = 0; i < x->getIndex(); ++i) {
			if ($nc($(x->getInput()))->charAt(i) >= (char16_t)0x80) {
				$nc(Test4URI::out)->print("      "_s);
			} else {
				$nc(Test4URI::out)->print(" "_s);
			}
		}
		$nc(Test4URI::out)->println("^"_s);
	}
	$nc(Test4URI::out)->println($$str({prefix, ": "_s, $($nc(x)->getReason())}));
}

void Test4URI::summarize() {
	$useLocalCurrentObjectStackCache();
	$nc(Test4URI::out)->println();
	$var($StringBuffer, sb, $new($StringBuffer));
	if ($nc(this->input)->length() == 0) {
		sb->append("\"\""_s);
	} else {
		sb->append(this->input);
	}
	if (this->base != nullptr) {
		sb->append(" "_s);
		sb->append($of(this->base));
	}
	if (!parsed()) {
		$var($String, s, (((int32_t)(this->checked & (uint32_t)Test4URI::PARSEFAIL)) != 0) ? "Correct exception"_s : "UNEXPECTED EXCEPTION"_s);
		if ($instanceOf($URISyntaxException, this->exc)) {
			show(s, $cast($URISyntaxException, this->exc));
		} else {
			$nc(Test4URI::out)->println($(uquote($(sb->toString()))));
			$nc(Test4URI::out)->print($$str({s, ": "_s}));
			$nc(this->exc)->printStackTrace(Test4URI::out);
		}
	} else {
		if (this->uri$ != this->originalURI) {
			sb->append(" "_s);
			sb->append(this->op);
			sb->append(" --> "_s);
			sb->append($of(this->uri$));
		}
		$nc(Test4URI::out)->println($(uquote($(sb->toString()))));
	}
}

$String* Test4URI::uquote($String* str) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	if (str == nullptr) {
		return str;
	}
	$var($StringBuffer, sb, $new($StringBuffer));
	int32_t n = $nc(str)->length();
	for (int32_t i = 0; i < n; ++i) {
		char16_t c = str->charAt(i);
		if ((c >= u' ') && (c < 127)) {
			sb->append(c);
			continue;
		}
		sb->append("\\u"_s);
		$var($String, s, $nc($($Integer::toHexString(c)))->toUpperCase());
		while ($nc(s)->length() < 4) {
			$assign(s, $str({"0"_s, s}));
		}
		sb->append(s);
	}
	return sb->toString();
}

void Test4URI::show($String* n, $String* v) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({"  "_s, n, $("          = "_s->substring($nc(n)->length()))}));
	$nc(Test4URI::out)->println($$concat(var$0, $(uquote(v))));
}

void Test4URI::show($String* n, $String* v, $String* vd) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	if ((v == nullptr) || $nc(v)->equals(vd)) {
		show(n, v);
	} else {
		$var($String, var$2, $$str({"  "_s, n, $("          = "_s->substring($nc(n)->length()))}));
		$var($String, var$1, $$concat(var$2, $(uquote(v))));
		$var($String, var$0, $$concat(var$1, " = "_s));
		$nc(Test4URI::out)->println($$concat(var$0, $(uquote(vd))));
	}
}

void Test4URI::show($URI* u) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	show("opaque"_s, $$str({""_s, $$str($nc(u)->isOpaque())}));
	show("scheme"_s, $($nc(u)->getScheme()));
	$var($String, var$0, "ssp"_s);
	$var($String, var$1, $nc(u)->getRawSchemeSpecificPart());
	show(var$0, var$1, $(u->getSchemeSpecificPart()));
	$var($String, var$2, "authority"_s);
	$var($String, var$3, $nc(u)->getRawAuthority());
	show(var$2, var$3, $(u->getAuthority()));
	$var($String, var$4, "userinfo"_s);
	$var($String, var$5, $nc(u)->getRawUserInfo());
	show(var$4, var$5, $(u->getUserInfo()));
	show("host"_s, $($nc(u)->getHost()));
	show("port"_s, $$str({""_s, $$str($nc(u)->getPort())}));
	$var($String, var$6, "path"_s);
	$var($String, var$7, $nc(u)->getRawPath());
	show(var$6, var$7, $(u->getPath()));
	$var($String, var$8, "query"_s);
	$var($String, var$9, $nc(u)->getRawQuery());
	show(var$8, var$9, $(u->getQuery()));
	$var($String, var$10, "fragment"_s);
	$var($String, var$11, $nc(u)->getRawFragment());
	show(var$10, var$11, $(u->getFragment()));
	if (!$nc($($nc(u)->toString()))->equals($(u->toASCIIString()))) {
		show("toascii"_s, $(u->toASCIIString()));
	}
}

void Test4URI::report() {
	$useLocalCurrentObjectStackCache();
	summarize();
	if (this->failed == 0) {
		return;
	}
	$var($StringBuffer, sb, $new($StringBuffer));
	sb->append("FAIL:"_s);
	if (((int32_t)(this->failed & (uint32_t)Test4URI::PARSEFAIL)) != 0) {
		sb->append(" parsefail"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::SCHEME)) != 0) {
		sb->append(" scheme"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::SSP)) != 0) {
		sb->append(" ssp"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::OPAQUEPART)) != 0) {
		sb->append(" opaquepart"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::USERINFO)) != 0) {
		sb->append(" userinfo"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::USERINFO_D)) != 0) {
		sb->append(" userinfod"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::HOST)) != 0) {
		sb->append(" host"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::PORT)) != 0) {
		sb->append(" port"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::REGISTRY)) != 0) {
		sb->append(" registry"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::PATH)) != 0) {
		sb->append(" path"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::PATH_D)) != 0) {
		sb->append(" pathd"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::QUERY)) != 0) {
		sb->append(" query"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::QUERY_D)) != 0) {
		sb->append(" queryd"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::FRAGMENT)) != 0) {
		sb->append(" fragment"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::FRAGMENT_D)) != 0) {
		sb->append(" fragmentd"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::TOASCII)) != 0) {
		sb->append(" toascii"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::IDENT_STR)) != 0) {
		sb->append(" ident-str"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::IDENT_URI1)) != 0) {
		sb->append(" ident-uri1"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::IDENT_URI3)) != 0) {
		sb->append(" ident-uri3"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::IDENT_URI5)) != 0) {
		sb->append(" ident-uri5"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::IDENT_URI7)) != 0) {
		sb->append(" ident-uri7"_s);
	}
	if (((int32_t)(this->failed & (uint32_t)Test4URI::TOSTRING)) != 0) {
		sb->append(" tostring"_s);
	}
	$nc(Test4URI::out)->println($(sb->toString()));
	if (this->uri$ != nullptr) {
		show(this->uri$);
	}
	$throwNew($RuntimeException, "Test4URI failed"_s);
}

void Test4URI::rfc2396() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	header("RFC2396: Basic examples"_s);
	$nc($($nc($($nc($($nc($(test("ftp://ftp.is.co.za/rfc/rfc1808.txt"_s)))->s("ftp"_s)))->h("ftp.is.co.za"_s)))->p("/rfc/rfc1808.txt"_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://www.math.uio.no/faq/compression-faq/part1.html"_s)))->s("http"_s)))->h("www.math.uio.no"_s)))->p("/faq/compression-faq/part1.html"_s)))->z();
	$nc($($nc($($nc($(test("mailto:mduerst@ifi.unizh.ch"_s)))->s("mailto"_s)))->o("mduerst@ifi.unizh.ch"_s)))->z();
	$nc($($nc($($nc($(test("news:comp.infosystems.www.servers.unix"_s)))->s("news"_s)))->o("comp.infosystems.www.servers.unix"_s)))->z();
	$nc($($nc($($nc($($nc($(test("telnet://melvyl.ucop.edu/"_s)))->s("telnet"_s)))->h("melvyl.ucop.edu"_s)))->p("/"_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://www.w3.org/Addressing/"_s)))->s("http"_s)))->h("www.w3.org"_s)))->p("/Addressing/"_s)))->z();
	$nc($($nc($($nc($($nc($(test("ftp://ds.internic.net/rfc/"_s)))->s("ftp"_s)))->h("ds.internic.net"_s)))->p("/rfc/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("http://www.ics.uci.edu/pub/ietf/uri/historical.html#WARNING"_s)))->s("http"_s)))->h("www.ics.uci.edu"_s)))->p("/pub/ietf/uri/historical.html"_s)))->f("WARNING"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("http://www.ics.uci.edu/pub/ietf/uri/#Related"_s)))->s("http"_s)))->h("www.ics.uci.edu"_s)))->p("/pub/ietf/uri/"_s)))->f("Related"_s)))->z();
	header("RFC2396: Normal relative-URI examples (appendix C)"_s);
	$var($URI, base, $nc($($nc($($nc($($nc($($nc($($nc($(test("http://a/b/c/d;p?q"_s)))->s("http"_s)))->h("a"_s)))->p("/b/c/d;p"_s)))->q("q"_s)))->z()))->uri());
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g:h"_s)))->s("g"_s)))->o("h"_s)))->z()))->rslv(base)))->s("g"_s)))->o("h"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g"_s)))->p("g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("./g"_s)))->p("./g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g/"_s)))->p("g/"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/g"_s)))->p("/g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("//g"_s)))->h("g"_s)))->p(""_s)))->z()))->rslv(base)))->s("http"_s)))->h("g"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("?y"_s)))->p(""_s)))->q("y"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/"_s)))->q("y"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g?y"_s)))->p("g"_s)))->q("y"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->q("y"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("#s"_s)))->p(""_s)))->f("s"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/d;p"_s)))->f("s"_s)))->q("q"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g#s"_s)))->p("g"_s)))->f("s"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->f("s"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g?y#s"_s)))->p("g"_s)))->q("y"_s)))->f("s"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->q("y"_s)))->f("s"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(";x"_s)))->p(";x"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/;x"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g;x"_s)))->p("g;x"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g;x"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g;x?y#s"_s)))->p("g;x"_s)))->q("y"_s)))->f("s"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g;x"_s)))->q("y"_s)))->f("s"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("."_s)))->p("."_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("./"_s)))->p("./"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(".."_s)))->p(".."_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../"_s)))->p("../"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../g"_s)))->p("../g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../.."_s)))->p("../.."_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../../"_s)))->p("../../"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../../g"_s)))->p("../../g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/g"_s)))->z();
	header("RFC2396: Abnormal relative-URI examples (appendix C)"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../../../g"_s)))->p("../../../g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/../g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../../../../g"_s)))->p("../../../../g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/../../g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/./g"_s)))->p("/./g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/./g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/../g"_s)))->p("/../g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/../g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g."_s)))->p("g."_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g."_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(".g"_s)))->p(".g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/.g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g.."_s)))->p("g.."_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g.."_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("..g"_s)))->p("..g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/..g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("./../g"_s)))->p("./../g"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/g"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("./g/."_s)))->p("./g/."_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g/./h"_s)))->p("g/./h"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g/h"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g/../h"_s)))->p("g/../h"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/h"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g;x=1/./y"_s)))->p("g;x=1/./y"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g;x=1/y"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g;x=1/../y"_s)))->p("g;x=1/../y"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/y"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g?y/./x"_s)))->p("g"_s)))->q("y/./x"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->q("y/./x"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g?y/../x"_s)))->p("g"_s)))->q("y/../x"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->q("y/../x"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g#s/./x"_s)))->p("g"_s)))->f("s/./x"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->f("s/./x"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("g#s/../x"_s)))->p("g"_s)))->f("s/../x"_s)))->z()))->rslv(base)))->s("http"_s)))->h("a"_s)))->p("/b/c/g"_s)))->f("s/../x"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("http:g"_s)))->s("http"_s)))->o("g"_s)))->z()))->rslv(base)))->s("http"_s)))->o("g"_s)))->z();
}

void Test4URI::ip() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	header("IP addresses"_s);
	$nc($($nc($($nc($($nc($($nc($(test("http://1.2.3.4:5"_s)))->s("http"_s)))->h("1.2.3.4"_s)))->n(5)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("http://[FEDC:BA98:7654:3210:FEDC:BA98:7654:3210]:80/index.html"_s)))->s("http"_s)))->h("[FEDC:BA98:7654:3210:FEDC:BA98:7654:3210]"_s)))->n(80)))->p("/index.html"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("http://[FEDC:BA98:7654:3210:FEDC:BA98:7654:10%12]:80/index.html"_s)))->s("http"_s)))->h("[FEDC:BA98:7654:3210:FEDC:BA98:7654:10%12]"_s)))->n(80)))->p("/index.html"_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[1080:0:0:0:8:800:200C:417A]/index.html"_s)))->s("http"_s)))->h("[1080:0:0:0:8:800:200C:417A]"_s)))->p("/index.html"_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[1080:0:0:0:8:800:200C:417A%1]/index.html"_s)))->s("http"_s)))->h("[1080:0:0:0:8:800:200C:417A%1]"_s)))->p("/index.html"_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[3ffe:2a00:100:7031::1]"_s)))->s("http"_s)))->h("[3ffe:2a00:100:7031::1]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[1080::8:800:200C:417A]/foo"_s)))->s("http"_s)))->h("[1080::8:800:200C:417A]"_s)))->p("/foo"_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[::192.9.5.5]/ipng"_s)))->s("http"_s)))->h("[::192.9.5.5]"_s)))->p("/ipng"_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[::192.9.5.5%interface]/ipng"_s)))->s("http"_s)))->h("[::192.9.5.5%interface]"_s)))->p("/ipng"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("http://[::FFFF:129.144.52.38]:80/index.html"_s)))->s("http"_s)))->h("[::FFFF:129.144.52.38]"_s)))->n(80)))->p("/index.html"_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[2010:836B:4179::836B:4179]"_s)))->s("http"_s)))->h("[2010:836B:4179::836B:4179]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[FF01::101]"_s)))->s("http"_s)))->h("[FF01::101]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[::1]"_s)))->s("http"_s)))->h("[::1]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[::]"_s)))->s("http"_s)))->h("[::]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[::%hme0]"_s)))->s("http"_s)))->h("[::%hme0]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[0:0:0:0:0:0:13.1.68.3]"_s)))->s("http"_s)))->h("[0:0:0:0:0:0:13.1.68.3]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[0:0:0:0:0:FFFF:129.144.52.38]"_s)))->s("http"_s)))->h("[0:0:0:0:0:FFFF:129.144.52.38]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[0:0:0:0:0:FFFF:129.144.52.38%33]"_s)))->s("http"_s)))->h("[0:0:0:0:0:FFFF:129.144.52.38%33]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[0:0:0:0:0:ffff:1.2.3.4]"_s)))->s("http"_s)))->h("[0:0:0:0:0:ffff:1.2.3.4]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("http://[::13.1.68.3]"_s)))->s("http"_s)))->h("[::13.1.68.3]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, nullptr, "1:2:3:4:5:6:7:8"_s, -1, nullptr, nullptr, nullptr)))->s("s"_s)))->h("[1:2:3:4:5:6:7:8]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, nullptr, "[1:2:3:4:5:6:7:8]"_s, -1, nullptr, nullptr, nullptr)))->s("s"_s)))->h("[1:2:3:4:5:6:7:8]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, nullptr, "[1:2:3:4:5:6:7:8]"_s, -1, nullptr, nullptr, nullptr)))->s("s"_s)))->h("[1:2:3:4:5:6:7:8]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, "1:2:3:4:5:6:7:8"_s, nullptr, nullptr)))->s("s"_s)))->h("[1:2:3:4:5:6:7:8]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, "1:2:3:4:5:6:7:8%hme0"_s, nullptr, nullptr)))->s("s"_s)))->h("[1:2:3:4:5:6:7:8%hme0]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, "1:2:3:4:5:6:7:8%1"_s, nullptr, nullptr)))->s("s"_s)))->h("[1:2:3:4:5:6:7:8%1]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, "[1:2:3:4:5:6:7:8]"_s, nullptr, nullptr)))->s("s"_s)))->h("[1:2:3:4:5:6:7:8]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, "[1:2:3:4:5:6:7:8]"_s, nullptr, nullptr, nullptr)))->s("s"_s)))->h("[1:2:3:4:5:6:7:8]"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, "1:2:3:4:5:6:7:8"_s, nullptr, nullptr, nullptr)))->s("s"_s)))->g("1:2:3:4:5:6:7:8"_s)))->p(""_s)))->z();
	$nc($($nc($(test("http://[ff01:234/foo"_s)))->x()))->z();
	$nc($($nc($(test("http://[ff01:234:zzz]/foo"_s)))->x()))->z();
	$nc($($nc($(test("http://[foo]"_s)))->x()))->z();
	$nc($($nc($(test("http://[]"_s)))->x()))->z();
	$nc($($nc($(test("http://[129.33.44.55]"_s)))->x()))->z();
	$nc($($nc($(test("http://[ff:ee:dd:cc:bb::aa:9:8]"_s)))->x()))->z();
	$nc($($nc($(test("http://[fffff::1]"_s)))->x()))->z();
	$nc($($nc($(test("http://[ff::ee::8]"_s)))->x()))->z();
	$nc($($nc($(test("http://[1:2:3:4::5:6:7:8]"_s)))->x()))->z();
	$nc($($nc($(test("http://[1:2]"_s)))->x()))->z();
	$nc($($nc($(test("http://[1:2:3:4:5:6:7:8:9]"_s)))->x()))->z();
	$nc($($nc($(test("http://[1:2:3:4:5:6:7:8%]"_s)))->x()))->z();
	$nc($($nc($(test("http://[1:2:3:4:5:6:7:8%!/]"_s)))->x()))->z();
	$nc($($nc($(test("http://[::1.2.3.300]"_s)))->x()))->z();
	$nc($($nc($($nc($(test("http://1.2.3"_s)))->psa()))->x()))->z();
	$nc($($nc($($nc($(test("http://1.2.3.300"_s)))->psa()))->x()))->z();
	$nc($($nc($($nc($(test("http://1.2.3.4.5"_s)))->psa()))->x()))->z();
	$nc($($nc($(test("http://[1.2.3.4:5]"_s)))->x()))->z();
	$nc($($nc($($nc($(test("http://1:2:3:4:5:6:7:8"_s)))->psa()))->x()))->z();
	$nc($($nc($(test("http://[1.2.3.4]/"_s)))->x()))->z();
	$nc($($nc($(test("http://[1.2.3.4/"_s)))->x()))->z();
	$nc($($nc($(test("http://[foo]/"_s)))->x()))->z();
	$nc($($nc($(test("http://[foo/"_s)))->x()))->z();
	$nc($($nc($(test("s"_s, "[foo]"_s, "/"_s, nullptr, nullptr)))->x()))->z();
	$nc($($nc($(test("s"_s, "[foo"_s, "/"_s, nullptr, nullptr)))->x()))->z();
	$nc($($nc($(test("s"_s, "[::foo"_s, "/"_s, nullptr, nullptr)))->x()))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s://1.2.3.com"_s)))->psa()))->s("s"_s)))->h("1.2.3.com"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s://1.2.3.4me.com"_s)))->psa()))->s("s"_s)))->h("1.2.3.4me.com"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s://7up.com"_s)))->psa()))->s("s"_s)))->h("7up.com"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s://7up.com/p"_s)))->psa()))->s("s"_s)))->h("7up.com"_s)))->p("/p"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s://7up"_s)))->psa()))->s("s"_s)))->h("7up"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s://7up/p"_s)))->psa()))->s("s"_s)))->h("7up"_s)))->p("/p"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s://7up."_s)))->psa()))->s("s"_s)))->h("7up."_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s://7up./p"_s)))->psa()))->s("s"_s)))->h("7up."_s)))->p("/p"_s)))->z();
}

void Test4URI::misc() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	$var($URI, base, $new($URI, "s://h/a/b"_s));
	$var($URI, rbase, $new($URI, "a/b/c/d"_s));
	header("Corner cases"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(""_s)))->p(""_s)))->z()))->rslv(base)))->s("s"_s)))->h("h"_s)))->p("/a/"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("#f"_s)))->p(""_s)))->f("f"_s)))->z()))->rslv(base)))->s("s"_s)))->h("h"_s)))->p("/a/b"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("?q"_s)))->p(""_s)))->q("q"_s)))->z()))->rslv(base)))->s("s"_s)))->h("h"_s)))->p("/a/"_s)))->q("q"_s)))->z();
	$nc($($nc($($nc($($nc($(test("p#f"_s)))->p("p"_s)))->f("f"_s)))->sp("p"_s)))->z();
	$nc($($nc($($nc($($nc($(test("s:p#f"_s)))->s("s"_s)))->o("p"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("p#f"_s)))->rslv(base)))->s("s"_s)))->h("h"_s)))->p("/a/p"_s)))->f("f"_s)))->sp("//h/a/p"_s)))->z();
	$nc($($nc($($nc($(test(""_s)))->p(""_s)))->sp(""_s)))->z();
	header("Emptiness"_s);
	$nc($($nc($(test("///p"_s)))->p("/p"_s)))->z();
	$nc($($nc($($nc($($nc($(test("//@h/p"_s)))->u(""_s)))->h("h"_s)))->p("/p"_s)))->z();
	$nc($($nc($($nc($(test("//h:/p"_s)))->h("h"_s)))->p("/p"_s)))->z();
	$nc($($nc($($nc($(test("//h"_s)))->h("h"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("//h?q"_s)))->h("h"_s)))->p(""_s)))->q("q"_s)))->z();
	$nc($($nc($($nc($(test("//?q"_s)))->p(""_s)))->q("q"_s)))->z();
	$nc($($nc($($nc($(test("//#f"_s)))->p(""_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($(test("p?#"_s)))->p("p"_s)))->q(""_s)))->f(""_s)))->z();
	$nc($($nc($(test(":"_s)))->x()))->z();
	$nc($($nc($(test("x:"_s)))->x()))->z();
	$nc($($nc($(test("//"_s)))->x()))->z();
	header("Resolution, normalization, and relativization"_s);
	$nc($($nc($($nc($($nc($($nc($(test("../e/f"_s)))->p("../e/f"_s)))->z()))->rslv(rbase)))->p("a/b/e/f"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("../../../../d"_s)))->p("../../../../d"_s)))->z()))->rslv(rbase)))->p("../d"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("../../../d:e"_s)))->p("../../../d:e"_s)))->z()))->rslv(rbase)))->p("./d:e"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("../../../d:e/f"_s)))->p("../../../d:e/f"_s)))->z()))->rslv(rbase)))->p("./d:e/f"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("a/./c/../d/f"_s)))->p("a/./c/../d/f"_s)))->z()))->norm()))->p("a/d/f"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("http://a/./b/c/../d?q#f"_s)))->s("http"_s)))->h("a"_s)))->p("/./b/c/../d"_s)))->q("q"_s)))->f("f"_s)))->z()))->norm()))->s("http"_s)))->h("a"_s)))->p("/b/d"_s)))->q("q"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($(test("a/../b"_s)))->p("a/../b"_s)))->z()))->norm()))->p("b"_s);
	$nc($($nc($($nc($($nc($($nc($(test("a/../b:c"_s)))->p("a/../b:c"_s)))->z()))->norm()))->p("./b:c"_s)))->z();
	$var($URI, u1, $URI::create("s://h/../p"_s));
	$var($URI, u2, $nc(u1)->normalize());
	eq(u1, u2);
	eqeq(u1, u2);
	$nc($($nc($($nc($($nc($($nc($(test("/a/b"_s)))->p("/a/b"_s)))->z()))->rtvz($$new($URI, "/a"_s))))->p("b"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("/a/b"_s)))->p("/a/b"_s)))->z()))->rtvz($$new($URI, "/a/"_s))))->p("b"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("a/b"_s)))->p("a/b"_s)))->z()))->rtvz($$new($URI, "a"_s))))->p("b"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("/a/b"_s)))->p("/a/b"_s)))->z()))->rtvz($$new($URI, "/a/b"_s))))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("a/../b:c/d"_s)))->p("a/../b:c/d"_s)))->z()))->rtvz($$new($URI, "./b:c/"_s))))->p("d"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("http://a/b/d/e?q#f"_s)))->s("http"_s)))->h("a"_s)))->p("/b/d/e"_s)))->q("q"_s)))->f("f"_s)))->z()))->rtvz($$new($URI, "http://a/b/?r#g"_s))))->p("d/e"_s)))->q("q"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($(test("/a/b"_s)))->psa()))->p("/a/b"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("s://u@h:1/p"_s)))->psa()))->s("s"_s)))->u("u"_s)))->h("h"_s)))->n(1)))->p("/p"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("s://u@h:-foo/p"_s)))->s("s"_s)))->g("u@h:-foo"_s)))->p("/p"_s)))->z()))->psa()))->x()))->z();
	$nc($($nc($($nc($(test("s://h:999999999999999999999999"_s)))->psa()))->x()))->z();
	$nc($($nc($($nc($(test("s://:/b"_s)))->psa()))->x()))->z();
	header("Constructors and factories"_s);
	$nc($($nc($(test("s"_s, nullptr, nullptr, -1, "p"_s, nullptr, nullptr)))->x()))->z();
	$nc($($nc($(test(nullptr, nullptr, nullptr, -1, nullptr, nullptr, nullptr)))->p(""_s)))->z();
	$nc($($nc($(test(nullptr, nullptr, nullptr, -1, "p"_s, nullptr, nullptr)))->p("p"_s)))->z();
	$nc($($nc($(test(nullptr, nullptr, "foo%20bar"_s, -1, nullptr, nullptr, nullptr)))->x()))->z();
	$nc($($nc($(test(nullptr, nullptr, "foo"_s, -100, nullptr, nullptr, nullptr)))->x()))->z();
	$nc($($nc($(test("s"_s, nullptr, nullptr, -1, ""_s, nullptr, nullptr)))->x()))->z();
	$nc($($nc($($nc($(test("s"_s, nullptr, nullptr, -1, "/p"_s, nullptr, nullptr)))->s("s"_s)))->p("/p"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("s"_s, "u"_s, "h"_s, 10, "/p"_s, "q"_s, "f"_s)))->s("s"_s)))->u("u"_s)))->h("h"_s)))->n(10)))->p("/p"_s)))->q("q"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($(test("s"_s, "a:b"_s, "/p"_s, "q"_s, "f"_s)))->s("s"_s)))->g("a:b"_s)))->p("/p"_s)))->q("q"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s"_s, "h"_s, "/p"_s, "f"_s)))->s("s"_s)))->h("h"_s)))->p("/p"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, "p"_s, "f"_s)))->s("s"_s)))->o("p"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($(test("s"_s, "/p"_s, "f"_s)))->s("s"_s)))->p("/p"_s)))->f("f"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(testCreate("s://u@h/p?q#f"_s)))->s("s"_s)))->u("u"_s)))->h("h"_s)))->p("/p"_s)))->q("q"_s)))->f("f"_s)))->z();
}

void Test4URI::npes() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	header("NullPointerException"_s);
	$var($URI, base, $URI::create("mailto:root@foobar.com"_s));
	$nc(Test4URI::out)->println();
	try {
		$nc(base)->resolve(($URI*)nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& x) {
		$nc(Test4URI::out)->println("resolve((URI)null) -->"_s);
		$nc(Test4URI::out)->println($$str({"Correct exception: "_s, x}));
	}
	$nc(Test4URI::out)->println();
	try {
		$nc(base)->resolve(($String*)nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& x) {
		$nc(Test4URI::out)->println("resolve((String)null) -->"_s);
		$nc(Test4URI::out)->println($$str({"Correct exception: "_s, x}));
	}
	$nc(Test4URI::out)->println();
	try {
		$nc(base)->relativize(($URI*)nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& x) {
		$nc(Test4URI::out)->println("relativize((String)null) -->"_s);
		$nc(Test4URI::out)->println($$str({"Correct exception: "_s, x}));
	}
	Test4URI::testCount += 3;
}

void Test4URI::chars() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	header("Escapes and non-US-ASCII characters"_s);
	$var($URI, uri, nullptr);
	$nc($($nc($(test("%0a%0A%0f%0F%01%09zz"_s)))->p("%0a%0A%0f%0F%01%09zz"_s)))->z();
	$nc($($nc($(test("foo%1"_s)))->x()))->z();
	$nc($($nc($(test("foo%z"_s)))->x()))->z();
	$nc($($nc($(test("foo%9z"_s)))->x()))->z();
	$nc($($nc($(test("s%20t://a"_s)))->x()))->z();
	$nc($($nc($($nc($(test("//a%20b"_s)))->g("a%20b"_s)))->p(""_s)))->z();
	$nc($($nc($($nc($($nc($(test("//u%20v@a"_s)))->u("u%20v"_s)))->h("a"_s)))->p(""_s)))->z();
	$nc($($nc($(test("/p%20q"_s)))->p("/p%20q"_s)))->z();
	$nc($($nc($($nc($(test("/p?q%20"_s)))->p("/p"_s)))->q("q%20"_s)))->z();
	$nc($($nc($($nc($(test("/p#%20f"_s)))->p("/p"_s)))->f("%20f"_s)))->z();
	$nc($($nc($(test(u"s§t://a"_s)))->x()))->z();
	$nc($($nc($($nc($(test(u"//§/b"_s)))->g(u"§"_s)))->p("/b"_s)))->z();
	$nc($($nc($($nc($($nc($(test(u"//u§v@a"_s)))->u(u"u§v"_s)))->h("a"_s)))->p(""_s)))->z();
	$nc($($nc($(test(u"/p§q"_s)))->p(u"/p§q"_s)))->z();
	$nc($($nc($($nc($(test(u"/p?q§"_s)))->p("/p"_s)))->q(u"q§"_s)))->z();
	$nc($($nc($($nc($(test(u"/p#§f"_s)))->p("/p"_s)))->f(u"§f"_s)))->z();
	$assign(uri, $new($URI, "http://a/b/c/d;p?q"_s));
	$nc($($nc($($nc($($nc($($nc($($nc($(test("/p%20p"_s)))->rslv(uri)))->s("http"_s)))->h("a"_s)))->p("/p%20p"_s)))->ts("http://a/p%20p"_s)))->z();
	$nc($($nc($(test("foo:x{bar"_s)))->x()))->z();
	$nc($($nc($(test("foo:{bar"_s)))->x()))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("//u%01@h/a/b/%02/c?q%03#f%04"_s)))->u("u%01"_s)))->ud("u\u0001"_s)))->h("h"_s)))->p("/a/b/%02/c"_s)))->pd("/a/b/\u0002/c"_s)))->q("q%03"_s)))->qd("q\u0003"_s)))->f("f%04"_s)))->fd("f\u0004"_s)))->z();
	$nc($($nc($(test("/a/b c"_s)))->x()))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(nullptr, u"uꀁ\u0001"_s, "h"_s, -1, u"/p% ꀂ\u0002 "_s, u"q% ꀃ\u0003 "_s, u"f% ꀄ\u0004 "_s)))->u(u"uꀁ%01"_s)))->h("h"_s)))->p(u"/p%25%20ꀂ%02%E2%80%80"_s)))->pd(u"/p% ꀂ\u0002 "_s)))->q(u"q%25%20ꀃ%03%E2%80%80"_s)))->qd(u"q% ꀃ\u0003 "_s)))->f(u"f%25%20ꀄ%04%E2%80%80"_s)))->fd(u"f% ꀄ\u0004 "_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(nullptr, u"gꀁ\u0001"_s, u"/p% ꀂ\u0002 "_s, u"q% ꀃ\u0003 "_s, u"f% ꀄ\u0004 "_s)))->g(u"gꀁ%01"_s)))->p(u"/p%25%20ꀂ%02%E2%80%80"_s)))->pd(u"/p% ꀂ\u0002 "_s)))->q(u"q%25%20ꀃ%03%E2%80%80"_s)))->qd(u"q% ꀃ\u0003 "_s)))->f(u"f%25%20ꀄ%04%E2%80%80"_s)))->fd(u"f% ꀄ\u0004 "_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test(nullptr, nullptr, u"/p% ꀂ\u0002 "_s, u"f% ꀄ\u0004 "_s)))->p(u"/p%25%20ꀂ%02%E2%80%80"_s)))->pd(u"/p% ꀂ\u0002 "_s)))->f(u"f%25%20ꀄ%04%E2%80%80"_s)))->fd(u"f% ꀄ\u0004 "_s)))->z();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(nullptr, u"/sp% ꀁ\u0001 "_s, u"f% ꀄ\u0004 "_s)))->sp(u"/sp%25%20ꀁ%01%E2%80%80"_s)))->spd(u"/sp% ꀁ\u0001 "_s)))->p(u"/sp%25%20ꀁ%01%E2%80%80"_s)))->pd(u"/sp% ꀁ\u0001 "_s)))->f(u"f%25%20ꀄ%04%E2%80%80"_s)))->fd(u"f% ꀄ\u0004 "_s)))->z();
	$nc($($nc($($nc($(test("/%25%20%E2%82%AC%E2%80%80"_s)))->p("/%25%20%E2%82%AC%E2%80%80"_s)))->pd(u"/% € "_s)))->z();
	$nc($($nc($($nc($(test(u"/쫾몾"_s)))->p(u"/쫾몾"_s)))->ta("/%EC%AB%BE%EB%AA%BE"_s)))->z();
	$var($URI, base, $new($URI, "http://host/foo%20bar/a/b/c/d"_s));
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("resolve"_s)))->rslv(base)))->spd("//host/foo bar/a/b/c/resolve"_s)))->sp("//host/foo%20bar/a/b/c/resolve"_s)))->s("http"_s)))->pd("/foo bar/a/b/c/resolve"_s)))->h("host"_s)))->p("/foo%20bar/a/b/c/resolve"_s)))->z();
	$nc($($nc($($nc($($nc($($nc($(test("s"_s, "a"_s, $cstr({'/', '\0'}), nullptr)))->s("s"_s)))->p("/%00"_s)))->h("a"_s)))->ta("s://a/%00"_s)))->z();
}

void Test4URI::eq0($URI* u, $URI* v) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	++Test4URI::testCount;
	if (!$nc(u)->equals(v)) {
		$throwNew($RuntimeException, $$str({"Not equal: "_s, u, " "_s, v}));
	}
	int32_t uh = $nc(u)->hashCode();
	int32_t vh = $nc(v)->hashCode();
	if (uh != vh) {
		$var($String, var$4, $$str({"Hash codes not equal: "_s, u, " "_s}));
		$var($String, var$3, $$concat(var$4, $($Integer::toHexString(uh))));
		$var($String, var$2, $$concat(var$3, " "_s));
		$var($String, var$1, $$concat(var$2, $(v)));
		$var($String, var$0, $$concat(var$1, " "_s));
		$throwNew($RuntimeException, $$concat(var$0, $($Integer::toHexString(vh))));
	}
	$nc(Test4URI::out)->println();
	$var($String, var$6, $$str({u, " == "_s, v, "  ["_s}));
	$var($String, var$5, $$concat(var$6, $($Integer::toHexString(uh))));
	$nc(Test4URI::out)->println($$concat(var$5, "]"_s));
}

void Test4URI::cmp0($URI* u, $URI* v, bool same) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	int32_t c = $nc(u)->compareTo(v);
	if ((c == 0) != same) {
		$throwNew($RuntimeException, $$str({"Comparison inconsistent: "_s, u, " "_s, v, " "_s, $$str(c)}));
	}
}

void Test4URI::eq($URI* u, $URI* v) {
	$init(Test4URI);
	eq0(u, v);
	cmp0(u, v, true);
}

void Test4URI::eq($String* expected, $String* actual) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	if (expected == nullptr && actual == nullptr) {
		return;
	}
	if (expected != nullptr && expected->equals(actual)) {
		return;
	}
	$throwNew($AssertionError, $($of($String::format("Strings are not equal: \'%s\', \'%s\'"_s, $$new($ObjectArray, {
		$of(expected),
		$of(actual)
	})))));
}

void Test4URI::eqeq($URI* u, $URI* v) {
	$init(Test4URI);
	++Test4URI::testCount;
	if (u != v) {
		$throwNew($RuntimeException, $$str({"Not ==: "_s, u, " "_s, v}));
	}
}

void Test4URI::ne0($URI* u, $URI* v) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	++Test4URI::testCount;
	if ($nc(u)->equals(v)) {
		$throwNew($RuntimeException, $$str({"Equal: "_s, u, " "_s, v}));
	}
	$nc(Test4URI::out)->println();
	$var($String, var$3, $$str({u, " != "_s, v, "  ["_s}));
	$var($String, var$2, $$concat(var$3, $($Integer::toHexString($nc(u)->hashCode()))));
	$var($String, var$1, $$concat(var$2, " "_s));
	$var($String, var$0, $$concat(var$1, $($Integer::toHexString($nc(v)->hashCode()))));
	$nc(Test4URI::out)->println($$concat(var$0, "]"_s));
}

void Test4URI::ne($URI* u, $URI* v) {
	$init(Test4URI);
	ne0(u, v);
	cmp0(u, v, false);
}

void Test4URI::lt($URI* u, $URI* v) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	ne0(u, v);
	int32_t c = $nc(u)->compareTo(v);
	if (c >= 0) {
		show(u);
		show(v);
		$throwNew($RuntimeException, $$str({"Not less than: "_s, u, " "_s, v, " "_s, $$str(c)}));
	}
	$nc(Test4URI::out)->println($$str({u, " < "_s, v}));
}

void Test4URI::lt($String* s, $String* t) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	$var($URI, var$0, $new($URI, s));
	lt(var$0, $$new($URI, t));
}

void Test4URI::gt0($URI* u, $URI* v) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	ne0(u, v);
	int32_t c = $nc(u)->compareTo(v);
	if (c <= 0) {
		show(u);
		show(v);
		$throwNew($RuntimeException, $$str({"Not greater than: "_s, u, " "_s, v, " "_s, $$str(c)}));
	}
	$nc(Test4URI::out)->println($$str({u, " < "_s, v}));
}

void Test4URI::gt($URI* u, $URI* v) {
	$init(Test4URI);
	lt(v, u);
}

void Test4URI::eqHashComp() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	header("Equality, hashing, and comparison"_s);
	$var($URI, o, $new($URI, "mailto:foo@bar.com"_s));
	$var($URI, r, $new($URI, "reg://some%20registry/b/c/d?q#f"_s));
	$var($URI, s, $new($URI, "http://jag:cafebabe@java.sun.com:94/b/c/d?q#f"_s));
	$var($URI, t, $new($URI, "http://example.com/%5bsegment%5d"_s));
	eq(o, o);
	lt(o, r);
	lt(s, o);
	lt(s, r);
	eq(o, $$new($URI, "MaILto:foo@bar.com"_s));
	gt(o, $$new($URI, "mailto:foo@bar.COM"_s));
	eq(r, $$new($URI, "rEg://some%20registry/b/c/d?q#f"_s));
	gt(r, $$new($URI, "reg://Some%20Registry/b/c/d?q#f"_s));
	gt(r, $$new($URI, "reg://some%20registry/b/c/D?q#f"_s));
	eq(s, $$new($URI, "hTtP://jag:cafebabe@Java.Sun.COM:94/b/c/d?q#f"_s));
	gt(s, $$new($URI, "http://jag:CafeBabe@java.sun.com:94/b/c/d?q#f"_s));
	lt(s, $$new($URI, "http://jag:cafebabe@java.sun.com:94/b/c/d?r#f"_s));
	lt(s, $$new($URI, "http://jag:cafebabe@java.sun.com:94/b/c/d?q#g"_s));
	cmp0(t, $$new($URI, "http://example.com/%5Bsegment%5D"_s), true);
	gt0(t, $$new($URI, "http://example.com/%5BSegment%5D"_s));
	$var($URI, var$0, $new($URI, "http://example.com/%5Asegment%5D"_s));
	lt(var$0, $$new($URI, "http://example.com/%5Bsegment%5D"_s));
	$var($URI, var$1, $new($URI, "http://host/a%00bcd"_s));
	eq(var$1, $$new($URI, "http://host/a%00bcd"_s));
	$var($URI, var$2, $new($URI, "http://host/a%00bcd"_s));
	ne(var$2, $$new($URI, "http://host/aZ00bcd"_s));
	$var($URI, var$3, $new($URI, "http://host/abc%e2def%C3ghi"_s));
	eq0(var$3, $$new($URI, "http://host/abc%E2def%c3ghi"_s));
	lt("p"_s, "s:p"_s);
	lt("s:p"_s, "T:p"_s);
	lt("S:p"_s, "t:p"_s);
	lt("s:/p"_s, "s:p"_s);
	lt("s:p"_s, "s:q"_s);
	lt("s:p#f"_s, "s:p#g"_s);
	lt("s://u@h:1"_s, "s://v@h:1"_s);
	lt("s://u@h:1"_s, "s://u@i:1"_s);
	lt("s://u@h:1"_s, "s://v@h:2"_s);
	lt("s://a%20b"_s, "s://a%20c"_s);
	lt("s://a%20b"_s, "s://aab"_s);
	lt("s://AA"_s, "s://A_"_s);
	lt("s:/p"_s, "s:/q"_s);
	lt("s:/p?q"_s, "s:/p?r"_s);
	lt("s:/p#f"_s, "s:/p#g"_s);
	lt("s://h"_s, "s://h/p"_s);
	lt("s://h/p"_s, "s://h/p?q"_s);
}

void Test4URI::serial($URI* u) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, bo, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oo, $new($ObjectOutputStream, bo));
	oo->writeObject(u);
	oo->close();
	$var($ByteArrayInputStream, bi, $new($ByteArrayInputStream, $(bo->toByteArray())));
	$var($ObjectInputStream, oi, $new($ObjectInputStream, bi));
	try {
		$var($Object, o, oi->readObject());
		eq(u, $cast($URI, o));
	} catch ($ClassNotFoundException& x) {
		x->printStackTrace();
		$throwNew($RuntimeException, $(x->toString()));
	}
	++Test4URI::testCount;
}

void Test4URI::serial() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	header("Serialization"_s);
	serial($($URI::create("http://java.sun.com/jdk/1.4?release#beta"_s)));
	serial($($nc($($URI::create("s://h/p"_s)))->resolve("/long%20path/"_s)));
}

void Test4URI::urls() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	header("URLs"_s);
	$var($URI, uri, nullptr);
	$var($URL, url, nullptr);
	bool caught = false;
	$nc(Test4URI::out)->println();
	$assign(uri, $new($URI, "http://a/p?q#f"_s));
	try {
		$assign(url, uri->toURL());
	} catch ($MalformedURLException& x) {
		$throwNew($RuntimeException, $(x->toString()));
	}
	if (!$nc($($nc(url)->toString()))->equals("http://a/p?q#f"_s)) {
		$throwNew($RuntimeException, $$str({"Incorrect URL: "_s, url}));
	}
	$nc(Test4URI::out)->println($$str({uri, " url --> "_s, url}));
	$nc(Test4URI::out)->println();
	$assign(uri, $new($URI, "a/b"_s));
	try {
		$nc(Test4URI::out)->println($$str({uri, " url --> "_s}));
		$assign(url, uri->toURL());
	} catch ($IllegalArgumentException& x) {
		caught = true;
		$nc(Test4URI::out)->println($$str({"Correct exception: "_s, x}));
	} catch ($MalformedURLException& x) {
		caught = true;
		$throwNew($RuntimeException, $$str({"Incorrect exception: "_s, x}));
	}
	if (!caught) {
		$throwNew($RuntimeException, $$str({"Incorrect URL: "_s, url}));
	}
	$nc(Test4URI::out)->println();
	$assign(uri, $new($URI, "foo://bar/baz"_s));
	caught = false;
	try {
		$nc(Test4URI::out)->println($$str({uri, " url --> "_s}));
		$assign(url, uri->toURL());
	} catch ($MalformedURLException& x) {
		caught = true;
		$nc(Test4URI::out)->println($$str({"Correct exception: "_s, x}));
	} catch ($IllegalArgumentException& x) {
		caught = true;
		$throwNew($RuntimeException, $$str({"Incorrect exception: "_s, x}));
	}
	if (!caught) {
		$throwNew($RuntimeException, $$str({"Incorrect URL: "_s, url}));
	}
	Test4URI::testCount += 3;
}

void Test4URI::tests() {
	$init(Test4URI);
	rfc2396();
	ip();
	misc();
	chars();
	eqHashComp();
	serial();
	urls();
	npes();
	bugs();
}

void Test4URI::usage() {
	$init(Test4URI);
	$nc(Test4URI::out)->println("Usage:"_s);
	$nc(Test4URI::out)->println("  java Test               --  Runs all tests in this file"_s);
	$nc(Test4URI::out)->println("  java Test <uri>         --  Parses uri, shows components"_s);
	$nc(Test4URI::out)->println("  java Test <base> <uri>  --  Parses uri and base, then resolves"_s);
	$nc(Test4URI::out)->println("                              uri against base"_s);
}

void Test4URI::clargs($String* base, $String* uri) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	$var($URI, b, nullptr);
	$var($URI, u, nullptr);
	try {
		if (base != nullptr) {
			$assign(b, $new($URI, base));
			$nc(Test4URI::out)->println(base);
			show(b);
		}
		$assign(u, $new($URI, uri));
		$nc(Test4URI::out)->println(uri);
		show(u);
		if (base != nullptr) {
			$var($URI, r, $nc(b)->resolve(u));
			$nc(Test4URI::out)->println($of(r));
			show(r);
		}
	} catch ($URISyntaxException& x) {
		show("ERROR"_s, $cast($URISyntaxException, x));
		x->printStackTrace(Test4URI::out);
	}
}

void Test4URI::bugs() {
	$init(Test4URI);
	b6339649();
	b6933879();
	b8037396();
}

void Test4URI::b6339649() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	try {
		$var($URI, uri, $URI::create("http://nowhere.net/should not be permitted"_s));
	} catch ($IllegalArgumentException& e) {
		bool var$0 = ""_s->equals($(e->getMessage()));
		if (var$0 || e->getMessage() == nullptr) {
			$throwNew($RuntimeException, "No detail message"_s);
		}
	}
}

void Test4URI::b6933879() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	$var($String, HOST, "fe80::c00:16fe:cebe:3214%eth1.12_55"_s);
	$var($URI, uri, nullptr);
	try {
		$assign(uri, $new($URI, "http"_s, nullptr, HOST, 10, "/"_s, nullptr, nullptr));
	} catch ($URISyntaxException& ex) {
		$throwNew($AssertionError, "Should not happen"_s, ex);
	}
	eq($$str({"["_s, HOST, "]"_s}), $($nc(uri)->getHost()));
}

void Test4URI::b8037396() {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	$var($URI, u, nullptr);
	try {
		$assign(u, $new($URI, "http"_s, "example.org"_s, "/[a b]"_s, "[a b]"_s, "[a b]"_s));
	} catch ($URISyntaxException& e) {
		$throwNew($AssertionError, "shouldn\'t ever happen"_s, e);
	}
	eq("/[a b]"_s, $($nc(u)->getPath()));
	eq("[a b]"_s, $($nc(u)->getQuery()));
	eq("[a b]"_s, $($nc(u)->getFragment()));
	try {
		$assign(u, $new($URI, "http"_s, "example.org"_s, "/a b[c d]"_s, "a b[c d]"_s, "a b[c d]"_s));
	} catch ($URISyntaxException& e) {
		$throwNew($AssertionError, "shouldn\'t ever happen"_s, e);
	}
	eq("/a b[c d]"_s, $($nc(u)->getPath()));
	eq("a b[c d]"_s, $($nc(u)->getQuery()));
	eq("a b[c d]"_s, $($nc(u)->getFragment()));
	eq("/a%20b%5Bc%20d%5D"_s, $($nc(u)->getRawPath()));
	eq("a%20b[c%20d]"_s, $($nc(u)->getRawQuery()));
	eq("a%20b[c%20d]"_s, $($nc(u)->getRawFragment()));
}

void Test4URI::main($StringArray* args) {
	$init(Test4URI);
	$useLocalCurrentObjectStackCache();
	switch ($nc(args)->length) {
	case 0:
		{
			tests();
			$nc(Test4URI::out)->println();
			$nc(Test4URI::out)->println($$str({"Test cases: "_s, $$str(Test4URI::testCount)}));
			break;
		}
	case 1:
		{
			if ($nc(args->get(0))->equals("-help"_s)) {
				usage();
				break;
			}
			clargs(nullptr, args->get(0));
			break;
		}
	case 2:
		{
			clargs(args->get(0), args->get(1));
			break;
		}
	default:
		{
			usage();
			break;
		}
	}
}

void clinit$Test4URI($Class* class$) {
	$assignStatic(Test4URI::out, $System::out);
	Test4URI::testCount = 0;
}

Test4URI::Test4URI() {
}

$Class* Test4URI::load$($String* name, bool initialize) {
	$loadClass(Test4URI, name, initialize, &_Test4URI_ClassInfo_, clinit$Test4URI, allocate$Test4URI);
	return class$;
}

$Class* Test4URI::class$ = nullptr;