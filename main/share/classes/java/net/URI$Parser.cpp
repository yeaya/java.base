#include <java/net/URI$Parser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/NumberFormatException.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;

namespace java {
	namespace net {

$FieldInfo _URI$Parser_FieldInfo_[] = {
	{"this$0", "Ljava/net/URI;", nullptr, $FINAL | $SYNTHETIC, $field(URI$Parser, this$0)},
	{"input", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI$Parser, input)},
	{"requireServerAuthority", "Z", nullptr, $PRIVATE, $field(URI$Parser, requireServerAuthority)},
	{"ipv6byteCount", "I", nullptr, $PRIVATE, $field(URI$Parser, ipv6byteCount)},
	{}
};

$MethodInfo _URI$Parser_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URI;Ljava/lang/String;)V", nullptr, 0, $method(URI$Parser, init$, void, $URI*, $String*)},
	{"at", "(IIC)Z", nullptr, $PRIVATE, $method(URI$Parser, at, bool, int32_t, int32_t, char16_t)},
	{"at", "(IILjava/lang/String;)Z", nullptr, $PRIVATE, $method(URI$Parser, at, bool, int32_t, int32_t, $String*)},
	{"checkChar", "(IJJLjava/lang/String;)V", nullptr, $PRIVATE, $method(URI$Parser, checkChar, void, int32_t, int64_t, int64_t, $String*), "java.net.URISyntaxException"},
	{"checkChars", "(IIJJLjava/lang/String;)V", nullptr, $PRIVATE, $method(URI$Parser, checkChars, void, int32_t, int32_t, int64_t, int64_t, $String*), "java.net.URISyntaxException"},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(URI$Parser, fail, void, $String*), "java.net.URISyntaxException"},
	{"fail", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(URI$Parser, fail, void, $String*, int32_t), "java.net.URISyntaxException"},
	{"failExpecting", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(URI$Parser, failExpecting, void, $String*, int32_t), "java.net.URISyntaxException"},
	{"parse", "(Z)V", nullptr, 0, $virtualMethod(URI$Parser, parse, void, bool), "java.net.URISyntaxException"},
	{"parseAuthority", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, parseAuthority, int32_t, int32_t, int32_t), "java.net.URISyntaxException"},
	{"parseHierarchical", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, parseHierarchical, int32_t, int32_t, int32_t), "java.net.URISyntaxException"},
	{"parseHostname", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, parseHostname, int32_t, int32_t, int32_t), "java.net.URISyntaxException"},
	{"parseIPv4Address", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, parseIPv4Address, int32_t, int32_t, int32_t)},
	{"parseIPv6Reference", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, parseIPv6Reference, int32_t, int32_t, int32_t), "java.net.URISyntaxException"},
	{"parseServer", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, parseServer, int32_t, int32_t, int32_t), "java.net.URISyntaxException"},
	{"scan", "(IIC)I", nullptr, $PRIVATE, $method(URI$Parser, scan, int32_t, int32_t, int32_t, char16_t)},
	{"scan", "(IILjava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(URI$Parser, scan, int32_t, int32_t, int32_t, $String*, $String*)},
	{"scan", "(IILjava/lang/String;)I", nullptr, $PRIVATE, $method(URI$Parser, scan, int32_t, int32_t, int32_t, $String*)},
	{"scan", "(IIJJ)I", nullptr, $PRIVATE, $method(URI$Parser, scan, int32_t, int32_t, int32_t, int64_t, int64_t), "java.net.URISyntaxException"},
	{"scanByte", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, scanByte, int32_t, int32_t, int32_t), "java.net.URISyntaxException"},
	{"scanEscape", "(IIC)I", nullptr, $PRIVATE, $method(URI$Parser, scanEscape, int32_t, int32_t, int32_t, char16_t), "java.net.URISyntaxException"},
	{"scanHexPost", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, scanHexPost, int32_t, int32_t, int32_t), "java.net.URISyntaxException"},
	{"scanHexSeq", "(II)I", nullptr, $PRIVATE, $method(URI$Parser, scanHexSeq, int32_t, int32_t, int32_t), "java.net.URISyntaxException"},
	{"scanIPv4Address", "(IIZ)I", nullptr, $PRIVATE, $method(URI$Parser, scanIPv4Address, int32_t, int32_t, int32_t, bool), "java.net.URISyntaxException"},
	{"takeIPv4Address", "(IILjava/lang/String;)I", nullptr, $PRIVATE, $method(URI$Parser, takeIPv4Address, int32_t, int32_t, int32_t, $String*), "java.net.URISyntaxException"},
	{}
};

