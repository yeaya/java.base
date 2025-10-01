#ifndef _sun_net_ProgressListener_h_
#define _sun_net_ProgressListener_h_
//$ interface sun.net.ProgressListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace sun {
	namespace net {
		class ProgressEvent;
	}
}

namespace sun {
	namespace net {

class $import ProgressListener : public ::java::util::EventListener {
	$interface(ProgressListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void progressFinish(::sun::net::ProgressEvent* evt) {}
	virtual void progressStart(::sun::net::ProgressEvent* evt) {}
	virtual void progressUpdate(::sun::net::ProgressEvent* evt) {}
};

	} // net
} // sun

#endif // _sun_net_ProgressListener_h_