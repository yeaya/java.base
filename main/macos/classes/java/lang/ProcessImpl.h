#ifndef _java_lang_ProcessImpl_h_
#define _java_lang_ProcessImpl_h_
//$ class java.lang.ProcessImpl
//$ extends java.lang.Process

#include <java/lang/Array.h>
#include <java/lang/Process.h>

#pragma push_macro("SUPPORTS_NORMAL_TERMINATION")
#undef SUPPORTS_NORMAL_TERMINATION

namespace java {
	namespace io {
		class FileDescriptor;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Integer;
		class ProcessBuilder$Redirect;
		class ProcessHandle;
		class ProcessHandleImpl;
		class ProcessImpl$LaunchMechanism;
		class ProcessImpl$Platform;
		class Throwable;
		class Void;
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
	void init$($bytes* prog, $bytes* argBlock, int32_t argc, $bytes* envBlock, int32_t envc, $bytes* dir, $ints* fds, bool forceNullOutputStream, bool redirectErrorStream);
	void destroy(bool force);
	virtual void destroy() override;
	virtual ::java::lang::Process* destroyForcibly() override;
	virtual int32_t exitValue() override;
	int32_t forkAndExec(int32_t mode, $bytes* helperpath, $bytes* prog, $bytes* argBlock, int32_t argc, $bytes* envBlock, int32_t envc, $bytes* dir, $ints* fds, bool redirectErrorStream);
	virtual ::java::io::InputStream* getErrorStream() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	static void init();
	void initStreams($ints* fds, bool forceNullOutputStream);
	virtual bool isAlive() override;
	$Object* lambda$initStreams$1(::java::lang::Integer* exitcode, $Throwable* throwable);
	$Object* lambda$initStreams$2(::java::lang::Integer* exitcode, $Throwable* throwable);
	::java::lang::Void* lambda$new$0($ints* fds, bool forceNullOutputStream);
	::java::lang::Process* lambda$onExit$3(::java::lang::Integer* unusedExitStatus, $Throwable* unusedThrowable);
	static ::java::io::FileDescriptor* newFileDescriptor(int32_t fd);
	virtual ::java::util::concurrent::CompletableFuture* onExit() override;
	virtual int64_t pid() override;
	static ::java::lang::Process* start($StringArray* cmdarray, ::java::util::Map* environment, $String* dir, $Array<::java::lang::ProcessBuilder$Redirect>* redirects, bool redirectErrorStream);
	virtual bool supportsNormalTermination() override;
	static $bytes* toCString($String* s);
	virtual ::java::lang::ProcessHandle* toHandle() override;
	virtual $String* toString() override;
	virtual int32_t waitFor() override;
	virtual bool waitFor(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	static const bool SUPPORTS_NORMAL_TERMINATION = true;
	int32_t pid$ = 0;
	::java::lang::ProcessHandleImpl* processHandle = nullptr;
	int32_t exitcode = 0;
	bool hasExited = false;
	::java::io::OutputStream* stdin = nullptr;
	::java::io::InputStream* stdout = nullptr;
	::java::io::InputStream* stderr = nullptr;
	static ::java::lang::ProcessImpl$Platform* platform;
	static ::java::lang::ProcessImpl$LaunchMechanism* launchMechanism;
	static $bytes* helperpath;
};

	} // lang
} // java

#pragma pop_macro("SUPPORTS_NORMAL_TERMINATION")

#endif // _java_lang_ProcessImpl_h_