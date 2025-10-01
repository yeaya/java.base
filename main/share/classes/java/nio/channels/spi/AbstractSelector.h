#ifndef _java_nio_channels_spi_AbstractSelector_h_
#define _java_nio_channels_spi_AbstractSelector_h_
//$ class java.nio.channels.spi.AbstractSelector
//$ extends java.nio.channels.Selector

#include <java/nio/channels/Selector.h>

#pragma push_macro("CLOSED")
#undef CLOSED

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AbstractSelectableChannel;
				class AbstractSelectionKey;
				class SelectorProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class Interruptible;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class $export AbstractSelector : public ::java::nio::channels::Selector {
	$class(AbstractSelector, 0, ::java::nio::channels::Selector)
public:
	AbstractSelector();
	void init$(::java::nio::channels::spi::SelectorProvider* provider);
	void begin();
	virtual void cancel(::java::nio::channels::SelectionKey* k);
	::java::util::Set* cancelledKeys();
	virtual void close() override;
	void deregister(::java::nio::channels::spi::AbstractSelectionKey* key);
	void end();
	virtual void implCloseSelector() {}
	virtual bool isOpen() override;
	virtual ::java::nio::channels::spi::SelectorProvider* provider() override;
	virtual ::java::nio::channels::SelectionKey* register$(::java::nio::channels::spi::AbstractSelectableChannel* ch, int32_t ops, Object$* att) {return nullptr;}
	static ::java::lang::invoke::VarHandle* CLOSED;
	$volatile(bool) closed = false;
	::java::nio::channels::spi::SelectorProvider* provider$ = nullptr;
	::java::util::Set* cancelledKeys$ = nullptr;
	::sun::nio::ch::Interruptible* interruptor = nullptr;
};

			} // spi
		} // channels
	} // nio
} // java

#pragma pop_macro("CLOSED")

#endif // _java_nio_channels_spi_AbstractSelector_h_