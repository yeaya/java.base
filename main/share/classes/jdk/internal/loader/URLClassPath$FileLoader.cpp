#include <jdk/internal/loader/URLClassPath$FileLoader.h>

#include <java/io/File.h>
#include <java/net/URL.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/loader/URLClassPath$FileLoader$1.h>
#include <jdk/internal/loader/URLClassPath$Loader.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Resource = ::jdk::internal::loader::Resource;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;
using $URLClassPath$FileLoader$1 = ::jdk::internal::loader::URLClassPath$FileLoader$1;
using $URLClassPath$Loader = ::jdk::internal::loader::URLClassPath$Loader;
using $ParseUtil = ::sun::net::www::ParseUtil;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _URLClassPath$FileLoader_FieldInfo_[] = {
	{"dir", "Ljava/io/File;", nullptr, $PRIVATE, $field(URLClassPath$FileLoader, dir)},
	{}
};

$MethodInfo _URLClassPath$FileLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PRIVATE, $method(URLClassPath$FileLoader, init$, void, $URL*), "java.io.IOException"},
	{"findResource", "(Ljava/lang/String;Z)Ljava/net/URL;", nullptr, 0, $virtualMethod(URLClassPath$FileLoader, findResource, $URL*, $String*, bool)},
	{"getResource", "(Ljava/lang/String;Z)Ljdk/internal/loader/Resource;", nullptr, 0, $virtualMethod(URLClassPath$FileLoader, getResource, $Resource*, $String*, bool)},
	{}
};

$InnerClassInfo _URLClassPath$FileLoader_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$FileLoader", "jdk.internal.loader.URLClassPath", "FileLoader", $PRIVATE | $STATIC},
	{"jdk.internal.loader.URLClassPath$Loader", "jdk.internal.loader.URLClassPath", "Loader", $PRIVATE | $STATIC},
	{"jdk.internal.loader.URLClassPath$FileLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$FileLoader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$FileLoader",
	"jdk.internal.loader.URLClassPath$Loader",
	nullptr,
	_URLClassPath$FileLoader_FieldInfo_,
	_URLClassPath$FileLoader_MethodInfo_,
	nullptr,
	nullptr,
	_URLClassPath$FileLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$FileLoader($Class* clazz) {
	return $of($alloc(URLClassPath$FileLoader));
}

void URLClassPath$FileLoader::init$($URL* url) {
	$useLocalCurrentObjectStackCache();
	$URLClassPath$Loader::init$(url);
	$init($File);
	$var($String, path, $nc($($nc(url)->getFile()))->replace(u'/', $File::separatorChar));
	$assign(path, $ParseUtil::decode(path));
	$set(this, dir, ($$new($File, path))->getCanonicalFile());
}

$URL* URLClassPath$FileLoader::findResource($String* name, bool check) {
	$var($Resource, rsc, getResource(name, check));
	if (rsc != nullptr) {
		return rsc->getURL();
	}
	return nullptr;
}

$Resource* URLClassPath$FileLoader::getResource($String* name, bool check) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, nullptr);
	try {
		$var($URL, normalizedBase, $new($URL, $(getBaseURL()), "."_s));
		$var($URL, var$0, getBaseURL());
		$assign(url, $new($URL, var$0, $($ParseUtil::encodePath(name, false))));
		if ($nc($(url->getFile()))->startsWith($(normalizedBase->getFile())) == false) {
			return nullptr;
		}
		if (check) {
			$URLClassPath::check(url);
		}
		$var($File, file, nullptr);
		if ($nc(name)->indexOf(".."_s) != -1) {
			$init($File);
			$assign(file, ($$new($File, this->dir, $(name->replace(u'/', $File::separatorChar))))->getCanonicalFile());
			if (!($nc(($($nc(file)->getPath())))->startsWith($($nc(this->dir)->getPath())))) {
				return nullptr;
			}
		} else {
			$init($File);
			$assign(file, $new($File, this->dir, $(name->replace(u'/', $File::separatorChar))));
		}
		if ($nc(file)->exists()) {
			return $new($URLClassPath$FileLoader$1, this, name, url, file);
		}
	} catch ($Exception& e) {
		return nullptr;
	}
	return nullptr;
}

URLClassPath$FileLoader::URLClassPath$FileLoader() {
}

$Class* URLClassPath$FileLoader::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$FileLoader, name, initialize, &_URLClassPath$FileLoader_ClassInfo_, allocate$URLClassPath$FileLoader);
	return class$;
}

$Class* URLClassPath$FileLoader::class$ = nullptr;

		} // loader
	} // internal
} // jdk