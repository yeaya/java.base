#ifndef _sun_nio_fs_WindowsNativeDispatcher$CompletionStatus_h_
#define _sun_nio_fs_WindowsNativeDispatcher$CompletionStatus_h_
//$ class sun.nio.fs.WindowsNativeDispatcher$CompletionStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsNativeDispatcher$CompletionStatus : public ::java::lang::Object {
	$class(WindowsNativeDispatcher$CompletionStatus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsNativeDispatcher$CompletionStatus();
	void init$();
	virtual int32_t bytesTransferred();
	virtual int64_t completionKey();
	virtual int32_t error();
	int32_t error$ = 0;
	int32_t bytesTransferred$ = 0;
	int64_t completionKey$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsNativeDispatcher$CompletionStatus_h_