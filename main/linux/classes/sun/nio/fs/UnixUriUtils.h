#ifndef _sun_nio_fs_UnixUriUtils_h_
#define _sun_nio_fs_UnixUriUtils_h_
//$ class sun.nio.fs.UnixUriUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("H_ALPHA")
#undef H_ALPHA
#pragma push_macro("H_ALPHANUM")
#undef H_ALPHANUM
#pragma push_macro("H_DIGIT")
#undef H_DIGIT
#pragma push_macro("H_LOWALPHA")
#undef H_LOWALPHA
#pragma push_macro("H_MARK")
#undef H_MARK
#pragma push_macro("H_PATH")
#undef H_PATH
#pragma push_macro("H_PCHAR")
#undef H_PCHAR
#pragma push_macro("H_UNRESERVED")
#undef H_UNRESERVED
#pragma push_macro("H_UPALPHA")
#undef H_UPALPHA
#pragma push_macro("L_ALPHA")
#undef L_ALPHA
#pragma push_macro("L_ALPHANUM")
#undef L_ALPHANUM
#pragma push_macro("L_DIGIT")
#undef L_DIGIT
#pragma push_macro("L_LOWALPHA")
#undef L_LOWALPHA
#pragma push_macro("L_MARK")
#undef L_MARK
#pragma push_macro("L_PATH")
#undef L_PATH
#pragma push_macro("L_PCHAR")
#undef L_PCHAR
#pragma push_macro("L_UNRESERVED")
#undef L_UNRESERVED
#pragma push_macro("L_UPALPHA")
#undef L_UPALPHA

namespace java {
	namespace net {
		class URI;
	}
}
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
			class UnixFileSystem;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixUriUtils : public ::java::lang::Object {
	$class(UnixUriUtils, 0, ::java::lang::Object)
public:
	UnixUriUtils();
	void init$();
	static int32_t decode(char16_t c);
	static ::java::nio::file::Path* fromUri(::sun::nio::fs::UnixFileSystem* fs, ::java::net::URI* uri);
	static int64_t highMask($String* chars);
	static int64_t highMask(char16_t first, char16_t last);
	static int64_t lowMask($String* chars);
	static int64_t lowMask(char16_t first, char16_t last);
	static bool match(char16_t c, int64_t lowMask, int64_t highMask);
	static ::java::net::URI* toUri(::sun::nio::fs::UnixPath* up);
	static bool $assertionsDisabled;
	static int64_t L_DIGIT;
	static const int64_t H_DIGIT = (int64_t)0;
	static const int64_t L_UPALPHA = (int64_t)0;
	static int64_t H_UPALPHA;
	static const int64_t L_LOWALPHA = (int64_t)0;
	static int64_t H_LOWALPHA;
	static const int64_t L_ALPHA = 0; // L_LOWALPHA | L_UPALPHA
	static int64_t H_ALPHA;
	static int64_t L_ALPHANUM;
	static int64_t H_ALPHANUM;
	static int64_t L_MARK;
	static int64_t H_MARK;
	static int64_t L_UNRESERVED;
	static int64_t H_UNRESERVED;
	static int64_t L_PCHAR;
	static int64_t H_PCHAR;
	static int64_t L_PATH;
	static int64_t H_PATH;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("H_ALPHA")
#pragma pop_macro("H_ALPHANUM")
#pragma pop_macro("H_DIGIT")
#pragma pop_macro("H_LOWALPHA")
#pragma pop_macro("H_MARK")
#pragma pop_macro("H_PATH")
#pragma pop_macro("H_PCHAR")
#pragma pop_macro("H_UNRESERVED")
#pragma pop_macro("H_UPALPHA")
#pragma pop_macro("L_ALPHA")
#pragma pop_macro("L_ALPHANUM")
#pragma pop_macro("L_DIGIT")
#pragma pop_macro("L_LOWALPHA")
#pragma pop_macro("L_MARK")
#pragma pop_macro("L_PATH")
#pragma pop_macro("L_PCHAR")
#pragma pop_macro("L_UNRESERVED")
#pragma pop_macro("L_UPALPHA")

#endif // _sun_nio_fs_UnixUriUtils_h_