$InnerClassInfo _URI$Parser_InnerClassesInfo_[] = {
	{"java.net.URI$Parser", "java.net.URI", "Parser", $PRIVATE},
	{}
};

$ClassInfo _URI$Parser_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URI$Parser",
	"java.lang.Object",
	nullptr,
	_URI$Parser_FieldInfo_,
	_URI$Parser_MethodInfo_,
	nullptr,
	nullptr,
	_URI$Parser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URI"
};

$Object* allocate$URI$Parser($Class* clazz) {
	return $of($alloc(URI$Parser));
}

void URI$Parser::init$($URI* this$0, $String* s) {
	$set(this, this$0, this$0);
	this->requireServerAuthority = false;
	this->ipv6byteCount = 0;
	$set(this, input, s);
	$set(this$0, string, s);
}

void URI$Parser::fail($String* reason) {
	$throwNew($URISyntaxException, this->input, reason);
}

void URI$Parser::fail($String* reason, int32_t p) {
	$throwNew($URISyntaxException, this->input, reason, p);
}

void URI$Parser::failExpecting($String* expected, int32_t p) {
	fail($$str({"Expected "_s, expected}), p);
}

bool URI$Parser::at(int32_t start, int32_t end, char16_t c) {
	return (start < end) && ($nc(this->input)->charAt(start) == c);
}

bool URI$Parser::at(int32_t start, int32_t end, $String* s) {
	int32_t p = start;
	int32_t sn = $nc(s)->length();
	if (sn > end - p) {
		return false;
	}
	int32_t i = 0;
	while (i < sn) {
		char16_t var$0 = $nc(this->input)->charAt(p++);
		if (var$0 != s->charAt(i)) {
			break;
		}
		++i;
	}
	return (i == sn);
}

int32_t URI$Parser::scan(int32_t start, int32_t end, char16_t c) {
	if ((start < end) && ($nc(this->input)->charAt(start) == c)) {
		return start + 1;
	}
	return start;
}

int32_t URI$Parser::scan(int32_t start, int32_t end, $String* err, $String* stop) {
	int32_t p = start;
	while (p < end) {
		char16_t c = $nc(this->input)->charAt(p);
		if ($nc(err)->indexOf((int32_t)c) >= 0) {
			return -1;
		}
		if ($nc(stop)->indexOf((int32_t)c) >= 0) {
			break;
		}
		++p;
	}
	return p;
}

int32_t URI$Parser::scan(int32_t start, int32_t end, $String* stop) {
	int32_t p = start;
	while (p < end) {
		char16_t c = $nc(this->input)->charAt(p);
		if ($nc(stop)->indexOf((int32_t)c) >= 0) {
			break;
		}
		++p;
	}
	return p;
}

int32_t URI$Parser::scanEscape(int32_t start, int32_t n, char16_t first) {
	int32_t p = start;
	char16_t c = first;
	if (c == u'%') {
		bool var$0 = (p + 3 <= n) && $URI::match($nc(this->input)->charAt(p + 1), 0x03FF000000000000, 0x0000007E0000007E);
		if (var$0 && $URI::match($nc(this->input)->charAt(p + 2), 0x03FF000000000000, 0x0000007E0000007E)) {
			return p + 3;
		}
		fail("Malformed escape pair"_s, p);
	} else {
		bool var$2 = (c > 128) && !$Character::isSpaceChar(c);
		if (var$2 && !$Character::isISOControl(c)) {
			return p + 1;
		}
	}
	return p;
}

int32_t URI$Parser::scan(int32_t start, int32_t n, int64_t lowMask, int64_t highMask) {
	int32_t p = start;
	while (p < n) {
		char16_t c = $nc(this->input)->charAt(p);
		if ($URI::match(c, lowMask, highMask)) {
			++p;
			continue;
		}
		if (((int64_t)(lowMask & (uint64_t)(int64_t)1)) != 0) {
			int32_t q = scanEscape(p, n, c);
			if (q > p) {
				p = q;
				continue;
			}
		}
		break;
	}
	return p;
}

void URI$Parser::checkChars(int32_t start, int32_t end, int64_t lowMask, int64_t highMask, $String* what) {
	int32_t p = scan(start, end, lowMask, highMask);
	if (p < end) {
		fail($$str({"Illegal character in "_s, what}), p);
	}
}

