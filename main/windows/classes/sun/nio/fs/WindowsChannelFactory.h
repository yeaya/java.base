#ifndef _sun_nio_fs_WindowsChannelFactory_h_
#define _sun_nio_fs_WindowsChannelFactory_h_
//$ class sun.nio.fs.WindowsChannelFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("OPEN_REPARSE_POINT")
#undef OPEN_REPARSE_POINT

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousFileChannel;
			class FileChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class OpenOption;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class ThreadPool;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsChannelFactory$Flags;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsChannelFactory : public ::java::lang::Object {
	$class(WindowsChannelFactory, 0, ::java::lang::Object)
public:
	WindowsChannelFactory();
	void init$();
	static ::java::nio::channels::AsynchronousFileChannel* newAsynchronousFileChannel($String* pathForWindows, $String* pathToCheck, ::java::util::Set* options, int64_t pSecurityDescriptor, ::sun::nio::ch::ThreadPool* pool);
	static ::java::nio::channels::FileChannel* newFileChannel($String* pathForWindows, $String* pathToCheck, ::java::util::Set* options, int64_t pSecurityDescriptor);
	static ::java::io::FileDescriptor* open($String* pathForWindows, $String* pathToCheck, ::sun::nio::fs::WindowsChannelFactory$Flags* flags, int64_t pSecurityDescriptor);
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	static ::java::nio::file::OpenOption* OPEN_REPARSE_POINT;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("OPEN_REPARSE_POINT")

#endif // _sun_nio_fs_WindowsChannelFactory_h_