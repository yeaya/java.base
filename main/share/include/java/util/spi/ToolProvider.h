#ifndef _java_util_spi_ToolProvider_h_
#define _java_util_spi_ToolProvider_h_
//$ interface java.util.spi.ToolProvider
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace util {
		namespace spi {

class $import ToolProvider : public ::java::lang::Object {
	$interface(ToolProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static ::java::util::Optional* findFirst($String* name);
	static bool lambda$findFirst$0($String* name, ::java::util::spi::ToolProvider* p);
	static ::java::util::Optional* lambda$findFirst$1(::java::lang::ClassLoader* systemClassLoader, $String* name);
	virtual $String* name() {return nullptr;}
	virtual int32_t run(::java::io::PrintWriter* out, ::java::io::PrintWriter* err, $StringArray* args) {return 0;}
	virtual int32_t run(::java::io::PrintStream* out, ::java::io::PrintStream* err, $StringArray* args);
};

		} // spi
	} // util
} // java

#endif // _java_util_spi_ToolProvider_h_