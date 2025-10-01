#ifndef _jdk_internal_loader_Resource_h_
#define _jdk_internal_loader_Resource_h_
//$ class jdk.internal.loader.Resource
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
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
			class Manifest;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $import Resource : public ::java::lang::Object {
	$class(Resource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Resource();
	void init$();
	::java::io::InputStream* cachedInputStream();
	virtual ::java::nio::ByteBuffer* getByteBuffer();
	virtual $bytes* getBytes();
	virtual $Array<::java::security::cert::Certificate>* getCertificates();
	virtual $Array<::java::security::CodeSigner>* getCodeSigners();
	virtual ::java::net::URL* getCodeSourceURL() {return nullptr;}
	virtual int32_t getContentLength() {return 0;}
	virtual ::java::io::InputStream* getInputStream() {return nullptr;}
	virtual ::java::util::jar::Manifest* getManifest();
	virtual $String* getName() {return nullptr;}
	virtual ::java::net::URL* getURL() {return nullptr;}
	::java::io::InputStream* cis = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_Resource_h_