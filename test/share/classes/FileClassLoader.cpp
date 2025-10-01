#include <FileClassLoader.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLClassLoader = ::java::net::URLClassLoader;

$MethodInfo _FileClassLoader_MethodInfo_[] = {
	{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(FileClassLoader::*)($URLArray*)>(&FileClassLoader::init$))},
	{"testFindLoadedClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _FileClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"FileClassLoader",
	"java.net.URLClassLoader",
	nullptr,
	nullptr,
	_FileClassLoader_MethodInfo_
};

$Object* allocate$FileClassLoader($Class* clazz) {
	return $of($alloc(FileClassLoader));
}

void FileClassLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

void FileClassLoader::testFindLoadedClass($String* name) {
	$URLClassLoader::findLoadedClass(name);
}

FileClassLoader::FileClassLoader() {
}

$Class* FileClassLoader::load$($String* name, bool initialize) {
	$loadClass(FileClassLoader, name, initialize, &_FileClassLoader_ClassInfo_, allocate$FileClassLoader);
	return class$;
}

$Class* FileClassLoader::class$ = nullptr;