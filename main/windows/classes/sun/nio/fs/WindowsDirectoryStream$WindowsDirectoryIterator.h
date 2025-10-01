#ifndef _sun_nio_fs_WindowsDirectoryStream$WindowsDirectoryIterator_h_
#define _sun_nio_fs_WindowsDirectoryStream$WindowsDirectoryIterator_h_
//$ class sun.nio.fs.WindowsDirectoryStream$WindowsDirectoryIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsDirectoryStream;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsDirectoryStream$WindowsDirectoryIterator : public ::java::util::Iterator {
	$class(WindowsDirectoryStream$WindowsDirectoryIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	WindowsDirectoryStream$WindowsDirectoryIterator();
	void init$(::sun::nio::fs::WindowsDirectoryStream* this$0, $String* first);
	::java::nio::file::Path* acceptEntry($String* s, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual bool hasNext() override;
	bool isSelfOrParent($String* name);
	virtual $Object* next() override;
	::java::nio::file::Path* readNextEntry();
	virtual void remove() override;
	::sun::nio::fs::WindowsDirectoryStream* this$0 = nullptr;
	bool atEof = false;
	$String* first = nullptr;
	::java::nio::file::Path* nextEntry = nullptr;
	$String* prefix = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsDirectoryStream$WindowsDirectoryIterator_h_