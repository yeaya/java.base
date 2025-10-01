#ifndef _java_nio_channels_Selector_h_
#define _java_nio_channels_Selector_h_
//$ class java.nio.channels.Selector
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

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

class $export Selector : public ::java::io::Closeable {
	$class(Selector, 0, ::java::io::Closeable)
public:
	Selector();
	virtual void close() override {}
	void init$();
	int32_t doSelect(::java::util::function::Consumer* action, int64_t timeout);
	virtual bool isOpen() {return false;}
	virtual ::java::util::Set* keys() {return nullptr;}
	void lambda$doSelect$0(::java::util::function::Consumer* action, ::java::nio::channels::SelectionKey* k);
	static ::java::nio::channels::Selector* open();
	virtual ::java::nio::channels::spi::SelectorProvider* provider() {return nullptr;}
	virtual int32_t select(int64_t timeout) {return 0;}
	virtual int32_t select() {return 0;}
	virtual int32_t select(::java::util::function::Consumer* action, int64_t timeout);
	virtual int32_t select(::java::util::function::Consumer* action);
	virtual int32_t selectNow() {return 0;}
	virtual int32_t selectNow(::java::util::function::Consumer* action);
	virtual ::java::util::Set* selectedKeys() {return nullptr;}
	virtual ::java::nio::channels::Selector* wakeup() {return nullptr;}
	static bool $assertionsDisabled;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_Selector_h_