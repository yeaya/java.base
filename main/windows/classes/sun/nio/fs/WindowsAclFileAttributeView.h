#ifndef _sun_nio_fs_WindowsAclFileAttributeView_h_
#define _sun_nio_fs_WindowsAclFileAttributeView_h_
//$ class sun.nio.fs.WindowsAclFileAttributeView
//$ extends sun.nio.fs.AbstractAclFileAttributeView

#include <sun/nio/fs/AbstractAclFileAttributeView.h>

#pragma push_macro("SIZEOF_SECURITY_DESCRIPTOR")
#undef SIZEOF_SECURITY_DESCRIPTOR

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class UserPrincipal;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class NativeBuffer;
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsAclFileAttributeView : public ::sun::nio::fs::AbstractAclFileAttributeView {
	$class(WindowsAclFileAttributeView, 0, ::sun::nio::fs::AbstractAclFileAttributeView)
public:
	WindowsAclFileAttributeView();
	void init$(::sun::nio::fs::WindowsPath* file, bool followLinks);
	void checkAccess(::sun::nio::fs::WindowsPath* file, bool checkRead, bool checkWrite);
	virtual ::java::util::List* getAcl() override;
	static ::sun::nio::fs::NativeBuffer* getFileSecurity($String* path, int32_t request);
	virtual ::java::nio::file::attribute::UserPrincipal* getOwner() override;
	virtual void setAcl(::java::util::List* acl) override;
	virtual void setOwner(::java::nio::file::attribute::UserPrincipal* obj) override;
	static bool $assertionsDisabled;
	static const int16_t SIZEOF_SECURITY_DESCRIPTOR = 20;
	::sun::nio::fs::WindowsPath* file = nullptr;
	bool followLinks = false;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("SIZEOF_SECURITY_DESCRIPTOR")

#endif // _sun_nio_fs_WindowsAclFileAttributeView_h_