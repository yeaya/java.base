#ifndef _java_util_jar_JarVerifier$VerifierStream_h_
#define _java_util_jar_JarVerifier$VerifierStream_h_
//$ class java.util.jar.JarVerifier$VerifierStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
			class JarVerifier;
			class Manifest;
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

class JarVerifier$VerifierStream : public ::java::io::InputStream {
	$class(JarVerifier$VerifierStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	JarVerifier$VerifierStream();
	void init$(::java::util::jar::Manifest* man, ::java::util::jar::JarEntry* je, ::java::io::InputStream* is, ::java::util::jar::JarVerifier* jv);
	virtual int32_t available() override;
	virtual void close() override;
	void ensureOpen();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::java::io::InputStream* is = nullptr;
	::java::util::jar::JarVerifier* jv = nullptr;
	::sun::security::util::ManifestEntryVerifier* mev = nullptr;
	int64_t numLeft = 0;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarVerifier$VerifierStream_h_