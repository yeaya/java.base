#ifndef _jdk_internal_access_JavaIOAccess_h_
#define _jdk_internal_access_JavaIOAccess_h_
//$ interface jdk.internal.access.JavaIOAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class Console;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaIOAccess : public ::java::lang::Object {
	$interface(JavaIOAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::charset::Charset* charset() {return nullptr;}
	virtual ::java::io::Console* console() {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaIOAccess_h_