void URI$Parser::checkChar(int32_t p, int64_t lowMask, int64_t highMask, $String* what) {
	checkChars(p, p + 1, lowMask, highMask, what);
}

void URI$Parser::parse(bool rsa) {
	this->requireServerAuthority = rsa;
	int32_t n = $nc(this->input)->length();
	int32_t p = scan(0, n, "/?#"_s, ":"_s);
	if ((p >= 0) && at(p, n, u':')) {
		if (p == 0) {
			failExpecting("scheme name"_s, 0);
		}
		checkChar(0, 0, 0x07FFFFFE07FFFFFE, "scheme name"_s);
		checkChars(1, p, 0x03FF680000000000, 0x07FFFFFE07FFFFFE, "scheme name"_s);
		$set(this->this$0, scheme, $nc(this->input)->substring(0, p));
		++p;
		if (at(p, n, u'/')) {
			p = parseHierarchical(p, n);
		} else {
			int32_t q = scan(p, n, "#"_s);
			if (q <= p) {
				failExpecting("scheme-specific part"_s, p);
			}
			checkChars(p, q, 0xAFFFFFD200000001, 0x47FFFFFEAFFFFFFF, "opaque part"_s);
			$set(this->this$0, schemeSpecificPart, $nc(this->input)->substring(p, q));
			p = q;
		}
	} else {
		p = parseHierarchical(0, n);
	}
	if (at(p, n, u'#')) {
		checkChars(p + 1, n, 0xAFFFFFD200000001, 0x47FFFFFEAFFFFFFF, "fragment"_s);
		$set(this->this$0, fragment, $nc(this->input)->substring(p + 1, n));
		p = n;
	}
	if (p < n) {
		fail("end of URI"_s, p);
	}
}

int32_t URI$Parser::parseHierarchical(int32_t start, int32_t n) {
	int32_t p = start;
	bool var$0 = at(p, n, u'/');
	if (var$0 && at(p + 1, n, u'/')) {
		p += 2;
		int32_t q = scan(p, n, "/?#"_s);
		if (q > p) {
			p = parseAuthority(p, q);
		} else if (q < n) {
		} else {
			failExpecting("authority"_s, p);
		}
	}
	int32_t q = scan(p, n, "?#"_s);
	checkChars(p, q, 0x2FFFFFD200000001, 0x47FFFFFE87FFFFFF, "path"_s);
	$set(this->this$0, path, $nc(this->input)->substring(p, q));
	p = q;
	if (at(p, n, u'?')) {
		++p;
		q = scan(p, n, "#"_s);
		checkChars(p, q, 0xAFFFFFD200000001, 0x47FFFFFEAFFFFFFF, "query"_s);
		$set(this->this$0, query, $nc(this->input)->substring(p, q));
		p = q;
	}
	return p;
}

int32_t URI$Parser::parseAuthority(int32_t start, int32_t n) {
	int32_t p = start;
	int32_t q = p;
	$var($URISyntaxException, ex, nullptr);
	bool serverChars = false;
	bool regChars = false;
	if (scan(p, n, "]"_s) > p) {
		serverChars = (scan(p, n, (int64_t)0x2FFF7FF200000001, (int64_t)0x47FFFFFEAFFFFFFF) == n);
	} else {
		serverChars = (scan(p, n, (int64_t)0x2FFF7FD200000001, (int64_t)0x47FFFFFEAFFFFFFF) == n);
	}
	regChars = (scan(p, n, (int64_t)0x2FFF7FD200000001, (int64_t)0x47FFFFFE87FFFFFF) == n);
	if (regChars && !serverChars) {
		$set(this->this$0, authority, $nc(this->input)->substring(p, n));
		return n;
	}
	if (serverChars) {
		try {
			q = parseServer(p, n);
			if (q < n) {
				failExpecting("end of authority"_s, q);
			}
			$set(this->this$0, authority, $nc(this->input)->substring(p, n));
		} catch ($URISyntaxException& x) {
			$set(this->this$0, userInfo, nullptr);
			$set(this->this$0, host, nullptr);
			this->this$0->port = -1;
			if (this->requireServerAuthority) {
				$throw(x);
			} else {
				$assign(ex, x);
				q = p;
			}
		}
	}
	if (q < n) {
		if (regChars) {
			$set(this->this$0, authority, $nc(this->input)->substring(p, n));
		} else if (ex != nullptr) {
			$throw(ex);
		} else {
			fail("Illegal character in authority"_s, q);
		}
	}
	return n;
}

