#ifndef _jdk_internal_platform_CgroupUtil_h_
#define _jdk_internal_platform_CgroupUtil_h_
//$ class jdk.internal.platform.CgroupUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class BufferedReader;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace security {
		class PrivilegedActionException;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace platform {
			class CgroupSubsystemController;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $import CgroupUtil : public ::java::lang::Object {
	$class(CgroupUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CgroupUtil();
	void init$();
	static ::java::util::List* lambda$readAllLinesPrivileged$2(::java::nio::file::Path* path);
	static ::java::util::stream::Stream* lambda$readFilePrivileged$0(::java::nio::file::Path* path);
	static ::java::io::BufferedReader* lambda$readStringValue$1(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param);
	static ::java::util::List* readAllLinesPrivileged(::java::nio::file::Path* path);
	static ::java::util::stream::Stream* readFilePrivileged(::java::nio::file::Path* path);
	static $String* readStringValue(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param);
	static void unwrapIOExceptionAndRethrow(::java::security::PrivilegedActionException* pae);
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_CgroupUtil_h_