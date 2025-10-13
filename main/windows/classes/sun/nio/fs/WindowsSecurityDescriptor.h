#ifndef _sun_nio_fs_WindowsSecurityDescriptor_h_
#define _sun_nio_fs_WindowsSecurityDescriptor_h_
//$ class sun.nio.fs.WindowsSecurityDescriptor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NULL_DESCRIPTOR")
#undef NULL_DESCRIPTOR
#pragma push_macro("OFFSETOF_ACCESS_MASK")
#undef OFFSETOF_ACCESS_MASK
#pragma push_macro("OFFSETOF_FLAGS")
#undef OFFSETOF_FLAGS
#pragma push_macro("OFFSETOF_SID")
#undef OFFSETOF_SID
#pragma push_macro("OFFSETOF_TYPE")
#undef OFFSETOF_TYPE
#pragma push_macro("SIZEOF_ACCESS_ALLOWED_ACE")
#undef SIZEOF_ACCESS_ALLOWED_ACE
#pragma push_macro("SIZEOF_ACCESS_DENIED_ACE")
#undef SIZEOF_ACCESS_DENIED_ACE
#pragma push_macro("SIZEOF_ACL")
#undef SIZEOF_ACL
#pragma push_macro("SIZEOF_SECURITY_DESCRIPTOR")
#undef SIZEOF_SECURITY_DESCRIPTOR

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class AclEntry;
				class FileAttribute;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
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
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsSecurityDescriptor : public ::java::lang::Object {
	$class(WindowsSecurityDescriptor, 0, ::java::lang::Object)
public:
	WindowsSecurityDescriptor();
	void init$();
	void init$(::java::util::List* acl);
	virtual int64_t address();
	static ::sun::nio::fs::WindowsSecurityDescriptor* create(::java::util::List* acl);
	static ::java::nio::file::attribute::AclEntry* decode(int64_t aceAddress);
	static void encode(::java::nio::file::attribute::AclEntry* ace, int64_t sidAddress, int64_t aclAddress);
	static ::sun::nio::fs::WindowsSecurityDescriptor* fromAttribute($Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::util::List* getAcl(int64_t pSecurityDescriptor);
	virtual void release();
	static ::jdk::internal::misc::Unsafe* unsafe;
	static const int16_t SIZEOF_ACL = 8;
	static const int16_t SIZEOF_ACCESS_ALLOWED_ACE = 12;
	static const int16_t SIZEOF_ACCESS_DENIED_ACE = 12;
	static const int16_t SIZEOF_SECURITY_DESCRIPTOR = 20;
	static const int16_t OFFSETOF_TYPE = 0;
	static const int16_t OFFSETOF_FLAGS = 1;
	static const int16_t OFFSETOF_ACCESS_MASK = 4;
	static const int16_t OFFSETOF_SID = 8;
	static ::sun::nio::fs::WindowsSecurityDescriptor* NULL_DESCRIPTOR;
	::java::util::List* sidList = nullptr;
	::sun::nio::fs::NativeBuffer* aclBuffer = nullptr;
	::sun::nio::fs::NativeBuffer* sdBuffer = nullptr;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("NULL_DESCRIPTOR")
#pragma pop_macro("OFFSETOF_ACCESS_MASK")
#pragma pop_macro("OFFSETOF_FLAGS")
#pragma pop_macro("OFFSETOF_SID")
#pragma pop_macro("OFFSETOF_TYPE")
#pragma pop_macro("SIZEOF_ACCESS_ALLOWED_ACE")
#pragma pop_macro("SIZEOF_ACCESS_DENIED_ACE")
#pragma pop_macro("SIZEOF_ACL")
#pragma pop_macro("SIZEOF_SECURITY_DESCRIPTOR")

#endif // _sun_nio_fs_WindowsSecurityDescriptor_h_