#ifndef _sun_nio_fs_WindowsPathParser_h_
#define _sun_nio_fs_WindowsPathParser_h_
//$ class sun.nio.fs.WindowsPathParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsPathParser$Result;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsPathParser : public ::java::lang::Object {
	$class(WindowsPathParser, 0, ::java::lang::Object)
public:
	WindowsPathParser();
	void init$();
	static bool isInvalidPathChar(char16_t ch);
	static bool isLetter(char16_t c);
	static bool isSlash(char16_t c);
	static int32_t nextNonSlash($String* path, int32_t off, int32_t end);
	static int32_t nextSlash($String* path, int32_t off, int32_t end);
	static $String* normalize(::java::lang::StringBuilder* sb, $String* path, int32_t off);
	static ::sun::nio::fs::WindowsPathParser$Result* parse($String* input);
	static ::sun::nio::fs::WindowsPathParser$Result* parse($String* input, bool requireToNormalize);
	static ::sun::nio::fs::WindowsPathParser$Result* parseNormalizedPath($String* input);
	static $String* reservedChars;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsPathParser_h_