int32_t URI$Parser::parseServer(int32_t start, int32_t n) {
	int32_t p = start;
	int32_t q = 0;
	q = scan(p, n, "/?#"_s, "@"_s);
	if ((q >= p) && at(q, n, u'@')) {
		checkChars(p, q, 0x2FFF7FD200000001, 0x47FFFFFE87FFFFFE, "user info"_s);
		$set(this->this$0, userInfo, $nc(this->input)->substring(p, q));
		p = q + 1;
	}
	if (at(p, n, u'[')) {
		++p;
		q = scan(p, n, "/?#"_s, "]"_s);
		if ((q > p) && at(q, n, u']')) {
			int32_t r = scan(p, q, "%"_s);
			if (r > p) {
				parseIPv6Reference(p, r);
				if (r + 1 == q) {
					fail("scope id expected"_s);
				}
				checkChars(r + 1, q, 0x03FF400000000000, 0x07FFFFFE87FFFFFE, "scope id"_s);
			} else {
				parseIPv6Reference(p, q);
			}
			$set(this->this$0, host, $nc(this->input)->substring(p - 1, q + 1));
			p = q + 1;
		} else {
			failExpecting("closing bracket for IPv6 address"_s, q);
		}
	} else {
		q = parseIPv4Address(p, n);
		if (q <= p) {
			q = parseHostname(p, n);
		}
		p = q;
	}
	if (at(p, n, u':')) {
		++p;
		q = scan(p, n, "/"_s);
		if (q > p) {
			checkChars(p, q, 0x03FF000000000000, 0, "port number"_s);
			try {
				this->this$0->port = $Integer::parseInt(this->input, p, q, 10);
			} catch ($NumberFormatException& x) {
				fail("Malformed port number"_s, p);
			}
			p = q;
		}
	}
	if (p < n) {
		failExpecting("port number"_s, p);
	}
	return p;
}

int32_t URI$Parser::scanByte(int32_t start, int32_t n) {
	int32_t p = start;
	int32_t q = scan(p, n, (int64_t)0x03FF000000000000, (int64_t)0);
	if (q <= p) {
		return q;
	}
	if ($Integer::parseInt(this->input, p, q, 10) > 255) {
		return p;
	}
	return q;
}

int32_t URI$Parser::scanIPv4Address(int32_t start, int32_t n, bool strict) {
	int32_t p = start;
	int32_t q = 0;
	int32_t m = scan(p, n, (int64_t)0x03FF000000000000 | (int64_t)0x0000400000000000, (int64_t)0 | (int64_t)0);
	if ((m <= p) || (strict && (m != n))) {
		return -1;
	}
	for (;;) {
		if ((q = scanByte(p, m)) <= p) {
			break;
		}
		p = q;
		if ((q = scan(p, m, u'.')) <= p) {
			break;
		}
		p = q;
		if ((q = scanByte(p, m)) <= p) {
			break;
		}
		p = q;
		if ((q = scan(p, m, u'.')) <= p) {
			break;
		}
		p = q;
		if ((q = scanByte(p, m)) <= p) {
			break;
		}
		p = q;
		if ((q = scan(p, m, u'.')) <= p) {
			break;
		}
		p = q;
		if ((q = scanByte(p, m)) <= p) {
			break;
		}
		p = q;
		if (q < m) {
			break;
		}
		return q;
	}
	fail("Malformed IPv4 address"_s, q);
	return -1;
}

int32_t URI$Parser::takeIPv4Address(int32_t start, int32_t n, $String* expected) {
	int32_t p = scanIPv4Address(start, n, true);
	if (p <= start) {
		failExpecting(expected, start);
	}
	return p;
}

int32_t URI$Parser::parseIPv4Address(int32_t start, int32_t n) {
	int32_t p = 0;
	try {
		p = scanIPv4Address(start, n, false);
	} catch ($URISyntaxException& x) {
		return -1;
	} catch ($NumberFormatException& nfe) {
		return -1;
	}
	if (p > start && p < n) {
		if ($nc(this->input)->charAt(p) != u':') {
			p = -1;
		}
	}
	if (p > start) {
		$set(this->this$0, host, $nc(this->input)->substring(start, p));
	}
	return p;
}

