#ifndef _Connect_h_
#define _Connect_h_
//$ class Connect
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class Throwable;
	}
}
namespace java {
	namespace net {
		class SocketAddress;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class ExecutorService;
		}
	}
}

class $export Connect : public ::java::lang::Object {
	$class(Connect, 0, ::java::lang::Object)
public:
	Connect();
	void init$();
	static void invoke(::java::util::concurrent::ExecutorService* e, ::java::lang::Runnable* reader, ::java::lang::Runnable* writer);
	static $Object* lambda$wait$0(::java::util::concurrent::CompletableFuture* future, $Throwable* ex);
	static void lambda$wait$1(::java::util::concurrent::CompletableFuture* future, ::java::util::concurrent::CompletableFuture* f);
	static void main($StringArray* args);
	static void test();
	static ::java::net::SocketAddress* toConnectAddress(::java::net::SocketAddress* address);
	static void wait($Array<::java::util::concurrent::CompletableFuture>* futures);
	static ::java::io::PrintStream* log;
};

#endif // _Connect_h_