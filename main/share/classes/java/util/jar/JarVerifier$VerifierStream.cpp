#include <java/util/jar/JarVerifier$VerifierStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/util/Objects.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarVerifier.h>
#include <java/util/jar/Manifest.h>
#include <sun/security/util/ManifestEntryVerifier.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarVerifier = ::java::util::jar::JarVerifier;
using $Manifest = ::java::util::jar::Manifest;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ManifestEntryVerifier = ::sun::security::util::ManifestEntryVerifier;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarVerifier$VerifierStream_FieldInfo_[] = {
	{"is", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(JarVerifier$VerifierStream, is)},
	{"jv", "Ljava/util/jar/JarVerifier;", nullptr, $PRIVATE, $field(JarVerifier$VerifierStream, jv)},
	{"mev", "Lsun/security/util/ManifestEntryVerifier;", nullptr, $PRIVATE, $field(JarVerifier$VerifierStream, mev)},
	{"numLeft", "J", nullptr, $PRIVATE, $field(JarVerifier$VerifierStream, numLeft)},
	{}
};

$MethodInfo _JarVerifier$VerifierStream_MethodInfo_[] = {
	{"<init>", "(Ljava/util/jar/Manifest;Ljava/util/jar/JarEntry;Ljava/io/InputStream;Ljava/util/jar/JarVerifier;)V", nullptr, 0, $method(static_cast<void(JarVerifier$VerifierStream::*)($Manifest*,$JarEntry*,$InputStream*,$JarVerifier*)>(&JarVerifier$VerifierStream::init$)), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(JarVerifier$VerifierStream::*)()>(&JarVerifier$VerifierStream::ensureOpen)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JarVerifier$VerifierStream_InnerClassesInfo_[] = {
	{"java.util.jar.JarVerifier$VerifierStream", "java.util.jar.JarVerifier", "VerifierStream", $STATIC},
	{}
};

$ClassInfo _JarVerifier$VerifierStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.JarVerifier$VerifierStream",
	"java.io.InputStream",
	nullptr,
	_JarVerifier$VerifierStream_FieldInfo_,
	_JarVerifier$VerifierStream_MethodInfo_,
	nullptr,
	nullptr,
	_JarVerifier$VerifierStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.jar.JarVerifier"
};

$Object* allocate$JarVerifier$VerifierStream($Class* clazz) {
	return $of($alloc(JarVerifier$VerifierStream));
}

void JarVerifier$VerifierStream::init$($Manifest* man, $JarEntry* je, $InputStream* is, $JarVerifier* jv) {
	$InputStream::init$();
	$set(this, is, $cast($InputStream, $Objects::requireNonNull(is)));
	$set(this, jv, jv);
	$set(this, mev, $new($ManifestEntryVerifier, man));
	$nc(this->jv)->beginEntry(je, this->mev);
	this->numLeft = $nc(je)->getSize();
	if (this->numLeft == 0) {
		$nc(this->jv)->update(-1, this->mev);
	}
}

int32_t JarVerifier$VerifierStream::read() {
	ensureOpen();
	if (this->numLeft > 0) {
		int32_t b = $nc(this->is)->read();
		$nc(this->jv)->update(b, this->mev);
		--this->numLeft;
		if (this->numLeft == 0) {
			$nc(this->jv)->update(-1, this->mev);
		}
		return b;
	} else {
		return -1;
	}
}

int32_t JarVerifier$VerifierStream::read($bytes* b, int32_t off, int32_t len) {
	ensureOpen();
	if ((this->numLeft > 0) && (this->numLeft < len)) {
		len = (int32_t)this->numLeft;
	}
	if (this->numLeft > 0) {
		int32_t n = $nc(this->is)->read(b, off, len);
		$nc(this->jv)->update(n, b, off, len, this->mev);
		this->numLeft -= n;
		if (this->numLeft == 0) {
			$nc(this->jv)->update(-1, b, off, len, this->mev);
		}
		return n;
	} else {
		return -1;
	}
}

void JarVerifier$VerifierStream::close() {
	if (this->is != nullptr) {
		$nc(this->is)->close();
	}
	$set(this, is, nullptr);
	$set(this, mev, nullptr);
	$set(this, jv, nullptr);
}

int32_t JarVerifier$VerifierStream::available() {
	ensureOpen();
	return $nc(this->is)->available();
}

void JarVerifier$VerifierStream::ensureOpen() {
	if (this->is == nullptr) {
		$throwNew($IOException, "stream closed"_s);
	}
}

JarVerifier$VerifierStream::JarVerifier$VerifierStream() {
}

$Class* JarVerifier$VerifierStream::load$($String* name, bool initialize) {
	$loadClass(JarVerifier$VerifierStream, name, initialize, &_JarVerifier$VerifierStream_ClassInfo_, allocate$JarVerifier$VerifierStream);
	return class$;
}

$Class* JarVerifier$VerifierStream::class$ = nullptr;

		} // jar
	} // util
} // java