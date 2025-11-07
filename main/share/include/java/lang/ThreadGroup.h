#ifndef _java_lang_ThreadGroup_h_
#define _java_lang_ThreadGroup_h_
//$ class java.lang.ThreadGroup
//$ extends java.lang.Thread$UncaughtExceptionHandler

#include <java/lang/Array.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
		class Throwable;
		class Void;
	}
}

namespace java {
	namespace lang {

class $import ThreadGroup : public ::java::lang::Thread$UncaughtExceptionHandler {
	$class(ThreadGroup, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Thread$UncaughtExceptionHandler)
public:
	ThreadGroup();
	void init$();
	void init$($String* name);
	void init$(::java::lang::ThreadGroup* parent, $String* name);
	void init$(::java::lang::Void* unused, ::java::lang::ThreadGroup* parent, $String* name);
	virtual int32_t activeCount();
	virtual int32_t activeGroupCount();
	void add(::java::lang::ThreadGroup* g);
	virtual void add($Thread* t);
	virtual void addUnstarted();
	virtual bool allowThreadSuspension(bool b);
	void checkAccess();
	static ::java::lang::Void* checkParentAccess(::java::lang::ThreadGroup* parent);
	void destroy();
	virtual int32_t enumerate($ThreadArray* list);
	virtual int32_t enumerate($ThreadArray* list, bool recurse);
	int32_t enumerate($ThreadArray* list, int32_t n, bool recurse);
	virtual int32_t enumerate($Array<::java::lang::ThreadGroup>* list);
	virtual int32_t enumerate($Array<::java::lang::ThreadGroup>* list, bool recurse);
	int32_t enumerate($Array<::java::lang::ThreadGroup>* list, int32_t n, bool recurse);
	int32_t getMaxPriority();
	$String* getName();
	::java::lang::ThreadGroup* getParent();
	void interrupt();
	bool isDaemon();
	virtual bool isDestroyed();
	virtual void list();
	virtual void list(::java::io::PrintStream* out, int32_t indent);
	bool parentOf(::java::lang::ThreadGroup* g);
	void remove(::java::lang::ThreadGroup* g);
	void remove($Thread* t);
	void resume();
	void setDaemon(bool daemon);
	void setMaxPriority(int32_t pri);
	void stop();
	bool stopOrSuspend(bool suspend);
	void suspend();
	virtual void threadStartFailed($Thread* t);
	virtual void threadTerminated($Thread* t);
	virtual $String* toString() override;
	virtual void uncaughtException($Thread* t, $Throwable* e) override;
	::java::lang::ThreadGroup* parent = nullptr;
	$String* name = nullptr;
	int32_t maxPriority = 0;
	bool destroyed = false;
	bool daemon = false;
	int32_t nUnstartedThreads = 0;
	int32_t nthreads = 0;
	$ThreadArray* threads = nullptr;
	int32_t ngroups = 0;
	$Array<::java::lang::ThreadGroup>* groups = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ThreadGroup_h_