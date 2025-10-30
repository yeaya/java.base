#include <java/util/jar/JarEntry.h>

#include <java/security/CodeSigner.h>
#include <java/security/cert/Certificate.h>
#include <java/util/jar/Attributes.h>
#include <java/util/zip/ZipEntry.h>
#include <jcpp.h>

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSigner = ::java::security::CodeSigner;
using $Certificate = ::java::security::cert::Certificate;
using $Attributes = ::java::util::jar::Attributes;
using $ZipEntry = ::java::util::zip::ZipEntry;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarEntry_FieldInfo_[] = {
	{"attr", "Ljava/util/jar/Attributes;", nullptr, 0, $field(JarEntry, attr)},
	{"certs", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(JarEntry, certs)},
	{"signers", "[Ljava/security/CodeSigner;", nullptr, 0, $field(JarEntry, signers)},
	{}
};

$MethodInfo _JarEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JarEntry::*)($String*)>(&JarEntry::init$))},
	{"<init>", "(Ljava/util/zip/ZipEntry;)V", nullptr, $PUBLIC, $method(static_cast<void(JarEntry::*)($ZipEntry*)>(&JarEntry::init$))},
	{"<init>", "(Ljava/util/jar/JarEntry;)V", nullptr, $PUBLIC, $method(static_cast<void(JarEntry::*)(JarEntry*)>(&JarEntry::init$))},
	{"getAttributes", "()Ljava/util/jar/Attributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"getCodeSigners", "()[Ljava/security/CodeSigner;", nullptr, $PUBLIC},
	{"getRealName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JarEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.jar.JarEntry",
	"java.util.zip.ZipEntry",
	nullptr,
	_JarEntry_FieldInfo_,
	_JarEntry_MethodInfo_
};

$Object* allocate$JarEntry($Class* clazz) {
	return $of($alloc(JarEntry));
}

void JarEntry::init$($String* name) {
	$ZipEntry::init$(name);
}

void JarEntry::init$($ZipEntry* ze) {
	$ZipEntry::init$(ze);
}

void JarEntry::init$(JarEntry* je) {
	JarEntry::init$(static_cast<$ZipEntry*>(je));
	$set(this, attr, $nc(je)->attr);
	$set(this, certs, je->certs);
	$set(this, signers, je->signers);
}

$Attributes* JarEntry::getAttributes() {
	return this->attr;
}

$CertificateArray* JarEntry::getCertificates() {
	return this->certs == nullptr ? ($CertificateArray*)nullptr : $cast($CertificateArray, $nc(this->certs)->clone());
}

$CodeSignerArray* JarEntry::getCodeSigners() {
	return this->signers == nullptr ? ($CodeSignerArray*)nullptr : $cast($CodeSignerArray, $nc(this->signers)->clone());
}

$String* JarEntry::getRealName() {
	return $ZipEntry::getName();
}

JarEntry::JarEntry() {
}

$Class* JarEntry::load$($String* name, bool initialize) {
	$loadClass(JarEntry, name, initialize, &_JarEntry_ClassInfo_, allocate$JarEntry);
	return class$;
}

$Class* JarEntry::class$ = nullptr;

		} // jar
	} // util
} // java