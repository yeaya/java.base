#ifndef _jdk_internal_misc_FileSystemOption_h_
#define _jdk_internal_misc_FileSystemOption_h_
//$ class jdk.internal.misc.FileSystemOption
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DIRECT")
#undef DIRECT
#pragma push_macro("FILE_TREE")
#undef FILE_TREE
#pragma push_macro("INTERRUPTIBLE")
#undef INTERRUPTIBLE
#pragma push_macro("NOSHARE_DELETE")
#undef NOSHARE_DELETE
#pragma push_macro("NOSHARE_READ")
#undef NOSHARE_READ
#pragma push_macro("NOSHARE_WRITE")
#undef NOSHARE_WRITE
#pragma push_macro("SENSITIVITY_HIGH")
#undef SENSITIVITY_HIGH
#pragma push_macro("SENSITIVITY_LOW")
#undef SENSITIVITY_LOW
#pragma push_macro("SENSITIVITY_MEDIUM")
#undef SENSITIVITY_MEDIUM

namespace java {
	namespace nio {
		namespace file {
			class CopyOption;
			class OpenOption;
			class WatchEvent$Modifier;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class ExtendedOptions$InternalOption;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $export FileSystemOption : public ::java::lang::Object {
	$class(FileSystemOption, 0, ::java::lang::Object)
public:
	FileSystemOption();
	void init$(::sun::nio::fs::ExtendedOptions$InternalOption* option);
	void register$(::java::nio::file::OpenOption* option);
	void register$(::java::nio::file::CopyOption* option);
	void register$(::java::nio::file::WatchEvent$Modifier* option);
	void register$(::java::nio::file::WatchEvent$Modifier* option, Object$* param);
	static ::jdk::internal::misc::FileSystemOption* INTERRUPTIBLE;
	static ::jdk::internal::misc::FileSystemOption* NOSHARE_READ;
	static ::jdk::internal::misc::FileSystemOption* NOSHARE_WRITE;
	static ::jdk::internal::misc::FileSystemOption* NOSHARE_DELETE;
	static ::jdk::internal::misc::FileSystemOption* FILE_TREE;
	static ::jdk::internal::misc::FileSystemOption* DIRECT;
	static ::jdk::internal::misc::FileSystemOption* SENSITIVITY_HIGH;
	static ::jdk::internal::misc::FileSystemOption* SENSITIVITY_MEDIUM;
	static ::jdk::internal::misc::FileSystemOption* SENSITIVITY_LOW;
	::sun::nio::fs::ExtendedOptions$InternalOption* internalOption = nullptr;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("DIRECT")
#pragma pop_macro("FILE_TREE")
#pragma pop_macro("INTERRUPTIBLE")
#pragma pop_macro("NOSHARE_DELETE")
#pragma pop_macro("NOSHARE_READ")
#pragma pop_macro("NOSHARE_WRITE")
#pragma pop_macro("SENSITIVITY_HIGH")
#pragma pop_macro("SENSITIVITY_LOW")
#pragma pop_macro("SENSITIVITY_MEDIUM")

#endif // _jdk_internal_misc_FileSystemOption_h_