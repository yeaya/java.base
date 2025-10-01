#ifndef _java_lang_Process_h_
#define _java_lang_Process_h_
//$ class java.lang.Process
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class BufferedReader;
		class BufferedWriter;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class ProcessHandle;
		class ProcessHandle$Info;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
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
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {

class $export Process : public ::java::lang::Object {
	$class(Process, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Process();
	void init$();
	virtual ::java::util::stream::Stream* children();
	virtual ::java::util::stream::Stream* descendants();
	virtual void destroy() {}
	virtual ::java::lang::Process* destroyForcibly();
	::java::io::BufferedReader* errorReader();
	::java::io::BufferedReader* errorReader(::java::nio::charset::Charset* charset);
	virtual int32_t exitValue() {return 0;}
	virtual ::java::io::InputStream* getErrorStream() {return nullptr;}
	virtual ::java::io::InputStream* getInputStream() {return nullptr;}
	virtual ::java::io::OutputStream* getOutputStream() {return nullptr;}
	bool hasExited();
	virtual ::java::lang::ProcessHandle$Info* info();
	::java::io::BufferedReader* inputReader();
	::java::io::BufferedReader* inputReader(::java::nio::charset::Charset* charset);
	virtual bool isAlive();
	virtual ::java::util::concurrent::CompletableFuture* onExit();
	::java::io::BufferedWriter* outputWriter();
	::java::io::BufferedWriter* outputWriter(::java::nio::charset::Charset* charset);
	virtual int64_t pid();
	virtual bool supportsNormalTermination();
	virtual ::java::lang::ProcessHandle* toHandle();
	virtual int32_t waitFor() {return 0;}
	virtual bool waitFor(int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	::java::lang::Process* waitForInternal();
	::java::io::BufferedWriter* outputWriter$ = nullptr;
	::java::nio::charset::Charset* outputCharset = nullptr;
	::java::io::BufferedReader* inputReader$ = nullptr;
	::java::nio::charset::Charset* inputCharset = nullptr;
	::java::io::BufferedReader* errorReader$ = nullptr;
	::java::nio::charset::Charset* errorCharset = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Process_h_