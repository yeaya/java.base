#ifndef _java_util_zip_ZipFile$1_h_
#define _java_util_zip_ZipFile$1_h_
//$ class java.util.zip.ZipFile$1
//$ extends jdk.internal.access.JavaUtilZipFileAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaUtilZipFileAccess.h>

namespace java {
	namespace util {
		class Enumeration;
		class List;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarFile;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
			class ZipFile;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipFile$1 : public ::jdk::internal::access::JavaUtilZipFileAccess {
	$class(ZipFile$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaUtilZipFileAccess)
public:
	ZipFile$1();
	void init$();
	virtual ::java::util::Enumeration* entries(::java::util::zip::ZipFile* zip) override;
	virtual ::java::util::stream::Stream* entryNameStream(::java::util::zip::ZipFile* zip) override;
	virtual int32_t getExtraAttributes(::java::util::zip::ZipEntry* ze) override;
	virtual ::java::util::List* getManifestAndSignatureRelatedFiles(::java::util::jar::JarFile* jar) override;
	virtual $String* getManifestName(::java::util::jar::JarFile* jar, bool onlyIfHasSignatureRelatedFiles) override;
	virtual int32_t getManifestNum(::java::util::jar::JarFile* jar) override;
	virtual $ints* getMetaInfVersions(::java::util::jar::JarFile* jar) override;
	virtual void setExtraAttributes(::java::util::zip::ZipEntry* ze, int32_t extraAttrs) override;
	virtual bool startsWithLocHeader(::java::util::zip::ZipFile* zip) override;
	virtual ::java::util::stream::Stream* stream(::java::util::zip::ZipFile* zip) override;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipFile$1_h_