#ifndef _java_nio_channels_spi_AbstractSelectableChannel_h_
#define _java_nio_channels_spi_AbstractSelectableChannel_h_
//$ class java.nio.channels.spi.AbstractSelectableChannel
//$ extends java.nio.channels.SelectableChannel

#include <java/lang/Array.h>
#include <java/nio/channels/SelectableChannel.h>

namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
			class Selector;
		}
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
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class $export AbstractSelectableChannel : public ::java::nio::channels::SelectableChannel {
	$class(AbstractSelectableChannel, 0, ::java::nio::channels::SelectableChannel)
public:
	AbstractSelectableChannel();
	void init$(::java::nio::channels::spi::SelectorProvider* provider);
	void addKey(::java::nio::channels::SelectionKey* k);
	virtual $Object* blockingLock() override;
	virtual ::java::nio::channels::SelectableChannel* configureBlocking(bool block) override;
	::java::nio::channels::SelectionKey* findKey(::java::nio::channels::Selector* sel);
	void forEach(::java::util::function::Consumer* action);
	bool haveValidKeys();
	virtual void implCloseChannel() override;
	virtual void implCloseSelectableChannel() {}
	virtual void implConfigureBlocking(bool block) {}
	virtual bool isBlocking() override;
	virtual bool isRegistered() override;
	virtual ::java::nio::channels::SelectionKey* keyFor(::java::nio::channels::Selector* sel) override;
	static bool lambda$forEach$0(::java::nio::channels::SelectionKey* k);
	virtual ::java::nio::channels::spi::SelectorProvider* provider() override;
	using ::java::nio::channels::SelectableChannel::register$;
	virtual ::java::nio::channels::SelectionKey* register$(::java::nio::channels::Selector* sel, int32_t ops, Object$* att) override;
	virtual void removeKey(::java::nio::channels::SelectionKey* k);
	static bool $assertionsDisabled;
	::java::nio::channels::spi::SelectorProvider* provider$ = nullptr;
	$Array<::java::nio::channels::SelectionKey>* keys = nullptr;
	int32_t keyCount = 0;
	$Object* keyLock = nullptr;
	$Object* regLock = nullptr;
	$volatile(bool) nonBlocking = false;
};

			} // spi
		} // channels
	} // nio
} // java

#endif // _java_nio_channels_spi_AbstractSelectableChannel_h_