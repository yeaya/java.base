#ifndef _sun_nio_fs_AbstractPoller_h_
#define _sun_nio_fs_AbstractPoller_h_
//$ class sun.nio.fs.AbstractPoller
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
			class WatchEvent$Kind;
			class WatchEvent$Modifier;
			class WatchKey;
		}
	}
}
namespace java {
	namespace util {
		class LinkedList;
		class Set;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class AbstractPoller$RequestType;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractPoller : public ::java::lang::Runnable {
	$class(AbstractPoller, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AbstractPoller();
	void init$();
	void cancel(::java::nio::file::WatchKey* key);
	void close();
	virtual void implCancelKey(::java::nio::file::WatchKey* key) {}
	virtual void implCloseAll() {}
	virtual $Object* implRegister(::java::nio::file::Path* path, ::java::util::Set* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) {return nullptr;}
	$Object* invoke(::sun::nio::fs::AbstractPoller$RequestType* type, $ObjectArray* params);
	virtual bool processRequests();
	::java::nio::file::WatchKey* register$(::java::nio::file::Path* dir, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers);
	virtual void start();
	virtual void wakeup() {}
	::java::util::LinkedList* requestList = nullptr;
	bool shutdown = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_AbstractPoller_h_