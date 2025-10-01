#ifndef _java_util_zip_ZipFile_h_
#define _java_util_zip_ZipFile_h_
//$ class java.util.zip.ZipFile
//$ extends java.util.zip.ZipConstants
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>
#include <java/util/zip/ZipEntry.h>

#pragma push_macro("STORED")
#undef STORED
#pragma push_macro("DEFLATED")
#undef DEFLATED
#pragma push_macro("OPEN_DELETE")
#undef OPEN_DELETE
#pragma push_macro("OPEN_READ")
#undef OPEN_READ

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class List;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
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
			class ZipFile$CleanableResource;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export ZipFile : public ::java::util::zip::ZipConstants, public ::java::io::Closeable {
	$class(ZipFile, 0, ::java::util::zip::ZipConstants, ::java::io::Closeable)
public:
	ZipFile();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name);
	void init$(::java::io::File* file, int32_t mode);
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, int32_t mode, ::java::nio::charset::Charset* charset);
	void init$($String* name, ::java::nio::charset::Charset* charset);
	void init$(::java::io::File* file, ::java::nio::charset::Charset* charset);
	virtual void close() override;
	void ensureOpen();
	void ensureOpenOrZipException();
	virtual ::java::util::Enumeration* entries();
	::java::util::stream::Stream* entryNameStream();
	virtual $String* getComment();
	virtual ::java::util::zip::ZipEntry* getEntry($String* name);
	$String* getEntryName(int32_t pos);
	virtual ::java::io::InputStream* getInputStream(::java::util::zip::ZipEntry* entry);
	::java::util::List* getManifestAndSignatureRelatedFiles();
	$String* getManifestName(bool onlyIfSignatureRelatedFiles);
	int32_t getManifestNum();
	$ints* getMetaInfVersions();
	virtual $String* getName();
	::java::util::zip::ZipEntry* getZipEntry($String* name, int32_t pos);
	::java::util::Enumeration* jarEntries();
	::java::util::stream::Stream* jarStream();
	::java::util::jar::JarEntry* lambda$jarStream$1(int32_t pos);
	::java::util::zip::ZipEntry* lambda$stream$0(int32_t pos);
	virtual int32_t size();
	virtual ::java::util::stream::Stream* stream();
	virtual $String* toString() override;
	$String* name = nullptr;
	$volatile(bool) closeRequested = false;
	::java::util::zip::ZipFile$CleanableResource* res = nullptr;
	static const int32_t STORED = ::java::util::zip::ZipEntry::STORED;
	static const int32_t DEFLATED = ::java::util::zip::ZipEntry::DEFLATED;
	static const int32_t OPEN_READ = 1;
	static const int32_t OPEN_DELETE = 4;
	$String* lastEntryName = nullptr;
	int32_t lastEntryPos = 0;
	static bool isWindows;
};

		} // zip
	} // util
} // java

#pragma pop_macro("STORED")
#pragma pop_macro("DEFLATED")
#pragma pop_macro("OPEN_DELETE")
#pragma pop_macro("OPEN_READ")

#endif // _java_util_zip_ZipFile_h_