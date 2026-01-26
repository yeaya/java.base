#include <sun/security/tools/PathList.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace sun {
	namespace security {
		namespace tools {

$MethodInfo _PathList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PathList, init$, void)},
	{"appendPath", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(PathList, appendPath, $String*, $String*, $String*)},
	{"fileToURL", "(Ljava/io/File;)Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $staticMethod(PathList, fileToURL, $URL*, $File*)},
	{"pathToURLs", "(Ljava/lang/String;)[Ljava/net/URL;", nullptr, $PUBLIC | $STATIC, $staticMethod(PathList, pathToURLs, $URLArray*, $String*)},
	{}
};

$ClassInfo _PathList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.PathList",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PathList_MethodInfo_
};

$Object* allocate$PathList($Class* clazz) {
	return $of($alloc(PathList));
}

void PathList::init$() {
}

$String* PathList::appendPath($String* pathTo, $String* pathFrom) {
	if (pathTo == nullptr || $nc(pathTo)->isEmpty()) {
		return pathFrom;
	} else if (pathFrom == nullptr || $nc(pathFrom)->isEmpty()) {
		return pathTo;
	} else {
		$init($File);
		return $str({pathTo, $File::pathSeparator, pathFrom});
	}
}

$URLArray* PathList::pathToURLs($String* path) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($StringTokenizer, st, $new($StringTokenizer, path, $File::pathSeparator));
	$var($URLArray, urls, $new($URLArray, st->countTokens()));
	int32_t count = 0;
	while (st->hasMoreTokens()) {
		$var($URL, url, fileToURL($$new($File, $(st->nextToken()))));
		if (url != nullptr) {
			urls->set(count++, url);
		}
	}
	if (urls->length != count) {
		$var($URLArray, tmp, $new($URLArray, count));
		$System::arraycopy(urls, 0, tmp, 0, count);
		$assign(urls, tmp);
	}
	return urls;
}

$URL* PathList::fileToURL($File* file) {
	$var($String, name, nullptr);
	try {
		$assign(name, $nc(file)->getCanonicalPath());
	} catch ($IOException& e) {
		$assign(name, $nc(file)->getAbsolutePath());
	}
	$init($File);
	$assign(name, $nc(name)->replace($File::separatorChar, u'/'));
	if (!name->startsWith("/"_s)) {
		$assign(name, $str({"/"_s, name}));
	}
	if (!$nc(file)->isFile()) {
		$assign(name, $str({name, "/"_s}));
	}
	try {
		return $new($URL, "file"_s, ""_s, name);
	} catch ($MalformedURLException& e) {
		$throwNew($IllegalArgumentException, "file"_s);
	}
	$shouldNotReachHere();
}

PathList::PathList() {
}

$Class* PathList::load$($String* name, bool initialize) {
	$loadClass(PathList, name, initialize, &_PathList_ClassInfo_, allocate$PathList);
	return class$;
}

$Class* PathList::class$ = nullptr;

		} // tools
	} // security
} // sun