#ifndef _AsyncCloseChannel$SensorServer_h_
#define _AsyncCloseChannel$SensorServer_h_
//$ class AsyncCloseChannel$SensorServer
//$ extends AsyncCloseChannel$ServerThread

#include <AsyncCloseChannel$ServerThread.h>

class $export AsyncCloseChannel$SensorServer : public ::AsyncCloseChannel$ServerThread {
	$class(AsyncCloseChannel$SensorServer, $NO_CLASS_INIT, ::AsyncCloseChannel$ServerThread)
public:
	AsyncCloseChannel$SensorServer();
	void init$();
	virtual void runEx() override;
};

#endif // _AsyncCloseChannel$SensorServer_h_