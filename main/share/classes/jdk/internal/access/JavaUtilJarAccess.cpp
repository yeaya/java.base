#include <jdk/internal/access/JavaUtilJarAccess.h>

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

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaUtilJarAccess_MethodInfo_[] = {
	{"ensureInitialization", "(Ljava/util/jar/JarFile;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, ensureInitialization, void, $JarFile*)},
	{"entries2", "(Ljava/util/jar/JarFile;)Ljava/util/Enumeration;", "(Ljava/util/jar/JarFile;)Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, entries2, $Enumeration*, $JarFile*)},
	{"entryFor", "(Ljava/util/jar/JarFile;Ljava/lang/String;)Ljava/util/jar/JarEntry;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, entryFor, $JarEntry*, $JarFile*, $String*)},
	{"entryNames", "(Ljava/util/jar/JarFile;[Ljava/security/CodeSource;)Ljava/util/Enumeration;", "(Ljava/util/jar/JarFile;[Ljava/security/CodeSource;)Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, entryNames, $Enumeration*, $JarFile*, $CodeSourceArray*)},
	{"getCodeSource", "(Ljava/util/jar/JarFile;Ljava/net/URL;Ljava/lang/String;)Ljava/security/CodeSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, getCodeSource, $CodeSource*, $JarFile*, $URL*, $String*)},
	{"getCodeSources", "(Ljava/util/jar/JarFile;Ljava/net/URL;)[Ljava/security/CodeSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, getCodeSources, $CodeSourceArray*, $JarFile*, $URL*)},
	{"getManifestDigests", "(Ljava/util/jar/JarFile;)Ljava/util/List;", "(Ljava/util/jar/JarFile;)Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, getManifestDigests, $List*, $JarFile*)},
	{"getTrustedAttributes", "(Ljava/util/jar/Manifest;Ljava/lang/String;)Ljava/util/jar/Attributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, getTrustedAttributes, $Attributes*, $Manifest*, $String*)},
	{"isInitializing", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, isInitializing, bool)},
	{"jarFileHasClassPathAttribute", "(Ljava/util/jar/JarFile;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, jarFileHasClassPathAttribute, bool, $JarFile*), "java.io.IOException"},
	{"setEagerValidation", "(Ljava/util/jar/JarFile;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilJarAccess, setEagerValidation, void, $JarFile*, bool)},
	{}
};

$ClassInfo _JavaUtilJarAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaUtilJarAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaUtilJarAccess_MethodInfo_
};

$Object* allocate$JavaUtilJarAccess($Class* clazz) {
	return $of($alloc(JavaUtilJarAccess));
}

$Class* JavaUtilJarAccess::load$($String* name, bool initialize) {
	$loadClass(JavaUtilJarAccess, name, initialize, &_JavaUtilJarAccess_ClassInfo_, allocate$JavaUtilJarAccess);
	return class$;
}

$Class* JavaUtilJarAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk