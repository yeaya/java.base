#include <java/net/URLStreamHandler.h>
#include <java/lang/SecurityException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/InetAddress.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/Objects.h>
#include <sun/net/util/IPAddressUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Objects = ::java::util::Objects;
using $IPAddressUtil = ::sun::net::util::IPAddressUtil;

namespace java {
	namespace net {

void URLStreamHandler::init$() {
}

$URLConnection* URLStreamHandler::openConnection($URL* u, $Proxy* p) {
	if (u == nullptr || p == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"null "_s, (u == nullptr ? "url"_s : "proxy"_s)}));
	}
	$throwNew($UnsupportedOperationException, "Method not implemented."_s);
	$shouldNotReachHere();
}

void URLStreamHandler::parseURL($URL* u, $String* spec$renamed, int32_t start, int32_t limit) {
	$useLocalObjectStack();
	$var($String, spec, spec$renamed);
	$var($String, protocol, $nc(u)->getProtocol());
	$var($String, authority, u->getAuthority());
	$var($String, userInfo, u->getUserInfo());
	$var($String, host, u->getHost());
	int32_t port = u->getPort();
	$var($String, path, u->getPath());
	$var($String, query, u->getQuery());
	$var($String, ref, u->getRef());
	bool isRelPath = false;
	bool queryOnly = false;
	if (start < limit) {
		int32_t queryStart = $nc(spec)->indexOf(u'?');
		queryOnly = queryStart == start;
		if ((queryStart != -1) && (queryStart < limit)) {
			$assign(query, spec->substring(queryStart + 1, limit));
			if (limit > queryStart) {
				limit = queryStart;
			}
			$assign(spec, spec->substring(0, queryStart));
		}
	}
	int32_t i = 0;
	bool var$2 = (start <= limit - 4) && ($nc(spec)->charAt(start) == u'/');
	bool var$1 = var$2 && (spec->charAt(start + 1) == u'/');
	bool var$0 = var$1 && (spec->charAt(start + 2) == u'/');
	bool isUNCName = var$0 && (spec->charAt(start + 3) == u'/');
	bool var$3 = !isUNCName && (start <= limit - 2) && ($nc(spec)->charAt(start) == u'/');
	if (var$3 && (spec->charAt(start + 1) == u'/')) {
		start += 2;
		i = spec->indexOf(u'/', start);
		if (i < 0 || i > limit) {
			i = spec->indexOf(u'?', start);
			if (i < 0 || i > limit) {
				i = limit;
			}
		}
		$assign(host, $assign(authority, spec->substring(start, i)));
		int32_t ind = authority->indexOf(u'@');
		if (ind != -1) {
			if (ind != authority->lastIndexOf(u'@')) {
				$assign(userInfo, nullptr);
				$assign(host, nullptr);
			} else {
				$assign(userInfo, authority->substring(0, ind));
				$assign(host, authority->substring(ind + 1));
			}
		} else {
			$assign(userInfo, nullptr);
		}
		if (host != nullptr) {
			bool var$4 = host->length() > 0;
			if (var$4 && (host->charAt(0) == u'[')) {
				if ((ind = host->indexOf(u']')) > 2) {
					$var($String, nhost, host);
					$assign(host, nhost->substring(0, ind + 1));
					if (!$IPAddressUtil::isIPv6LiteralAddress($(host->substring(1, ind)))) {
						$throwNew($IllegalArgumentException, $$str({"Invalid host: "_s, host}));
					}
					port = -1;
					if (nhost->length() > ind + 1) {
						if (nhost->charAt(ind + 1) == u':') {
							++ind;
							if (nhost->length() > (ind + 1)) {
								port = $Integer::parseInt(nhost, ind + 1, nhost->length(), 10);
							}
						} else {
							$throwNew($IllegalArgumentException, $$str({"Invalid authority field: "_s, authority}));
						}
					}
				} else {
					$throwNew($IllegalArgumentException, $$str({"Invalid authority field: "_s, authority}));
				}
			} else {
				ind = host->indexOf(u':');
				port = -1;
				if (ind >= 0) {
					if (host->length() > (ind + 1)) {
						port = $Integer::parseInt(host, ind + 1, host->length(), 10);
					}
					$assign(host, host->substring(0, ind));
				}
			}
		} else {
			$assign(host, ""_s);
		}
		if (port < -1) {
			$throwNew($IllegalArgumentException, $$str({"Invalid port number :"_s, $$str(port)}));
		}
		start = i;
		if (authority != nullptr && !authority->isEmpty()) {
			$assign(path, ""_s);
		}
	}
	if (host == nullptr) {
		$assign(host, ""_s);
	}
	if (start < limit) {
		if ($nc(spec)->charAt(start) == u'/') {
			$assign(path, spec->substring(start, limit));
		} else if (path != nullptr && !path->isEmpty()) {
			isRelPath = true;
			int32_t ind = path->lastIndexOf(u'/');
			$var($String, separator, ""_s);
			if (ind == -1 && authority != nullptr) {
				$assign(separator, "/"_s);
			}
			$var($StringBuilder, var$5, $new($StringBuilder));
			var$5->append($(path->substring(0, ind + 1)));
			var$5->append(separator);
			var$5->append($(spec->substring(start, limit)));
			$assign(path, $str(var$5));
		} else {
			$assign(path, spec->substring(start, limit));
			$assign(path, (authority != nullptr) ? $str({"/"_s, path}) : path);
		}
	} else if (queryOnly && path != nullptr) {
		int32_t ind = path->lastIndexOf(u'/');
		if (ind < 0) {
			ind = 0;
		}
		$assign(path, $str({$(path->substring(0, ind)), "/"_s}));
	}
	if (path == nullptr) {
		$assign(path, ""_s);
	}
	if (isRelPath) {
		while ((i = $nc(path)->indexOf("/./"_s)) >= 0) {
			$var($StringBuilder, var$6, $new($StringBuilder));
			var$6->append($(path->substring(0, i)));
			var$6->append($(path->substring(i + 2)));
			$assign(path, $str(var$6));
		}
		i = 0;
		while ((i = path->indexOf("/../"_s, i)) >= 0) {
			bool var$7 = i > 0 && (limit = path->lastIndexOf(u'/', i - 1)) >= 0;
			if (var$7 && (path->indexOf("/../"_s, limit) != 0)) {
				$var($StringBuilder, var$8, $new($StringBuilder));
				var$8->append($(path->substring(0, limit)));
				var$8->append($(path->substring(i + 3)));
				$assign(path, $str(var$8));
				i = 0;
			} else {
				i = i + 3;
			}
		}
		while (path->endsWith("/.."_s)) {
			i = path->indexOf("/.."_s);
			if ((limit = path->lastIndexOf(u'/', i - 1)) >= 0) {
				$assign(path, path->substring(0, limit + 1));
			} else {
				break;
			}
		}
		bool var$9 = path->startsWith("./"_s);
		if (var$9 && path->length() > 2) {
			$assign(path, path->substring(2));
		}
		if (path->endsWith("/."_s)) {
			$assign(path, path->substring(0, path->length() - 1));
		}
	}
	setURL(u, protocol, host, port, authority, userInfo, path, query, ref);
}

