#ifndef _sun_nio_ch_Port_h_
#define _sun_nio_ch_Port_h_
//$ class sun.nio.ch.Port
//$ extends sun.nio.ch.AsynchronousChannelGroupImpl

#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AsynchronousChannelProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReadWriteLock;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class Port$PollableChannel;
			class ThreadPool;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Port : public ::sun::nio::ch::AsynchronousChannelGroupImpl {
	$class(Port, $NO_CLASS_INIT, ::sun::nio::ch::AsynchronousChannelGroupImpl)
public:
	Port();
	void init$(::java::nio::channels::spi::AsynchronousChannelProvider* provider, ::sun::nio::ch::ThreadPool* pool);
	virtual $Object* attachForeignChannel(::java::nio::channels::Channel* channel, ::java::io::FileDescriptor* fd) override;
	virtual void closeAllChannels() override;
	virtual void detachForeignChannel(Object$* key) override;
	virtual bool isEmpty() override;
	virtual void preUnregister(int32_t fd);
	void register$(int32_t fd, ::sun::nio::ch::Port$PollableChannel* ch);
	virtual void startPoll(int32_t fd, int32_t events) {}
	void unregister(int32_t fd);
	::java::util::concurrent::locks::ReadWriteLock* fdToChannelLock = nullptr;
	::java::util::Map* fdToChannel = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Port_h_