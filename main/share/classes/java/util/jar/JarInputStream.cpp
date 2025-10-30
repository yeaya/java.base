#include <java/util/jar/JarInputStream.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/JarVerifier.h>
#include <java/util/jar/Manifest.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipInputStream.h>
#include <jdk/internal/util/jar/JarIndex.h>
#include <sun/security/util/ManifestEntryVerifier.h>
#include <jcpp.h>

#undef INDEX_NAME
#undef MANIFEST_NAME

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::java::util::jar::Attributes;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $JarVerifier = ::java::util::jar::JarVerifier;
using $Manifest = ::java::util::jar::Manifest;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipInputStream = ::java::util::zip::ZipInputStream;
using $JarIndex = ::jdk::internal::util::jar::JarIndex;
using $ManifestEntryVerifier = ::sun::security::util::ManifestEntryVerifier;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarInputStream_FieldInfo_[] = {
	{"man", "Ljava/util/jar/Manifest;", nullptr, $PRIVATE, $field(JarInputStream, man)},
	{"first", "Ljava/util/jar/JarEntry;", nullptr, $PRIVATE, $field(JarInputStream, first)},
	{"jv", "Ljava/util/jar/JarVerifier;", nullptr, $PRIVATE, $field(JarInputStream, jv)},
	{"mev", "Lsun/security/util/ManifestEntryVerifier;", nullptr, $PRIVATE, $field(JarInputStream, mev)},
	{"doVerify", "Z", nullptr, $PRIVATE | $FINAL, $field(JarInputStream, doVerify)},
	{"tryManifest", "Z", nullptr, $PRIVATE, $field(JarInputStream, tryManifest)},
	{}
};

$MethodInfo _JarInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(JarInputStream::*)($InputStream*)>(&JarInputStream::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JarInputStream::*)($InputStream*,bool)>(&JarInputStream::init$)), "java.io.IOException"},
	{"checkManifest", "(Ljava/util/jar/JarEntry;)Ljava/util/jar/JarEntry;", nullptr, $PRIVATE, $method(static_cast<$JarEntry*(JarInputStream::*)($JarEntry*)>(&JarInputStream::checkManifest)), "java.io.IOException"},
	{"createZipEntry", "(Ljava/lang/String;)Ljava/util/zip/ZipEntry;", nullptr, $PROTECTED},
	{"getManifest", "()Ljava/util/jar/Manifest;", nullptr, $PUBLIC},
	{"getNextEntry", "()Ljava/util/zip/ZipEntry;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getNextJarEntry", "()Ljava/util/jar/JarEntry;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _JarInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.jar.JarInputStream",
	"java.util.zip.ZipInputStream",
	nullptr,
	_JarInputStream_FieldInfo_,
	_JarInputStream_MethodInfo_
};

$Object* allocate$JarInputStream($Class* clazz) {
	return $of($alloc(JarInputStream));
}

void JarInputStream::init$($InputStream* in) {
	JarInputStream::init$(in, true);
}

void JarInputStream::init$($InputStream* in, bool verify) {
	$useLocalCurrentObjectStackCache();
	$ZipInputStream::init$(in);
	this->doVerify = verify;
	$var($JarEntry, e, $cast($JarEntry, $ZipInputStream::getNextEntry()));
	if (e != nullptr && $nc($(e->getName()))->equalsIgnoreCase("META-INF/"_s)) {
		$assign(e, $cast($JarEntry, $ZipInputStream::getNextEntry()));
	}
	$set(this, first, checkManifest(e));
}

$JarEntry* JarInputStream::checkManifest($JarEntry* e) {
	$useLocalCurrentObjectStackCache();
	$init($JarFile);
	if (e != nullptr && $nc($JarFile::MANIFEST_NAME)->equalsIgnoreCase($(e->getName()))) {
		$set(this, man, $new($Manifest));
		$var($bytes, bytes, readAllBytes());
		$nc(this->man)->read($$new($ByteArrayInputStream, bytes));
		closeEntry();
		if (this->doVerify) {
			$set(this, jv, $new($JarVerifier, $(e->getName()), bytes));
			$set(this, mev, $new($ManifestEntryVerifier, this->man));
		}
		return $cast($JarEntry, $ZipInputStream::getNextEntry());
	}
	return e;
}

$Manifest* JarInputStream::getManifest() {
	return this->man;
}

$ZipEntry* JarInputStream::getNextEntry() {
	$useLocalCurrentObjectStackCache();
	$var($JarEntry, e, nullptr);
	if (this->first == nullptr) {
		$assign(e, $cast($JarEntry, $ZipInputStream::getNextEntry()));
		if (this->tryManifest) {
			$assign(e, checkManifest(e));
			this->tryManifest = false;
		}
	} else {
		$assign(e, this->first);
		$init($JarIndex);
		if ($nc($($nc(this->first)->getName()))->equalsIgnoreCase($JarIndex::INDEX_NAME)) {
			this->tryManifest = true;
		}
		$set(this, first, nullptr);
	}
	if (this->jv != nullptr && e != nullptr) {
		if ($nc(this->jv)->nothingToVerify() == true) {
			$set(this, jv, nullptr);
			$set(this, mev, nullptr);
		} else {
			$nc(this->jv)->beginEntry(e, this->mev);
		}
	}
	return e;
}

$JarEntry* JarInputStream::getNextJarEntry() {
	return $cast($JarEntry, getNextEntry());
}

int32_t JarInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t n = 0;
	if (this->first == nullptr) {
		n = $ZipInputStream::read(b, off, len);
	} else {
		n = -1;
	}
	if (this->jv != nullptr) {
		$nc(this->jv)->update(n, b, off, len, this->mev);
	}
	return n;
}

$ZipEntry* JarInputStream::createZipEntry($String* name) {
	$var($JarEntry, e, $new($JarEntry, name));
	if (this->man != nullptr) {
		$set(e, attr, $nc(this->man)->getAttributes(name));
	}
	return e;
}

JarInputStream::JarInputStream() {
}

$Class* JarInputStream::load$($String* name, bool initialize) {
	$loadClass(JarInputStream, name, initialize, &_JarInputStream_ClassInfo_, allocate$JarInputStream);
	return class$;
}

$Class* JarInputStream::class$ = nullptr;

		} // jar
	} // util
} // java