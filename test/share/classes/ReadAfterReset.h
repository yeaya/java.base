#ifndef _ReadAfterReset_h_
#define _ReadAfterReset_h_
//$ class ReadAfterReset
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUM_BYTES_TO_WRITE")
#undef NUM_BYTES_TO_WRITE

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace net {
		class ServerSocket;
		class Socket;
	}
}

class $export ReadAfterReset : public ::java::lang::Object {
	$class(ReadAfterReset, 0, ::java::lang::Object)
public:
	ReadAfterReset();
	void init$();
	static int32_t acceptAndResetConnection(::java::net::ServerSocket* ss);
	static void main($StringArray* args);
	static int32_t readUntilIOException(::java::net::Socket* s);
	static void writeUntilIOException(::java::net::Socket* s);
	static ::java::io::PrintStream* out;
	static const int32_t NUM_BYTES_TO_WRITE = 1000;
};

#pragma pop_macro("NUM_BYTES_TO_WRITE")

#endif // _ReadAfterReset_h_