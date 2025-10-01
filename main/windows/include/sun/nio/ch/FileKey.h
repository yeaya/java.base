#ifndef _sun_nio_ch_FileKey_h_
#define _sun_nio_ch_FileKey_h_
//$ class sun.nio.ch.FileKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import FileKey : public ::java::lang::Object {
	$class(FileKey, 0, ::java::lang::Object)
public:
	FileKey();
	void init$();
	static ::sun::nio::ch::FileKey* create(::java::io::FileDescriptor* fd);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void init(::java::io::FileDescriptor* fd);
	static void initIDs();
	int64_t dwVolumeSerialNumber = 0;
	int64_t nFileIndexHigh = 0;
	int64_t nFileIndexLow = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileKey_h_