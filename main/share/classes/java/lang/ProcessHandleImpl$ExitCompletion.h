#ifndef _java_lang_ProcessHandleImpl$ExitCompletion_h_
#define _java_lang_ProcessHandleImpl$ExitCompletion_h_
//$ class java.lang.ProcessHandleImpl$ExitCompletion
//$ extends java.util.concurrent.CompletableFuture

#include <java/util/concurrent/CompletableFuture.h>

namespace java {
	namespace lang {

class ProcessHandleImpl$ExitCompletion : public ::java::util::concurrent::CompletableFuture {
	$class(ProcessHandleImpl$ExitCompletion, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture)
public:
	ProcessHandleImpl$ExitCompletion();
	void init$(bool isReaping);
	bool isReaping = false;
};

	} // lang
} // java

#endif // _java_lang_ProcessHandleImpl$ExitCompletion_h_