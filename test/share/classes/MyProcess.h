#ifndef _MyProcess_h_
#define _MyProcess_h_
//$ class MyProcess
//$ extends java.lang.Process

#include <java/lang/Process.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class ProcessHandle;
	}
}

class MyProcess : public ::java::lang::Process {
	$class(MyProcess, $NO_CLASS_INIT, ::java::lang::Process)
public:
	MyProcess();
	void init$(::java::lang::Process* impl);
	virtual void destroy() override;
	virtual int32_t exitValue() override;
	virtual ::java::io::InputStream* getErrorStream() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual ::java::lang::ProcessHandle* toHandle() override;
	using ::java::lang::Process::waitFor;
	virtual int32_t waitFor() override;
	::java::lang::Process* impl = nullptr;
};

#endif // _MyProcess_h_