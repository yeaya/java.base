#ifndef _sun_nio_fs_Util_h_
#define _sun_nio_fs_Util_h_
//$ class sun.nio.fs.Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class LinkOption;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class Util : public ::java::lang::Object {
	$class(Util, 0, ::java::lang::Object)
public:
	Util();
	void init$();
	static bool followLinks($Array<::java::nio::file::LinkOption>* options);
	static ::java::nio::charset::Charset* jnuEncoding();
	static ::java::util::Set* newSet($ObjectArray* elements);
	static ::java::util::Set* newSet(::java::util::Set* other, $ObjectArray* elements);
	static $StringArray* split($String* s, char16_t c);
	static $bytes* toBytes($String* s);
	using ::java::lang::Object::toString;
	static $String* toString($bytes* bytes);
	static ::java::nio::charset::Charset* jnuEncoding$;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_Util_h_