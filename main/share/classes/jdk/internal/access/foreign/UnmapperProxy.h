#ifndef _jdk_internal_access_foreign_UnmapperProxy_h_
#define _jdk_internal_access_foreign_UnmapperProxy_h_
//$ interface jdk.internal.access.foreign.UnmapperProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

class $export UnmapperProxy : public ::java::lang::Object {
	$interface(UnmapperProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t address() {return 0;}
	virtual ::java::io::FileDescriptor* fileDescriptor() {return nullptr;}
	virtual bool isSync() {return false;}
	virtual void unmap() {}
};

			} // foreign
		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_foreign_UnmapperProxy_h_