#ifndef _AsyncCloseChannel$TargetServer_h_
#define _AsyncCloseChannel$TargetServer_h_
//$ class AsyncCloseChannel$TargetServer
//$ extends AsyncCloseChannel$ServerThread

#include <AsyncCloseChannel$ServerThread.h>

class $export AsyncCloseChannel$TargetServer : public ::AsyncCloseChannel$ServerThread {
	$class(AsyncCloseChannel$TargetServer, $NO_CLASS_INIT, ::AsyncCloseChannel$ServerThread)
public:
	AsyncCloseChannel$TargetServer();
	void init$();
	virtual void runEx() override;
};

#endif // _AsyncCloseChannel$TargetServer_h_