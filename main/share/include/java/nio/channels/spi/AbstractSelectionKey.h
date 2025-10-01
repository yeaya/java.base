#ifndef _java_nio_channels_spi_AbstractSelectionKey_h_
#define _java_nio_channels_spi_AbstractSelectionKey_h_
//$ class java.nio.channels.spi.AbstractSelectionKey
//$ extends java.nio.channels.SelectionKey

#include <java/nio/channels/SelectionKey.h>

#pragma push_macro("INVALID")
#undef INVALID

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
			namespace spi {

class $import AbstractSelectionKey : public ::java::nio::channels::SelectionKey {
	$class(AbstractSelectionKey, 0, ::java::nio::channels::SelectionKey)
public:
	AbstractSelectionKey();
	void init$();
	virtual void cancel() override;
	virtual void invalidate();
	virtual bool isValid() override;
	static ::java::lang::invoke::VarHandle* INVALID;
	$volatile(bool) invalid = false;
};

			} // spi
		} // channels
	} // nio
} // java

#pragma pop_macro("INVALID")

#endif // _java_nio_channels_spi_AbstractSelectionKey_h_