#ifndef _jdk_internal_platform_CgroupInfo_h_
#define _jdk_internal_platform_CgroupInfo_h_
//$ class jdk.internal.platform.CgroupInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace platform {

class $export CgroupInfo : public ::java::lang::Object {
	$class(CgroupInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CgroupInfo();
	void init$($String* name, int32_t hierarchyId, bool enabled);
	static ::jdk::internal::platform::CgroupInfo* fromCgroupsLine($String* line);
	virtual $String* getCgroupPath();
	virtual int32_t getHierarchyId();
	virtual $String* getMountPoint();
	virtual $String* getMountRoot();
	virtual $String* getName();
	virtual bool isEnabled();
	virtual void setCgroupPath($String* cgroupPath);
	virtual void setMountPoint($String* mountPoint);
	virtual void setMountRoot($String* mountRoot);
	$String* name = nullptr;
	int32_t hierarchyId = 0;
	bool enabled = false;
	$String* mountPoint = nullptr;
	$String* mountRoot = nullptr;
	$String* cgroupPath = nullptr;
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_CgroupInfo_h_