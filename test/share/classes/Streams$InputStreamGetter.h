#ifndef _Streams$InputStreamGetter_h_
#define _Streams$InputStreamGetter_h_
//$ class Streams$InputStreamGetter
//$ extends Streams$StreamGetter

#include <Streams$StreamGetter.h>

namespace java {
	namespace net {
		class Socket;
	}
}

class $export Streams$InputStreamGetter : public ::Streams$StreamGetter {
	$class(Streams$InputStreamGetter, $NO_CLASS_INIT, ::Streams$StreamGetter)
public:
	Streams$InputStreamGetter();
	void init$(::java::net::Socket* s);
	virtual void getStream() override;
};

#endif // _Streams$InputStreamGetter_h_