int32_t URLStreamHandler::getDefaultPort() {
	return -1;
}

bool URLStreamHandler::equals($URL* u1, $URL* u2) {
	$useLocalObjectStack();
	$var($Object, var$1, $nc(u1)->getRef());
	bool var$0 = $Objects::equals(var$1, $($nc(u2)->getRef()));
	return var$0 && sameFile(u1, u2);
}

int32_t URLStreamHandler::hashCode($URL* u) {
	$useLocalObjectStack();
	int32_t h = 0;
	$var($String, protocol, $nc(u)->getProtocol());
	if (protocol != nullptr) {
		h += protocol->hashCode();
	}
	$var($InetAddress, addr, getHostAddress(u));
	if (addr != nullptr) {
		h += addr->hashCode();
	} else {
		$var($String, host, u->getHost());
		if (host != nullptr) {
			h += $(host->toLowerCase())->hashCode();
		}
	}
	$var($String, file, u->getFile());
	if (file != nullptr) {
		h += file->hashCode();
	}
	if (u->getPort() == -1) {
		h += getDefaultPort();
	} else {
		h += u->getPort();
	}
	$var($String, ref, u->getRef());
	if (ref != nullptr) {
		h += ref->hashCode();
	}
	return h;
}

bool URLStreamHandler::sameFile($URL* u1, $URL* u2) {
	$useLocalObjectStack();
	bool var$0 = $nc(u1)->getProtocol() == $nc(u2)->getProtocol();
	if (!var$0) {
		bool var$1 = u1->getProtocol() != nullptr;
		var$0 = var$1 && $$nc(u1->getProtocol())->equalsIgnoreCase($(u2->getProtocol()));
	}
	if (!(var$0)) {
		return false;
	}
	bool var$2 = u1->getFile() == u2->getFile();
	if (!var$2) {
		bool var$3 = u1->getFile() != nullptr;
		var$2 = var$3 && $$nc(u1->getFile())->equals($(u2->getFile()));
	}
	if (!(var$2)) {
		return false;
	}
	int32_t port1 = 0;
	int32_t port2 = 0;
	port1 = (u1->getPort() != -1) ? u1->getPort() : $nc(u1->handler)->getDefaultPort();
	port2 = (u2->getPort() != -1) ? u2->getPort() : $nc(u2->handler)->getDefaultPort();
	if (port1 != port2) {
		return false;
	}
	if (!hostsEqual(u1, u2)) {
		return false;
	}
	return true;
}

$InetAddress* URLStreamHandler::getHostAddress($URL* u) {
	return $nc(u)->getHostAddress();
}

