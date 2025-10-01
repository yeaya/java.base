#ifndef _sun_nio_fs_AbstractWatchKey$Event_h_
#define _sun_nio_fs_AbstractWatchKey$Event_h_
//$ class sun.nio.fs.AbstractWatchKey$Event
//$ extends java.nio.file.WatchEvent

#include <java/nio/file/WatchEvent.h>

namespace java {
	namespace nio {
		namespace file {
			class WatchEvent$Kind;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractWatchKey$Event : public ::java::nio::file::WatchEvent {
	$class(AbstractWatchKey$Event, $NO_CLASS_INIT, ::java::nio::file::WatchEvent)
public:
	AbstractWatchKey$Event();
	void init$(::java::nio::file::WatchEvent$Kind* type, Object$* context);
	virtual $Object* context() override;
	virtual int32_t count() override;
	virtual void increment();
	virtual ::java::nio::file::WatchEvent$Kind* kind() override;
	::java::nio::file::WatchEvent$Kind* kind$ = nullptr;
	$Object* context$ = nullptr;
	int32_t count$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_AbstractWatchKey$Event_h_