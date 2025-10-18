#ifndef _sun_nio_fs_UnixChannelFactory_h_
#define _sun_nio_fs_UnixChannelFactory_h_
//$ class sun.nio.fs.UnixChannelFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class UnixChannelFactory$Flags;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixChannelFactory : public ::java::lang::Object {
	$class(UnixChannelFactory, 0, ::java::lang::Object)
public:
	UnixChannelFactory();
	void init$();
	static ::java::nio::channels::AsynchronousFileChannel* newAsynchronousFileChannel(::sun::nio::fs::UnixPath* path, ::java::util::Set* options, int32_t mode, ::sun::nio::ch::ThreadPool* pool);
	static ::java::nio::channels::FileChannel* newFileChannel(int32_t dfd, ::sun::nio::fs::UnixPath* path, $String* pathForPermissionCheck, ::java::util::Set* options, int32_t mode);
	static ::java::nio::channels::FileChannel* newFileChannel(::sun::nio::fs::UnixPath* path, ::java::util::Set* options, int32_t mode);
	static ::java::io::FileDescriptor* open(int32_t dfd, ::sun::nio::fs::UnixPath* path, $String* pathForPermissionCheck, ::sun::nio::fs::UnixChannelFactory$Flags* flags, int32_t mode);
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixChannelFactory_h_