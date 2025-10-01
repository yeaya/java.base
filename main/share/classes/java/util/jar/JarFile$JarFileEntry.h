#ifndef _java_util_jar_JarFile$JarFileEntry_h_
#define _java_util_jar_JarFile$JarFileEntry_h_
//$ class java.util.jar.JarFile$JarFileEntry
//$ extends java.util.jar.JarEntry

#include <java/lang/Array.h>
#include <java/util/jar/JarEntry.h>

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
			class JarFile;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class JarFile$JarFileEntry : public ::java::util::jar::JarEntry {
	$class(JarFile$JarFileEntry, $NO_CLASS_INIT, ::java::util::jar::JarEntry)
public:
	JarFile$JarFileEntry();
	void init$(::java::util::jar::JarFile* this$0, $String* name);
	void init$(::java::util::jar::JarFile* this$0, $String* name, ::java::util::zip::ZipEntry* vze);
	virtual ::java::util::jar::Attributes* getAttributes() override;
	virtual $Array<::java::security::cert::Certificate>* getCertificates() override;
	virtual $Array<::java::security::CodeSigner>* getCodeSigners() override;
	virtual $String* getName() override;
	virtual $String* getRealName() override;
	virtual ::java::util::jar::JarFile$JarFileEntry* realEntry();
	virtual ::java::util::jar::JarFile$JarFileEntry* withBasename($String* name);
	::java::util::jar::JarFile* this$0 = nullptr;
	$String* basename = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarFile$JarFileEntry_h_