#ifndef _Race$1_h_
#define _Race$1_h_
//$ class Race$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Phaser;
		}
	}
}

class Race$1 : public ::java::lang::Thread {
	$class(Race$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Race$1();
	void init$(::java::util::concurrent::Phaser* val$phaser, ::java::io::InputStream* val$is);
	virtual void run() override;
	::java::io::InputStream* val$is = nullptr;
	::java::util::concurrent::Phaser* val$phaser = nullptr;
};

#endif // _Race$1_h_