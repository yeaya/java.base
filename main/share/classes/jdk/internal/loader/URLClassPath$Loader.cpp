#include <jdk/internal/loader/URLClassPath$Loader.h>

#include <java/io/InputStream.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/JarURLConnection.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/jar/JarFile.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/loader/URLClassPath$JarLoader.h>
#include <jdk/internal/loader/URLClassPath$Loader$1.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>

#undef HTTP_BAD_REQUEST

using $URLArray = $Array<::java::net::URL>;
using $Closeable = ::java::io::Closeable;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $JarURLConnection = ::java::net::JarURLConnection;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $JarFile = ::java::util::jar::JarFile;
using $ZipFile = ::java::util::zip::ZipFile;
using $Resource = ::jdk::internal::loader::Resource;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;
using $URLClassPath$JarLoader = ::jdk::internal::loader::URLClassPath$JarLoader;
using $URLClassPath$Loader$1 = ::jdk::internal::loader::URLClassPath$Loader$1;
using $ParseUtil = ::sun::net::www::ParseUtil;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _URLClassPath$Loader_FieldInfo_[] = {
	{"base", "Ljava/net/URL;", nullptr, $PRIVATE | $FINAL, $field(URLClassPath$Loader, base)},
	{"jarfile", "Ljava/util/jar/JarFile;", nullptr, $PRIVATE, $field(URLClassPath$Loader, jarfile)},
	{}
};

$MethodInfo _URLClassPath$Loader_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(URLClassPath$Loader::*)($URL*)>(&URLClassPath$Loader::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"findResource", "(Ljava/lang/String;Z)Ljava/net/URL;", nullptr, 0},
	{"getBaseURL", "()Ljava/net/URL;", nullptr, 0},
	{"getClassPath", "()[Ljava/net/URL;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getResource", "(Ljava/lang/String;Z)Ljdk/internal/loader/Resource;", nullptr, 0},
	{"getResource", "(Ljava/lang/String;)Ljdk/internal/loader/Resource;", nullptr, 0},
	{}
};

$InnerClassInfo _URLClassPath$Loader_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$Loader", "jdk.internal.loader.URLClassPath", "Loader", $PRIVATE | $STATIC},
	{"jdk.internal.loader.URLClassPath$Loader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$Loader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$Loader",
	"java.lang.Object",
	"java.io.Closeable",
	_URLClassPath$Loader_FieldInfo_,
	_URLClassPath$Loader_MethodInfo_,
	nullptr,
	nullptr,
	_URLClassPath$Loader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$Loader($Class* clazz) {
	return $of($alloc(URLClassPath$Loader));
}

void URLClassPath$Loader::init$($URL* url) {
	$set(this, base, url);
}

$URL* URLClassPath$Loader::getBaseURL() {
	return this->base;
}

$URL* URLClassPath$Loader::findResource($String* name, bool check) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, nullptr);
	try {
		$assign(url, $new($URL, this->base, $($ParseUtil::encodePath(name, false))));
	} catch ($MalformedURLException& e) {
		return nullptr;
	}
	try {
		if (check) {
			$URLClassPath::check(url);
		}
		$var($URLConnection, uc, $nc(url)->openConnection());
		if ($instanceOf($HttpURLConnection, uc)) {
			$var($HttpURLConnection, hconn, $cast($HttpURLConnection, uc));
			$nc(hconn)->setRequestMethod("HEAD"_s);
			if (hconn->getResponseCode() >= $HttpURLConnection::HTTP_BAD_REQUEST) {
				return nullptr;
			}
		} else {
			$nc(uc)->setUseCaches(false);
			$var($InputStream, is, uc->getInputStream());
			$nc(is)->close();
		}
		return url;
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Resource* URLClassPath$Loader::getResource($String* name, bool check) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, nullptr);
	try {
		$assign(url, $new($URL, this->base, $($ParseUtil::encodePath(name, false))));
	} catch ($MalformedURLException& e) {
		return nullptr;
	}
	$var($URLConnection, uc, nullptr);
	try {
		if (check) {
			$URLClassPath::check(url);
		}
		$assign(uc, $nc(url)->openConnection());
		if ($instanceOf($JarURLConnection, uc)) {
			$var($JarURLConnection, juc, $cast($JarURLConnection, uc));
			$set(this, jarfile, $URLClassPath$JarLoader::checkJar($($nc(juc)->getJarFile())));
		}
		$var($InputStream, in, $nc(uc)->getInputStream());
	} catch ($Exception& e) {
		return nullptr;
	}
	return $new($URLClassPath$Loader$1, this, name, url, uc);
}

$Resource* URLClassPath$Loader::getResource($String* name) {
	return getResource(name, true);
}

void URLClassPath$Loader::close() {
	if (this->jarfile != nullptr) {
		$nc(this->jarfile)->close();
	}
}

$URLArray* URLClassPath$Loader::getClassPath() {
	return nullptr;
}

URLClassPath$Loader::URLClassPath$Loader() {
}

$Class* URLClassPath$Loader::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$Loader, name, initialize, &_URLClassPath$Loader_ClassInfo_, allocate$URLClassPath$Loader);
	return class$;
}

$Class* URLClassPath$Loader::class$ = nullptr;

		} // loader
	} // internal
} // jdk