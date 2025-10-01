#include <sun/net/www/protocol/jar/URLJarFile$URLJarFileEntry.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/CodeSigner.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Map.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/zip/ZipEntry.h>
#include <sun/net/www/protocol/jar/URLJarFile.h>
#include <jcpp.h>

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSigner = ::java::security::CodeSigner;
using $Certificate = ::java::security::cert::Certificate;
using $Map = ::java::util::Map;
using $Attributes = ::java::util::jar::Attributes;
using $JarEntry = ::java::util::jar::JarEntry;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $URLJarFile = ::sun::net::www::protocol::jar::URLJarFile;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

$FieldInfo _URLJarFile$URLJarFileEntry_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/jar/URLJarFile;", nullptr, $FINAL | $SYNTHETIC, $field(URLJarFile$URLJarFileEntry, this$0)},
	{"je", "Ljava/util/jar/JarEntry;", nullptr, $PRIVATE, $field(URLJarFile$URLJarFileEntry, je)},
	{}
};

$MethodInfo _URLJarFile$URLJarFileEntry_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/jar/URLJarFile;Ljava/util/jar/JarEntry;)V", nullptr, 0, $method(static_cast<void(URLJarFile$URLJarFileEntry::*)($URLJarFile*,$JarEntry*)>(&URLJarFile$URLJarFileEntry::init$))},
	{"getAttributes", "()Ljava/util/jar/Attributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"getCodeSigners", "()[Ljava/security/CodeSigner;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _URLJarFile$URLJarFileEntry_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.jar.URLJarFile$URLJarFileEntry", "sun.net.www.protocol.jar.URLJarFile", "URLJarFileEntry", $PRIVATE},
	{}
};

$ClassInfo _URLJarFile$URLJarFileEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.jar.URLJarFile$URLJarFileEntry",
	"java.util.jar.JarEntry",
	nullptr,
	_URLJarFile$URLJarFileEntry_FieldInfo_,
	_URLJarFile$URLJarFileEntry_MethodInfo_,
	nullptr,
	nullptr,
	_URLJarFile$URLJarFileEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.jar.URLJarFile"
};

$Object* allocate$URLJarFile$URLJarFileEntry($Class* clazz) {
	return $of($alloc(URLJarFile$URLJarFileEntry));
}

void URLJarFile$URLJarFileEntry::init$($URLJarFile* this$0, $JarEntry* je) {
	$set(this, this$0, this$0);
	$JarEntry::init$(je);
	$set(this, je, je);
}

$Attributes* URLJarFile$URLJarFileEntry::getAttributes() {
	if (this->this$0->isSuperMan()) {
		$var($Map, e, this->this$0->superEntries);
		if (e != nullptr) {
			$var($Attributes, a, $cast($Attributes, e->get($(getName()))));
			if (a != nullptr) {
				return $cast($Attributes, a->clone());
			}
		}
	}
	return nullptr;
}

$CertificateArray* URLJarFile$URLJarFileEntry::getCertificates() {
	$var($CertificateArray, certs, $nc(this->je)->getCertificates());
	return certs == nullptr ? ($CertificateArray*)nullptr : $cast($CertificateArray, $nc(certs)->clone());
}

$CodeSignerArray* URLJarFile$URLJarFileEntry::getCodeSigners() {
	$var($CodeSignerArray, csg, $nc(this->je)->getCodeSigners());
	return csg == nullptr ? ($CodeSignerArray*)nullptr : $cast($CodeSignerArray, $nc(csg)->clone());
}

URLJarFile$URLJarFileEntry::URLJarFile$URLJarFileEntry() {
}

$Class* URLJarFile$URLJarFileEntry::load$($String* name, bool initialize) {
	$loadClass(URLJarFile$URLJarFileEntry, name, initialize, &_URLJarFile$URLJarFileEntry_ClassInfo_, allocate$URLJarFile$URLJarFileEntry);
	return class$;
}

$Class* URLJarFile$URLJarFileEntry::class$ = nullptr;

				} // jar
			} // protocol
		} // www
	} // net
} // sun