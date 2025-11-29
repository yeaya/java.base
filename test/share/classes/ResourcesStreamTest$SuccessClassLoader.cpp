#include <ResourcesStreamTest$SuccessClassLoader.h>

#include <ResourcesStreamTest.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;

$MethodInfo _ResourcesStreamTest$SuccessClassLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourcesStreamTest$SuccessClassLoader::*)()>(&ResourcesStreamTest$SuccessClassLoader::init$))},
	{"getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ResourcesStreamTest$SuccessClassLoader_InnerClassesInfo_[] = {
	{"ResourcesStreamTest$SuccessClassLoader", "ResourcesStreamTest", "SuccessClassLoader", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ResourcesStreamTest$SuccessClassLoader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ResourcesStreamTest$SuccessClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_ResourcesStreamTest$SuccessClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_ResourcesStreamTest$SuccessClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ResourcesStreamTest"
};

$Object* allocate$ResourcesStreamTest$SuccessClassLoader($Class* clazz) {
	return $of($alloc(ResourcesStreamTest$SuccessClassLoader));
}

void ResourcesStreamTest$SuccessClassLoader::init$() {
	$ClassLoader::init$();
}

$Enumeration* ResourcesStreamTest$SuccessClassLoader::getResources($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, $new($URL, "file:/somefile"_s));
	return $Collections::enumeration($($Collections::singleton(url)));
}

ResourcesStreamTest$SuccessClassLoader::ResourcesStreamTest$SuccessClassLoader() {
}

$Class* ResourcesStreamTest$SuccessClassLoader::load$($String* name, bool initialize) {
	$loadClass(ResourcesStreamTest$SuccessClassLoader, name, initialize, &_ResourcesStreamTest$SuccessClassLoader_ClassInfo_, allocate$ResourcesStreamTest$SuccessClassLoader);
	return class$;
}

$Class* ResourcesStreamTest$SuccessClassLoader::class$ = nullptr;