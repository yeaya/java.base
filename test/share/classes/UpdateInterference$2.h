#ifndef _UpdateInterference$2_h_
#define _UpdateInterference$2_h_
//$ class UpdateInterference$2
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
			class WatchService;
		}
	}
}

class UpdateInterference$2 : public ::java::lang::Thread {
	$class(UpdateInterference$2, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	UpdateInterference$2();
	void init$(::java::nio::file::Path* val$baz, ::java::nio::file::WatchService* val$watcher);
	virtual void run() override;
	::java::nio::file::WatchService* val$watcher = nullptr;
	::java::nio::file::Path* val$baz = nullptr;
};

#endif // _UpdateInterference$2_h_