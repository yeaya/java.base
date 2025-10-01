#ifndef _java_lang_Runtime_h_
#define _java_lang_Runtime_h_
//$ class java.lang.Runtime
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Process;
		class Runtime$Version;
		class Thread;
	}
}

namespace java {
	namespace lang {

class $import Runtime : public ::java::lang::Object {
	$class(Runtime, $PRELOAD, ::java::lang::Object)
public:
	Runtime();
	void init$();
	virtual void addShutdownHook($Thread* hook);
	virtual int32_t availableProcessors();
	virtual ::java::lang::Process* exec($String* command);
	virtual ::java::lang::Process* exec($String* command, $StringArray* envp);
	virtual ::java::lang::Process* exec($String* command, $StringArray* envp, ::java::io::File* dir);
	virtual ::java::lang::Process* exec($StringArray* cmdarray);
	virtual ::java::lang::Process* exec($StringArray* cmdarray, $StringArray* envp);
	virtual ::java::lang::Process* exec($StringArray* cmdarray, $StringArray* envp, ::java::io::File* dir);
	virtual void exit(int32_t status);
	virtual int64_t freeMemory();
	virtual void gc();
	static ::java::lang::Runtime* getRuntime();
	virtual void halt(int32_t status);
	virtual void load($String* filename);
	virtual void load0($Class* fromClass, $String* filename);
	virtual void loadLibrary($String* libname);
	virtual void loadLibrary0($Class* fromClass, $String* libname);
	virtual int64_t maxMemory();
	virtual bool removeShutdownHook($Thread* hook);
	virtual void runFinalization();
	virtual int64_t totalMemory();
	static ::java::lang::Runtime$Version* version();
	static ::java::lang::Runtime* currentRuntime;
	static ::java::lang::Runtime$Version* version$;
};

	} // lang
} // java

#endif // _java_lang_Runtime_h_