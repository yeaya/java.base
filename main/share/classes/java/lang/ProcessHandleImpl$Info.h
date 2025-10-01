#ifndef _java_lang_ProcessHandleImpl$Info_h_
#define _java_lang_ProcessHandleImpl$Info_h_
//$ class java.lang.ProcessHandleImpl$Info
//$ extends java.lang.ProcessHandle$Info

#include <java/lang/Array.h>
#include <java/lang/ProcessHandle$Info.h>

namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {

class ProcessHandleImpl$Info : public ::java::lang::ProcessHandle$Info {
	$class(ProcessHandleImpl$Info, 0, ::java::lang::ProcessHandle$Info)
public:
	ProcessHandleImpl$Info();
	void init$();
	virtual ::java::util::Optional* arguments() override;
	virtual ::java::util::Optional* command() override;
	virtual ::java::util::Optional* commandLine() override;
	static ::java::lang::ProcessHandle$Info* info(int64_t pid, int64_t startTime);
	void info0(int64_t pid);
	static void initIDs();
	virtual ::java::util::Optional* startInstant() override;
	virtual $String* toString() override;
	virtual ::java::util::Optional* totalCpuDuration() override;
	virtual ::java::util::Optional* user() override;
	$String* command$ = nullptr;
	$String* commandLine$ = nullptr;
	$StringArray* arguments$ = nullptr;
	int64_t startTime = 0;
	int64_t totalTime = 0;
	$String* user$ = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessHandleImpl$Info_h_