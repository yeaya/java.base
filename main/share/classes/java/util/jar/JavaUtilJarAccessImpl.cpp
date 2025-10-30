#include <java/util/jar/JavaUtilJarAccessImpl.h>

#include <java/net/URL.h>
#include <java/security/CodeSource.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <jcpp.h>

using $CodeSourceArray = $Array<::java::security::CodeSource>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $CodeSource = ::java::security::CodeSource;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Attributes = ::java::util::jar::Attributes;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $JavaUtilJarAccess = ::jdk::internal::access::JavaUtilJarAccess;

namespace java {
	namespace util {
		namespace jar {

$MethodInfo _JavaUtilJarAccessImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavaUtilJarAccessImpl::*)()>(&JavaUtilJarAccessImpl::init$))},
	{"ensureInitialization", "(Ljava/util/jar/JarFile;)V", nullptr, $PUBLIC},
	{"entries2", "(Ljava/util/jar/JarFile;)Ljava/util/Enumeration;", "(Ljava/util/jar/JarFile;)Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;", $PUBLIC},
	{"entryFor", "(Ljava/util/jar/JarFile;Ljava/lang/String;)Ljava/util/jar/JarEntry;", nullptr, $PUBLIC},
	{"entryNames", "(Ljava/util/jar/JarFile;[Ljava/security/CodeSource;)Ljava/util/Enumeration;", "(Ljava/util/jar/JarFile;[Ljava/security/CodeSource;)Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getCodeSource", "(Ljava/util/jar/JarFile;Ljava/net/URL;Ljava/lang/String;)Ljava/security/CodeSource;", nullptr, $PUBLIC},
	{"getCodeSources", "(Ljava/util/jar/JarFile;Ljava/net/URL;)[Ljava/security/CodeSource;", nullptr, $PUBLIC},
	{"getManifestDigests", "(Ljava/util/jar/JarFile;)Ljava/util/List;", "(Ljava/util/jar/JarFile;)Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC},
	{"getTrustedAttributes", "(Ljava/util/jar/Manifest;Ljava/lang/String;)Ljava/util/jar/Attributes;", nullptr, $PUBLIC},
	{"isInitializing", "()Z", nullptr, $PUBLIC},
	{"jarFileHasClassPathAttribute", "(Ljava/util/jar/JarFile;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setEagerValidation", "(Ljava/util/jar/JarFile;Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JavaUtilJarAccessImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.JavaUtilJarAccessImpl",
	"java.lang.Object",
	"jdk.internal.access.JavaUtilJarAccess",
	nullptr,
	_JavaUtilJarAccessImpl_MethodInfo_
};

$Object* allocate$JavaUtilJarAccessImpl($Class* clazz) {
	return $of($alloc(JavaUtilJarAccessImpl));
}

void JavaUtilJarAccessImpl::init$() {
}

bool JavaUtilJarAccessImpl::jarFileHasClassPathAttribute($JarFile* jar) {
	return $nc(jar)->hasClassPathAttribute();
}

$CodeSourceArray* JavaUtilJarAccessImpl::getCodeSources($JarFile* jar, $URL* url) {
	return $nc(jar)->getCodeSources(url);
}

$CodeSource* JavaUtilJarAccessImpl::getCodeSource($JarFile* jar, $URL* url, $String* name) {
	return $nc(jar)->getCodeSource(url, name);
}

$Enumeration* JavaUtilJarAccessImpl::entryNames($JarFile* jar, $CodeSourceArray* cs) {
	return $nc(jar)->entryNames(cs);
}

$Enumeration* JavaUtilJarAccessImpl::entries2($JarFile* jar) {
	return $nc(jar)->entries2();
}

void JavaUtilJarAccessImpl::setEagerValidation($JarFile* jar, bool eager) {
	$nc(jar)->setEagerValidation(eager);
}

$List* JavaUtilJarAccessImpl::getManifestDigests($JarFile* jar) {
	return $nc(jar)->getManifestDigests();
}

$Attributes* JavaUtilJarAccessImpl::getTrustedAttributes($Manifest* man, $String* name) {
	return $nc(man)->getTrustedAttributes(name);
}

void JavaUtilJarAccessImpl::ensureInitialization($JarFile* jar) {
	$nc(jar)->ensureInitialization();
}

bool JavaUtilJarAccessImpl::isInitializing() {
	return $JarFile::isInitializing();
}

$JarEntry* JavaUtilJarAccessImpl::entryFor($JarFile* jar, $String* name) {
	return $nc(jar)->entryFor(name);
}

JavaUtilJarAccessImpl::JavaUtilJarAccessImpl() {
}

$Class* JavaUtilJarAccessImpl::load$($String* name, bool initialize) {
	$loadClass(JavaUtilJarAccessImpl, name, initialize, &_JavaUtilJarAccessImpl_ClassInfo_, allocate$JavaUtilJarAccessImpl);
	return class$;
}

$Class* JavaUtilJarAccessImpl::class$ = nullptr;

		} // jar
	} // util
} // java