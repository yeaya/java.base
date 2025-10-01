#ifndef _LookupTest$Server_h_
#define _LookupTest$Server_h_
//$ class LookupTest$Server
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export LookupTest$Server : public ::java::lang::Thread {
	$class(LookupTest$Server, 0, ::java::lang::Thread)
public:
	LookupTest$Server();
	void init$();
	virtual void readOneRequest(::java::io::InputStream* is);
	virtual void run() override;
	virtual void terminate();
	$volatile(bool) done = false;
	static $bytes* requestEnd;
};

#endif // _LookupTest$Server_h_