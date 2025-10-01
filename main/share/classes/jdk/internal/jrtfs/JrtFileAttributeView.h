#ifndef _jdk_internal_jrtfs_JrtFileAttributeView_h_
#define _jdk_internal_jrtfs_JrtFileAttributeView_h_
//$ class jdk.internal.jrtfs.JrtFileAttributeView
//$ extends java.nio.file.attribute.BasicFileAttributeView

#include <java/lang/Array.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>

namespace java {
	namespace nio {
		namespace file {
			class LinkOption;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileAttributeView;
				class FileTime;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtFileAttributeView$AttrID;
			class JrtFileAttributes;
			class JrtPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileAttributeView : public ::java::nio::file::attribute::BasicFileAttributeView {
	$class(JrtFileAttributeView, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributeView)
public:
	JrtFileAttributeView();
	void init$(::jdk::internal::jrtfs::JrtPath* path, bool isJrtView, $Array<::java::nio::file::LinkOption>* options);
	static $Object* attribute(::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* id, ::jdk::internal::jrtfs::JrtFileAttributes* jrtfas, bool isJrtView);
	static ::java::nio::file::attribute::FileAttributeView* get(::jdk::internal::jrtfs::JrtPath* path, $Class* type, $Array<::java::nio::file::LinkOption>* options);
	static ::jdk::internal::jrtfs::JrtFileAttributeView* get(::jdk::internal::jrtfs::JrtPath* path, $String* type, $Array<::java::nio::file::LinkOption>* options);
	virtual $String* name() override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	static ::java::util::Map* readAttributes(::jdk::internal::jrtfs::JrtPath* path, $String* attributes, $Array<::java::nio::file::LinkOption>* options);
	static void setAttribute(::jdk::internal::jrtfs::JrtPath* path, $String* attribute, Object$* value);
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	::jdk::internal::jrtfs::JrtPath* path = nullptr;
	bool isJrtView = false;
	$Array<::java::nio::file::LinkOption>* options = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtFileAttributeView_h_