#ifndef _Streams$OutputStreamGetter_h_
#define _Streams$OutputStreamGetter_h_
//$ class Streams$OutputStreamGetter
//$ extends Streams$StreamGetter

#include <Streams$StreamGetter.h>

namespace java {
	namespace net {
		class Socket;
	}
}

class $export Streams$OutputStreamGetter : public ::Streams$StreamGetter {
	$class(Streams$OutputStreamGetter, $NO_CLASS_INIT, ::Streams$StreamGetter)
public:
	Streams$OutputStreamGetter();
	void init$(::java::net::Socket* s);
	virtual void getStream() override;
};

#endif // _Streams$OutputStreamGetter_h_