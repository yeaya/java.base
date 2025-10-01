#ifndef _java_io_Console$2_h_
#define _java_io_Console$2_h_
//$ class java.io.Console$2
//$ extends jdk.internal.access.JavaIOAccess

#include <jdk/internal/access/JavaIOAccess.h>

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

namespace java {
	namespace io {

class Console$2 : public ::jdk::internal::access::JavaIOAccess {
	$class(Console$2, $NO_CLASS_INIT, ::jdk::internal::access::JavaIOAccess)
public:
	Console$2();
	void init$();
	virtual ::java::nio::charset::Charset* charset() override;
	virtual ::java::io::Console* console() override;
};

	} // io
} // java

#endif // _java_io_Console$2_h_