#ifndef _jdk_internal_jrtfs_JrtFileAttributeView$AttrID_h_
#define _jdk_internal_jrtfs_JrtFileAttributeView$AttrID_h_
//$ class jdk.internal.jrtfs.JrtFileAttributeView$AttrID
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileAttributeView$AttrID : public ::java::lang::Enum {
	$class(JrtFileAttributeView$AttrID, 0, ::java::lang::Enum)
public:
	JrtFileAttributeView$AttrID();
	static $Array<::jdk::internal::jrtfs::JrtFileAttributeView$AttrID>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* valueOf($String* name);
	static $Array<::jdk::internal::jrtfs::JrtFileAttributeView$AttrID>* values();
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* size;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* creationTime;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* lastAccessTime;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* lastModifiedTime;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* isDirectory;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* isRegularFile;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* isSymbolicLink;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* isOther;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* fileKey;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* compressedSize;
	static ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID* extension;
	static $Array<::jdk::internal::jrtfs::JrtFileAttributeView$AttrID>* $VALUES;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtFileAttributeView$AttrID_h_