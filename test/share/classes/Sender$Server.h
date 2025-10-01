#ifndef _Sender$Server_h_
#define _Sender$Server_h_
//$ class Sender$Server
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class $export Sender$Server : public ::java::lang::Runnable {
	$class(Sender$Server, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Sender$Server();
	void init$();
	virtual int32_t port();
	virtual void run() override;
	virtual void showBuffer($String* s, ::java::nio::ByteBuffer* bb);
	virtual void throwException();
	::java::nio::channels::DatagramChannel* dc = nullptr;
	::java::lang::Exception* e = nullptr;
};

#endif // _Sender$Server_h_