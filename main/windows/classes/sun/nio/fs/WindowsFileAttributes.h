#ifndef _sun_nio_fs_WindowsFileAttributes_h_
#define _sun_nio_fs_WindowsFileAttributes_h_
//$ class sun.nio.fs.WindowsFileAttributes
//$ extends java.nio.file.attribute.DosFileAttributes

#include <java/nio/file/attribute/DosFileAttributes.h>

#pragma push_macro("SIZEOF_FILE_INFORMATION")
#undef SIZEOF_FILE_INFORMATION
#pragma push_macro("OFFSETOF_FILE_INFORMATION_SIZELOW")
#undef OFFSETOF_FILE_INFORMATION_SIZELOW
#pragma push_macro("OFFSETOF_FILE_INFORMATION_INDEXHIGH")
#undef OFFSETOF_FILE_INFORMATION_INDEXHIGH
#pragma push_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_SIZEHIGH")
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_SIZEHIGH
#pragma push_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_SIZELOW")
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_SIZELOW
#pragma push_macro("WINDOWS_EPOCH_IN_100NS")
#undef WINDOWS_EPOCH_IN_100NS
#pragma push_macro("OFFSETOF_FILE_INFORMATION_ATTRIBUTES")
#undef OFFSETOF_FILE_INFORMATION_ATTRIBUTES
#pragma push_macro("SIZEOF_FILE_ATTRIBUTE_DATA")
#undef SIZEOF_FILE_ATTRIBUTE_DATA
#pragma push_macro("OFFSETOF_FIND_DATA_RESERVED0")
#undef OFFSETOF_FIND_DATA_RESERVED0
#pragma push_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_LASTACCESSTIME")
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_LASTACCESSTIME
#pragma push_macro("OFFSETOF_FILE_INFORMATION_SIZEHIGH")
#undef OFFSETOF_FILE_INFORMATION_SIZEHIGH
#pragma push_macro("OFFSETOF_FILE_INFORMATION_CREATETIME")
#undef OFFSETOF_FILE_INFORMATION_CREATETIME
#pragma push_macro("OFFSETOF_FILE_INFORMATION_LASTWRITETIME")
#undef OFFSETOF_FILE_INFORMATION_LASTWRITETIME
#pragma push_macro("OFFSETOF_FILE_INFORMATION_VOLSERIALNUM")
#undef OFFSETOF_FILE_INFORMATION_VOLSERIALNUM
#pragma push_macro("OFFSETOF_FILE_INFORMATION_LASTACCESSTIME")
#undef OFFSETOF_FILE_INFORMATION_LASTACCESSTIME
#pragma push_macro("OFFSETOF_FILE_INFORMATION_INDEXLOW")
#undef OFFSETOF_FILE_INFORMATION_INDEXLOW
#pragma push_macro("OFFSETOF_FIND_DATA_SIZEHIGH")
#undef OFFSETOF_FIND_DATA_SIZEHIGH
#pragma push_macro("OFFSETOF_FIND_DATA_SIZELOW")
#undef OFFSETOF_FIND_DATA_SIZELOW
#pragma push_macro("OFFSETOF_FIND_DATA_LASTWRITETIME")
#undef OFFSETOF_FIND_DATA_LASTWRITETIME
#pragma push_macro("OFFSETOF_FIND_DATA_LASTACCESSTIME")
#undef OFFSETOF_FIND_DATA_LASTACCESSTIME
#pragma push_macro("OFFSETOF_FIND_DATA_CREATETIME")
#undef OFFSETOF_FIND_DATA_CREATETIME
#pragma push_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_CREATETIME")
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_CREATETIME
#pragma push_macro("WINDOWS_EPOCH_IN_MICROS")
#undef WINDOWS_EPOCH_IN_MICROS
#pragma push_macro("OFFSETOF_FIND_DATA_ATTRIBUTES")
#undef OFFSETOF_FIND_DATA_ATTRIBUTES
#pragma push_macro("SIZEOF_FIND_DATA")
#undef SIZEOF_FIND_DATA
#pragma push_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES")
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES
#pragma push_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_LASTWRITETIME")
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_LASTWRITETIME

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileTime;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class NativeBuffer;
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileAttributes : public ::java::nio::file::attribute::DosFileAttributes {
	$class(WindowsFileAttributes, 0, ::java::nio::file::attribute::DosFileAttributes)
public:
	WindowsFileAttributes();
	void init$(int32_t fileAttrs, int64_t creationTime, int64_t lastAccessTime, int64_t lastWriteTime, int64_t size, int32_t reparseTag, int32_t volSerialNumber, int32_t fileIndexHigh, int32_t fileIndexLow);
	virtual int32_t attributes();
	virtual ::java::nio::file::attribute::FileTime* creationTime() override;
	virtual int32_t fileIndexHigh();
	virtual int32_t fileIndexLow();
	virtual $Object* fileKey() override;
	static ::sun::nio::fs::WindowsFileAttributes* fromFileAttributeData(int64_t address, int32_t reparseTag);
	static ::sun::nio::fs::WindowsFileAttributes* fromFileInformation(int64_t address, int32_t reparseTag);
	static ::sun::nio::fs::WindowsFileAttributes* fromFindData(int64_t address);
	static ::sun::nio::fs::WindowsFileAttributes* get(::sun::nio::fs::WindowsPath* path, bool followLinks);
	static ::sun::nio::fs::NativeBuffer* getBufferForFindData();
	virtual bool isArchive() override;
	virtual bool isDirectory() override;
	virtual bool isDirectoryLink();
	virtual bool isHidden() override;
	virtual bool isOther() override;
	virtual bool isReadOnly() override;
	virtual bool isRegularFile() override;
	static bool isReparsePoint(int32_t attributes);
	virtual bool isReparsePoint();
	static bool isSameFile(::sun::nio::fs::WindowsFileAttributes* attrs1, ::sun::nio::fs::WindowsFileAttributes* attrs2);
	virtual bool isSymbolicLink() override;
	virtual bool isSystem() override;
	virtual bool isUnixDomainSocket();
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() override;
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() override;
	static ::sun::nio::fs::WindowsFileAttributes* readAttributes(int64_t handle);
	virtual int64_t size() override;
	static ::java::nio::file::attribute::FileTime* toFileTime(int64_t time);
	static int64_t toWindowsTime(::java::nio::file::attribute::FileTime* time);
	virtual int32_t volSerialNumber();
	static ::jdk::internal::misc::Unsafe* unsafe;
	static const int16_t SIZEOF_FILE_INFORMATION = 52;
	static const int16_t OFFSETOF_FILE_INFORMATION_ATTRIBUTES = 0;
	static const int16_t OFFSETOF_FILE_INFORMATION_CREATETIME = 4;
	static const int16_t OFFSETOF_FILE_INFORMATION_LASTACCESSTIME = 12;
	static const int16_t OFFSETOF_FILE_INFORMATION_LASTWRITETIME = 20;
	static const int16_t OFFSETOF_FILE_INFORMATION_VOLSERIALNUM = 28;
	static const int16_t OFFSETOF_FILE_INFORMATION_SIZEHIGH = 32;
	static const int16_t OFFSETOF_FILE_INFORMATION_SIZELOW = 36;
	static const int16_t OFFSETOF_FILE_INFORMATION_INDEXHIGH = 44;
	static const int16_t OFFSETOF_FILE_INFORMATION_INDEXLOW = 48;
	static const int16_t SIZEOF_FILE_ATTRIBUTE_DATA = 36;
	static const int16_t OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES = 0;
	static const int16_t OFFSETOF_FILE_ATTRIBUTE_DATA_CREATETIME = 4;
	static const int16_t OFFSETOF_FILE_ATTRIBUTE_DATA_LASTACCESSTIME = 12;
	static const int16_t OFFSETOF_FILE_ATTRIBUTE_DATA_LASTWRITETIME = 20;
	static const int16_t OFFSETOF_FILE_ATTRIBUTE_DATA_SIZEHIGH = 28;
	static const int16_t OFFSETOF_FILE_ATTRIBUTE_DATA_SIZELOW = 32;
	static const int16_t SIZEOF_FIND_DATA = 592;
	static const int16_t OFFSETOF_FIND_DATA_ATTRIBUTES = 0;
	static const int16_t OFFSETOF_FIND_DATA_CREATETIME = 4;
	static const int16_t OFFSETOF_FIND_DATA_LASTACCESSTIME = 12;
	static const int16_t OFFSETOF_FIND_DATA_LASTWRITETIME = 20;
	static const int16_t OFFSETOF_FIND_DATA_SIZEHIGH = 28;
	static const int16_t OFFSETOF_FIND_DATA_SIZELOW = 32;
	static const int16_t OFFSETOF_FIND_DATA_RESERVED0 = 36;
	static const int64_t WINDOWS_EPOCH_IN_MICROS = (int64_t)0xFFD6A169B779C000;
	static const int64_t WINDOWS_EPOCH_IN_100NS = (int64_t)0xFE624E212AC18000;
	static bool ensureAccurateMetadata;
	int32_t fileAttrs = 0;
	int64_t creationTime$ = 0;
	int64_t lastAccessTime$ = 0;
	int64_t lastWriteTime = 0;
	int64_t size$ = 0;
	int32_t reparseTag = 0;
	int32_t volSerialNumber$ = 0;
	int32_t fileIndexHigh$ = 0;
	int32_t fileIndexLow$ = 0;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("SIZEOF_FILE_INFORMATION")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_SIZELOW")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_INDEXHIGH")
