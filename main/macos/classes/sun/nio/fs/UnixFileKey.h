#ifndef _sun_nio_fs_UnixFileKey_h_
#define _sun_nio_fs_UnixFileKey_h_
//$ class sun.nio.fs.UnixFileKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileKey : public ::java::lang::Object {
	$class(UnixFileKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnixFileKey();
	void init$(int64_t st_dev, int64_t st_ino);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	int64_t st_dev = 0;
	int64_t st_ino = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileKey_h_