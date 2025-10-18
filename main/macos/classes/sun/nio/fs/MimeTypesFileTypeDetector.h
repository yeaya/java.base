#ifndef _sun_nio_fs_MimeTypesFileTypeDetector_h_
#define _sun_nio_fs_MimeTypesFileTypeDetector_h_
//$ class sun.nio.fs.MimeTypesFileTypeDetector
//$ extends sun.nio.fs.AbstractFileTypeDetector

#include <sun/nio/fs/AbstractFileTypeDetector.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class MimeTypesFileTypeDetector : public ::sun::nio::fs::AbstractFileTypeDetector {
	$class(MimeTypesFileTypeDetector, $NO_CLASS_INIT, ::sun::nio::fs::AbstractFileTypeDetector)
public:
	MimeTypesFileTypeDetector();
	void init$(::java::nio::file::Path* filePath);
	virtual $String* implProbeContentType(::java::nio::file::Path* path) override;
	void loadMimeTypes();
	void parseMimeEntry($String* entry);
	void putIfAbsent($String* key, $String* value);
	::java::nio::file::Path* mimeTypesFile = nullptr;
	::java::util::Map* mimeTypeMap = nullptr;
	$volatile(bool) loaded = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_MimeTypesFileTypeDetector_h_