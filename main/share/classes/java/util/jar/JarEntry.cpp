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
using $Attributes = ::java::util::jar::Attributes;
using $ZipEntry = ::java::util::zip::ZipEntry;

namespace java {
	namespace util {
		namespace jar {

void JarEntry::init$($String* name) {
	$ZipEntry::init$(name);
}

void JarEntry::init$($ZipEntry* ze) {
	$ZipEntry::init$(ze);
}

void JarEntry::init$(JarEntry* je) {
	JarEntry::init$($cast($ZipEntry, je));
	$set(this, attr, $nc(je)->attr);
	$set(this, certs, je->certs);
	$set(this, signers, je->signers);
}

$Attributes* JarEntry::getAttributes() {
	return this->attr;
}

$CertificateArray* JarEntry::getCertificates() {
	return this->certs == nullptr ? ($CertificateArray*)nullptr : $cast($CertificateArray, this->certs->clone());
}

$CodeSignerArray* JarEntry::getCodeSigners() {
	return this->signers == nullptr ? ($CodeSignerArray*)nullptr : $cast($CodeSignerArray, this->signers->clone());
}

$String* JarEntry::getRealName() {
	return $ZipEntry::getName();
}

JarEntry::JarEntry() {
}

$Class* JarEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"attr", "Ljava/util/jar/Attributes;", nullptr, 0, $field(JarEntry, attr)},
		{"certs", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(JarEntry, certs)},
		{"signers", "[Ljava/security/CodeSigner;", nullptr, 0, $field(JarEntry, signers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JarEntry, init$, void, $String*)},
		{"<init>", "(Ljava/util/zip/ZipEntry;)V", nullptr, $PUBLIC, $method(JarEntry, init$, void, $ZipEntry*)},
		{"<init>", "(Ljava/util/jar/JarEntry;)V", nullptr, $PUBLIC, $method(JarEntry, init$, void, JarEntry*)},
		{"getAttributes", "()Ljava/util/jar/Attributes;", nullptr, $PUBLIC, $virtualMethod(JarEntry, getAttributes, $Attributes*), "java.io.IOException"},
		{"getCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(JarEntry, getCertificates, $CertificateArray*)},
		{"getCodeSigners", "()[Ljava/security/CodeSigner;", nullptr, $PUBLIC, $virtualMethod(JarEntry, getCodeSigners, $CodeSignerArray*)},
		{"getRealName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarEntry, getRealName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.jar.JarEntry",
		"java.util.zip.ZipEntry",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JarEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JarEntry));
	});
	return class$;
}

$Class* JarEntry::class$ = nullptr;

		} // jar
	} // util
} // java