#ifndef _jdk_internal_access_JavaIORandomAccessFileAccess_h_
#define _jdk_internal_access_JavaIORandomAccessFileAccess_h_
//$ interface jdk.internal.access.JavaIORandomAccessFileAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
		class RandomAccessFile;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaIORandomAccessFileAccess : public ::java::lang::Object {
	$interface(JavaIORandomAccessFileAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::io::RandomAccessFile* openAndDelete(::java::io::File* file, $String* mode) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaIORandomAccessFileAccess_h_