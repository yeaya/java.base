#ifndef _java_util_zip_ZipOutputStream$XEntry_h_
#define _java_util_zip_ZipOutputStream$XEntry_h_
//$ class java.util.zip.ZipOutputStream$XEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipOutputStream$XEntry : public ::java::lang::Object {
	$class(ZipOutputStream$XEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ZipOutputStream$XEntry();
	void init$(::java::util::zip::ZipEntry* entry, int64_t offset);
	::java::util::zip::ZipEntry* entry = nullptr;
	int64_t offset = 0;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipOutputStream$XEntry_h_