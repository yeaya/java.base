#ifndef _Sender$Client_h_
#define _Sender$Client_h_
//$ class Sender$Client
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

class $export Sender$Client : public ::java::lang::Runnable {
	$class(Sender$Client, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Sender$Client();
	void init$(int32_t port);
	virtual void run() override;
	virtual void throwException();
	int32_t port = 0;
	::java::lang::Exception* e = nullptr;
};

#endif // _Sender$Client_h_