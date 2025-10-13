#ifndef _java_util_zip_ZipFile$Source_h_
#define _java_util_zip_ZipFile$Source_h_
//$ class java.util.zip.ZipFile$Source
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUF_SIZE")
#undef BUF_SIZE
#pragma push_macro("EMPTY_META_VERSIONS")
#undef EMPTY_META_VERSIONS
#pragma push_macro("JUJA")
#undef JUJA
#pragma push_macro("META_INF_LEN")
#undef META_INF_LEN
#pragma push_macro("ZIP_ENDCHAIN")
#undef ZIP_ENDCHAIN

namespace java {
	namespace io {
		class File;
		class RandomAccessFile;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipCoder;
			class ZipFile$Source$End;
			class ZipFile$Source$Key;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaUtilJarAccess;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipFile$Source : public ::java::lang::Object {
	$class(ZipFile$Source, 0, ::java::lang::Object)
public:
	ZipFile$Source();
	void init$(::java::util::zip::ZipFile$Source$Key* key, bool toDelete, ::java::util::zip::ZipCoder* zc);
	int32_t checkAndAddEntry(int32_t pos, int32_t index);
	void close();
	static int32_t countCENHeaders($bytes* cen, int32_t size);
	::java::util::zip::ZipFile$Source$End* findEND();
	static ::java::util::zip::ZipFile$Source* get(::java::io::File* file, bool toDelete, ::java::util::zip::ZipCoder* zc);
	int32_t getEntryHash(int32_t index);
	int32_t getEntryNext(int32_t index);
	int32_t getEntryPos(int32_t index);
	int32_t getEntryPos($String* name, bool addSlash);
	int32_t getMetaVersion(int32_t off, int32_t len);
	void initCEN(int32_t knownTotal);
	bool isManifestName(int32_t off, int32_t len);
	static bool isMetaName($bytes* name, int32_t off, int32_t len);
	bool isSignatureRelated(int32_t off, int32_t len);
	int32_t nextEntryPos(int32_t pos, int32_t entryPos, int32_t nlen);
	int32_t readAt($bytes* buf, int32_t off, int32_t len, int64_t pos);
	int32_t readFullyAt($bytes* buf, int32_t off, int32_t len, int64_t pos);
	static void release(::java::util::zip::ZipFile$Source* src);
	static void zerror($String* msg);
	::java::util::zip::ZipCoder* zipCoderForPos(int32_t pos);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaUtilJarAccess* JUJA;
	static const int32_t META_INF_LEN = 9;
	static $ints* EMPTY_META_VERSIONS;
	::java::util::zip::ZipFile$Source$Key* key = nullptr;
	::java::util::zip::ZipCoder* zc = nullptr;
	int32_t refs = 0;
	::java::io::RandomAccessFile* zfile = nullptr;
	$bytes* cen = nullptr;
	int64_t locpos = 0;
	$bytes* comment = nullptr;
	int32_t manifestPos = 0;
	int32_t manifestNum = 0;
	$ints* signatureMetaNames = nullptr;
	$ints* metaVersions = nullptr;
	bool startsWithLoc = false;
	$ints* entries = nullptr;
	static const int32_t ZIP_ENDCHAIN = (-1);
	int32_t total = 0;
	$ints* table = nullptr;
	int32_t tablelen = 0;
	static ::java::util::HashMap* files;
	static const int32_t BUF_SIZE = 8192;
};

		} // zip
	} // util
} // java

#pragma pop_macro("BUF_SIZE")
#pragma pop_macro("EMPTY_META_VERSIONS")
#pragma pop_macro("JUJA")
#pragma pop_macro("META_INF_LEN")
#pragma pop_macro("ZIP_ENDCHAIN")

#endif // _java_util_zip_ZipFile$Source_h_