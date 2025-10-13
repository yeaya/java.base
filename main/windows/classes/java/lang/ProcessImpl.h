#ifndef _java_lang_ProcessImpl_h_
#define _java_lang_ProcessImpl_h_
//$ class java.lang.ProcessImpl
//$ extends java.lang.Process

#include <java/lang/Array.h>
#include <java/lang/Process.h>

#pragma push_macro("BACKSLASH")
#undef BACKSLASH
#pragma push_macro("DOUBLEQUOTE")
#undef DOUBLEQUOTE
#pragma push_macro("ESCAPE_VERIFICATION")
#undef ESCAPE_VERIFICATION
#pragma push_macro("STILL_ACTIVE")
#undef STILL_ACTIVE
#pragma push_macro("SUPPORTS_NORMAL_TERMINATION")
#undef SUPPORTS_NORMAL_TERMINATION
#pragma push_macro("VERIFICATION_CMD_BAT")
#undef VERIFICATION_CMD_BAT
#pragma push_macro("VERIFICATION_LEGACY")
#undef VERIFICATION_LEGACY
#pragma push_macro("VERIFICATION_WIN32")
#undef VERIFICATION_WIN32
#pragma push_macro("VERIFICATION_WIN32_SAFE")
#undef VERIFICATION_WIN32_SAFE

namespace java {
	namespace io {
		class File;
		class FileOutputStream;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
		class Integer;
		class ProcessBuilder$Redirect;
		class ProcessHandle;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class TimeUnit;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}

namespace java {
	namespace lang {

class ProcessImpl : public ::java::lang::Process {
	$class(ProcessImpl, 0, ::java::lang::Process)
public:
	ProcessImpl();
	void init$($StringArray* cmd, $String* envblock, $String* path, $longs* stdHandles, bool forceNullOutputStream, bool redirectErrorStream);
	static bool closeHandle(int64_t handle);
	static int32_t countLeadingBackslash(int32_t verificationType, ::java::lang::CharSequence* input, int32_t start);
	static int64_t create($String* cmdstr, $String* envblock, $String* dir, $longs* stdHandles, bool redirectErrorStream);
	static $String* createCommandLine(int32_t verificationType, $String* executablePath, $StringArray* cmd);
	virtual void destroy() override;
	virtual ::java::lang::Process* destroyForcibly() override;
	virtual int32_t exitValue() override;
	virtual ::java::io::InputStream* getErrorStream() override;
	static $String* getExecutablePath($String* path);
	static int32_t getExitCodeProcess(int64_t handle);
	virtual ::java::io::InputStream* getInputStream() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	static int32_t getProcessId0(int64_t handle);
	static int32_t getStillActive();
	static $StringArray* getTokensFromCommand($String* command);
	virtual bool isAlive() override;
	bool isExe($String* executablePath);
	static bool isProcessAlive(int64_t handle);
	bool isShellFile($String* executablePath);
	static void lambda$new$0(int64_t local_handle);
	::java::lang::Process* lambda$onExit$1(::java::lang::Integer* exitStatus, $Throwable* unusedThrowable);
	static bool needsEscaping(int32_t verificationType, $String* arg);
	static ::java::io::FileOutputStream* newFileOutputStream(::java::io::File* f, bool append);
	virtual ::java::util::concurrent::CompletableFuture* onExit() override;
	static int64_t openForAtomicAppend($String* path);
	virtual int64_t pid() override;
	$String* quoteString($String* arg);
	static ::java::lang::Process* start($StringArray* cmdarray, ::java::util::Map* environment, $String* dir, $Array<::java::lang::ProcessBuilder$Redirect>* redirects, bool redirectErrorStream);
	virtual bool supportsNormalTermination() override;
	static void terminateProcess(int64_t handle);
	virtual ::java::lang::ProcessHandle* toHandle() override;
	virtual $String* toString() override;
	static $String* unQuote($String* str);
	virtual int32_t waitFor() override;
	virtual bool waitFor(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	static void waitForInterruptibly(int64_t handle);
	static void waitForTimeoutInterruptibly(int64_t handle, int64_t timeoutMillis);
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	static const bool SUPPORTS_NORMAL_TERMINATION = false;
	static const int32_t VERIFICATION_CMD_BAT = 0;
	static const int32_t VERIFICATION_WIN32 = 1;
	static const int32_t VERIFICATION_WIN32_SAFE = 2;
	static const int32_t VERIFICATION_LEGACY = 3;
	static $Array<char16_t, 2>* ESCAPE_VERIFICATION;
	static const char16_t DOUBLEQUOTE = ((char16_t)34);
	static const char16_t BACKSLASH = ((char16_t)92);
	int64_t handle = 0;
	::java::lang::ProcessHandle* processHandle = nullptr;
	::java::io::OutputStream* stdin_stream = nullptr;
	::java::io::InputStream* stdout_stream = nullptr;
	::java::io::InputStream* stderr_stream = nullptr;
	static int32_t STILL_ACTIVE;
};

	} // lang
} // java

#pragma pop_macro("BACKSLASH")
#pragma pop_macro("DOUBLEQUOTE")
#pragma pop_macro("ESCAPE_VERIFICATION")
#pragma pop_macro("STILL_ACTIVE")
#pragma pop_macro("SUPPORTS_NORMAL_TERMINATION")
#pragma pop_macro("VERIFICATION_CMD_BAT")
#pragma pop_macro("VERIFICATION_LEGACY")
#pragma pop_macro("VERIFICATION_WIN32")
#pragma pop_macro("VERIFICATION_WIN32_SAFE")

#endif // _java_lang_ProcessImpl_h_