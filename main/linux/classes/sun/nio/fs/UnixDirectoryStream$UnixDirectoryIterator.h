#ifndef _sun_nio_fs_UnixDirectoryStream$UnixDirectoryIterator_h_
#define _sun_nio_fs_UnixDirectoryStream$UnixDirectoryIterator_h_
//$ class sun.nio.fs.UnixDirectoryStream$UnixDirectoryIterator
//$ extends java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Iterator.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixDirectoryStream;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixDirectoryStream$UnixDirectoryIterator : public ::java::util::Iterator {
	$class(UnixDirectoryStream$UnixDirectoryIterator, 0, ::java::util::Iterator)
public:
	UnixDirectoryStream$UnixDirectoryIterator();
	void init$(::sun::nio::fs::UnixDirectoryStream* this$0);
	virtual bool hasNext() override;
	bool isSelfOrParent($bytes* nameAsBytes);
	virtual $Object* next() override;
	::java::nio::file::Path* readNextEntry();
	virtual void remove() override;
	::sun::nio::fs::UnixDirectoryStream* this$0 = nullptr;
	static bool $assertionsDisabled;
	bool atEof = false;
	::java::nio::file::Path* nextEntry = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixDirectoryStream$UnixDirectoryIterator_h_