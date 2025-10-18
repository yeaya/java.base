#ifndef _sun_nio_fs_UnixMountEntry_h_
#define _sun_nio_fs_UnixMountEntry_h_
//$ class sun.nio.fs.UnixMountEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace fs {

class UnixMountEntry : public ::java::lang::Object {
	$class(UnixMountEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnixMountEntry();
	void init$();
	virtual int64_t dev();
	virtual $bytes* dir();
	virtual $String* fstype();
	virtual bool hasOption($String* requested);
	virtual bool isIgnored();
	virtual bool isReadOnly();
	virtual $String* name();
	$bytes* name$ = nullptr;
	$bytes* dir$ = nullptr;
	$bytes* fstype$ = nullptr;
	$bytes* opts = nullptr;
	int64_t dev$ = 0;
	$volatile($String*) fstypeAsString = nullptr;
	$volatile($String*) optionsAsString = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixMountEntry_h_