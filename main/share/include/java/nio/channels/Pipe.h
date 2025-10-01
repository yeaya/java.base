#ifndef _java_nio_channels_Pipe_h_
#define _java_nio_channels_Pipe_h_
//$ class java.nio.channels.Pipe
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace channels {
			class Pipe$SinkChannel;
			class Pipe$SourceChannel;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $import Pipe : public ::java::lang::Object {
	$class(Pipe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Pipe();
	void init$();
	static ::java::nio::channels::Pipe* open();
	virtual ::java::nio::channels::Pipe$SinkChannel* sink() {return nullptr;}
	virtual ::java::nio::channels::Pipe$SourceChannel* source() {return nullptr;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_Pipe_h_