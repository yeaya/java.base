#ifndef _sun_nio_fs_WindowsUserDefinedFileAttributeView_h_
#define _sun_nio_fs_WindowsUserDefinedFileAttributeView_h_
//$ class sun.nio.fs.WindowsUserDefinedFileAttributeView
//$ extends sun.nio.fs.AbstractUserDefinedFileAttributeView

#include <sun/nio/fs/AbstractUserDefinedFileAttributeView.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsUserDefinedFileAttributeView : public ::sun::nio::fs::AbstractUserDefinedFileAttributeView {
	$class(WindowsUserDefinedFileAttributeView, 0, ::sun::nio::fs::AbstractUserDefinedFileAttributeView)
public:
	WindowsUserDefinedFileAttributeView();
	void init$(::sun::nio::fs::WindowsPath* file, bool followLinks);
	virtual void delete$($String* name) override;
	$String* join($String* file, $String* name);
	$String* join(::sun::nio::fs::WindowsPath* file, $String* name);
	virtual ::java::util::List* list() override;
	::java::util::List* listUsingStreamEnumeration();
	virtual int32_t read($String* name, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t size($String* name) override;
	virtual int32_t write($String* name, ::java::nio::ByteBuffer* src) override;
	static ::jdk::internal::misc::Unsafe* unsafe;
	::sun::nio::fs::WindowsPath* file = nullptr;
	bool followLinks = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsUserDefinedFileAttributeView_h_