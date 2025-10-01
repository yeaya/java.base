#ifndef _sun_nio_fs_AbstractPoller$Request_h_
#define _sun_nio_fs_AbstractPoller$Request_h_
//$ class sun.nio.fs.AbstractPoller$Request
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class AbstractPoller$Request : public ::java::lang::Object {
	$class(AbstractPoller$Request, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractPoller$Request();
	void init$(::sun::nio::fs::AbstractPoller$RequestType* type, $ObjectArray* params);
	virtual $Object* awaitResult();
	virtual $ObjectArray* parameters();
	virtual void release(Object$* result);
	virtual ::sun::nio::fs::AbstractPoller$RequestType* type();
	::sun::nio::fs::AbstractPoller$RequestType* type$ = nullptr;
	$ObjectArray* params = nullptr;
	bool completed = false;
	$Object* result = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_AbstractPoller$Request_h_