#pragma pop_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_SIZEHIGH")
#pragma pop_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_SIZELOW")
#pragma pop_macro("WINDOWS_EPOCH_IN_100NS")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_ATTRIBUTES")
#pragma pop_macro("SIZEOF_FILE_ATTRIBUTE_DATA")
#pragma pop_macro("OFFSETOF_FIND_DATA_RESERVED0")
#pragma pop_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_LASTACCESSTIME")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_SIZEHIGH")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_CREATETIME")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_LASTWRITETIME")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_VOLSERIALNUM")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_LASTACCESSTIME")
#pragma pop_macro("OFFSETOF_FILE_INFORMATION_INDEXLOW")
#pragma pop_macro("OFFSETOF_FIND_DATA_SIZEHIGH")
#pragma pop_macro("OFFSETOF_FIND_DATA_SIZELOW")
#pragma pop_macro("OFFSETOF_FIND_DATA_LASTWRITETIME")
#pragma pop_macro("OFFSETOF_FIND_DATA_LASTACCESSTIME")
#pragma pop_macro("OFFSETOF_FIND_DATA_CREATETIME")
#pragma pop_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_CREATETIME")
#pragma pop_macro("WINDOWS_EPOCH_IN_MICROS")
#pragma pop_macro("OFFSETOF_FIND_DATA_ATTRIBUTES")
#pragma pop_macro("SIZEOF_FIND_DATA")
#pragma pop_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES")
#pragma pop_macro("OFFSETOF_FILE_ATTRIBUTE_DATA_LASTWRITETIME")

#endif // _sun_nio_fs_WindowsFileAttributes_h_