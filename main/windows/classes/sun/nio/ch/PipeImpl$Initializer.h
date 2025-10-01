#ifndef _sun_nio_ch_PipeImpl$Initializer_h_
#define _sun_nio_ch_PipeImpl$Initializer_h_
//$ class sun.nio.ch.PipeImpl$Initializer
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class SelectorProvider;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class SinkChannelImpl;
			class SourceChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PipeImpl$Initializer : public ::java::security::PrivilegedExceptionAction {
	$class(PipeImpl$Initializer, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	PipeImpl$Initializer();
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	virtual $Object* run() override;
	::java::nio::channels::spi::SelectorProvider* sp = nullptr;
	::java::io::IOException* ioe = nullptr;
	::sun::nio::ch::SourceChannelImpl* source = nullptr;
	::sun::nio::ch::SinkChannelImpl* sink = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_PipeImpl$Initializer_h_