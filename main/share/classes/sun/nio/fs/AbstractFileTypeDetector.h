#ifndef _sun_nio_fs_AbstractFileTypeDetector_h_
#define _sun_nio_fs_AbstractFileTypeDetector_h_
//$ class sun.nio.fs.AbstractFileTypeDetector
//$ extends java.nio.file.spi.FileTypeDetector

#include <java/nio/file/spi/FileTypeDetector.h>

#pragma push_macro("TSPECIALS")
#undef TSPECIALS

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

class $export AbstractFileTypeDetector : public ::java::nio::file::spi::FileTypeDetector {
	$class(AbstractFileTypeDetector, 0, ::java::nio::file::spi::FileTypeDetector)
public:
	AbstractFileTypeDetector();
	void init$();
	$String* getExtension($String* name);
	virtual $String* implProbeContentType(::java::nio::file::Path* file) {return nullptr;}
	static bool isTokenChar(char16_t c);
	static bool isValidToken($String* s);
	static $String* parse($String* s);
	virtual $String* probeContentType(::java::nio::file::Path* file) override;
	static $String* TSPECIALS;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("TSPECIALS")

#endif // _sun_nio_fs_AbstractFileTypeDetector_h_