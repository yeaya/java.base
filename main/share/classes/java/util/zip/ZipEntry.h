#ifndef _java_util_zip_ZipEntry_h_
#define _java_util_zip_ZipEntry_h_
//$ class java.util.zip.ZipEntry
//$ extends java.util.zip.ZipConstants
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/zip/ZipConstants.h>

#pragma push_macro("DEFLATED")
#undef DEFLATED
#pragma push_macro("STORED")
#undef STORED
#pragma push_macro("UPPER_DOSTIME_BOUND")
#undef UPPER_DOSTIME_BOUND

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileTime;
			}
		}
	}
}
namespace java {
	namespace time {
		class LocalDateTime;
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export ZipEntry : public ::java::util::zip::ZipConstants, public ::java::lang::Cloneable {
	$class(ZipEntry, $NO_CLASS_INIT, ::java::util::zip::ZipConstants, ::java::lang::Cloneable)
public:
	ZipEntry();
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	void init$($String* name);
	void init$(::java::util::zip::ZipEntry* e);
	virtual $Object* clone() override;
	virtual $String* getComment();
	virtual int64_t getCompressedSize();
	virtual int64_t getCrc();
	virtual ::java::nio::file::attribute::FileTime* getCreationTime();
	virtual $bytes* getExtra();
	virtual ::java::nio::file::attribute::FileTime* getLastAccessTime();
	virtual ::java::nio::file::attribute::FileTime* getLastModifiedTime();
	virtual int32_t getMethod();
	virtual $String* getName();
	virtual int64_t getSize();
	virtual int64_t getTime();
	virtual ::java::time::LocalDateTime* getTimeLocal();
	virtual int32_t hashCode() override;
	virtual bool isDirectory();
	virtual void setComment($String* comment);
	virtual void setCompressedSize(int64_t csize);
	virtual void setCrc(int64_t crc);
	virtual ::java::util::zip::ZipEntry* setCreationTime(::java::nio::file::attribute::FileTime* time);
	virtual void setExtra($bytes* extra);
	virtual void setExtra0($bytes* extra, bool doZIP64, bool isLOC);
	virtual ::java::util::zip::ZipEntry* setLastAccessTime(::java::nio::file::attribute::FileTime* time);
	virtual ::java::util::zip::ZipEntry* setLastModifiedTime(::java::nio::file::attribute::FileTime* time);
	virtual void setMethod(int32_t method);
	virtual void setSize(int64_t size);
	virtual void setTime(int64_t time);
	virtual void setTimeLocal(::java::time::LocalDateTime* time);
	virtual $String* toString() override;
	$String* name = nullptr;
	int64_t xdostime = 0;
	::java::nio::file::attribute::FileTime* mtime = nullptr;
	::java::nio::file::attribute::FileTime* atime = nullptr;
	::java::nio::file::attribute::FileTime* ctime = nullptr;
	int64_t crc = 0;
	int64_t size = 0;
	int64_t csize = 0;
	bool csizeSet = false;
	int32_t method = 0;
	int32_t flag = 0;
	$bytes* extra = nullptr;
	$String* comment = nullptr;
	int32_t extraAttributes = 0;
	static const int32_t STORED = 0;
	static const int32_t DEFLATED = 8;
	static const int64_t DOSTIME_BEFORE_1980 = 2162688; // (1 << 21) | (1 << 16)
	static const int64_t UPPER_DOSTIME_BOUND = 4036608000000; // (int64_t)128 * 365 * 24 * 60 * 60 * 1000
};

		} // zip
	} // util
} // java

#pragma pop_macro("DEFLATED")
#pragma pop_macro("STORED")
#pragma pop_macro("UPPER_DOSTIME_BOUND")

#endif // _java_util_zip_ZipEntry_h_