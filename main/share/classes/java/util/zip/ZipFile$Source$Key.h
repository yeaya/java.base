#ifndef _java_util_zip_ZipFile$Source$Key_h_
#define _java_util_zip_ZipFile$Source$Key_h_
//$ class java.util.zip.ZipFile$Source$Key
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
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
namespace java {
	namespace util {
		namespace zip {
			class ZipCoder;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipFile$Source$Key : public ::java::lang::Object {
	$class(ZipFile$Source$Key, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ZipFile$Source$Key();
	void init$(::java::io::File* file, ::java::nio::file::attribute::BasicFileAttributes* attrs, ::java::util::zip::ZipCoder* zc);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	::java::nio::file::attribute::BasicFileAttributes* attrs = nullptr;
	::java::io::File* file = nullptr;
	bool utf8 = false;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipFile$Source$Key_h_