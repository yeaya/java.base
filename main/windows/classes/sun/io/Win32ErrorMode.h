#ifndef _sun_io_Win32ErrorMode_h_
#define _sun_io_Win32ErrorMode_h_
//$ class sun.io.Win32ErrorMode
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SEM_FAILCRITICALERRORS")
#undef SEM_FAILCRITICALERRORS
#pragma push_macro("SEM_NOGPFAULTERRORBOX")
#undef SEM_NOGPFAULTERRORBOX
#pragma push_macro("SEM_NOOPENFILEERRORBOX")
#undef SEM_NOOPENFILEERRORBOX
#pragma push_macro("SEM_NOALIGNMENTFAULTEXCEPT")
#undef SEM_NOALIGNMENTFAULTEXCEPT

namespace sun {
	namespace io {

class Win32ErrorMode : public ::java::lang::Object {
	$class(Win32ErrorMode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Win32ErrorMode();
	void init$();
	static void initialize();
	static int64_t setErrorMode(int64_t mode);
	static const int64_t SEM_FAILCRITICALERRORS = 1;
	static const int64_t SEM_NOGPFAULTERRORBOX = 2;
	static const int64_t SEM_NOALIGNMENTFAULTEXCEPT = 4;
	static const int64_t SEM_NOOPENFILEERRORBOX = 32768;
};

	} // io
} // sun

#pragma pop_macro("SEM_FAILCRITICALERRORS")
#pragma pop_macro("SEM_NOGPFAULTERRORBOX")
#pragma pop_macro("SEM_NOOPENFILEERRORBOX")
#pragma pop_macro("SEM_NOALIGNMENTFAULTEXCEPT")

#endif // _sun_io_Win32ErrorMode_h_