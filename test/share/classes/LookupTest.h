#ifndef _LookupTest_h_
#define _LookupTest_h_
//$ class LookupTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_POLICY")
#undef DEFAULT_POLICY
#pragma push_macro("HOSTS_FILE_NAME")
#undef HOSTS_FILE_NAME

namespace java {
	namespace net {
		class ServerSocket;
	}
}
namespace java {
	namespace security {
		class Policy;
	}
}

class $export LookupTest : public ::java::lang::Object {
	$class(LookupTest, 0, ::java::lang::Object)
public:
	LookupTest();
	void init$();
	static void addMappingToHostsFile($String* host, $String* addr, $String* hostsFileName, bool append);
	static void main($StringArray* args);
	static void test($String* url, bool throwsSecException, bool throwsIOException);
	static ::java::security::Policy* DEFAULT_POLICY;
	static int32_t port;
	static $volatile(::java::net::ServerSocket*) serverSocket;
	static $String* HOSTS_FILE_NAME;
};

#pragma pop_macro("DEFAULT_POLICY")
#pragma pop_macro("HOSTS_FILE_NAME")

#endif // _LookupTest_h_