#ifndef _sun_nio_fs_MimeTypesFileTypeDetector$1_h_
#define _sun_nio_fs_MimeTypesFileTypeDetector$1_h_
//$ class sun.nio.fs.MimeTypesFileTypeDetector$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace nio {
		namespace fs {
			class MimeTypesFileTypeDetector;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class MimeTypesFileTypeDetector$1 : public ::java::security::PrivilegedAction {
	$class(MimeTypesFileTypeDetector$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MimeTypesFileTypeDetector$1();
	void init$(::sun::nio::fs::MimeTypesFileTypeDetector* this$0);
	virtual $Object* run() override;
	::sun::nio::fs::MimeTypesFileTypeDetector* this$0 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_MimeTypesFileTypeDetector$1_h_