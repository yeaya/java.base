#include <jdk/internal/access/JavaUtilZipFileAccess.h>

#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/jar/JarFile.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $JarFile = ::java::util::jar::JarFile;
using $Stream = ::java::util::stream::Stream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaUtilZipFileAccess_MethodInfo_[] = {
	{"entries", "(Ljava/util/zip/ZipFile;)Ljava/util/Enumeration;", "(Ljava/util/zip/ZipFile;)Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, entries, $Enumeration*, $ZipFile*)},
	{"entryNameStream", "(Ljava/util/zip/ZipFile;)Ljava/util/stream/Stream;", "(Ljava/util/zip/ZipFile;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, entryNameStream, $Stream*, $ZipFile*)},
	{"getExtraAttributes", "(Ljava/util/zip/ZipEntry;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, getExtraAttributes, int32_t, $ZipEntry*)},
	{"getManifestAndSignatureRelatedFiles", "(Ljava/util/jar/JarFile;)Ljava/util/List;", "(Ljava/util/jar/JarFile;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, getManifestAndSignatureRelatedFiles, $List*, $JarFile*)},
	{"getManifestName", "(Ljava/util/jar/JarFile;Z)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, getManifestName, $String*, $JarFile*, bool)},
	{"getManifestNum", "(Ljava/util/jar/JarFile;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, getManifestNum, int32_t, $JarFile*)},
	{"getMetaInfVersions", "(Ljava/util/jar/JarFile;)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, getMetaInfVersions, $ints*, $JarFile*)},
	{"setExtraAttributes", "(Ljava/util/zip/ZipEntry;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, setExtraAttributes, void, $ZipEntry*, int32_t)},
	{"startsWithLocHeader", "(Ljava/util/zip/ZipFile;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, startsWithLocHeader, bool, $ZipFile*)},
	{"stream", "(Ljava/util/zip/ZipFile;)Ljava/util/stream/Stream;", "(Ljava/util/zip/ZipFile;)Ljava/util/stream/Stream<Ljava/util/jar/JarEntry;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilZipFileAccess, stream, $Stream*, $ZipFile*)},
	{}
};

$ClassInfo _JavaUtilZipFileAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaUtilZipFileAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaUtilZipFileAccess_MethodInfo_
};

$Object* allocate$JavaUtilZipFileAccess($Class* clazz) {
	return $of($alloc(JavaUtilZipFileAccess));
}

$Class* JavaUtilZipFileAccess::load$($String* name, bool initialize) {
	$loadClass(JavaUtilZipFileAccess, name, initialize, &_JavaUtilZipFileAccess_ClassInfo_, allocate$JavaUtilZipFileAccess);
	return class$;
}

$Class* JavaUtilZipFileAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk