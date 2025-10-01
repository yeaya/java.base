#ifndef _sun_net_ProgressEvent_h_
#define _sun_net_ProgressEvent_h_
//$ class sun.net.ProgressEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace sun {
	namespace net {
		class ProgressSource;
		class ProgressSource$State;
	}
}

namespace sun {
	namespace net {

class $import ProgressEvent : public ::java::util::EventObject {
	$class(ProgressEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	ProgressEvent();
	void init$(::sun::net::ProgressSource* source, ::java::net::URL* url, $String* method, $String* contentType, ::sun::net::ProgressSource$State* state, int64_t progress, int64_t expected);
	virtual $String* getContentType();
	virtual int64_t getExpected();
	virtual $String* getMethod();
	virtual int64_t getProgress();
	virtual ::sun::net::ProgressSource$State* getState();
	virtual ::java::net::URL* getURL();
	virtual $String* toString() override;
	::java::net::URL* url = nullptr;
	$String* contentType = nullptr;
	$String* method = nullptr;
	int64_t progress = 0;
	int64_t expected = 0;
	::sun::net::ProgressSource$State* state = nullptr;
};

	} // net
} // sun

#endif // _sun_net_ProgressEvent_h_