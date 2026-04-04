#include <sun/nio/fs/WindowsUriSupport.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityException.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileAttributes.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

#undef IPV6_LITERAL_SUFFIX

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileAttributes = ::sun::nio::fs::WindowsFileAttributes;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

$String* WindowsUriSupport::IPV6_LITERAL_SUFFIX = nullptr;

void WindowsUriSupport::init$() {
}

$URI* WindowsUriSupport::toUri($String* path, bool isUnc, bool addSlash) {
	$init(WindowsUriSupport);
	$useLocalObjectStack();
	$var($String, uriHost, nullptr);
	$var($String, uriPath, nullptr);
	if (isUnc) {
		int32_t slash = $nc(path)->indexOf(u'\\', 2);
		$assign(uriHost, path->substring(2, slash));
		$assign(uriPath, $(path->substring(slash))->replace(u'\\', u'/'));
		if (uriHost->endsWith(WindowsUriSupport::IPV6_LITERAL_SUFFIX)) {
			int32_t var$0 = uriHost->length();
			$assign(uriHost, $($(uriHost->substring(0, var$0 - WindowsUriSupport::IPV6_LITERAL_SUFFIX->length()))->replace(u'-', u':'))->replace(u's', u'%'));
		}
	} else {
		$assign(uriHost, ""_s);
		$assign(uriPath, $str({"/"_s, $($nc(path)->replace(u'\\', u'/'))}));
	}
	if (addSlash) {
		$plusAssign(uriPath, "/"_s);
	}
	try {
		return $new($URI, "file"_s, uriHost, uriPath, nullptr);
	} catch ($URISyntaxException& x) {
		if (!isUnc) {
			$throwNew($AssertionError, $of(x));
		}
	}
	$assign(uriPath, $str({"//"_s, $($nc(path)->replace(u'\\', u'/'))}));
	if (addSlash) {
		$plusAssign(uriPath, "/"_s);
	}
	try {
		return $new($URI, "file"_s, nullptr, uriPath, nullptr);
	} catch ($URISyntaxException& x) {
		$throwNew($AssertionError, $of(x));
	}
	$shouldNotReachHere();
}

$URI* WindowsUriSupport::toUri($WindowsPath* path$renamed) {
	$init(WindowsUriSupport);
	$useLocalObjectStack();
	$var($WindowsPath, path, path$renamed);
	$assign(path, $nc(path)->toAbsolutePath());
	$var($String, s, $nc(path)->toString());
	bool addSlash = false;
	if (!$nc(s)->endsWith("\\"_s)) {
		try {
			path->checkRead();
			addSlash = $$nc($WindowsFileAttributes::get(path, true))->isDirectory();
		} catch ($SecurityException& x) {
		} catch ($WindowsException& x) {
		}
	}
	return toUri(s, path->isUnc(), addSlash);
}

$WindowsPath* WindowsUriSupport::fromUri($WindowsFileSystem* fs, $URI* uri) {
	$init(WindowsUriSupport);
	$useLocalObjectStack();
	if (!$nc(uri)->isAbsolute()) {
		$throwNew($IllegalArgumentException, "URI is not absolute"_s);
	}
	if (uri->isOpaque()) {
		$throwNew($IllegalArgumentException, "URI is not hierarchical"_s);
	}
	$var($String, scheme, uri->getScheme());
	if ((scheme == nullptr) || !scheme->equalsIgnoreCase("file"_s)) {
		$throwNew($IllegalArgumentException, "URI scheme is not \"file\""_s);
	}
	if (uri->getRawFragment() != nullptr) {
		$throwNew($IllegalArgumentException, "URI has a fragment component"_s);
	}
	if (uri->getRawQuery() != nullptr) {
		$throwNew($IllegalArgumentException, "URI has a query component"_s);
	}
	$var($String, path, uri->getPath());
	if ($nc(path)->isEmpty()) {
		$throwNew($IllegalArgumentException, "URI path component is empty"_s);
	}
	$var($String, auth, uri->getRawAuthority());
	if (auth != nullptr && !auth->isEmpty()) {
		$var($String, host, uri->getHost());
		if (host == nullptr) {
			$throwNew($IllegalArgumentException, "URI authority component has undefined host"_s);
		}
		if (uri->getUserInfo() != nullptr) {
			$throwNew($IllegalArgumentException, "URI authority component has user-info"_s);
		}
		if (uri->getPort() != -1) {
			$throwNew($IllegalArgumentException, "URI authority component has port number"_s);
		}
		if ($nc(host)->startsWith("["_s)) {
			$assign(host, $($(host->substring(1, host->length() - 1))->replace(u':', u'-'))->replace(u'%', u's'));
			$plusAssign(host, WindowsUriSupport::IPV6_LITERAL_SUFFIX);
		}
		$assign(path, $str({"\\\\"_s, host, path}));
	} else {
		bool var$0 = path->length() > 2;
		if (var$0 && (path->charAt(2) == u':')) {
			$assign(path, path->substring(1));
		}
	}
	return $WindowsPath::parse(fs, path);
}

WindowsUriSupport::WindowsUriSupport() {
}

void WindowsUriSupport::clinit$($Class* clazz) {
	$assignStatic(WindowsUriSupport::IPV6_LITERAL_SUFFIX, ".ipv6-literal.net"_s);
}

$Class* WindowsUriSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"IPV6_LITERAL_SUFFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsUriSupport, IPV6_LITERAL_SUFFIX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsUriSupport, init$, void)},
		{"fromUri", "(Lsun/nio/fs/WindowsFileSystem;Ljava/net/URI;)Lsun/nio/fs/WindowsPath;", nullptr, $STATIC, $staticMethod(WindowsUriSupport, fromUri, $WindowsPath*, $WindowsFileSystem*, $URI*)},
		{"toUri", "(Ljava/lang/String;ZZ)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsUriSupport, toUri, $URI*, $String*, bool, bool)},
		{"toUri", "(Lsun/nio/fs/WindowsPath;)Ljava/net/URI;", nullptr, $STATIC, $staticMethod(WindowsUriSupport, toUri, $URI*, $WindowsPath*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsUriSupport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsUriSupport, name, initialize, &classInfo$$, WindowsUriSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsUriSupport);
	});
	return class$;
}

$Class* WindowsUriSupport::class$ = nullptr;

		} // fs
	} // nio
} // sun