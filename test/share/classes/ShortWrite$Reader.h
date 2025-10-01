#ifndef _ShortWrite$Reader_h_
#define _ShortWrite$Reader_h_
//$ class ShortWrite$Reader
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}

class $export ShortWrite$Reader : public ::java::util::concurrent::Callable {
	$class(ShortWrite$Reader, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	ShortWrite$Reader();
	void init$(::java::nio::channels::SocketChannel* sc, int32_t expectedSize);
	virtual $Object* call() override;
	::java::nio::channels::SocketChannel* sc = nullptr;
	::java::nio::ByteBuffer* buf = nullptr;
};

#endif // _ShortWrite$Reader_h_