#include <URIToURLTest2.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

void URIToURLTest2::init$() {
}

void URIToURLTest2::main($StringArray* args) {
	$useLocalObjectStack();
	$var($List, uris, $new($ArrayList));
	uris->add("http://jag:cafebabe@java.sun.com:94/b/c/d?q#g"_s);
	uris->add("http://[1080:0:0:0:8:800:200C:417A]/index.html"_s);
	uris->add("http://a/b/c/d;p?q"_s);
	uris->add("mailto:mduerst@ifi.unizh.ch"_s);
	uris->add("http:comp.infosystems.www.servers.unix"_s);
	if (hasFtp()) {
		uris->add("ftp://ftp.is.co.za/rfc/rfc1808.txt"_s);
	}
	{
		$var($Iterator, i$, uris->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, uriStr, $cast($String, i$->next()));
			{
				$var($URI, uri, $new($URI, uriStr));
				$var($URL, url, uri->toURL());
				$var($String, scheme, uri->getScheme());
				bool schemeCheck = scheme == nullptr ? $nc(url)->getProtocol() == nullptr : scheme->equals($($nc(url)->getProtocol()));
				if (!schemeCheck) {
					$throwNew($RuntimeException, $$str({"uri.scheme is "_s, scheme, " url.protocol is "_s, $($nc(url)->getProtocol())}));
				}
				if (uri->isOpaque()) {
					$var($String, ssp, uri->getSchemeSpecificPart());
					bool sspCheck = ssp == nullptr ? uri->getPath() == nullptr : ssp->equals($($nc(url)->getPath()));
					if (!sspCheck) {
						$throwNew($RuntimeException, $$str({"uri.ssp is "_s, ssp, " url.path is "_s, $($nc(url)->getPath())}));
					}
				} else {
					$var($String, authority, uri->getAuthority());
					bool authorityCheck = authority == nullptr ? $nc(url)->getAuthority() == nullptr : authority->equals($($nc(url)->getAuthority()));
					if (!authorityCheck) {
						$throwNew($RuntimeException, $$str({"uri.authority is "_s, authority, " url\'s is "_s, $($nc(url)->getAuthority())}));
					}
					$var($String, host, uri->getHost());
					bool hostCheck = host == nullptr ? $nc(url)->getHost() == nullptr : host->equals($($nc(url)->getHost()));
					if (!hostCheck) {
						$throwNew($RuntimeException, $$str({"uri.host is "_s, host, " url\'s is "_s, $($nc(url)->getHost())}));
					}
					if (host != nullptr) {
						$var($String, userInfo, uri->getUserInfo());
						bool userInfoCheck = userInfo == nullptr ? $nc(url)->getUserInfo() == nullptr : userInfo->equals($($nc(url)->getUserInfo()));
						int32_t var$0 = uri->getPort();
						if (var$0 != $nc(url)->getPort()) {
							$var($StringBuilder, var$1, $new($StringBuilder));
							var$1->append("uri.port is "_s);
							var$1->append(uri->getPort());
							var$1->append(" url\'s is "_s);
							var$1->append(url->getPort());
							$throwNew($RuntimeException, $$str(var$1));
						}
					}
					$var($String, path, uri->getPath());
					bool pathCheck = path == nullptr ? $nc(url)->getPath() == nullptr : path->equals($($nc(url)->getPath()));
					if (!pathCheck) {
						$throwNew($RuntimeException, $$str({"uri.path is "_s, path, " url.path is "_s, $($nc(url)->getPath())}));
					}
					$var($String, query, uri->getQuery());
					bool queryCheck = query == nullptr ? $nc(url)->getQuery() == nullptr : query->equals($($nc(url)->getQuery()));
					if (!queryCheck) {
						$throwNew($RuntimeException, $$str({"uri.query is "_s, query, " url.query is "_s, $($nc(url)->getQuery())}));
					}
				}
				$var($String, frag, uri->getFragment());
				bool fragCheck = frag == nullptr ? $nc(url)->getRef() == nullptr : frag->equals($($nc(url)->getRef()));
				if (!fragCheck) {
					$throwNew($RuntimeException, $$str({"uri.frag is "_s, frag, " url.ref is "_s, $($nc(url)->getRef())}));
				}
			}
		}
	}
}

bool URIToURLTest2::hasFtp() {
	try {
		return $new($URL, "ftp://"_s) != nullptr;
	} catch ($MalformedURLException& x) {
		$nc($System::out)->println("FTP not supported by this runtime."_s);
		return false;
	}
	$shouldNotReachHere();
}

URIToURLTest2::URIToURLTest2() {
}

$Class* URIToURLTest2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(URIToURLTest2, init$, void)},
		{"hasFtp", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(URIToURLTest2, hasFtp, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(URIToURLTest2, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"URIToURLTest2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URIToURLTest2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URIToURLTest2);
	});
	return class$;
}

$Class* URIToURLTest2::class$ = nullptr;