#ifndef _sun_security_provider_FileInputStreamPool_h_
#define _sun_security_provider_FileInputStreamPool_h_
//$ class sun.security.provider.FileInputStreamPool
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class FileInputStreamPool : public ::java::lang::Object {
	$class(FileInputStreamPool, 0, ::java::lang::Object)
public:
	FileInputStreamPool();
	void init$();
	static ::java::io::InputStream* getInputStream(::java::io::File* file);
	static ::java::util::concurrent::ConcurrentMap* pool;
	static ::java::lang::ref::ReferenceQueue* refQueue;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_FileInputStreamPool_h_