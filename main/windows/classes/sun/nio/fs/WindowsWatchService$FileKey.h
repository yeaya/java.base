#ifndef _sun_nio_fs_WindowsWatchService$FileKey_h_
#define _sun_nio_fs_WindowsWatchService$FileKey_h_
//$ class sun.nio.fs.WindowsWatchService$FileKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsWatchService$FileKey : public ::java::lang::Object {
	$class(WindowsWatchService$FileKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsWatchService$FileKey();
	void init$(int32_t volSerialNumber, int32_t fileIndexHigh, int32_t fileIndexLow);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	int32_t volSerialNumber = 0;
	int32_t fileIndexHigh = 0;
	int32_t fileIndexLow = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsWatchService$FileKey_h_