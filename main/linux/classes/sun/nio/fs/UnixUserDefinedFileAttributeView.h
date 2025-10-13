#ifndef _sun_nio_fs_UnixUserDefinedFileAttributeView_h_
#define _sun_nio_fs_UnixUserDefinedFileAttributeView_h_
//$ class sun.nio.fs.UnixUserDefinedFileAttributeView
//$ extends sun.nio.fs.AbstractUserDefinedFileAttributeView

#include <java/lang/Array.h>
#include <sun/nio/fs/AbstractUserDefinedFileAttributeView.h>

#pragma push_macro("MAX_LISTXATTR_BUF_SIZE")
#undef MAX_LISTXATTR_BUF_SIZE
#pragma push_macro("MIN_LISTXATTR_BUF_SIZE")
#undef MIN_LISTXATTR_BUF_SIZE
#pragma push_macro("USER_NAMESPACE")
#undef USER_NAMESPACE

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
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixUserDefinedFileAttributeView : public ::sun::nio::fs::AbstractUserDefinedFileAttributeView {
	$class(UnixUserDefinedFileAttributeView, 0, ::sun::nio::fs::AbstractUserDefinedFileAttributeView)
public:
	UnixUserDefinedFileAttributeView();
	void init$(::sun::nio::fs::UnixPath* file, bool followLinks);
	static ::java::util::List* asList(int64_t address, int32_t size);
	static void copyExtendedAttribute(int32_t ofd, $bytes* name, int32_t nfd);
	static void copyExtendedAttributes(int32_t ofd, int32_t nfd);
	virtual void delete$($String* name) override;
	static bool lambda$list$0($String* s);
	static $String* lambda$list$1($String* s);
	static ::java::util::List* list(int32_t fd, int32_t bufSize);
	virtual ::java::util::List* list() override;
	virtual int32_t maxNameLength() {return 0;}
	$bytes* nameAsBytes(::sun::nio::fs::UnixPath* file, $String* name);
	virtual int32_t read($String* name, ::java::nio::ByteBuffer* dst) override;
	int32_t read($String* name, int64_t address, int32_t rem);
	virtual int32_t size($String* name) override;
	virtual int32_t write($String* name, ::java::nio::ByteBuffer* src) override;
	void write($String* name, int64_t address, int32_t rem);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static $String* USER_NAMESPACE;
	static const int32_t MIN_LISTXATTR_BUF_SIZE = 1024;
	static const int32_t MAX_LISTXATTR_BUF_SIZE = 32768; // 32 * 1024
	::sun::nio::fs::UnixPath* file = nullptr;
	bool followLinks = false;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("MAX_LISTXATTR_BUF_SIZE")
#pragma pop_macro("MIN_LISTXATTR_BUF_SIZE")
#pragma pop_macro("USER_NAMESPACE")

#endif // _sun_nio_fs_UnixUserDefinedFileAttributeView_h_