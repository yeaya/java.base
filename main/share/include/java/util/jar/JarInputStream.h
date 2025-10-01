#ifndef _java_util_jar_JarInputStream_h_
#define _java_util_jar_JarInputStream_h_
//$ class java.util.jar.JarInputStream
//$ extends java.util.zip.ZipInputStream

#include <java/lang/Array.h>
#include <java/util/zip/ZipInputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
			class JarVerifier;
			class Manifest;
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
namespace sun {
	namespace security {
		namespace util {
			class ManifestEntryVerifier;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class $import JarInputStream : public ::java::util::zip::ZipInputStream {
	$class(JarInputStream, $NO_CLASS_INIT, ::java::util::zip::ZipInputStream)
public:
	JarInputStream();
	void init$(::java::io::InputStream* in);
	void init$(::java::io::InputStream* in, bool verify);
	::java::util::jar::JarEntry* checkManifest(::java::util::jar::JarEntry* e);
	virtual ::java::util::zip::ZipEntry* createZipEntry($String* name) override;
	virtual ::java::util::jar::Manifest* getManifest();
	virtual ::java::util::zip::ZipEntry* getNextEntry() override;
	virtual ::java::util::jar::JarEntry* getNextJarEntry();
	using ::java::util::zip::ZipInputStream::read;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::java::util::jar::Manifest* man = nullptr;
	::java::util::jar::JarEntry* first = nullptr;
	::java::util::jar::JarVerifier* jv = nullptr;
	::sun::security::util::ManifestEntryVerifier* mev = nullptr;
	bool doVerify = false;
	bool tryManifest = false;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarInputStream_h_