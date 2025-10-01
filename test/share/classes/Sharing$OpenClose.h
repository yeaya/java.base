#ifndef _Sharing$OpenClose_h_
#define _Sharing$OpenClose_h_
//$ class Sharing$OpenClose
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class FileDescriptor;
		class FileInputStream;
		class FileOutputStream;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class Sharing$OpenClose : public ::java::lang::Thread {
	$class(Sharing$OpenClose, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Sharing$OpenClose();
	void init$(::java::io::FileDescriptor* filedescriptor, ::java::util::concurrent::CountDownLatch* done);
	virtual void run() override;
	::java::io::FileDescriptor* fd = nullptr;
	::java::util::concurrent::CountDownLatch* done = nullptr;
	$Array<::java::io::FileInputStream>* fisArray = nullptr;
	$Array<::java::io::FileOutputStream>* fosArray = nullptr;
};

#endif // _Sharing$OpenClose_h_