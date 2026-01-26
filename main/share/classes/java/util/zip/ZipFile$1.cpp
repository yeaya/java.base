#include <java/util/zip/ZipFile$1.h>

#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/jar/JarFile.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile$CleanableResource.h>
#include <java/util/zip/ZipFile$Source.h>
#include <java/util/zip/ZipFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $JarFile = ::java::util::jar::JarFile;
using $Stream = ::java::util::stream::Stream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;

namespace java {
	namespace util {
		namespace zip {

$MethodInfo _ZipFile$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ZipFile$1, init$, void)},
	{"entries", "(Ljava/util/zip/ZipFile;)Ljava/util/Enumeration;", "(Ljava/util/zip/ZipFile;)Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;", $PUBLIC, $virtualMethod(ZipFile$1, entries, $Enumeration*, $ZipFile*)},
	{"entryNameStream", "(Ljava/util/zip/ZipFile;)Ljava/util/stream/Stream;", "(Ljava/util/zip/ZipFile;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ZipFile$1, entryNameStream, $Stream*, $ZipFile*)},
	{"getExtraAttributes", "(Ljava/util/zip/ZipEntry;)I", nullptr, $PUBLIC, $virtualMethod(ZipFile$1, getExtraAttributes, int32_t, $ZipEntry*)},
	{"getManifestAndSignatureRelatedFiles", "(Ljava/util/jar/JarFile;)Ljava/util/List;", "(Ljava/util/jar/JarFile;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ZipFile$1, getManifestAndSignatureRelatedFiles, $List*, $JarFile*)},
	{"getManifestName", "(Ljava/util/jar/JarFile;Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZipFile$1, getManifestName, $String*, $JarFile*, bool)},
	{"getManifestNum", "(Ljava/util/jar/JarFile;)I", nullptr, $PUBLIC, $virtualMethod(ZipFile$1, getManifestNum, int32_t, $JarFile*)},
	{"getMetaInfVersions", "(Ljava/util/jar/JarFile;)[I", nullptr, $PUBLIC, $virtualMethod(ZipFile$1, getMetaInfVersions, $ints*, $JarFile*)},
	{"setExtraAttributes", "(Ljava/util/zip/ZipEntry;I)V", nullptr, $PUBLIC, $virtualMethod(ZipFile$1, setExtraAttributes, void, $ZipEntry*, int32_t)},
	{"startsWithLocHeader", "(Ljava/util/zip/ZipFile;)Z", nullptr, $PUBLIC, $virtualMethod(ZipFile$1, startsWithLocHeader, bool, $ZipFile*)},
	{"stream", "(Ljava/util/zip/ZipFile;)Ljava/util/stream/Stream;", "(Ljava/util/zip/ZipFile;)Ljava/util/stream/Stream<Ljava/util/jar/JarEntry;>;", $PUBLIC, $virtualMethod(ZipFile$1, stream, $Stream*, $ZipFile*)},
	{}
};

$EnclosingMethodInfo _ZipFile$1_EnclosingMethodInfo_ = {
	"java.util.zip.ZipFile",
	nullptr,
	nullptr
};

$InnerClassInfo _ZipFile$1_InnerClassesInfo_[] = {
	{"java.util.zip.ZipFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZipFile$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipFile$1",
	"java.lang.Object",
	"jdk.internal.access.JavaUtilZipFileAccess",
	nullptr,
	_ZipFile$1_MethodInfo_,
	nullptr,
	&_ZipFile$1_EnclosingMethodInfo_,
	_ZipFile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipFile"
};

$Object* allocate$ZipFile$1($Class* clazz) {
	return $of($alloc(ZipFile$1));
}

void ZipFile$1::init$() {
}

bool ZipFile$1::startsWithLocHeader($ZipFile* zip) {
	return $nc($nc($nc(zip)->res)->zsrc)->startsWithLoc;
}

$List* ZipFile$1::getManifestAndSignatureRelatedFiles($JarFile* jar) {
	return $nc((static_cast<$ZipFile*>(jar)))->getManifestAndSignatureRelatedFiles();
}

int32_t ZipFile$1::getManifestNum($JarFile* jar) {
	return $nc((static_cast<$ZipFile*>(jar)))->getManifestNum();
}

$String* ZipFile$1::getManifestName($JarFile* jar, bool onlyIfHasSignatureRelatedFiles) {
	return $nc((static_cast<$ZipFile*>(jar)))->getManifestName(onlyIfHasSignatureRelatedFiles);
}

$ints* ZipFile$1::getMetaInfVersions($JarFile* jar) {
	return $nc((static_cast<$ZipFile*>(jar)))->getMetaInfVersions();
}

$Enumeration* ZipFile$1::entries($ZipFile* zip) {
	return $nc(zip)->jarEntries();
}

$Stream* ZipFile$1::stream($ZipFile* zip) {
	return $nc(zip)->jarStream();
}

$Stream* ZipFile$1::entryNameStream($ZipFile* zip) {
	return $nc(zip)->entryNameStream();
}

int32_t ZipFile$1::getExtraAttributes($ZipEntry* ze) {
	return $nc(ze)->extraAttributes;
}

void ZipFile$1::setExtraAttributes($ZipEntry* ze, int32_t extraAttrs) {
	$nc(ze)->extraAttributes = extraAttrs;
}

ZipFile$1::ZipFile$1() {
}

$Class* ZipFile$1::load$($String* name, bool initialize) {
	$loadClass(ZipFile$1, name, initialize, &_ZipFile$1_ClassInfo_, allocate$ZipFile$1);
	return class$;
}

$Class* ZipFile$1::class$ = nullptr;

		} // zip
	} // util
} // java