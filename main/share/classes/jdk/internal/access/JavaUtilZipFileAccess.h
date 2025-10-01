#ifndef _jdk_internal_access_JavaUtilZipFileAccess_h_
#define _jdk_internal_access_JavaUtilZipFileAccess_h_
//$ interface jdk.internal.access.JavaUtilZipFileAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaUtilZipFileAccess : public ::java::lang::Object {
	$interface(JavaUtilZipFileAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Enumeration* entries(::java::util::zip::ZipFile* zip) {return nullptr;}
	virtual ::java::util::stream::Stream* entryNameStream(::java::util::zip::ZipFile* zip) {return nullptr;}
	virtual int32_t getExtraAttributes(::java::util::zip::ZipEntry* ze) {return 0;}
	virtual ::java::util::List* getManifestAndSignatureRelatedFiles(::java::util::jar::JarFile* zip) {return nullptr;}
	virtual $String* getManifestName(::java::util::jar::JarFile* zip, bool onlyIfSignatureRelatedFiles) {return nullptr;}
	virtual int32_t getManifestNum(::java::util::jar::JarFile* zip) {return 0;}
	virtual $ints* getMetaInfVersions(::java::util::jar::JarFile* zip) {return nullptr;}
	virtual void setExtraAttributes(::java::util::zip::ZipEntry* ze, int32_t extraAttrs) {}
	virtual bool startsWithLocHeader(::java::util::zip::ZipFile* zip) {return false;}
	virtual ::java::util::stream::Stream* stream(::java::util::zip::ZipFile* zip) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaUtilZipFileAccess_h_