int32_t URI$Parser::parseHostname(int32_t start, int32_t n) {
	int32_t p = start;
	int32_t q = 0;
	int32_t l = -1;
	do {
		q = scan(p, n, (int64_t)0x03FF000000000000, (int64_t)0x07FFFFFE07FFFFFE);
		if (q <= p) {
			break;
		}
		l = p;
		if (q > p) {
			p = q;
			q = scan(p, n, (int64_t)0x03FF000000000000 | (int64_t)0x0000200000000000, (int64_t)0x07FFFFFE07FFFFFE | (int64_t)0);
			if (q > p) {
				if ($nc(this->input)->charAt(q - 1) == u'-') {
					fail("Illegal character in hostname"_s, q - 1);
				}
				p = q;
			}
		}
		q = scan(p, n, u'.');
		if (q <= p) {
			break;
		}
		p = q;
	} while (p < n);
	if ((p < n) && !at(p, n, u':')) {
		fail("Illegal character in hostname"_s, p);
	}
	if (l < 0) {
		failExpecting("hostname"_s, start);
	}
	if (l > start && !$URI::match($nc(this->input)->charAt(l), 0, 0x07FFFFFE07FFFFFE)) {
		fail("Illegal character in hostname"_s, l);
	}
	$set(this->this$0, host, $nc(this->input)->substring(start, p));
	return p;
}

int32_t URI$Parser::parseIPv6Reference(int32_t start, int32_t n) {
	int32_t p = start;
	int32_t q = 0;
	bool compressedZeros = false;
	q = scanHexSeq(p, n);
	if (q > p) {
		p = q;
		if (at(p, n, "::"_s)) {
			compressedZeros = true;
			p = scanHexPost(p + 2, n);
		} else if (at(p, n, u':')) {
			p = takeIPv4Address(p + 1, n, "IPv4 address"_s);
			this->ipv6byteCount += 4;
		}
	} else if (at(p, n, "::"_s)) {
		compressedZeros = true;
		p = scanHexPost(p + 2, n);
	}
	if (p < n) {
		fail("Malformed IPv6 address"_s, start);
	}
	if (this->ipv6byteCount > 16) {
		fail("IPv6 address too long"_s, start);
	}
	if (!compressedZeros && this->ipv6byteCount < 16) {
		fail("IPv6 address too short"_s, start);
	}
	if (compressedZeros && this->ipv6byteCount == 16) {
		fail("Malformed IPv6 address"_s, start);
	}
	return p;
}

int32_t URI$Parser::scanHexPost(int32_t start, int32_t n) {
	int32_t p = start;
	int32_t q = 0;
	if (p == n) {
		return p;
	}
	q = scanHexSeq(p, n);
	if (q > p) {
		p = q;
		if (at(p, n, u':')) {
			++p;
			p = takeIPv4Address(p, n, "hex digits or IPv4 address"_s);
			this->ipv6byteCount += 4;
		}
	} else {
		p = takeIPv4Address(p, n, "hex digits or IPv4 address"_s);
		this->ipv6byteCount += 4;
	}
	return p;
}

int32_t URI$Parser::scanHexSeq(int32_t start, int32_t n) {
	int32_t p = start;
	int32_t q = 0;
	q = scan(p, n, (int64_t)0x03FF000000000000, (int64_t)0x0000007E0000007E);
	if (q <= p) {
		return -1;
	}
	if (at(q, n, u'.')) {
		return -1;
	}
	if (q > p + 4) {
		fail("IPv6 hexadecimal digit sequence too long"_s, p);
	}
	this->ipv6byteCount += 2;
	p = q;
	while (p < n) {
		if (!at(p, n, u':')) {
			break;
		}
		if (at(p + 1, n, u':')) {
			break;
		}
		++p;
		q = scan(p, n, (int64_t)0x03FF000000000000, (int64_t)0x0000007E0000007E);
		if (q <= p) {
			failExpecting("digits for an IPv6 address"_s, p);
		}
		if (at(q, n, u'.')) {
			--p;
			break;
		}
		if (q > p + 4) {
			fail("IPv6 hexadecimal digit sequence too long"_s, p);
		}
		this->ipv6byteCount += 2;
		p = q;
	}
	return p;
}

URI$Parser::URI$Parser() {
}

$Class* URI$Parser::load$($String* name, bool initialize) {
	$loadClass(URI$Parser, name, initialize, &_URI$Parser_ClassInfo_, allocate$URI$Parser);
	return class$;
}

$Class* URI$Parser::class$ = nullptr;

	} // net
} // java