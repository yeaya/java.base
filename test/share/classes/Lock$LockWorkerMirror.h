#ifndef _Lock$LockWorkerMirror_h_
#define _Lock$LockWorkerMirror_h_
//$ class Lock$LockWorkerMirror
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}

class $export Lock$LockWorkerMirror : public ::java::lang::Object {
	$class(Lock$LockWorkerMirror, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Lock$LockWorkerMirror();
	void init$(::java::nio::channels::SocketChannel* sc);
	virtual void close();
	virtual ::Lock$LockWorkerMirror* lock();
	virtual ::Lock$LockWorkerMirror* lock(int64_t position, int64_t size, bool shared);
	virtual ::Lock$LockWorkerMirror* open($String* file);
	void sendCommand($String* cmd, $StringArray* params);
	virtual void shutdown();
	virtual ::Lock$LockWorkerMirror* unlock();
	::java::nio::channels::SocketChannel* sc = nullptr;
};

#endif // _Lock$LockWorkerMirror_h_