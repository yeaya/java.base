#ifndef _Encode_h_
#define _Encode_h_
//$ class Encode
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export Encode : public ::java::lang::Runnable {
	$class(Encode, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Encode();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	::java::net::ServerSocket* ss = nullptr;
};

#endif // _Encode_h_