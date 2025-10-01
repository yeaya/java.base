#ifndef _sun_security_provider_FileInputStreamPool$StreamRef_h_
#define _sun_security_provider_FileInputStreamPool$StreamRef_h_
//$ class sun.security.provider.FileInputStreamPool$StreamRef
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class FileInputStreamPool$UnclosableInputStream;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class FileInputStreamPool$StreamRef : public ::java::lang::ref::WeakReference {
	$class(FileInputStreamPool$StreamRef, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	FileInputStreamPool$StreamRef();
	void init$(::java::io::File* file, ::sun::security::provider::FileInputStreamPool$UnclosableInputStream* stream, ::java::lang::ref::ReferenceQueue* refQueue);
	::java::io::File* file = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_FileInputStreamPool$StreamRef_h_