#ifndef _SendUrgentData$ServerSocketChannelThread_h_
#define _SendUrgentData$ServerSocketChannelThread_h_
//$ class SendUrgentData$ServerSocketChannelThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class ServerSocketChannel;
		}
	}
}

class $export SendUrgentData$ServerSocketChannelThread : public ::java::lang::Thread {
	$class(SendUrgentData$ServerSocketChannelThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	SendUrgentData$ServerSocketChannelThread();
	void init$($String* name);
	virtual void close();
	virtual ::java::net::InetSocketAddress* getAddress();
	virtual void run() override;
	::java::nio::channels::ServerSocketChannel* ssc = nullptr;
};

#endif // _SendUrgentData$ServerSocketChannelThread_h_