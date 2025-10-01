#ifndef _sun_nio_fs_WindowsSecurity_h_
#define _sun_nio_fs_WindowsSecurity_h_
//$ class sun.nio.fs.WindowsSecurity
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {
			class WindowsSecurity$Privilege;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsSecurity : public ::java::lang::Object {
	$class(WindowsSecurity, 0, ::java::lang::Object)
public:
	WindowsSecurity();
	void init$();
	static bool checkAccessMask(int64_t securityInfo, int32_t accessMask, int32_t genericRead, int32_t genericWrite, int32_t genericExecute, int32_t genericAll);
	static ::sun::nio::fs::WindowsSecurity$Privilege* enablePrivilege($String* priv);
	static void lambda$enablePrivilege$0(int64_t token, bool stopImpersontating, bool needToRevert, int64_t pLuid);
	static int64_t openProcessToken(int32_t access);
	static int64_t processTokenWithDuplicateAccess;
	static int64_t processTokenWithQueryAccess;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsSecurity_h_