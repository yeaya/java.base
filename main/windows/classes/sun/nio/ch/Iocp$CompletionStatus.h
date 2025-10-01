#ifndef _sun_nio_ch_Iocp$CompletionStatus_h_
#define _sun_nio_ch_Iocp$CompletionStatus_h_
//$ class sun.nio.ch.Iocp$CompletionStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {

class Iocp$CompletionStatus : public ::java::lang::Object {
	$class(Iocp$CompletionStatus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Iocp$CompletionStatus();
	void init$();
	virtual int32_t bytesTransferred();
	virtual int32_t completionKey();
	virtual int32_t error();
	virtual int64_t overlapped();
	int32_t error$ = 0;
	int32_t bytesTransferred$ = 0;
	int32_t completionKey$ = 0;
	int64_t overlapped$ = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Iocp$CompletionStatus_h_