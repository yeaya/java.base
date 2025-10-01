#ifndef _java_util_jar_JarEntry_h_
#define _java_util_jar_JarEntry_h_
//$ class java.util.jar.JarEntry
//$ extends java.util.zip.ZipEntry

#include <java/lang/Array.h>
#include <java/util/zip/ZipEntry.h>

namespace java {
	namespace security {
		class CodeSigner;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Attributes;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class $import JarEntry : public ::java::util::zip::ZipEntry {
	$class(JarEntry, $NO_CLASS_INIT, ::java::util::zip::ZipEntry)
public:
	JarEntry();
	void init$($String* name);
	void init$(::java::util::zip::ZipEntry* ze);
	void init$(::java::util::jar::JarEntry* je);
	virtual ::java::util::jar::Attributes* getAttributes();
	virtual $Array<::java::security::cert::Certificate>* getCertificates();
	virtual $Array<::java::security::CodeSigner>* getCodeSigners();
	virtual $String* getRealName();
	::java::util::jar::Attributes* attr = nullptr;
	$Array<::java::security::cert::Certificate>* certs = nullptr;
	$Array<::java::security::CodeSigner>* signers = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarEntry_h_