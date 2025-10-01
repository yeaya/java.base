#ifndef _Util_h_
#define _Util_h_
//$ class Util
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
			class ServerSocketChannel;
			class SocketChannel;
		}
	}
}

class $export Util : public ::java::lang::Object {
	$class(Util, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Util();
	void init$();
	static int32_t fdVal(::java::io::FileDescriptor* fdObj);
	static $Object* get($String* className, $String* fieldName, Object$* o);
	static int32_t getFD(::java::nio::channels::SocketChannel* sc);
	static int32_t getFD(::java::nio::channels::ServerSocketChannel* ssc);
	static int32_t getFD(::java::nio::channels::DatagramChannel* dc);
	static $String* javaCommand();
};

#endif // _Util_h_