bool URLStreamHandler::hostsEqual($URL* u1, $URL* u2) {
	$useLocalObjectStack();
	$var($InetAddress, a1, getHostAddress(u1));
	$var($InetAddress, a2, getHostAddress(u2));
	if (a1 != nullptr && a2 != nullptr) {
		return a1->equals(a2);
	} else {
		bool var$0 = $nc(u1)->getHost() != nullptr;
		if (var$0 && $nc(u2)->getHost() != nullptr) {
			return $$nc(u1->getHost())->equalsIgnoreCase($(u2->getHost()));
		} else {
			bool var$1 = u1->getHost() == nullptr;
			return var$1 && $nc(u2)->getHost() == nullptr;
		}
	}
}

$String* URLStreamHandler::toExternalForm($URL* u) {
	$useLocalObjectStack();
	$var($String, s, nullptr);
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(u)->getProtocol()));
	var$0->append(u':');
	bool var$1 = ($assign(s, u->getAuthority())) != nullptr;
	var$0->append(var$1 && !$nc(s)->isEmpty() ? $$str({"//"_s, s}) : ""_s);
	var$0->append(($assign(s, u->getPath())) != nullptr ? s : ""_s);
	var$0->append(($assign(s, u->getQuery())) != nullptr ? $$str({$$str(u'?'), s}) : ""_s);
	var$0->append(($assign(s, u->getRef())) != nullptr ? $$str({$$str(u'#'), s}) : ""_s);
	return $str(var$0);
}

void URLStreamHandler::setURL($URL* u, $String* protocol, $String* host, int32_t port, $String* authority, $String* userInfo, $String* path, $String* query, $String* ref) {
	$useLocalObjectStack();
	if (this != $nc(u)->handler) {
		$throwNew($SecurityException, "handler for url different from this handler"_s);
	} else if (host != nullptr && u->isBuiltinStreamHandler(this)) {
		$var($String, s, $IPAddressUtil::checkHostString(host));
		if (s != nullptr) {
			$throwNew($IllegalArgumentException, s);
		}
	}
	u->set($(u->getProtocol()), host, port, authority, userInfo, path, query, ref);
}

void URLStreamHandler::setURL($URL* u, $String* protocol, $String* host$renamed, int32_t port, $String* file, $String* ref) {
	$useLocalObjectStack();
	$var($String, host, host$renamed);
	$var($String, authority, nullptr);
	$var($String, userInfo, nullptr);
	if (host != nullptr && !host->isEmpty()) {
		$assign(authority, (port == -1) ? host : $str({host, ":"_s, $$str(port)}));
		int32_t at = host->lastIndexOf(u'@');
		if (at != -1) {
			$assign(userInfo, host->substring(0, at));
			$assign(host, host->substring(at + 1));
		}
	}
	$var($String, path, nullptr);
	$var($String, query, nullptr);
	if (file != nullptr) {
		int32_t q = file->lastIndexOf(u'?');
		if (q != -1) {
			$assign(query, file->substring(q + 1));
			$assign(path, file->substring(0, q));
		} else {
			$assign(path, file);
		}
	}
	setURL(u, protocol, host, port, authority, userInfo, path, query, ref);
}

URLStreamHandler::URLStreamHandler() {
}

$Class* URLStreamHandler::load$($String* name, bool initialize) {
	$CompoundAttribute setURLmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(URLStreamHandler, init$, void)},
		{"equals", "(Ljava/net/URL;Ljava/net/URL;)Z", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, equals, bool, $URL*, $URL*)},
		{"getDefaultPort", "()I", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, getDefaultPort, int32_t)},
		{"getHostAddress", "(Ljava/net/URL;)Ljava/net/InetAddress;", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, getHostAddress, $InetAddress*, $URL*)},
		{"hashCode", "(Ljava/net/URL;)I", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, hashCode, int32_t, $URL*)},
		{"hostsEqual", "(Ljava/net/URL;Ljava/net/URL;)Z", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, hostsEqual, bool, $URL*, $URL*)},
		{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(URLStreamHandler, openConnection, $URLConnection*, $URL*), "java.io.IOException"},
		{"openConnection", "(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, openConnection, $URLConnection*, $URL*, $Proxy*), "java.io.IOException"},
		{"parseURL", "(Ljava/net/URL;Ljava/lang/String;II)V", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, parseURL, void, $URL*, $String*, int32_t, int32_t)},
		{"sameFile", "(Ljava/net/URL;Ljava/net/URL;)Z", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, sameFile, bool, $URL*, $URL*)},
		{"setURL", "(Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, setURL, void, $URL*, $String*, $String*, int32_t, $String*, $String*, $String*, $String*, $String*)},
		{"setURL", "(Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED | $DEPRECATED, $virtualMethod(URLStreamHandler, setURL, void, $URL*, $String*, $String*, int32_t, $String*, $String*), nullptr, nullptr, setURLmethodAnnotations$$$1},
		{"toExternalForm", "(Ljava/net/URL;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(URLStreamHandler, toExternalForm, $String*, $URL*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.net.URLStreamHandler",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URLStreamHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLStreamHandler);
	});
	return class$;
}

$Class* URLStreamHandler::class$ = nullptr;

	} // net
} // java